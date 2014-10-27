//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SBSearchResultsActionManager, SPSearchResult, SPSearchResultSection;

@interface SBSearchResultsAction : NSObject
{
    SPSearchResult *_result;
    SPSearchResultSection *_section;
    NSArray *_urls;
    SBSearchResultsActionManager *_actionManager;
}

+ (id)actionForResult:(id)arg1 inSection:(id)arg2;
@property(nonatomic) SBSearchResultsActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(readonly) SPSearchResultSection *section; // @synthesize section=_section;
@property(readonly) SPSearchResult *result; // @synthesize result=_result;
- (void)cancelAnimated:(BOOL)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)performWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end
