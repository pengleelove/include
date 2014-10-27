//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SBGestureRecognizer : NSObject
{
    unsigned int m_types;
    int m_state;
    CDUnknownBlockType m_handler;
    unsigned int m_activeTouchesCount;
    CDStruct_b59558ab m_activeTouches[30];
    unsigned int m_strikes;
    unsigned int m_templateMatches;
    NSMutableArray *m_touchTemplates;
    BOOL m_includedInGestureRecognitionIsPossibleTest;
    BOOL m_sendsTouchesCancelledToApplication;
    CDUnknownBlockType m_canBeginCondition;
    struct CGPoint m_maximumAllowedExclusiveMovement;
}

@property(nonatomic) struct CGPoint maximumAllowedExclusiveMovement; // @synthesize maximumAllowedExclusiveMovement=m_maximumAllowedExclusiveMovement;
@property(copy, nonatomic) CDUnknownBlockType canBeginCondition; // @synthesize canBeginCondition=m_canBeginCondition;
@property(nonatomic) BOOL sendsTouchesCancelledToApplication; // @synthesize sendsTouchesCancelledToApplication=m_sendsTouchesCancelledToApplication;
@property(nonatomic) BOOL includedInGestureRecognitionIsPossibleTest; // @synthesize includedInGestureRecognitionIsPossibleTest=m_includedInGestureRecognitionIsPossibleTest;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=m_handler;
@property(nonatomic) int state; // @synthesize state=m_state;
@property(nonatomic) unsigned int types; // @synthesize types=m_types;
- (id)description;
- (void)_appendDescription:(id)arg1 forTypes:(unsigned int)arg2;
- (void)touchesCancelled:(struct __SBGestureContext *)arg1;
- (void)touchesEnded:(struct __SBGestureContext *)arg1;
- (void)touchesMoved:(struct __SBGestureContext *)arg1;
- (void)touchesBegan:(struct __SBGestureContext *)arg1;
- (void)updateActiveTouches:(struct __SBGestureContext *)arg1;
- (int)templateMatch;
- (void)addTouchTemplate:(id)arg1;
- (void)invalidate;
- (void)reset;
- (BOOL)shouldReportRecognitionPossibleToAppsForTotalMotion:(struct CGPoint)arg1;
- (BOOL)shouldReceiveTouches;
- (BOOL)isRecognized;
- (void)dealloc;
- (id)init;

@end

