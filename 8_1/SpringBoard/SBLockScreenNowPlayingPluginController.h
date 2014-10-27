//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PCPersistentTimer, SBLockScreenViewController, SBMediaController;

@interface SBLockScreenNowPlayingPluginController : NSObject
{
    SBLockScreenViewController *_viewController;
    SBMediaController *_mediaController;
    PCPersistentTimer *_disableTimer;
}

- (void)invalidateDisableTimer;
- (void)_startDisableTimer;
- (void)_disableNowPlayingPlugin;
- (BOOL)isNowPlayingPluginActive;
- (void)_updateNowPlayingPlugin;
- (void)_addObservers;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)arg1 mediaController:(id)arg2;

@end

