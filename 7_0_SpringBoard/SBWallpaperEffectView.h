//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBWallpaperObserver.h"
#import "_SBFakeBlurObserver.h"

@class UIColor, UIImage, UIImageView, UIView<_SBFakeBlur>;

@interface SBWallpaperEffectView : UIView <_SBFakeBlurObserver, SBWallpaperObserver>
{
    long long _variant;
    UIColor *_wallpaperAverageColor;
    long long _startStyle;
    long long _endStyle;
    double _transitionFraction;
    UIView<_SBFakeBlur> *_blurView;
    UIView *_grayscaleTintView;
    UIView *_colorTintView;
    UIView<_SBFakeBlur> *_transitionBlurView;
    UIView *_transitionGrayscaleTintView;
    UIView *_transitionColorTintView;
    UIImageView *_maskImageView;
    UIView *_blurMaskingContainer;
    UIView *_tintMaskingContainer;
    UIImage *_maskImage;
    _Bool _shouldMaskBlur;
    _Bool _shouldMaskTint;
    _Bool _accessibilityIncreaseContrastEnabled;
}

+ (id)imageInRect:(struct CGRect)arg1 forVariant:(long long)arg2 withStyle:(long long)arg3 zoomFactor:(double)arg4 mask:(id)arg5 masksBlur:(_Bool)arg6 masksTint:(_Bool)arg7;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_accessibilityEnhanceBackgroundContrastChanged:(id)arg1;
- (void)_clearView:(id *)arg1;
- (void)_configureGrayscaleTintView:(id *)arg1 colorTintView:(id *)arg2 forStyle:(long long)arg3;
- (void)_configureViews;
- (void)_configureForCurrentBlurStyle;
- (void)_configureFromScratch;
- (void)_setTransitionFraction:(double)arg1;
- (void)_updateWallpaperAverageColor:(id)arg1;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;
- (void)fakeBlurView:(id)arg1 didChangeStyle:(long long)arg2;
- (void)layoutSubviews;
- (void)setMaskImage:(id)arg1 masksBlur:(_Bool)arg2 masksTint:(_Bool)arg3;
- (_Bool)currentTransitionStateIsOpaque;
- (void)setTransitionState:(CDStruct_059c2b36)arg1;
- (_Bool)prepareToAnimateToTransitionState:(inout CDStruct_059c2b36 *)arg1;
- (void)setStyle:(long long)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithWallpaperVariant:(long long)arg1;

@end
