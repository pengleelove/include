//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet, NSString;

@protocol SBIconModelApplicationDataSource <NSObject>
- (NSSet *)firstPageLeafIdentifiers;
- (BOOL)isNewsstandEnabled;
- (BOOL)isNewsstandSupported;
- (NSDictionary *)defaultIconState;
- (int)appVisibilityOverrideForBundleIdentifier:(NSString *)arg1;
- (BOOL)updateAppIconVisibilityOverridesShowing:(id *)arg1 hiding:(id *)arg2;
- (NSArray *)allApplications;
@end

