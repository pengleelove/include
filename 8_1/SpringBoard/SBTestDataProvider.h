//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBRemoteDataProvider.h"

@class BBDataProviderConnection, BBDataProviderProxy, NSMutableArray, NSString;

@interface SBTestDataProvider : NSObject <BBRemoteDataProvider>
{
    BBDataProviderConnection *_connection;
    BBDataProviderProxy *_proxy;
    NSMutableArray *_bulletins;
}

+ (id)sharedInstance;
- (void)noteSectionInfoDidChange:(id)arg1;
- (float)attachmentAspectRatioForRecordID:(id)arg1;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (id)sectionParameters;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)sortDescriptors;
- (id)bulletinsFilteredBy:(unsigned int)arg1 count:(unsigned int)arg2 lastCleared:(id)arg3;
- (id)sectionDisplayName;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (id)_bulletin;
- (void)publish;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

