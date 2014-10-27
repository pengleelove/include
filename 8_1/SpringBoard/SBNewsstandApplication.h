//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplication.h"

@interface SBNewsstandApplication : SBApplication
{
    BOOL _isMagazineApp;
    BOOL _iconIsBoundOnRight;
    unsigned int _supportsNewsstandContentBackgroundMode:1;
    unsigned int _allowedContentNotificationsPerDay;
    unsigned char _newsstandWakes;
    unsigned int _lastPostedState;
}

@property(readonly, nonatomic) BOOL iconIsBoundOnRight; // @synthesize iconIsBoundOnRight=_iconIsBoundOnRight;
@property(readonly, nonatomic) BOOL isMagazineApp; // @synthesize isMagazineApp=_isMagazineApp;
- (BOOL)supportsBackgroundAppRefresh;
- (BOOL)isNewsstandApplication;
- (BOOL)shouldThrottleContentNotificationOnDate:(id)arg1 withLastCount:(unsigned int *)arg2 onDay:(int *)arg3;
- (BOOL)isFakeApp;
- (void)resumeForContentAvailable;
- (void)setApplicationState:(unsigned int)arg1;
- (void)activate;
- (void)didExitWithType:(int)arg1 terminationReason:(int)arg2;
- (void)processDidLaunch:(id)arg1;
- (Class)iconClass;
- (id)initWithApplicationInfo:(id)arg1 bundle:(id)arg2 infoDictionary:(id)arg3;

@end

