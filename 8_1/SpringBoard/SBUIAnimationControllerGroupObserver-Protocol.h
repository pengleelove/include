//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationControllerObserver.h"

@class SBUIAnimationController, SBUIAnimationControllerGroup;

@protocol SBUIAnimationControllerGroupObserver <SBUIAnimationControllerObserver>

@optional
- (void)animationControllerGroup:(SBUIAnimationControllerGroup *)arg1 childControllerDidFinishAnimation:(SBUIAnimationController *)arg2;
- (void)animationControllerGroup:(SBUIAnimationControllerGroup *)arg1 childController:(SBUIAnimationController *)arg2 willBeginAnimation:(BOOL)arg3;
@end

