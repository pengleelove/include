//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkDosidoAnimation.h"

@class NSNumber;

@interface SBUIStarkDosidoNowPlayingAnimation : SBUIStarkDosidoAnimation
{
    NSNumber *_activatedNowPlaying;
    BOOL _waitForNowPlaying;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (BOOL)_waitsForApplicationActivationIfNecessary;
- (void)_setupStartDependencies;
- (id)initFromAlertImpersonator:(id)arg1 toNowPlayingWithStarkScreenController:(id)arg2;
- (id)initFromNowPlayingToAlertImpersonator:(id)arg1 starkScreenController:(id)arg2;
- (id)initFromApp:(id)arg1 toNowPlayingWithStarkScreenController:(id)arg2;
- (id)initFromNowPlayingToApp:(id)arg1 starkScreenController:(id)arg2;
- (id)initFromNowPlayingToNowPlayingWithStarkScreenController:(id)arg1;
- (void)_commonInitWaitForNowPlaying:(BOOL)arg1 fromView:(id)arg2 toView:(id)arg3 alert:(id)arg4 toDisplay:(id)arg5;

@end
