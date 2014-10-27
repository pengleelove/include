//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "SBStatusBarStyleOverridesAssertionServer.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBStatusBarStyleOverridesAssertionServer>
{
    NSXPCListener *_xpcListener;
    NSMapTable *_assertionsByClientConnection;
    NSMapTable *_assertionsByStyleOverride;
    NSObject<OS_dispatch_queue> *_internalQueue;
    int _statusBarStyleOverrides;
    int _exclusiveStatusBarStyleOverrides;
}

+ (id)_separateStatusBarStyleOverrides;
+ (id)sharedInstance;
@property(nonatomic) int exclusiveStatusBarStyleOverrides; // @synthesize exclusiveStatusBarStyleOverrides=_exclusiveStatusBarStyleOverrides;
@property(nonatomic) int statusBarStyleOverrides; // @synthesize statusBarStyleOverrides=_statusBarStyleOverrides;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMapTable *assertionsByStyleOverride; // @synthesize assertionsByStyleOverride=_assertionsByStyleOverride;
@property(retain, nonatomic) NSMapTable *assertionsByClientConnection; // @synthesize assertionsByClientConnection=_assertionsByClientConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void)_postStatusStringsByStyle:(id)arg1;
- (id)_statusStringsByStyleForBackgroundAssertionsByStyleOverride:(id)arg1 foregroundAssertionsByStyleOverride:(id)arg2;
- (void)_updateAppSceneSettingsForPIDs:(id)arg1 andPostAddedStyleOverrides:(int)arg2 removedStyleOverrides:(int)arg3;
- (void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (id)_internalQueue_removeAssertionByStyleOverrides:(id)arg1 returningRemovedStyleOverrides:(int *)arg2;
- (id)_internalQueue_addAssertionByStyleOverrides:(id)arg1 returningAddedStyleOverrides:(int *)arg2;
- (void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplications:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_mainQueue_getStatusBarStyleOverridesToSuppressForApplications:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_internalQueue_deactivateStatusBarStyleOverridesAssertions:(id)arg1 forClientConnection:(id)arg2;
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)activateStatusBarStyleOverridesAssertions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)postStatusStringsForForegroundApplications:(id)arg1;
- (void)invalidateStatusBarStyleOverridesAssertions:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

