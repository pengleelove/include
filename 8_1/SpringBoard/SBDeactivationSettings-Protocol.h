//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBDeactivationSettings;

@protocol SBDeactivationSettings <NSObject>
- (void)applyDeactivationSettings:(SBDeactivationSettings *)arg1;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (BOOL)boolForDeactivationSetting:(unsigned int)arg1;
- (int)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forDeactivationSetting:(unsigned int)arg2;
@end

