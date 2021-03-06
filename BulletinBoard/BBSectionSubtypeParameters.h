/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:54:24 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSSet, BBSectionIcon, NSNumber;

@interface BBSectionSubtypeParameters : NSObject <NSSecureCoding> {

	BBSectionSubtypeParameters* _fallbackParameters;
	NSString* _topic;
	NSString* _missedBannerDescriptionFormat;
	NSString* _fullUnlockActionLabel;
	NSString* _unlockActionLabel;
	NSSet* _alertSuppressionAppIDs;
	BBSectionIcon* _sectionIconOverride;
	NSNumber* _boxedCoalescesWhenLocked;
	NSNumber* _boxedSuppressesMessageForPrivacy;
	NSNumber* _boxedRealertCount;
	NSNumber* _boxedInertWhenLocked;
	NSNumber* _boxedPreservesUnlockActionCase;
	NSNumber* _boxedBannerShowsSubtitle;
	NSNumber* _boxedVisuallyIndicatesWhenDateIsInFuture;
	NSNumber* _boxedSubtypePriority;
	NSNumber* _boxedIPodOutAlertType;

}

@property (nonatomic,copy) NSString * topic;                                                   //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy) NSString * missedBannerDescriptionFormat;                           //@synthesize missedBannerDescriptionFormat=_missedBannerDescriptionFormat - In the implementation block
@property (nonatomic,copy) NSString * fullUnlockActionLabel;                                   //@synthesize fullUnlockActionLabel=_fullUnlockActionLabel - In the implementation block
@property (nonatomic,copy) NSString * unlockActionLabel;                                       //@synthesize unlockActionLabel=_unlockActionLabel - In the implementation block
@property (nonatomic,copy) NSSet * alertSuppressionAppIDs;                                     //@synthesize alertSuppressionAppIDs=_alertSuppressionAppIDs - In the implementation block
@property (nonatomic,copy) BBSectionIcon * sectionIconOverride;                                //@synthesize sectionIconOverride=_sectionIconOverride - In the implementation block
@property (assign,nonatomic) BOOL coalescesWhenLocked; 
@property (assign,nonatomic) BOOL suppressesMessageForPrivacy; 
@property (assign,nonatomic) unsigned realertCount; 
@property (assign,nonatomic) BOOL inertWhenLocked; 
@property (assign,nonatomic) BOOL preservesUnlockActionCase; 
@property (assign,nonatomic) BOOL bannerShowsSubtitle; 
@property (assign,nonatomic) unsigned subtypePriority; 
@property (assign,nonatomic) int iPodOutAlertType; 
@property (assign,nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture; 
@property (assign,nonatomic) BBSectionSubtypeParameters * fallbackParameters;                  //@synthesize fallbackParameters=_fallbackParameters - In the implementation block
@property (nonatomic,retain) NSNumber * boxedCoalescesWhenLocked;                              //@synthesize boxedCoalescesWhenLocked=_boxedCoalescesWhenLocked - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesMessageForPrivacy;                      //@synthesize boxedSuppressesMessageForPrivacy=_boxedSuppressesMessageForPrivacy - In the implementation block
@property (nonatomic,retain) NSNumber * boxedRealertCount;                                     //@synthesize boxedRealertCount=_boxedRealertCount - In the implementation block
@property (nonatomic,retain) NSNumber * boxedInertWhenLocked;                                  //@synthesize boxedInertWhenLocked=_boxedInertWhenLocked - In the implementation block
@property (nonatomic,retain) NSNumber * boxedPreservesUnlockActionCase;                        //@synthesize boxedPreservesUnlockActionCase=_boxedPreservesUnlockActionCase - In the implementation block
@property (nonatomic,retain) NSNumber * boxedBannerShowsSubtitle;                              //@synthesize boxedBannerShowsSubtitle=_boxedBannerShowsSubtitle - In the implementation block
@property (nonatomic,retain) NSNumber * boxedVisuallyIndicatesWhenDateIsInFuture;              //@synthesize boxedVisuallyIndicatesWhenDateIsInFuture=_boxedVisuallyIndicatesWhenDateIsInFuture - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSubtypePriority;                                  //@synthesize boxedSubtypePriority=_boxedSubtypePriority - In the implementation block
@property (nonatomic,retain) NSNumber * boxedIPodOutAlertType;                                 //@synthesize boxedIPodOutAlertType=_boxedIPodOutAlertType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUnlockActionLabel:(id)arg1 ;
-(unsigned)realertCount;
-(void)setRealertCount:(unsigned)arg1 ;
-(id)initWithFallbackParameters:(id)arg1 ;
-(void)setFallbackParameters:(id)arg1 ;
-(id)missedBannerDescriptionFormat;
-(id)fullUnlockActionLabel;
-(id)unlockActionLabel;
-(id)alertSuppressionAppIDs;
-(id)sectionIconOverride;
-(BOOL)coalescesWhenLocked;
-(BOOL)suppressesMessageForPrivacy;
-(BOOL)inertWhenLocked;
-(BOOL)preservesUnlockActionCase;
-(BOOL)bannerShowsSubtitle;
-(BOOL)visuallyIndicatesWhenDateIsInFuture;
-(unsigned)subtypePriority;
-(int)iPodOutAlertType;
-(void)setBoxedCoalescesWhenLocked:(id)arg1 ;
-(void)setBoxedSuppressesMessageForPrivacy:(id)arg1 ;
-(void)setBoxedRealertCount:(id)arg1 ;
-(void)setBoxedInertWhenLocked:(id)arg1 ;
-(void)setBoxedPreservesUnlockActionCase:(id)arg1 ;
-(void)setBoxedBannerShowsSubtitle:(id)arg1 ;
-(void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(id)arg1 ;
-(void)setBoxedSubtypePriority:(id)arg1 ;
-(void)setBoxedIPodOutAlertType:(id)arg1 ;
-(void)setMissedBannerDescriptionFormat:(id)arg1 ;
-(void)setFullUnlockActionLabel:(id)arg1 ;
-(void)setAlertSuppressionAppIDs:(id)arg1 ;
-(void)setSectionIconOverride:(id)arg1 ;
-(id)fallbackParameters;
-(id)boxedCoalescesWhenLocked;
-(id)boxedSuppressesMessageForPrivacy;
-(id)boxedRealertCount;
-(id)boxedInertWhenLocked;
-(id)boxedPreservesUnlockActionCase;
-(id)boxedBannerShowsSubtitle;
-(id)boxedVisuallyIndicatesWhenDateIsInFuture;
-(id)boxedSubtypePriority;
-(id)boxedIPodOutAlertType;
-(void)setCoalescesWhenLocked:(BOOL)arg1 ;
-(void)setSuppressesMessageForPrivacy:(BOOL)arg1 ;
-(void)setInertWhenLocked:(BOOL)arg1 ;
-(void)setPreservesUnlockActionCase:(BOOL)arg1 ;
-(void)setBannerShowsSubtitle:(BOOL)arg1 ;
-(void)setVisuallyIndicatesWhenDateIsInFuture:(BOOL)arg1 ;
-(void)setSubtypePriority:(unsigned)arg1 ;
-(void)setIPodOutAlertType:(int)arg1 ;
-(void)setTopic:(id)arg1 ;
-(id)topic;
@end

