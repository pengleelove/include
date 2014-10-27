//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockOverlayViewController.h"

#import "SBUIPasscodeLockViewDelegate.h"

@class NSString, SBUIPasscodeViewWithLockScreenStyle;

@interface SBLockScreenPasscodeOverlayViewController : SBLockOverlayViewController <SBUIPasscodeLockViewDelegate>
{
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    BOOL _attemptingUnlock;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(BOOL)arg2;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (id)_newPasscodeView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
