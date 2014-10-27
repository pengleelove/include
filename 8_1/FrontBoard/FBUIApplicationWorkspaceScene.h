//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBWorkspaceScene.h>

@class BKSProcessAssertion, NSMutableArray;

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene
{
    NSMutableArray *_watchdogStack;
    BKSProcessAssertion *_launchBoostahAssertion;
    BKSProcessAssertion *_resumeProcessAssertion;
    BKSProcessAssertion *_suspendingProcessAssertion;
    BKSProcessAssertion *_seoProcessAssertion;
    BKSProcessAssertion *_deliverMessageProcessAssertion;
    unsigned int _deliverMessageProcessAssertionCount;
    int _suspendType;
    BOOL _createResponseReceived;
    BOOL _transitioningToForeground;
}

@property(readonly, nonatomic, getter=_workspaceQueue_isTransitioningToForeground) BOOL transitioningToForeground; // @synthesize transitioningToForeground=_transitioningToForeground;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion:(BOOL)arg1;
- (id)_workspaceQueue_clientSettingsFromTransitionContext:(id)arg1;
- (int)_workspaceQueue_pid;
- (void)_workspaceQueue_takeAssertionsForDeactivation:(BOOL)arg1 transitionContext:(id)arg2;
- (int)_workspaceQueue_lifecycleStateForSettings:(id)arg1;
- (void)_workspaceQueue_takeResumeProcessAssertionWithTransitionContext:(id)arg1;
- (void)_dispatchBlockAfterProcessLaunch:(CDUnknownBlockType)arg1;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion;
- (void)_workspaceQueue_takeDeliverMessageProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_deactivateForSEO:(BOOL)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(CDUnknownBlockType)arg4;
- (void)_workspaceQueue_deactivateResponseReceived:(id)arg1;
- (void)_workspaceQueue_activateForSEO:(BOOL)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(CDUnknownBlockType)arg4;
- (void)_workspaceQueue_activateResponseReceived:(id)arg1;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)arg1;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned int)arg1 transitionContext:(id)arg2;
- (unsigned int)_workspaceQueue_determineSceneActionFromSettings:(id)arg1 toSettings:(id)arg2;
- (id)_workspaceQueue_newProcessAssertionForReason:(unsigned int)arg1 withName:(id)arg2 transitionContext:(id)arg3;
- (void)_workspaceQueue_dropResumeProcessAssertion;
- (void)_workspaceQueue_dropSEOProcessAssertion;
- (void)_workspaceQueue_takeSuspendingProcessAssertion;
- (void)_workspaceQueue_dropSuspendingProcessAssertion;
- (void)_workspaceQueue_takeSEOProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_dropAllProcessAssertions;
- (void)_workspaceQueue_cancelAllWatchdogTimers;
- (id)_workspaceQueue_process;
- (id)parentWorkspace;
- (void)_workspaceQueue_invalidate;
- (id)initWithParentWorkspace:(id)arg1 host:(id)arg2 initialClientSettings:(id)arg3;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dealloc;

@end

