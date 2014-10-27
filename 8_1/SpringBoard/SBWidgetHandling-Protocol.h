//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCLaunchStats, NSArray, NSSet, NSString, SBWidgetViewController;

@protocol SBWidgetHandling <NSObject>
@property(readonly, nonatomic) NSSet *visibleWidgetIDs;
- (BOOL)shouldRequestWidgetRemoteViewControllers;
- (void)enableAllWidgets:(void (^)(BOOL))arg1;
- (void)makeVisibleWidgetWithIdentifier:(NSString *)arg1 animated:(BOOL)arg2 completion:(void (^)(BOOL))arg3;
- (void)updateWidgetsWithIdentifiers:(NSArray *)arg1 launchStats:(NCLaunchStats *)arg2 completion:(void (^)(NSArray *))arg3;
- (SBWidgetViewController *)widgetWithIdentifier:(NSString *)arg1;
@end

