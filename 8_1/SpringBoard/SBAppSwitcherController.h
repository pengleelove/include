//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBAppSwitcherContainerDelegate.h"
#import "SBAppSwitcherIconControllerDelegate.h"
#import "SBAppSwitcherPeopleDelegate.h"
#import "SBAppSwitcherScrollingViewDelegate.h"
#import "SBReachabilityObserver.h"
#import "SBVolumePressBandit.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, SBAppSwitcherContainer, SBAppSwitcherIconController, SBAppSwitcherPageViewController, SBAppSwitcherPeopleViewController, SBAppSwitcherRemoteAlertSet, SBAppSwitcherServices, SBAppSwitcherSettings, SBAppSwitcherStatusBarViewCache, SBDisplayLayout, UIGestureRecognizer, UISwipeGestureRecognizer, UIView, _UILegibilitySettings;

@interface SBAppSwitcherController : UIViewController <SBAppSwitcherIconControllerDelegate, SBAppSwitcherScrollingViewDelegate, SBAppSwitcherContainerDelegate, SBAppSwitcherPeopleDelegate, _UISettingsKeyObserver, SBVolumePressBandit, SBReachabilityObserver, UIGestureRecognizerDelegate>
{
    id <SBAppSwitcherControllerDelegate> _delegate;
    NSMutableArray *_appList_use_block_accessor;
    SBAppSwitcherServices *_switcherServices_use_block_accessor;
    NSMutableDictionary *_switcherServiceViewControllerMap;
    SBAppSwitcherRemoteAlertSet *_switcherRemoteAlerts_use_block_accessor;
    SBDisplayLayout *_switcherContinuityApp_use_block_accessor;
    unsigned int _appListAccessCount;
    SBAppSwitcherPageViewController *_pageController;
    SBAppSwitcherIconController *_iconController;
    SBAppSwitcherPeopleViewController *_peopleController;
    SBAppSwitcherContainer *_containerView;
    UIView *_contentView;
    UIView *_pageView;
    UIView *_iconView;
    UIView *_peopleView;
    NSMutableSet *_hostedApplications;
    NSMutableDictionary *_appSnapshots;
    struct _NSRange _lastVisibleRange;
    int _startingInterfaceOrientation;
    int _layoutInterfaceOrientation;
    BOOL _interactionEnabled;
    BOOL _visible;
    BOOL _peopleDimmedForAppKilling;
    unsigned int _inflightPeopleDimmingAnimations;
    int _mode;
    SBDisplayLayout *_startingDisplayLayout;
    NSDictionary *_startingViews;
    SBAppSwitcherSettings *_settings;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    NSMutableArray *_servicesRemovedWhileAwayFromSwitcher;
    SBAppSwitcherStatusBarViewCache *_statusBarCache;
    BOOL _simplifiedStatusBars;
    _UILegibilitySettings *_legibilitySettings;
    UIGestureRecognizer *_cancelReachabilityTapGestureRecognizer;
    UISwipeGestureRecognizer *_swipeToRevealNotificationCenterGestureRecognizer;
    struct CGPoint _preReachabilityContentViewOrigin;
    BOOL _presentingForReachabilityLayout;
    struct CGAffineTransform _wallpaperTransform;
}

+ (void)setPerformSochiMigrationTasksWhenLoaded:(BOOL)arg1;
+ (BOOL)_shouldUseSerialSnapshotQueue;
+ (BOOL)shouldProvideHomeSnapshotIfPossible;
+ (BOOL)shouldProvideSnapshotIfPossible;
+ (float)pageScale;
@property(retain, nonatomic) NSDictionary *startingViews; // @synthesize startingViews=_startingViews;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) struct CGAffineTransform wallpaperTransform; // @synthesize wallpaperTransform=_wallpaperTransform;
@property(copy, nonatomic) SBDisplayLayout *startingDisplayLayout; // @synthesize startingDisplayLayout=_startingDisplayLayout;
@property(nonatomic) id <SBAppSwitcherControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (float)reachabilityOffsetForSwitcherScroller:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (BOOL)_shouldRespondToReachability;
- (void)handleRevealNotificationCenterGesture:(id)arg1;
- (void)handleCancelReachabilityGesture:(id)arg1;
- (void)_animateReachabilityDeactivatedWithHandler:(CDUnknownBlockType)arg1;
- (void)_animateReachabilityActivatedWithHandler:(CDUnknownBlockType)arg1;
- (void)_performReachabilityTransactionForActivate:(BOOL)arg1 immediately:(BOOL)arg2;
- (id)pageController;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)peopleController:(id)arg1 wantsToContact:(id)arg2;
- (void)launchAppWithIdentifier:(id)arg1 url:(id)arg2 actions:(id)arg3;
- (void)_peopleDidAnimateOpacity;
- (void)_peopleWillAnimateOpacity;
- (void)switcherScroller:(id)arg1 updatedPeakPageOffset:(float)arg2;
- (void)switcherScrollerDidEndScrolling:(id)arg1;
- (void)switcherScrollerBeganMoving:(id)arg1;
- (BOOL)switcherScroller:(id)arg1 displayItemWantsToBeKeptInViewHierarchy:(id)arg2;
- (void)switcherScroller:(id)arg1 displayItemWantsToBeRemoved:(id)arg2;
- (BOOL)switcherScrollerIsRelayoutBlocked:(id)arg1;
- (BOOL)switcherScroller:(id)arg1 isDisplayItemRemovable:(id)arg2;
- (void)switcherScrollerBeganPanning:(id)arg1;
- (void)switcherScroller:(id)arg1 itemTapped:(id)arg2;
- (void)switcherScroller:(id)arg1 contentOffsetChanged:(float)arg2;
- (float)switcherScrollerDistanceBetweenItemCenters:(id)arg1 forOrientation:(int)arg2;
- (struct CGSize)switcherScrollerItemSize:(id)arg1 forOrientation:(int)arg2;
- (id)switcherScroller:(id)arg1 viewForDisplayLayout:(id)arg2;
- (void)switcherIconScrollerBeganPanning:(id)arg1;
- (void)switcherIconScrollerDidEndScrolling:(id)arg1;
- (unsigned int)switcherIconScroller:(id)arg1 settledIndexForNormalizedOffset:(inout float *)arg2 andXVelocity:(float)arg3;
- (BOOL)switcherIconScroller:(id)arg1 shouldHideIconForDisplayLayout:(id)arg2;
- (void)switcherIconScroller:(id)arg1 activate:(id)arg2;
- (void)switcherIconScroller:(id)arg1 contentOffsetChanged:(float)arg2;
- (BOOL)workspaceShouldAbortLaunchingAppDueToSwitcher:(id)arg1 url:(id)arg2 actions:(id)arg3;
- (void)cleanupRemoteAlertServices;
- (void)_unsimplifyStatusBarsAfterMotion;
- (void)_simplifyStatusBarsForMotion;
- (void)_bringIconViewToFront;
- (void)_updateSnapshotsForce:(BOOL)arg1;
- (void)_updateSnapshots;
- (unsigned int)_totalLayoutsForWhichToKeepAroundSnapshots;
- (BOOL)_isSnapshotDisplayIdentifier:(id)arg1;
- (BOOL)isScrolling;
- (id)_animationFactoryForIconAlphaTransition;
- (id)_transitionAnimationFactory;
- (int)_windowInterfaceOrientation;
- (void)_disableContextHostingForApp:(id)arg1;
- (void)_temporarilyHostAppForQuitting:(id)arg1;
- (void)_quitAppWithDisplayItem:(id)arg1;
- (void)_removeDisplayLayout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_insertDisplayLayout:(id)arg1 atIndex:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeRemoteAlertPlaceholder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_insertRemoteAlertPlaceholder:(id)arg1 atIndex:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_insertApp:(id)arg1 atIndex:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_insertMultipleAppDisplayLayout:(id)arg1 atIndex:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_rebuildAppListCache;
- (void)_destroyAppListCache;
- (void)_cacheAppList;
- (void)_accessAppListState:(CDUnknownBlockType)arg1;
- (id)_displayLayoutsFromDisplayLayouts:(id)arg1 byRemovingDisplayItems:(id)arg2;
- (id)_flattenedArrayOfDisplayItemsFromDisplayLayouts:(id)arg1;
- (void)_appActivationStateDidChange:(id)arg1;
- (void)_setInteractionEnabled:(BOOL)arg1;
- (id)_generateCellViewForDisplayLayout:(id)arg1;
- (id)_snapshotViewForDisplayItem:(id)arg1;
- (id)_viewForContinuityApp:(id)arg1;
- (id)_viewForRemoteAlert:(id)arg1 placeholder:(BOOL)arg2;
- (void)addContentViewForRemoteAlert:(id)arg1 toAlertViewCell:(id)arg2 animated:(BOOL)arg3;
- (id)_viewForService:(id)arg1;
- (void)_continuityAppSuggestionChanged:(id)arg1;
- (BOOL)_isBestAppSuggestionEligibleForSwitcher:(id)arg1;
- (void)_switcherRemoteAlertAdded:(id)arg1;
- (void)_switcherRemoteAlertRemoved:(id)arg1;
- (void)_switcherServiceRemoved:(id)arg1;
- (void)_updatePageViewScale:(float)arg1;
- (void)_updatePageViewScale:(float)arg1 xTranslation:(float)arg2;
- (void)_updateForAnimationFrame:(float)arg1 withAnchor:(id)arg2;
- (float)_frameScaleValueForAnimation;
- (float)_scaleForFullscreenPageView;
- (BOOL)_inMode:(int)arg1;
- (float)_switcherThumbnailVerticalPositionOffset;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(CDStruct_3421d26a *)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
@property(readonly, nonatomic) SBAppSwitcherStatusBarViewCache *statusBarViewCache;
- (BOOL)wantsFullScreenLayout;
- (id)pageForDisplayLayout:(id)arg1;
- (BOOL)allowShowHide;
- (void)forceDismissAnimated:(BOOL)arg1;
- (void)_askDelegateToDismissToDisplayLayout:(id)arg1 displayIDsToURLs:(id)arg2 displayIDsToActions:(id)arg3;
- (void)animateDismissalToDisplayLayout:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)switcherWasDismissed:(BOOL)arg1;
- (void)switcherWillBeDismissed:(BOOL)arg1;
- (void)switcherWasPresented:(BOOL)arg1;
- (void)_layoutInOrientation:(int)arg1;
- (void)animatePresentationFromDisplayLayout:(id)arg1 withViews:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_layout;
- (struct CGRect)_nominalPageViewFrame;
- (id)_peopleViewController;
- (void)appSwitcherContainer:(id)arg1 movedToWindow:(id)arg2;
- (void)_warmAppInfoForAppsInList;
- (void)_finishDeferredSochiMigrationTasks;
@property(readonly, nonatomic) SBAppSwitcherIconController *iconController;
- (BOOL)prefersStatusBarHidden;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

