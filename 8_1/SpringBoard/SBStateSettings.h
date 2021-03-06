//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSSettingDescriptionProvider.h"
#import "NSCopying.h"
#import "SBStateSettings.h"

@class BSMutableSettings, NSString;

@interface SBStateSettings : NSObject <BSSettingDescriptionProvider, SBStateSettings, NSCopying>
{
    BSMutableSettings *_settings;
}

- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (void)applyStateSettings:(id)arg1;
- (id)objectForStateSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forStateSetting:(unsigned int)arg2;
- (BOOL)boolForStateSetting:(unsigned int)arg1;
- (int)flagForStateSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forStateSetting:(unsigned int)arg2;
- (id)processSettings;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

