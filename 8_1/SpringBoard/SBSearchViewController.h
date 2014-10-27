//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBReachabilityObserver.h"
#import "SBSearchGestureObserver.h"
#import "SBSearchHeaderDelegate.h"
#import "SBSearchResultsActionManagerDelegate.h"
#import "SBUIActiveOrientationObserver.h"
#import "SPSearchAgentDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SBSearchFirstTimeViewController, SBSearchHeader, SBSearchResultsActionManager, SBSearchResultsBackdropView, UIGestureRecognizer, UILabel, UINavigationController, UIPanGestureRecognizer, UITableView, UITapGestureRecognizer, UIWindow;

@interface SBSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPSearchAgentDelegate, SBSearchGestureObserver, UISearchBarDelegate, SBSearchResultsActionManagerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, SBUIActiveOrientationObserver, SBReachabilityObserver, SBSearchHeaderDelegate>
{
    UINavigationController *_navigationController;
    UIViewController *_mainViewController;
    SBSearchFirstTimeViewController *_firstTimeViewController;
    UITableView *_tableView;
    SBSearchHeader *_searchHeader;
    SBSearchResultsBackdropView *_tableBackdrop;
    SBSearchResultsActionManager *_actionManager;
    UIWindow *_presentingWindow;
    int _presentingWindowOrientation;
    UILabel *_noResultsLabel;
    UITapGestureRecognizer *_tapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    void *_addressBook;
    float _lastContentOffsetY;
    BOOL _scrollDown;
    int _visibility;
    float _headerHeight;
    BOOL _hasShownBackgroundSinceLastClear;
    int _firstTimeViewShowCount;
    BOOL _canShowFirstTimeView;
    double _triggerTimestamp;
    struct CGPoint _preReachabilityTableViewOrigin;
    struct CGPoint _reachabilityTableViewOrigin;
    BOOL _showingForReachability;
    UIGestureRecognizer *_cancelRecognizer;
    CDUnknownBlockType _fadeOutCompletionBlock;
}

+ (id)sharedInstance;
- (void)handleCancelReachabilityGesture:(id)arg1;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)_animateForReachabilityDeactivatedWithHandler:(CDUnknownBlockType)arg1;
- (void)_animateForReachabilityActivatedWithHandler:(CDUnknownBlockType)arg1;
- (void)_performReachabilityTransactionForActivate:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)_lockScreenUIWillLock:(id)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(int)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(int)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(int)arg1;
- (void)_rotatePresentingWindowIfNecessaryTo:(int)arg1 withDuration:(double)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (struct UIEdgeInsets)actionManagerDetailsViewEdgeInsets:(id)arg1;
- (void)actionManager:(id)arg1 dismissViewController:(id)arg2 completion:(CDUnknownBlockType)arg3 animated:(BOOL)arg4;
- (void)actionManager:(id)arg1 presentViewController:(id)arg2 completion:(CDUnknownBlockType)arg3 modally:(BOOL)arg4;
- (void)actionManager:(id)arg1 dismissAnimated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cancelButtonPressed;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_searchFieldReturnPressed;
- (void)_searchFieldEditingChanged;
- (void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2;
- (void)searchGesture:(id)arg1 changedPercentComplete:(float)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 estimatedHeightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_updateCellClipping:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_handlePanRecognizer:(id)arg1;
- (void)_handleTapRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleDismissGesture;
- (void)_sendAbandonmentFeedback;
- (void)_fadeOutAndHideKeyboardAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_fadeForLaunchWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)attributionButtonTapped:(id)arg1;
- (void)_sendFeedback:(id)arg1;
- (void)_updateClipping;
- (void)_updateHeaderHeightIfNeeded;
- (void)_deselectTableViewCell;
- (id)_actionManager;
- (void)_updateTableContents;
- (void)_setFirstTimeViewVisible:(BOOL)arg1;
- (BOOL)_showFirstTimeView;
- (BOOL)_hasNoResultsForQuery;
- (BOOL)_hasResults;
- (BOOL)_hasNoQuery;
- (BOOL)_showingKeyboard;
- (void)_setShowingKeyboard:(BOOL)arg1;
@property(readonly, nonatomic, getter=isFadingOut) BOOL fadingOut;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
- (void)dismissAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (struct UIEdgeInsets)searchBorderMarginsForSearchField:(BOOL)arg1 cancelMargins:(struct UIEdgeInsets *)arg2;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

