/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLEffectSelectionViewControllerDelegate.h"
#import "PLImageAdjustmentViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CIContext, CIFilter, EAGLContext, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSTimer, NSUndoManager, PLEffectSelectionViewController, PLImageAdjustmentView, PLManagedAsset, PLProgressHUD, UIActionSheet, UIAlertView, UIImage, UILabel, UINavigationBar, UIPopoverController, UIScrollView, UIToolbar, UIView;

@interface PLEditPhotoController : UIViewController <PLImageAdjustmentViewDelegate, UIScrollViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, PLEffectSelectionViewControllerDelegate>
{
    UIScrollView *_scrollView;
    UIView *_zoomView;
    PLImageAdjustmentView *_editView;
    UILabel *_messageView;
    UINavigationBar *_navigationBar;
    UIToolbar *_toolbar;
    PLEffectSelectionViewController *_effectSelectionViewController;
    PLProgressHUD *_savingHUD;
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    UIPopoverController *_popover;
    int _initialOrientation;
    NSDictionary *_initialAdjustmentState;
    NSUndoManager *_undoManager;
    NSDictionary *_previousAdjustmentState;
    NSUndoManager *_previousUndoManager;
    NSTimer *_messageTimer;
    NSMutableArray *_navBarItems;
    NSArray *_originalItems;
    PLManagedAsset *_editedPhoto;
    PLManagedAsset *_pendingPhoto;
    UIImage *_adjustedImage;
    NSArray *_autoAdjustmentFilters;
    struct CGRect _enhanceCalcRect;
    NSArray *_autoRedEyeCorrections;
    CIFilter *_autoRedEyeFilter;
    CIFilter *_redEyeFilter;
    NSArray *_effectFilters;
    struct CGRect _normalizedCropRect;
    double _straightenAngle;
    double _rotationAngle;
    NSDictionary *_cachedMetadata;
    UIImage *_scaledCachedImage;
    UIImage *_smallThumbnailImage;
    UIImage *_largeThumbnailImage;
    NSObject<OS_dispatch_queue> *_cachedImageQueue;
    id _didEndZoomingBlock;
    id _editCompletionBlock;
    id _actionCompletionBlock;
    unsigned int _redEyeCycleCount;
    unsigned int _didInitializeNavigationItem:1;
    unsigned int _toolbarWasHidden:1;
    unsigned int _isUserAction:1;
    unsigned int _isCroppingImage:1;
    unsigned int _didTapForRedEyeCorrection:1;
    unsigned int _didEverTapForRedEyeCorrection:1;
    unsigned int _isCanceling:1;
    unsigned int _isOrderedOut:1;
    unsigned int _autoAdjustmentEnabled:1;
    unsigned int _preloadingEnhancementFilters:1;
    unsigned int _applyingAutoEnhance:1;
    unsigned int _modal:1;
    unsigned int _isUsingProxyImage:1;
    unsigned int _shouldPublishToPhotoStreams:1;
    unsigned int _needsFilteredFullSizeImage:1;
    unsigned int _preloadedEffectFilters:1;
    unsigned int _stopPreloadEffectFilters:1;
    _Bool _supportsEffects;
    unsigned long long _nextPreloadEffectFilterIndex;
    NSMutableDictionary *_thumbnailCache;
    NSDictionary *_thumbnailCacheAdjustmentState;
    CIContext *_ciContextThumbnails;
    CIContext *_ciContextFullSize;
    CIContext *_ciContextMainThread;
    EAGLContext *_glesContextThumbnails;
    EAGLContext *_glesContextFullSize;
    NSObject<OS_dispatch_queue> *_effectQueueThumbnails;
    NSObject<OS_dispatch_queue> *_effectQueueFullSize;
    int _currentMode;
    _Bool _savesAdjustmentsToCameraRoll;
    _Bool __toolbarHidden;
}

+ (void)initialize;
@property(nonatomic, setter=_setToolbarHidden:) _Bool _toolbarHidden; // @synthesize _toolbarHidden=__toolbarHidden;
@property(copy, nonatomic) id actionCompletionBlock; // @synthesize actionCompletionBlock=_actionCompletionBlock;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
- (_Bool)isEditing;
- (void)setMinimumZoom:(double)arg1 maximumZoom:(double)arg2;
- (_Bool)savesAdjustmentsToCameraRoll;
- (struct CGSize)editedImageSize;
- (void)_setUndoManager:(id)arg1;
- (void)effectSelectionViewController:(id)arg1 requestsThumbnailWithEffect:(id)arg2 completionBlock:(id)arg3;
- (void)_computeFullSizeFilteredImageWithAdjustmentState:(id)arg1;
- (void)_computeFullSizeFilteredImage;
- (void)effectSelectionViewController:(id)arg1 didSelectEffect:(id)arg2;
- (void)_thumbnailImageWithEffectFilters:(id)arg1 inputImage:(id)arg2 applyOrientation:(_Bool)arg3 forceSquareCrop:(_Bool)arg4 completionBlock:(id)arg5;
- (void)_fetchSmallThumbnailForEffectFilter:(id)arg1 completionBlock:(id)arg2;
- (void)_preloadNextEffectFilter;
- (void)_preloadEffectFilters;
- (void)_dismissEffectSelection;
- (void)_presentEffectSelection;
- (struct CGSize)_editedImageFullSize;
- (void)updatePendingPhoto;
@property(readonly, nonatomic) PLManagedAsset *pendingPhoto;
@property(retain, nonatomic) PLManagedAsset *editedPhoto;
- (void)_setEditedPhoto:(id)arg1 resetFilters:(_Bool)arg2;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(retain, nonatomic) UIToolbar *toolbar;
- (void)_layoutToolbar;
@property(retain, nonatomic) UINavigationBar *navigationBar;
- (void)_updateAggregateInfoForCurrentAdjustmentState;
- (_Bool)_adjustmentState:(id)arg1 isEqualTo:(id)arg2;
- (_Bool)_currentStateIsEqualToAdjustmentState:(id)arg1;
- (id)_originalState;
- (id)_adjustmentState;
- (void)_setAdjustmentState:(id)arg1;
- (void)_cleanupFilters;
- (void)_loadFiltersFromDatabase;
- (void)_saveFiltersToAsset:(id)arg1;
- (void)_displayRedEyeCorrections:(id)arg1;
- (void)_displayAllRedEyeCorrections;
- (_Bool)hasRedEyeCorrections;
- (id)redEyePoints;
- (_Bool)_setRedEyeCorrections:(id)arg1 changedCorrections:(id *)arg2;
- (void)_removeRedEyeCorrections:(id)arg1;
- (_Bool)removeRedEyePoint:(struct CGPoint)arg1;
- (void)_addRedEyeCorrections:(id)arg1 fromFilter:(id)arg2 isUserAction:(_Bool)arg3;
- (void)addRedEyePoint:(struct CGPoint)arg1;
- (id)_newCIImageFromUIImage:(id)arg1;
- (void)_setAspectRatio:(struct CGSize)arg1;
- (void)_rotatePhotoByAngle:(double)arg1;
- (void)_autoAdjustImage;
- (void)_preloadEnhancementFilters;
@property(nonatomic) _Bool autoAdjustmentEnabled;
- (void)_setAutoAdjustmentFilters:(id)arg1;
- (id)_autoAdjustmentFilters;
- (void)_setAutoRedEyeFilterFromArray:(id)arg1;
- (id)_calculateAutoFiltersWithFeatures:(int)arg1 includeGeometry:(_Bool)arg2;
- (void)setStraightenAngle:(double)arg1 normalizedCropRect:(struct CGRect)arg2;
@property(readonly, nonatomic) struct CGRect normalizedCropRect;
@property(readonly, nonatomic) double straightenAngle;
- (id)_masterImagePath;
- (void)saveAdjustments;
- (void)_saveAdjustmentsToOriginal;
- (void)_saveXMPPropertiesToPhoto:(id)arg1;
- (void)_saveAdjustmentsToCopy;
- (id)newAdjustedImageWithoutGeometryUsingContext:(id)arg1;
- (id)_croppedStraightenedImage;
- (id)_cropAndStraightenFiltersForImageSize:(struct CGSize)arg1 forceSquareCrop:(_Bool)arg2 forceUseGeometry:(_Bool)arg3;
- (id)_newImageFromImage:(id)arg1 filters:(id)arg2 orientation:(int)arg3 ciContext:(id)arg4;
- (id)_largeThumbnailImage;
- (id)_smallThumbnailImage;
- (id)_scaledCachedImage;
- (id)_currentNonGeometryFiltersWithEffectFilters:(id)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (void)didRedoNotification:(id)arg1;
- (void)didUndoNotification:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)willPresentAlertView:(id)arg1;
- (_Bool)_dismissPopoverViews;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_undoTransformImage:(struct CGRect)arg1 angle:(double)arg2;
- (void)editViewDidTouchImage:(id)arg1 location:(struct CGPoint)arg2;
- (void)editViewDidCropImage:(id)arg1;
- (void)editViewWillCropImage:(id)arg1;
- (void)setToolbarItems:(id)arg1 animated:(_Bool)arg2;
- (void)_updateToolbarSetHiddenState:(_Bool)arg1;
- (void)_updateToolbar;
- (void)_updateModeButtons;
- (void)_updateEditedImage:(_Bool)arg1;
- (void)_setEditedImage:(id)arg1 isProxyImage:(_Bool)arg2 updateCropAndStraighten:(_Bool)arg3 forceAnimate:(_Bool)arg4;
- (void)_setEditedImage:(id)arg1 isProxyImage:(_Bool)arg2 updateCropAndStraighten:(_Bool)arg3;
- (void)_updateEnhanceButton;
- (void)_updateButtons;
- (void)_updateControls;
- (void)_dismissSavingHUD;
- (void)_presentSavingHUD;
- (void)_setControlsEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)forceCompletion;
- (void)orderOut:(_Bool)arg1 forceCompletion:(_Bool)arg2;
- (void)cancel:(id)arg1;
- (void)save:(id)arg1;
- (void)applySubmode:(id)arg1;
- (void)showConstraints:(id)arg1;
- (void)selectEditMode:(id)arg1;
- (void)rotatePhoto:(id)arg1;
- (void)enhancePhoto:(id)arg1;
- (void)undo:(id)arg1;
- (void)revertToSaved:(id)arg1;
- (void)revertToOriginal:(id)arg1;
- (void)_pushNewUndoManager;
- (void)_popModalState;
- (void)_pushModalState;
- (void)_setEditMode:(int)arg1;
- (void)_dismissProgressAlertIfNeeded;
- (void)_verifyProgress:(id)arg1 completion:(id)arg2;
- (void)_updateMessageOverlayFrame;
- (void)hideMessage:(id)arg1;
- (void)showMessage:(id)arg1 duration:(double)arg2;
- (void)_displayAutoAdjustmentMessage;
- (id)_constrainActionSheet;
- (id)_buttonWithTag:(long long)arg1;
- (id)_rightButtonForMode:(int)arg1 enableDone:(_Bool)arg2 enableSave:(_Bool)arg3;
- (id)_newButtonItemWithIcon:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4 tag:(long long)arg5;
- (id)_cropAndStraightenToolbarItems;
- (id)_redEyeLabel;
- (id)_startToolbarItems;
- (id)_currentToolbarItems;
- (id)navigationItem;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)_updateCropInsetsForOrientation:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (_Bool)hidesBottomBarWhenPushed;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)_isZoomedToScale:(double)arg1;
- (void)zoomToScale:(double)arg1 completionBlock:(id)arg2;
- (double)rotatedZoomToFitScale;
- (double)zoomToFitScale;
- (void)sizeToFit:(_Bool)arg1;
- (id)contentScrollView;
- (void)_startEditingWithAsset:(id)arg1;
- (void)startEditingAsset:(id)arg1 proxyImage:(id)arg2 completion:(id)arg3;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
