/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBIconAnimationContext : NSObject
{
    float _fraction;
    id _completion;
    double _delay;
}

@property(copy, nonatomic) id completion; // @synthesize completion=_completion;
@property(nonatomic) float fraction; // @synthesize fraction=_fraction;
@property(nonatomic) double delay; // @synthesize delay=_delay;
- (void)invalidate;
- (void)dealloc;
- (id)initWithNotificationIdentifier:(id)arg1;

@end
