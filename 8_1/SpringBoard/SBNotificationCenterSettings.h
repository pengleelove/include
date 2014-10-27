//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

@class SBBounceSettings;

@interface SBNotificationCenterSettings : _UISettings
{
    SBBounceSettings *_bounceSettings;
    float _actionButtonVibrantTintLevel;
    float _actionButtonVibrantTintAlpha;
    float _actionButtonSelectedVibrantTintLevel;
    float _actionButtonSelectedVibrantTintAlpha;
    float _actionButtonOverlayTintLevel;
    float _actionButtonOverlayTintAlpha;
    float _actionButtonSelectedOverlayTintLevel;
    float _actionButtonSelectedOverlayTintAlpha;
    float _modeButtonTintLevel;
    float _modeButtonTintAlpha;
    float _modeLabelTintLevel;
    float _modeLabelTintAlpha;
    double _grabberAnimationDuration;
}

+ (id)settingsControllerModule;
@property(nonatomic) float modeLabelTintAlpha; // @synthesize modeLabelTintAlpha=_modeLabelTintAlpha;
@property(nonatomic) float modeLabelTintLevel; // @synthesize modeLabelTintLevel=_modeLabelTintLevel;
@property(nonatomic) float modeButtonTintAlpha; // @synthesize modeButtonTintAlpha=_modeButtonTintAlpha;
@property(nonatomic) float modeButtonTintLevel; // @synthesize modeButtonTintLevel=_modeButtonTintLevel;
@property(nonatomic) float actionButtonSelectedOverlayTintAlpha; // @synthesize actionButtonSelectedOverlayTintAlpha=_actionButtonSelectedOverlayTintAlpha;
@property(nonatomic) float actionButtonSelectedOverlayTintLevel; // @synthesize actionButtonSelectedOverlayTintLevel=_actionButtonSelectedOverlayTintLevel;
@property(nonatomic) float actionButtonOverlayTintAlpha; // @synthesize actionButtonOverlayTintAlpha=_actionButtonOverlayTintAlpha;
@property(nonatomic) float actionButtonOverlayTintLevel; // @synthesize actionButtonOverlayTintLevel=_actionButtonOverlayTintLevel;
@property(nonatomic) float actionButtonSelectedVibrantTintAlpha; // @synthesize actionButtonSelectedVibrantTintAlpha=_actionButtonSelectedVibrantTintAlpha;
@property(nonatomic) float actionButtonSelectedVibrantTintLevel; // @synthesize actionButtonSelectedVibrantTintLevel=_actionButtonSelectedVibrantTintLevel;
@property(nonatomic) float actionButtonVibrantTintAlpha; // @synthesize actionButtonVibrantTintAlpha=_actionButtonVibrantTintAlpha;
@property(nonatomic) float actionButtonVibrantTintLevel; // @synthesize actionButtonVibrantTintLevel=_actionButtonVibrantTintLevel;
@property double grabberAnimationDuration; // @synthesize grabberAnimationDuration=_grabberAnimationDuration;
@property(retain, nonatomic) SBBounceSettings *bounceSettings; // @synthesize bounceSettings=_bounceSettings;
- (void)setDefaultValues;

@end

