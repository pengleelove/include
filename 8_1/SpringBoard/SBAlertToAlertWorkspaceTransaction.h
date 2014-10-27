//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class NSString, SBAlert, SBUIAnimationController;

@interface SBAlertToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBAlert *_activatingAlert;
    SBAlert *_deactivatingAlert;
    BOOL _activation;
    SBUIAnimationController *_animation;
    BOOL _animatingAlertDeactivation;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (void)_deactivateAlertIfNecessary;
- (void)_alertAnimationComplete:(id)arg1;
- (void)_doAlertTransition;
- (void)_didComplete;
- (void)_endAnimation;
- (void)_begin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)_initWithAlertManager:(id)arg1 activatingAlert:(id)arg2 deactivatingAlert:(id)arg3 activation:(BOOL)arg4;
- (id)initDeactivationWithAlertManager:(id)arg1 from:(id)arg2 to:(id)arg3;
- (id)initActivationWithAlertManager:(id)arg1 from:(id)arg2 to:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

