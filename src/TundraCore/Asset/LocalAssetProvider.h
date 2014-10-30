// For conditions of distribution and use, see copyright notice in LICENSE

#pragma once

#include "TundraCoreApi.h"
#include "IAssetProvider.h"
#include "AssetFwd.h"

namespace Tundra
{

/// Provides access to files on the local file system using the 'local://' URL specifier.
class TUNDRACORE_API LocalAssetProvider : public IAssetProvider
{
    OBJECT(LocalAssetProvider);

public:
    explicit LocalAssetProvider(Framework* framework);
    
    ~LocalAssetProvider();
    
    /// Returns name of asset provider
    String Name() const override;
    
    /// Checks an asset id for validity
    /** @return true if this asset provider can handle the id */
    bool IsValidRef(String assetRef, String assetType) const override;
     
    /// Requests a local asset, returns resulted transfer.
    AssetTransferPtr RequestAsset(String assetRef, String assetType) override;
    
    /// Aborts the ongoing local transfer.
    bool AbortTransfer(IAssetTransfer *transfer) override;

    /// Performs time-based update 
    /** @param frametime Seconds since last frame */
    void Update(float frametime) override;

    /// Deletes this asset from file.
    void DeleteAssetFromStorage(String assetRef) override;

    /// @param storageName An identifier for the storage. Remember that Asset Storage names are case-insensitive.
    bool RemoveAssetStorage(String storageName) override;

    /// Adds the given directory as an asset storage.
    /** @param directory The path name for the directory to add.
        @param storageName An identifier for the storage. Remember that Asset Storage names are case-insensitive.
        @param recursive If true, all the subfolders of the given folder are added as well.
        @param writable If true, assets can be uploaded to the storage.
        @param liveUpdate If true, assets will be reloaded when the underlying file changes.
        @param autoDiscoverable If true, a recursive directory search will be initially performed to know which assets reside inside the storage.
        Returns the newly created storage, or 0 if a storage with the given name already existed, or if some other error occurred. */
    LocalAssetStoragePtr AddStorageDirectory(String directory, String storageName, bool recursive, bool writable = true, bool liveUpdate = true, bool autoDiscoverable = true);

    Vector<AssetStoragePtr> Storages() const override;

    AssetStoragePtr StorageByName(const String &name) const override;

    AssetStoragePtr StorageForAssetRef(const String &assetRef) const override;

    AssetUploadTransferPtr UploadAssetFromFileInMemory(const u8 *data, uint numBytes, AssetStoragePtr destination, const String &assetName) override;

    AssetStoragePtr TryDeserializeStorageFromString(const String &storage, bool fromNetwork);

    String GenerateUniqueStorageName() const;

    /// Returns LocalAssetStorage for specific @c path. The @c path can be root directory of storage or any of its subdirectories.
    LocalAssetStoragePtr FindStorageForPath(const String &path) const;

private:
    /// Finds a path where the file localFilename can be found. Searches through all local storages.
    /// @param storage [out] Receives the local storage that contains the asset.
    String GetPathForAsset(const String &localFilename, LocalAssetStoragePtr *storage) const;

    /// Takes all the pending file download transfers and finishes them.
    void CompletePendingFileDownloads();

    /// Takes all the pending file upload transfers and finishes them.
    void CompletePendingFileUploads();

    /// Checks for pending file systems changes and updates 
    void CheckForPendingFileSystemChanges();

    Framework *framework;
    Vector<LocalAssetStoragePtr> storages; ///< Asset directories to search, may be recursive or not
    Vector<AssetUploadTransferPtr> pendingUploads; ///< The following asset uploads are pending to be completed by this provider.
    Vector<AssetTransferPtr> pendingDownloads; ///< The following asset downloads are pending to be completed by this provider.

    /// If true, assets outside any known local storages are allowed. Otherwise, requests to them will fail.
    bool enableRequestsOutsideStorages;

    void OnFileChanged(const String &path);
    void OnDirectoryChanged(const String &path);
};

}