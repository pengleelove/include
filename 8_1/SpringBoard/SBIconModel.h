//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSOrderedSet, NSSet, SBRootFolder;

@interface SBIconModel : NSObject
{
    NSDictionary *_desiredIconState;
    NSOrderedSet *_desiredIconStateFlattened;
    NSMutableDictionary *_leafIconsByIdentifier;
    NSSet *_hiddenIconTags;
    NSSet *_visibleIconTags;
    BOOL _tagsHaveBeenSet;
    SBRootFolder *_rootFolder;
    id <SBIconModelStore> _store;
    id <SBIconModelApplicationDataSource> _applicationDataSource;
    id <SBIconModelDelegate> _delegate;
    BOOL _allowsSaving;
}

@property(readonly, retain, nonatomic) id <SBIconModelApplicationDataSource> applicationDataSource; // @synthesize applicationDataSource=_applicationDataSource;
@property(readonly, retain, nonatomic) id <SBIconModelStore> store; // @synthesize store=_store;
@property(nonatomic) id <SBIconModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL allowsSaving; // @synthesize allowsSaving=_allowsSaving;
@property(retain, nonatomic) NSDictionary *leafIconsByIdentifier; // @synthesize leafIconsByIdentifier=_leafIconsByIdentifier;
- (BOOL)importState:(id)arg1;
- (id)exportFlattenedState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2;
- (id)exportPendingState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2;
- (id)exportState:(BOOL)arg1;
- (id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(BOOL)arg2;
- (void)layout;
- (void)_replaceAppIconsWithDownloadingIcons:(id)arg1;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)saveIconStateIfNeeded;
- (void)_saveIconState;
- (void)_saveDesiredIconState;
- (void)deleteIconState;
- (id)_indexPathInRootFolder:(id)arg1 forNewIcon:(id)arg2 isDesignatedLocation:(char *)arg3 replaceExistingIconAtIndexPath:(id *)arg4;
- (id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(char *)arg2 replaceExistingIconAtIndexPath:(id *)arg3;
- (void)clearDesiredIconStateIfPossible;
- (void)clearDesiredIconState;
- (BOOL)hasDesiredIconState;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (void)removeIconForIdentifier:(id)arg1;
- (void)removeIcon:(id)arg1;
- (void)addIcon:(id)arg1;
- (id)_unarchiveRootFolder;
- (id)_iconState;
- (id)iconState;
- (id)applicationIconForBundleIdentifier:(id)arg1;
- (id)leafIconForIdentifier:(id)arg1;
- (id)expectedIconForDisplayIdentifier:(id)arg1;
- (id)_applicationIcons;
- (id)iconsOfClass:(Class)arg1;
- (id)leafIcons;
- (id)visibleIconIdentifiers;
- (void)loadAllIcons;
- (void)addIconForApplication:(id)arg1;
- (id)addBookmarkIconForWebClip:(id)arg1;
- (id)bookmarkIconForWebClipIdentifier:(id)arg1;
- (id)downloadingIconForBundleIdentifier:(id)arg1;
- (id)addDownloadingIconForBundleID:(id)arg1 withIdentifier:(id)arg2;
- (id)addDownloadingIconForDownload:(id)arg1;
- (BOOL)_canAddDownloadingIconForBundleID:(id)arg1;
- (BOOL)isIconVisible:(id)arg1;
- (void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2;
- (void)_postIconVisibilityChangedNotificationShowing:(id)arg1 hiding:(id)arg2;
- (void)localeChanged;
- (id)newsstandIcon;
- (id)_newsstandIconInFolder:(id)arg1 outIndexPath:(id *)arg2;
- (id)rootFolder;
- (void)dealloc;
- (id)initWithStore:(id)arg1 applicationDataSource:(id)arg2;

@end
