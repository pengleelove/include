//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSearchResultsAction.h"

@class UIViewController;

@interface SBSearchResultsViewControllerAction : SBSearchResultsAction
{
    CDUnknownBlockType _completionBlock;
    UIViewController *_viewController;
}

@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

