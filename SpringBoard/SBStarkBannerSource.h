/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBUIBannerSource.h"
#import "SBUIBannerTargetManagerObserver.h"

@class NSMutableArray;

@interface SBStarkBannerSource : NSObject <SBUIBannerSource, SBUIBannerTargetManagerObserver>
{
    id <SBUIBannerTarget> _allowedTarget;
    id <SBUIBannerTarget> _target;
    NSMutableArray *_enqueuedItems;
}

- (void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2;
- (void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2;
- (id)newBannerViewForContext:(id)arg1;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (unsigned int)enumerateAllItemsMatchingContext:(id)arg1 withBlock:(id)arg2;
- (void)removeEnqueuedItemsAtIndexes:(id)arg1;
- (void)dismissCurrentItemFromTarget;
- (void)enqueueItem:(id)arg1;
- (id)indexesOfEnqueuedItemsMatchingContext:(id)arg1;
- (id)currentItemFromTarget;
- (void)dealloc;
- (id)init;
- (id)initWithAllowedTarget:(id)arg1;

@end

