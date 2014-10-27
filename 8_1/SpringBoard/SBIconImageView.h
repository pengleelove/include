//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBIconObserver.h"
#import "SBIconProgressViewDelegate.h"
#import "SBReusableView.h"

@class NSString, SBIcon, SBIconProgressView, UIImage, UIImageView;

@interface SBIconImageView : UIView <SBIconObserver, SBIconProgressViewDelegate, SBReusableView>
{
    SBIcon *_icon;
    float _brightness;
    int _location;
    UIImageView *_overlayView;
    SBIconProgressView *_progressView;
    BOOL _isPaused;
    UIImage *_cachedSquareContentsImage;
    BOOL _showsSquareCorners;
    float _overlayAlpha;
}

+ (id)dequeueRecycledIconImageViewOfClass:(Class)arg1;
+ (void)recycleIconImageView:(id)arg1;
+ (id)windowForRecycledViewsInViewMap:(id)arg1;
+ (unsigned int)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
+ (id)viewMap;
+ (float)cornerRadius;
@property(nonatomic) BOOL showsSquareCorners; // @synthesize showsSquareCorners=_showsSquareCorners;
@property(nonatomic) float overlayAlpha; // @synthesize overlayAlpha=_overlayAlpha;
@property(nonatomic) float brightness; // @synthesize brightness=_brightness;
@property(readonly, retain, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
- (id)_iconSquareOverlayImage;
- (id)_generateIconSquareOverlayImageForFormat:(int)arg1;
- (id)_iconBasicOverlayImage;
- (id)_generateIconBasicOverlayImageForFormat:(int)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)iconImageDidUpdate:(id)arg1;
- (struct CGRect)visibleBounds;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)squareDarkeningOverlayImage;
- (id)darkeningOverlayImage;
- (id)squareContentsImage;
- (id)contentsImage;
- (void)_clearCachedImages;
- (id)_generateSquareContentsImage;
- (void)_updateProgressMask;
- (void)_updateOverlayImage;
- (id)_currentOverlayImage;
- (void)updateImageAnimated:(BOOL)arg1;
- (id)snapshot;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setPaused:(BOOL)arg1;
- (void)setProgressAlpha:(float)arg1;
- (void)_clearProgressView;
- (void)progressViewCanBeRemoved:(id)arg1;
- (void)setProgressState:(int)arg1 paused:(BOOL)arg2 percent:(float)arg3 animated:(BOOL)arg4;
- (void)_updateOverlayAlpha;
- (void)setIcon:(id)arg1 location:(int)arg2 animated:(BOOL)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

