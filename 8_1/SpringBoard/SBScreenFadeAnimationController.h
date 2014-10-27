//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBFLockScreenDateView, SBFadeAnimationSettings, SBLockScreenView, UIView, UIWindow;

@interface SBScreenFadeAnimationController : NSObject
{
    UIWindow *_fadeWindow;
    UIView *_overlayView;
    SBFLockScreenDateView *_dateView;
    float _originalDateLeftEdge;
    float _originalDateBottomEdge;
    float _finalTimeAlpha;
    float _finalDateAlpha;
    float _finalStatusBarAlpha;
    SBLockScreenView *_lockScreenView;
    BOOL _preparingToAnimateFadeIn;
    BOOL _animatingForFadeIn;
    BOOL _animatingForFadeOut;
    int _animationToken;
    CDUnknownBlockType _fadeInCompletionBlock;
    CDUnknownBlockType _fadeOutCompletionBlock;
    BOOL _animatingDateTime;
    BOOL _animatingWallpaper;
    BOOL _animatingOverlay;
    BOOL _animatingContent;
    SBFadeAnimationSettings *_settings;
}

+ (id)sharedInstance;
- (void)setLegibilitySettings:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)hideDate;
- (void)setDateViewAlpha:(float)arg1;
- (void)_runCompletionHandlerForFadeIn:(BOOL)arg1;
- (void)_handleAnimationCompletionIfNecessaryForFadeIn:(BOOL)arg1;
- (void)fadeOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startFadeAnimationsForFadeIn:(BOOL)arg1;
- (void)_cleanupAnimationWhenInterruptingFadeIn:(BOOL)arg1;
- (void)_uiLockStateChanged:(id)arg1;
- (void)_assistantVisibilityChanged;
- (void)_invertColorsChanged;
- (void)_mediaControlsDidShow;
- (void)_startFadeInIfNecessary;
- (void)prepareToFadeInWithTimeAlpha:(float)arg1 dateAlpha:(float)arg2 statusBarAlpha:(float)arg3 lockScreenView:(id)arg4 existingDateView:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_setRelevantLockScreenViewsHidden:(BOOL)arg1;
- (void)_adjustViewsForCurrentOrientation;
- (void)abortAnimatedDateFrameChange;
- (void)updateDateFrameHorizontalOffset:(float)arg1 verticalOffset:(float)arg2;
- (BOOL)isFadeOutAnimationInProgress;
- (BOOL)isFadeInAnimationInProgress;
- (void)_createFadeWindowForFadeIn:(BOOL)arg1;
- (double)fadeOutAnimationDuration;
- (double)fadeInAnimationDuration;
- (void)dealloc;
- (id)init;

@end

