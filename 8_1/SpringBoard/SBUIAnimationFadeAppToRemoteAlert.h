//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class NSArray, SBAlertManager, SBRemoteAlertAdapter, UIView;

@interface SBUIAnimationFadeAppToRemoteAlert : SBUIMainScreenAnimationController
{
    SBRemoteAlertAdapter *_alert;
    SBAlertManager *_alertManager;
    UIView *_appContextHostView;
    UIView *_alertContextHostView;
    NSArray *_accessoryHostViews;
}

- (void)_animationFinished;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_setHidden:(BOOL)arg1;
- (id)_getTransitionWindow;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithAlert:(id)arg1 deactivatingApp:(id)arg2 alertManager:(id)arg3;

@end

