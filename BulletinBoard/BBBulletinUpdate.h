/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:54:24 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCoding> {

	BBBulletin* _bulletin;
	unsigned _transactionID;
	int _updateType;

}

@property (nonatomic,readonly) BBBulletin * bulletin;               //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) int updateType;                      //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) unsigned transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
-(int)updateType;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)bulletin;
-(unsigned)transactionID;
-(id)initWithBulletin:(id)arg1 updateType:(int)arg2 transactionID:(unsigned)arg3 ;
@end
