//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerContextTransitioning.h"

@class NSString, UIView, UIViewController;

@interface _SBBulletinRootViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioning>
{
    BOOL _animated;
    BOOL _presenting;
    UIView *_containerView;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    CDUnknownBlockType _presentationCompletion;
    CDUnknownBlockType _dismissalCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(copy, nonatomic) CDUnknownBlockType presentationCompletion; // @synthesize presentationCompletion=_presentationCompletion;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic, getter=isPresenting) BOOL presenting; // @synthesize presenting=_presenting;
@property(nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated=_animated;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
- (struct CGAffineTransform)targetTransform;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (void)completeTransition:(BOOL)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(float)arg1;
- (int)presentationStyle;
- (BOOL)transitionWasCancelled;
- (BOOL)isInteractive;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

