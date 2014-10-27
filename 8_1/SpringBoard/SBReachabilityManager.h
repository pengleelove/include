//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBReachabilityTriggerDelegate.h"

@class NSMutableSet, NSString, NSTimer, SBReachabilityTrigger;

@interface SBReachabilityManager : NSObject <SBReachabilityTriggerDelegate>
{
    NSMutableSet *_observers;
    BOOL _keepAliveForEndedInteraction;
    BOOL _reachabilityModeActive;
    BOOL _reachabilityModeEnabled;
    NSTimer *_keepAliveTimer;
    NSMutableSet *_temporaryDisabledReasons;
    SBReachabilityTrigger *_trigger;
}

+ (id)sharedInstance;
+ (BOOL)reachabilitySupported;
@property(readonly, nonatomic) BOOL reachabilityModeActive; // @synthesize reachabilityModeActive=_reachabilityModeActive;
- (void)triggerDidTriggerReachability:(id)arg1;
- (void)_keepAliveTimerFired:(id)arg1;
- (void)_clearKeepAliveTimer;
- (void)_setKeepAliveTimerForDuration:(double)arg1;
- (void)_handleReachabilityDeactivated;
- (void)_handleReachabilityActivated;
- (void)_handleSignificantTimeChanged;
- (void)_notifyObserversReachabilityModeActive:(BOOL)arg1 excludingObserver:(id)arg2;
- (void)_toggleReachabilityModeWithRequestingObserver:(id)arg1;
- (void)_updateReachabilityModeActive:(BOOL)arg1 withRequestingObserver:(id)arg2;
- (void)setReachabilityTemporarilyDisabled:(BOOL)arg1 forReason:(id)arg2;
@property(nonatomic) BOOL reachabilityEnabled;
- (void)enableExpirationTimerForEndedInteraction;
- (void)disableExpirationTimerForInteraction;
- (void)cancelPendingReachabilityRequests;
- (void)deactivateReachabilityModeForObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

