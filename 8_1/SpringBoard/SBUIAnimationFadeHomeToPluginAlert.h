//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBUIFullscreenAlertAdapter;

@interface SBUIAnimationFadeHomeToPluginAlert : SBUIMainScreenAnimationController
{
    SBAlertManager *_alertManager;
    SBUIFullscreenAlertAdapter *_alert;
    BOOL _alertIsTransparent;
    BOOL _alertViewIsAnimatingItself;
    BOOL _finishedPrimaryFadeAnimation;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_alertViewFinishedAnimatingItself;
- (void)_fadeAnimationFinished;
- (void)_evaluateTotalAnimationCompletion;
- (void)_animationFinished;
- (void)_prepareAnimation;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithAlertManager:(id)arg1 alert:(id)arg2;

@end

