//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBApplicationLibrary, NSArray;

@protocol FBApplicationLibraryObserver <NSObject>

@optional
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 networkUsageDidChange:(BOOL)arg2;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 didRemoveApplications:(NSArray *)arg2;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 didReplaceApplications:(NSArray *)arg2 withApplications:(NSArray *)arg3;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 didAddApplications:(NSArray *)arg2;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 didCancelPlaceholders:(NSArray *)arg2;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 didAddPlaceholders:(NSArray *)arg2;
@end

