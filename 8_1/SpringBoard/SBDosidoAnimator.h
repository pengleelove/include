//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface SBDosidoAnimator : NSObject
{
    int _fromOrientation;
    UIView *_parentView;
    UIView *_transformContainer;
    UIView *_transformedContent;
    UIView *_fromView;
    UIView *_toView;
}

@property(retain, nonatomic, getter=_toView, setter=_setToView:) UIView *toView; // @synthesize toView=_toView;
@property(retain, nonatomic, getter=_fromView, setter=_setFromView:) UIView *fromView; // @synthesize fromView=_fromView;
@property(readonly, nonatomic) UIView *animationContainerView; // @synthesize animationContainerView=_transformContainer;
- (void)_rotateViewIfNecessary:(id)arg1 inverted:(BOOL)arg2;
- (void)_doReducedMotionDosido:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_doRealDosido:(id)arg1 withSpacingBetween:(float)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_transformedContentView;
@property(readonly, nonatomic) float defaultDuration; // @dynamic defaultDuration;
- (void)animateFromView:(id)arg1 toView:(id)arg2 withSpacingBetween:(float)arg3 outAnimationFactory:(id *)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 fromOrientation:(int)arg2;

@end

