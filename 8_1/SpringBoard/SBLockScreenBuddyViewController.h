//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockOverlayViewController.h"

#import "SBLockScreenBuddyViewDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, SBActivationInfoViewController, SBLockScreenViewController;

@interface SBLockScreenBuddyViewController : SBLockOverlayViewController <SBLockScreenBuddyViewDelegate>
{
    NSMutableArray *_currentStringsOrdering;
    BOOL _needsTransitionFromFakeLogoToWelcomeStrings;
    BOOL _cyclingLabels;
    BOOL _viewVisible;
    struct __WiFiManagerClient *_wifiManager;
    struct __WiFiDeviceClient *_wifiDevice;
    BOOL _showingBootLogo;
    BOOL _startsWithBlackBackground;
    BOOL _hasResultsFromWifiScan;
    BOOL _shouldResetOrderingOnNextCycle;
    SBLockScreenViewController *_lockScreenViewController;
    NSDictionary *_localizedStrings;
    NSArray *_stringsOrdering;
    unsigned int _currentStringIndex;
    NSTimer *_stringCycleTimer;
    SBActivationInfoViewController *_activationInfoViewController;
    NSString *_telephonyPrimaryLanguage;
    NSString *_wifiPrimaryLanguage;
}

@property(nonatomic) BOOL shouldResetOrderingOnNextCycle; // @synthesize shouldResetOrderingOnNextCycle=_shouldResetOrderingOnNextCycle;
@property(nonatomic) BOOL hasResultsFromWifiScan; // @synthesize hasResultsFromWifiScan=_hasResultsFromWifiScan;
@property(copy, nonatomic) NSString *wifiPrimaryLanguage; // @synthesize wifiPrimaryLanguage=_wifiPrimaryLanguage;
@property(copy, nonatomic) NSString *telephonyPrimaryLanguage; // @synthesize telephonyPrimaryLanguage=_telephonyPrimaryLanguage;
@property(nonatomic) BOOL startsWithBlackBackground; // @synthesize startsWithBlackBackground=_startsWithBlackBackground;
@property(nonatomic, getter=isShowingBootLogo) BOOL showingBootLogo; // @synthesize showingBootLogo=_showingBootLogo;
@property(retain, nonatomic) SBActivationInfoViewController *activationInfoViewController; // @synthesize activationInfoViewController=_activationInfoViewController;
@property(retain, nonatomic) NSTimer *stringCycleTimer; // @synthesize stringCycleTimer=_stringCycleTimer;
@property(nonatomic) unsigned int currentStringIndex; // @synthesize currentStringIndex=_currentStringIndex;
@property(copy, nonatomic) NSArray *stringsOrdering; // @synthesize stringsOrdering=_stringsOrdering;
@property(copy, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
@property(nonatomic) SBLockScreenViewController *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (void)handleTapGestureFromView:(id)arg1;
- (void)buddyView:(id)arg1 didChangeToStyle:(unsigned int)arg2;
- (void)_closeWifiConnection;
- (void)_wifiScanComplete:(struct __CFArray *)arg1 error:(BOOL)arg2;
- (void)_startWifiScan;
- (void)_didHideBootSetupLogo:(id)arg1;
- (void)_didShowBootSetupLogo:(id)arg1;
- (void)_toggleShowsIMEIandICCID:(id)arg1;
- (void)_cycleTimerDidFire:(id)arg1;
- (void)_updateDisplayedStrings;
- (void)_resetDisplayedLocalizedStringsImmediately:(BOOL)arg1;
- (void)_startCyclingLocalizedStringsWithDelay:(double)arg1;
- (void)_startCyclingLocalizedStrings;
- (void)_updateWifiPrimaryLanguageFromGuessedCountries:(id)arg1;
- (void)_fetchLanguageFromTelephony;
- (id)_importantLanguageIdentifiers;
- (id)_currentLanguageIdentifier;
- (id)_currentStringsDictionary;
- (void)_transitionFromFakeBootLogoToWelcomeStrings;
- (void)_noteLogoVisible:(BOOL)arg1;
- (void)_removeAllHiddenReasons;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)buddyView;
- (void)loadView;
- (void)stopCyclingLocalizedStrings;
- (void)setInScreenOffMode:(BOOL)arg1;
@property(readonly, nonatomic) NSString *slideToUnlockText;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

