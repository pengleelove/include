//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconZoomAnimator.h"

#import "SBIconListLayoutDelegate.h"

@class NSString, SBCenterZoomSettings, UIView;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate>
{
    UIView *_zoomView;
    float _iconZoomedZ;
    float _centerRow;
    float _centerCol;
    struct CGPoint _cameraPosition;
}

@property(readonly, nonatomic) struct CGPoint cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(readonly, retain, nonatomic) UIView *zoomView; // @synthesize zoomView=_zoomView;
- (void)_calculateCentersAndCameraPosition;
- (id)_animationFactoryForDock;
- (id)_animationFactoryForIcon:(id)arg1;
- (void)_positionView:(id)arg1 forIcon:(id)arg2;
- (void)iconListViewLayoutInvalidated:(id)arg1;
- (void)iconListView:(id)arg1 wouldHaveMovedIcon:(id)arg2;
- (double)_iconZoomDelay;
- (void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (unsigned int)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(float)arg1;
- (void)_prepareAnimation;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) SBCenterZoomSettings *settings;
@property(readonly) Class superclass;

@end

