//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface SBKnownWidgetsStore : NSObject
{
    NSMutableSet *_knownWidgets;
}

+ (id)sharedStore;
- (id)_defaultWidgets;
- (id)_knownWidgetsFilePath;
- (void)saveWidgetsState;
- (void)clearKnownWidgets;
- (void)setWidgetAsKnown:(id)arg1;
- (BOOL)isWidgetKnown:(id)arg1;
- (void)dealloc;
- (id)init;

@end

