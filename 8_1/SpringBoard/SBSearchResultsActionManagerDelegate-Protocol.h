//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBSearchResultsActionManager, UIViewController;

@protocol SBSearchResultsActionManagerDelegate <NSObject>
- (struct UIEdgeInsets)actionManagerDetailsViewEdgeInsets:(SBSearchResultsActionManager *)arg1;
- (void)actionManager:(SBSearchResultsActionManager *)arg1 dismissViewController:(UIViewController *)arg2 completion:(void (^)(void))arg3 animated:(BOOL)arg4;
- (void)actionManager:(SBSearchResultsActionManager *)arg1 presentViewController:(UIViewController *)arg2 completion:(void (^)(void))arg3 modally:(BOOL)arg4;
- (void)actionManager:(SBSearchResultsActionManager *)arg1 dismissAnimated:(BOOL)arg2 completionBlock:(void (^)(void))arg3;
@end

