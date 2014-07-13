/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:16 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SPSearchResult : PBCodable {

	unsigned long long _identifier;
	NSString* _auxiliarySubtitle;
	NSString* _auxiliaryTitle;
	NSInteger _flags;
	unsigned _numberOfSummaryLines;
	NSString* _subtitle;
	NSString* _summary;
	NSString* _title;
	NSString* _url;
	SCD_Struct_SP0 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSummary; 
@property (nonatomic,retain) NSString * summary;                         //@synthesize summary=_summary - In the implementation block
@property (nonatomic,readonly) BOOL hasAuxiliaryTitle; 
@property (nonatomic,retain) NSString * auxiliaryTitle;                  //@synthesize auxiliaryTitle=_auxiliaryTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasAuxiliarySubtitle; 
@property (nonatomic,retain) NSString * auxiliarySubtitle;               //@synthesize auxiliarySubtitle=_auxiliarySubtitle - In the implementation block
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                             //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) int flags;                                  //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSummaryLines; 
@property (assign,nonatomic) unsigned numberOfSummaryLines;              //@synthesize numberOfSummaryLines=_numberOfSummaryLines - In the implementation block

-(BOOL)isEquivalentToResult:(SPSearchResult *)result;
@end

