//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, SBLockScreenBatteryFillView, _UIBackdropView, _UILegibilityLabel, _UILegibilitySettings;

@interface SBLockScreenBatteryChargingView : UIView
{
    UIView *_batteryContainerView;
    _UIBackdropView *_batteryBlurView;
    SBLockScreenBatteryFillView *_batteryFillView;
    _UILegibilityLabel *_chargePercentLabel;
    NSArray *_batteryConstraints;
    NSLayoutConstraint *_batteryTopOffset;
    _UILegibilitySettings *_legibilitySettings;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (float)_batteryNoseOffset;
- (float)_batteryBaseline;
- (float)_chargingTextBaselineOffset;
- (id)_chargePercentFont;
- (void)_prepareConstraints;
- (void)layoutSubviews;
@property(nonatomic) BOOL batteryVisible;
- (void)_setChargeString:(id)arg1;
- (void)setChargePercentage:(int)arg1 detailed:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

