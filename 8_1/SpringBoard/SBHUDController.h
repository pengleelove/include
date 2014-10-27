//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBHUDView, UIView, UIWindow;

@interface SBHUDController : NSObject
{
    UIWindow *_hudWindow;
    UIView *_hudContentView;
    UIView *_hudParallaxCorrectionView;
    UIView *_hudParallaxView;
    SBHUDView *_hudView;
    int _orientation;
    BOOL _hudVisibleOrFading;
}

+ (id)sharedHUDController;
- (void)hideHUDView;
- (id)visibleOrFadingHUDView;
- (id)visibleHUDView;
- (void)presentHUDView:(id)arg1 autoDismissWithDelay:(double)arg2;
- (void)presentHUDView:(id)arg1;
- (void)_orderWindowOut:(id)arg1;
- (void)_tearDown;
- (void)_createUI;
- (void)reorientHUDIfNeeded:(BOOL)arg1;
- (void)_recenterHUDView;
- (void)dealloc;

@end

