//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBCoordinatedPresenting.h"
#import "SBPresentingDelegate.h"
#import "SBUIPasscodeLockViewDelegate.h"

@class BBObserver, LSBestAppSuggestion, NSMutableArray, NSSet, NSString, NSURL, SBApplication, SBBounceSettings, SBDisableAppStatusBarAlphaChangesAssertion, SBLockScreenBounceAnimator, SBLockScreenView, SBPasscodeLockDisableAssertion, SBUIPasscodeViewWithLockScreenStyle, SBWallpaperEffectView, UIImage, UIView, _UIDynamicValueAnimation;

@interface SBLockScreenSlideUpToAppController : NSObject <SBPresentingDelegate, SBUIPasscodeLockViewDelegate, SBCoordinatedPresenting>
{
    BOOL _isInScreenOffMode;
    UIView *_slidingStatusBarView;
    SBLockScreenView *_lockScreenView;
    BOOL _currentlySliding;
    SBLockScreenBounceAnimator *_bounceAnimator;
    _UIDynamicValueAnimation *_dynamicAnimation;
    id <SBPresentingDelegate> _presentingDelegate;
    SBBounceSettings *_bounceSettings;
    SBApplication *_targetApp;
    LSBestAppSuggestion *_targetAppInfo;
    BOOL _targetAppIsSiri;
    NSURL *_targetURL;
    UIImage *_grabberImage;
    BBObserver *_bulletinObserver;
    BOOL _attemptingUnlock;
    BOOL _showingPasscodeView;
    BOOL _dismissingPasscodeView;
    BOOL _defaultImagesNeedUpdateUponPasscodeExit;
    NSMutableArray *_deferredAppUpdateBlocks;
    BOOL _executingDeferredAppUpdateBlocks;
    BOOL _waitingToDeactivateForActivityLaunch;
    UIView *_clippingView;
    UIView *_appPortraitDefaultImageView;
    UIView *_appLandscapeDefaultImageView;
    UIView *_appBackgroundView;
    SBWallpaperEffectView *_fakeBlurBackgroundView;
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    UIView *_passcodeOverscrollView;
    UIView *_appContextHostView;
    BOOL _disableGracePeriodForCamera;
    SBPasscodeLockDisableAssertion *_disableGracePeriodForCameraAssertion;
    BOOL _disablingOcclusionsForTargetApp;
    BOOL _launchingAppFromNonOccludedState;
    id <SBLockScreenSlideUpToAppControllerDelegate> _delegate;
    BOOL _didAbortBounce;
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAssertion;
    float _boundaryTranslationInY;
}

@property(nonatomic) float boundaryTranslationInY; // @synthesize boundaryTranslationInY=_boundaryTranslationInY;
@property(nonatomic) BOOL didAbortBounce; // @synthesize didAbortBounce=_didAbortBounce;
@property(retain, nonatomic) SBDisableAppStatusBarAlphaChangesAssertion *disableStatusBarAssertion; // @synthesize disableStatusBarAssertion=_disableStatusBarAssertion;
@property(nonatomic) id <SBLockScreenSlideUpToAppControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)bounceAnimator;
- (id)_newDynamicAnimationForTargetValue:(double)arg1 withInitialVelocity:(double)arg2;
- (id)_newBounceAnimatorWithGrabberView:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (void)presentingControllerDidFinishPresentation:(id)arg1;
- (void)presentingController:(id)arg1 willHandleGesture:(id)arg2;
- (BOOL)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (BOOL)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)treatCurrentPositionAsBoundaryforGesture:(id)arg1;
- (void)reenableGestureRecognizer:(id)arg1;
- (void)cancelGestureRecognizer:(id)arg1;
- (void)abortAnimatedTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 wasCancelled:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (float)_foregroundTranslationForLocation:(struct CGPoint)arg1;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginPresentationWithTouchLocation:(struct CGPoint)arg1;
- (BOOL)isPresentingControllerTransitioning;
@property(readonly, nonatomic) unsigned int hintEdge;
@property(readonly, nonatomic) float hintDisplacement;
@property(readonly, nonatomic) int coordinatedPresentingControllerIdentifier;
@property(readonly, nonatomic) NSSet *tapExcludedViews;
@property(readonly, nonatomic) NSSet *gestures;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate;
- (void)setDisableGracePeriodForCamera:(BOOL)arg1;
- (void)_deviceBlockedStateChanged:(id)arg1;
- (BOOL)isShowingPasscodeView;
- (BOOL)hasActiveUnlockActionContext;
- (BOOL)wantsToShowStatusBar;
- (id)customSlideToUnlockText;
- (BOOL)wantsToShowCustomSlideToUnlockText;
- (void)_reloadAppDefaultImages;
- (void)_passcodeLockStateChanged;
- (void)_addOrRemovePasscodeViewIfNecessary;
- (void)setTargetURL:(id)arg1;
- (void)setTargetApp:(id)arg1 withLSInfo:(id)arg2;
- (void)presentTargetAppAnimated:(BOOL)arg1;
- (void)activateTargetApp;
- (void)_activateApp:(id)arg1 withAppInfo:(id)arg2 andURL:(id)arg3 animated:(BOOL)arg4;
- (void)hideSlidingStatusBar;
- (void)abortDynamicAnimationForScreenOff;
- (void)_executeDeferredAppUpdateBlocks;
- (void)_commonGestureCleanup;
- (void)finalizeGesture;
- (void)_animateSlideUpWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateSlideDownWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_finishSlideDownWithCompletion:(CDUnknownBlockType)arg1;
- (void)translateSlidingViewByY:(float)arg1;
- (void)performGeneralCleanupForUserAction:(BOOL)arg1;
- (void)_cleanupFromDismissal;
- (void)_cleanupBackgroundLaunchAndContextHostingNonsense;
- (void)_handleAppLaunchedUnderLockScreenWithResult:(int)arg1;
- (void)prepareForSlideUpAnimation;
- (id)_lockScreenViewFakeStatusBar;
- (void)deactivate;
- (void)activate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)setInScreenOffMode:(BOOL)arg1;
- (void)setGrabberViewImage:(id)arg1;
- (void)setGrabberOnLockScreen:(id)arg1;
- (id)_newGrabberView;
- (void)_setupBounceAnimatorAndGrabberView;
- (void)setLockScreenView:(id)arg1 force:(BOOL)arg2;
- (id)lockScreenView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSSet *conflictingGestures;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

