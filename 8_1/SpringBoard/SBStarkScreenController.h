//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVExternalDeviceDelegate.h"
#import "FBWindowContextManagerDelegate.h"
#import "FBWindowContextManagerObserver.h"
#import "SBAlertManagerDelegate.h"
#import "SBAlertManagerObserver.h"
#import "SBAlertObserver.h"
#import "UIStatusBarStyleDelegate.h"
#import "_UISettingsKeyObserver.h"

@class AVExternalDevice, FBSDisplay, FBScene, NSHashTable, NSMapTable, NSMutableOrderedSet, NSString, SBAlertManager, SBAssistantWindow, SBCarDisplaySettings, SBStarkAnimationWindow, SBStarkFakeIconOperationController, SBStarkIconController, SBStarkIconWindow, SBStarkLockOutViewController, SBStarkLockOutWindow, SBStarkNotificationViewController, SBStarkNotificationWindow, SBStarkNowPlayingController, SBStarkNowPlayingWindow, SBStarkScreenFocusController, SBStarkStatusBarViewController, SBStarkStatusBarWindow, SBWindow, UIScreen, UIWindow;

@interface SBStarkScreenController : NSObject <SBAlertManagerDelegate, SBAlertManagerObserver, SBAlertObserver, UIStatusBarStyleDelegate, _UISettingsKeyObserver, AVExternalDeviceDelegate, FBWindowContextManagerDelegate, FBWindowContextManagerObserver>
{
    FBSDisplay *_fbsDisplay;
    UIScreen *_screen;
    unsigned int _interactionAffordances;
    int _layoutJustification;
    SBCarDisplaySettings *_settings;
    id <SBStarkScreenControllerDelegate> _delegate;
    id <SBDisplayProtocol> _actualTopDisplay;
    id <SBDisplayProtocol> _effectiveTopDisplay;
    NSMutableOrderedSet *_alertSheets;
    NSMapTable *_alertSheetsToWindowMap;
    NSHashTable *_observers;
    int _screenState;
    int _lockOutMode;
    BOOL _delayUpdatingLockOutMode;
    SBStarkLockOutViewController *_lockOutViewController;
    SBStarkLockOutWindow *_lockOutWindow;
    SBStarkAnimationWindow *_animationWindow;
    FBScene *_nowPlayingScene;
    SBStarkNowPlayingController *_nowPlayingController;
    SBStarkNowPlayingWindow *_nowPlayingWindow;
    BOOL _showingNowPlaying;
    SBStarkIconController *_iconController;
    SBStarkIconWindow *_iconWindow;
    SBStarkStatusBarViewController *_statusBarViewController;
    SBStarkStatusBarWindow *_statusBarWindow;
    SBStarkNotificationWindow *_notificationWindow;
    SBAssistantWindow *_siriWindow;
    int _siriState;
    SBAlertManager *_alertManager;
    id _alertBorrowScreenToken;
    id _siriBorrowScreenToken;
    SBStarkScreenFocusController *_focusController;
    SBStarkFakeIconOperationController *_fakeIconOperationController;
    AVExternalDevice *_externalDevice;
    BOOL _externalDeviceScreenAvailable;
    SBWindow *_mainWindow;
}

+ (void)_launchNowPlaying;
@property(readonly, retain, nonatomic) SBWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(readonly, retain, nonatomic) FBSDisplay *fbsDisplay; // @synthesize fbsDisplay=_fbsDisplay;
@property(readonly, retain, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(nonatomic) id <SBStarkScreenControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int layoutJustification; // @synthesize layoutJustification=_layoutJustification;
@property(readonly, nonatomic) unsigned int interactionAffordances; // @synthesize interactionAffordances=_interactionAffordances;
@property(readonly, retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (void)windowContextManagerDidStopTrackingContexts:(id)arg1;
- (void)windowContextManagerWillStartTrackingContexts:(id)arg1;
- (BOOL)windowContextManager:(id)arg1 shouldAddContext:(id)arg2;
- (void)siriRequestedWithAction:(int)arg1;
- (void)iOSUIRequestedForApplicationURL:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)statusBar:(id)arg1 didTriggerButtonType:(int)arg2 withAction:(int)arg3;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(int)arg5;
- (int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;
- (void)alertManager:(id)arg1 didCreateAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (BOOL)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2;
- (id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2;
- (float)sceneLevelForAlerts;
- (struct CGRect)sceneFrameForAlerts:(id)arg1;
- (void)alertBannerSuppressionChanged:(id)arg1;
- (struct CGRect)_defaultScreenFrameOffsetForStatusBar:(id)arg1;
- (void)_toggleNotificationSuspendedState;
- (BOOL)_allowNavigationOverrideStyle;
- (BOOL)_allowInCallOverrideStyle;
- (void)_toggleNowPlayingVisible:(BOOL)arg1;
- (id)nowPlayingSnapshot;
- (void)_createFakeIconOperationController;
- (void)_didChangeFromState:(int)arg1;
- (void)_updateLockOutMode;
- (void)_hideWindowsForSetup:(BOOL)arg1;
- (void)_setSiriState:(int)arg1;
- (void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2;
- (void)_externalDeviceScreenBecameUnavailable:(id)arg1;
- (void)_externalDeviceScreenBecameAvailable:(id)arg1;
- (void)_updateAlertSheetFocus;
- (void)_alertSheetDismissed:(id)arg1;
- (void)_alertSheetPresented:(id)arg1;
- (void)_dismissSiriWithFactory:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_takeScreenIfNecessaryForTopDisplayActivation;
- (void)_handleMenuEventAndTakeScreen:(BOOL)arg1;
- (id)_newNowPlayingScene;
- (void)_noteSetupCompleted;
- (void)_noteInitializationCompleted;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cleanupForTopDisplayIfNecessaryWithAnimationFactory:(id)arg1;
- (void)dismissSiriWithAnimation:(int)arg1 factory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)presentSiri:(BOOL)arg1 viewController:(id)arg2;
@property(readonly, retain, nonatomic) SBWindow *lockoutWindow;
@property(readonly, retain, nonatomic) UIWindow *focusWindow;
@property(readonly, retain, nonatomic) SBWindow *iconWindow;
@property(readonly, retain, nonatomic) SBWindow *animationWindow;
- (void)updateStatusBarStateForDisplay:(id)arg1 withAnimationFactory:(id)arg2;
- (BOOL)isShowingNowPlaying;
- (void)notifyWhenNowPlayingIsActive:(CDUnknownBlockType)arg1 withTimeout:(double)arg2;
- (id)nowPlayingContextHostManager;
- (void)setNowPlayingBundleID:(id)arg1;
- (void)handleLongBackPress;
- (void)handleUnhandledBack;
- (void)handleACHomeUp;
- (void)handleUncompletedAppLaunch;
- (void)setEffectiveTopDisplay:(id)arg1 actualTopDisplay:(id)arg2 withAnimationFactory:(id)arg3;
- (void)setEffectiveTopDisplay:(id)arg1 withAnimationFactory:(id)arg2;
@property(retain, nonatomic) id <SBDisplayProtocol> effectiveTopDisplay;
@property(readonly, nonatomic) int state;
@property(readonly, retain, nonatomic) SBStarkStatusBarViewController *statusBarController;
@property(readonly, retain, nonatomic) SBStarkNotificationViewController *notificationController;
@property(readonly, retain, nonatomic) SBStarkIconController *iconController;
- (void)invalidate;
- (void)_tearDownAndInvalidate:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithScreen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

