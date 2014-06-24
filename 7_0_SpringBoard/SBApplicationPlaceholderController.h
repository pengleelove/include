//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconObserver.h"
#import "SBLSApplicationPlaceholderLifecycleObserver.h"

@class NSMutableDictionary, NSMutableSet, SBApplicationController, SBLSApplicationWorkspaceObserver;

@interface SBApplicationPlaceholderController : NSObject <SBIconObserver, SBLSApplicationPlaceholderLifecycleObserver>
{
    SBApplicationController *_appController;
    SBLSApplicationWorkspaceObserver *_lsWorkspaceObserver;
    NSMutableDictionary *_placeholdersByBundleID;
    NSMutableSet *_pendingAdded;
    NSMutableSet *_pendingInstalled;
    NSMutableSet *_pendingCancelled;
    _Bool _hasDownloadedFromStore;
    _Bool _usingNetwork;
}

+ (id)sharedInstance;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3;
- (void)_downloadsEnded;
- (void)_finishPlaceholder:(id)arg1;
- (void)_dropGrabbedIconIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeDownloadingIcons:(id)arg1 saveState:(_Bool)arg2;
- (void)_swapDownloadingIcon:(id)arg1 forApplicationIcon:(id)arg2;
- (void)_removePlaceholders:(id)arg1 forInstall:(_Bool)arg2;
- (void)_addPlaceholders:(id)arg1;
- (void)_processPendingProxies;
- (void)applicationPlaceholdersNetworkUsageChanged:(_Bool)arg1;
- (void)applicationPlaceholdersIconUpdated:(id)arg1;
- (void)applicationPlaceholdersModified:(id)arg1;
- (void)applicationPlaceholdersCancelled:(id)arg1;
- (void)applicationPlaceholdersInstalled:(id)arg1;
- (void)applicationPlaceholdersAdded:(id)arg1;
- (_Bool)isUsingNetwork;
- (_Bool)hasDownloadedStoreApplication;
- (id)placeholderForDisplayID:(id)arg1;
- (id)placeholdersByDisplayID;
- (void)dealloc;
- (id)init;

@end
