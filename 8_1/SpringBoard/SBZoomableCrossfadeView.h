//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBFAnimationFactory;

@interface SBZoomableCrossfadeView : UIView
{
    SBFAnimationFactory *_animationFactory;
    UIView *_startView;
    UIView *_endView;
    BOOL _translucent;
    BOOL _crossfaded;
}

+ (id)crossfadeViewWithStartView:(id)arg1 endView:(id)arg2 translucent:(BOOL)arg3;
@property(retain, nonatomic) SBFAnimationFactory *animationFactory; // @synthesize animationFactory=_animationFactory;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)crossfadeWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)_initWithStartView:(id)arg1 endView:(id)arg2 translucent:(BOOL)arg3;

@end

