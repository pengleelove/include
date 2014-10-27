//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutConstraint.h"

@class NSString;

@interface SBBoundLayoutConstraint : NSLayoutConstraint
{
    id _object;
    NSString *_keyPath;
}

+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constantObject:(id)arg7 keyPath:(id)arg8;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_boundValueDidChange;
- (void)bindConstantToObject:(id)arg1 keyPath:(id)arg2;
- (void)dealloc;

@end

