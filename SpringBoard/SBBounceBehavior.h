/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIDynamicBehavior.h"

#import "UICollisionBehaviorDelegate.h"

@class UIAttachmentBehavior, UICollisionBehavior, UIDynamicItemBehavior, UIGravityBehavior;

@interface SBBounceBehavior : UIDynamicBehavior <UICollisionBehaviorDelegate>
{
    CGFloat _midwayPosition;
    CGFloat _completionThreshold;
    struct CGRect _targetFrame;
    id <UIDynamicItem> _item;
    UIDynamicItemBehavior *_bodyBehavior;
    UICollisionBehavior *_collisionBehavior;
    UIGravityBehavior *_gravityBehavior;
    UIDynamicItemBehavior *_pushBehavior;
    UIAttachmentBehavior *_draggingBehavior;
    id <SBBounceBehaviorDelegate> _delegate;
    CGFloat _gravity;
    CGFloat _velocity;
    CGFloat _elasticity;
    CGFloat _friction;
    CGFloat _resistance;
    CGFloat _minVelocityToAssist;
    CGFloat _maxVelocityToAssist;
    CGFloat _maxVelocityAssistance;
    struct UIEdgeInsets _boundaryInsets;
}

@property(nonatomic) struct UIEdgeInsets boundaryInsets; // @synthesize boundaryInsets=_boundaryInsets;
@property(nonatomic) CGFloat maxVelocityAssistance; // @synthesize maxVelocityAssistance=_maxVelocityAssistance;
@property(nonatomic) CGFloat maxVelocityToAssist; // @synthesize maxVelocityToAssist=_maxVelocityToAssist;
@property(nonatomic) CGFloat minVelocityToAssist; // @synthesize minVelocityToAssist=_minVelocityToAssist;
@property(nonatomic) CGFloat resistance; // @synthesize resistance=_resistance;
@property(nonatomic) CGFloat friction; // @synthesize friction=_friction;
@property(nonatomic) CGFloat elasticity; // @synthesize elasticity=_elasticity;
@property(nonatomic) CGFloat velocity; // @synthesize velocity=_velocity;
@property(nonatomic) CGFloat gravity; // @synthesize gravity=_gravity;
@property(nonatomic) id <SBBounceBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint)arg4;
- (BOOL)allowsAnimatorToStop;
- (CGFloat)_maxVelocityToAssist;
- (CGFloat)_minVelocityToAssist;
- (CGFloat)_velocityAssistance;
- (BOOL)_shouldAssistWithVelocity:(CGFloat)arg1;
- (CGFloat)_adjustedVelocity:(CGFloat)arg1;
- (CGFloat)_itemOriginY;
- (BOOL)_itemStopped;
- (BOOL)_itemCompleted;
- (BOOL)_itemPastMidway;
- (CGFloat)_percentRemaining;
- (CGFloat)_percentComplete;
- (void)_removeDraggingBehavior;
- (void)_beginInteraction;
- (void)finishInteraction;
- (void)finishInteractionWithVelocity:(struct CGPoint)arg1;
- (void)finishInteractionWithVelocity:(struct CGPoint)arg1 abortIfNotPastMidway:(BOOL)arg2;
- (void)updateInteractionWithPoint:(struct CGPoint)arg1;
- (void)initiateInteractionFromPoint:(struct CGPoint)arg1;
- (void)bounce;
- (void)_setupCollisionBoundaries;
- (void)_frameCollisionBoundaryPoints:(struct CGPoint *)arg1;
- (BOOL)_isGravityDown;
- (BOOL)isActive;
- (void)dealloc;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 targetFrame:(struct CGRect)arg2;

@end

