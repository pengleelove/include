//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@interface SBRestoreFailureAlertItem : SBAlertItem
{
}

- (BOOL)allowInSetup;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;
- (BOOL)allowMenuButtonDismissal;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)performUnlockAction;
- (void)restartSystemEvent;
- (void)_rebootNow;
- (double)autoDismissInterval;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;

@end

