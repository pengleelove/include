//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@interface SBThermalWarningAlertItem : SBAlertItem
{
    id <SBThermalWarningAlertItemDelegate> _delegate;
    int _actionTaken;
}

- (BOOL)unlocksScreen;
- (BOOL)undimsScreen;
- (void)_playPresentationSound;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didDeactivateForReason:(int)arg1;
- (void)willActivate;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)_autoCoolDown;
- (void)_tryToSendAction:(int)arg1;
@property(readonly, nonatomic, getter=isWaitingForResponse) BOOL waitingForResponse;
- (id)initWithDelegate:(id)arg1;

@end

