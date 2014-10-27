//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBWallpaperObserver.h"

@class NSMutableSet, NSString;

@interface SBWallpaperEffectSnapshotCache : NSObject <SBWallpaperObserver>
{
    NSMutableSet *_mappedImageKeys;
}

+ (id)sharedInstance;
- (void)wallpaperWillChangeForVariant:(int)arg1;
- (id)snapshotForKey:(id)arg1 withGenerationBlockIfNecessary:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

