//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAlertManagerObserver.h"

@class NSMapTable, NSMutableSet, NSString, SBAlertManager;

@interface SBAlertWallpaperTunnelManager : NSObject <SBAlertManagerObserver>
{
    SBAlertManager *_alertManager;
    NSMapTable *_hiderToHideeMap;
    NSMutableSet *_hiddenAlerts;
}

+ (void)registerAlertManager:(id)arg1 forScreen:(id)arg2;
+ (id)sharedInstance;
- (id)dumpTunnelState;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)_showAlert:(id)arg1;
- (void)_hideAlert:(id)arg1;
- (void)_adjustHiddenAlerts;
- (void)_stopHidingAlertsForAlert:(id)arg1;
- (void)_hideAlerts:(id)arg1 onBehalfOfAlert:(id)arg2;
- (void)_setAlertManager:(id)arg1;
- (void)popTunnelToWallpaperForAlert:(id)arg1;
- (void)pushTunnelToWallpaperForAlert:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

