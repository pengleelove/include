/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "_UISettings.h"

@interface SBSlideToUnlockFailureRecognizerSettings : _UISettings
{
    BOOL _enabled;
    BOOL _viewDebugArea;
    unsigned int _maxAllowableVerticalOffset;
    float _topAngle;
    float _bottomAngle;
}

+ (id)settingsControllerModule;
@property(nonatomic) float bottomAngle; // @synthesize bottomAngle=_bottomAngle;
@property(nonatomic) float topAngle; // @synthesize topAngle=_topAngle;
@property(nonatomic) unsigned int maxAllowableVerticalOffset; // @synthesize maxAllowableVerticalOffset=_maxAllowableVerticalOffset;
@property(nonatomic) BOOL viewDebugArea; // @synthesize viewDebugArea=_viewDebugArea;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)setDefaultValues;

@end
