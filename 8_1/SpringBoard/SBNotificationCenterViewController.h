//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBBulletinActionHandler.h"
#import "SBBulletinViewControllerDelegate.h"
#import "SBNotificationCenterWidgetHost.h"
#import "SBReachabilityObserver.h"
#import "SBUISizeObservingViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSSet, NSString, SBBulletinObserverViewController, SBChevronView, SBModeViewController, SBNotificationSeparatorView, UIGestureRecognizer, UIStatusBar, UIView, _UIBackdropView;

@interface SBNotificationCenterViewController : UIViewController <SBBulletinViewControllerDelegate, SBUISizeObservingViewDelegate, UIGestureRecognizerDelegate, SBNotificationCenterWidgetHost, SBBulletinActionHandler, SBReachabilityObserver>
{
    id <SBNotificationCenterViewControllerDelegate> _delegate;
    UIView *_clippingView;
    UIView *_containerView;
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_modeClippingView;
    SBNotificationSeparatorView *_bottomSeparator;
    SBModeViewController *_modeController;
    SBBulletinObserverViewController *_todayViewController;
    SBBulletinObserverViewController *_allModeViewController;
    UIStatusBar *_statusBar;
    SBChevronView *_grabberView;
    UIView *_grabberContentView;
    UIView *_grabberBackgroundView;
    SBChevronView *_registeredGrabberView;
    struct CGRect _grabberContentViewFrameForRegisteredGrabber;
    CDUnknownBlockType _registeredGrabberHideBlock;
    struct {
        unsigned int blursBackground:1;
        unsigned int showsBackground:1;
        unsigned int isBackgroundValid:1;
        unsigned int isGrabberEnabled:1;
        unsigned int isGrabberLockEngaged:1;
        unsigned int viewHitTestsAsOpaque:1;
        unsigned int isViewHitTestingValid:1;
    } _notificationCenterViewControllerFlags;
    BOOL _showingForReachability;
    struct CGPoint _preReachabilityOrigin;
    struct CGPoint _reachabilityOrigin;
    BOOL _preReachabilityGrabberHidden;
    struct CGRect _preReachabilityGrabberFrame;
    struct CGPoint _preReachabilitySeparatorOrigin;
    struct CGPoint _reachabilitySeparatorOrigin;
    UIGestureRecognizer *_tapToCancelReachabilityGestureRecognizer;
}

+ (id)_localizableTitleForBulletinViewControllerOfClass:(Class)arg1;
+ (id)grayControlInteractionTintColor;
@property(nonatomic) id <SBNotificationCenterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBChevronView *grabberView; // @synthesize grabberView=_grabberView;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleCancelReachabilityGesture:(id)arg1;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)_animateForReachabilityDeactivatedWithHandler:(CDUnknownBlockType)arg1;
- (void)_animateForReachabilityActivatedWithHandler:(CDUnknownBlockType)arg1;
- (void)_performReachabilityTransactionForActivate:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)runScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 useAAGView:(BOOL)arg4;
- (BOOL)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
@property(nonatomic) id <SBWidgetViewControllerDelegate> widgetDelegate;
@property(readonly, nonatomic) struct UIEdgeInsets todayContentEdgeInsets;
@property(readonly, nonatomic) struct CGSize todayContentMaxSize;
- (struct CGRect)grabberContentRect;
- (void)updateForChangeInMessagePrivacy;
@property(readonly, nonatomic) struct CGRect contentFrame;
- (void)_setContainerFrame:(struct CGRect)arg1;
- (struct CGRect)_containerFrame;
- (struct CGRect)_containerFrame:(BOOL)arg1;
@property(nonatomic) struct UIEdgeInsets clippingInsets;
@property(nonatomic) float contentViewAlpha;
- (void)dismissGrabberView;
- (void)presentGrabberView;
- (struct CGRect)_grabberContentViewFrameForDefaultGrabberPresentation;
- (struct CGRect)_grabberContentViewFrameForRegisteredGrabber;
- (void)abortAnimatedPositionChange;
- (struct CGRect)positionContentForTouchAtLocation:(struct CGPoint)arg1;
- (void)_setViewHitTestAsOpaque:(BOOL)arg1;
- (void)_reloadAllWidgets;
- (id)colorForElement:(int)arg1;
- (id)_relevanceDateColor;
- (id)_grabberColor;
- (void)disableGrabberLock;
- (BOOL)isGrabberLocked;
@property(nonatomic, getter=isGrabberViewEnabled) BOOL grabberViewEnabled;
- (void)_configureGrabberForSoloMode:(BOOL)arg1;
- (id)unregisterSharedGrabberView;
- (void)registerSharedGrabberView:(id)arg1 withHideBlock:(CDUnknownBlockType)arg2;
- (void)_registerGrabberView:(id)arg1 withHideBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)revealRectForBulletin:(id)arg1;
- (void)prepareLayoutForPresentationFromBanner;
@property(nonatomic, getter=isSuppressingNotificationUpdates) BOOL suppressesNotificationUpdates;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadInitialViewState;
- (void)viewWillLayoutSubviews;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize)arg2;
@property(readonly, nonatomic) int layoutMode;
- (void)viewDidLoad;
- (void)loadView;
- (void)_loadModeControllerView;
- (void)_loadModeClippingView;
- (void)_loadBottomSeparator;
- (void)_loadGrabberContentView;
- (id)_newGrabberView;
- (void)_updateContrastSettingsForBottomSeparator;
- (void)_updateContrastSettingsForGrabberView;
- (void)_loadStatusBar;
- (void)_loadContentView;
- (void)_loadContainerView;
- (void)_loadClippingView;
- (void)_configureView;
- (void)_validateBackgroundViewIfNecessary;
@property(readonly, retain, nonatomic) _UIBackdropView *backdropView;
@property(nonatomic) BOOL blursBackground;
@property(nonatomic) BOOL showsBackground;
- (id)_newBackgroundView;
@property(readonly, nonatomic) NSSet *widgetHandlingViewControllers;
- (void)_loadContentViewControllersForCurrentState;
- (id)_allModeViewControllerCreateIfNecessary:(BOOL)arg1;
- (id)_todayViewControllerCreateIfNecessary:(BOOL)arg1;
- (id)_newBulletinObserverViewControllerOfClass:(Class)arg1;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

