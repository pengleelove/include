//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBAction, SBBBBulletinInfo, SBBBSectionInfo, SBBulletinViewController;

@protocol SBBulletinViewControllerDelegate <NSObject>

@optional
- (int)layoutModeForBulletinViewController:(SBBulletinViewController *)arg1;
- (BOOL)bulletinViewController:(SBBulletinViewController *)arg1 didSelectAction:(BBAction *)arg2 forBulletin:(SBBBBulletinInfo *)arg3 inSection:(SBBBSectionInfo *)arg4;
- (BOOL)bulletinViewController:(SBBulletinViewController *)arg1 didSelectBulletin:(SBBBBulletinInfo *)arg2 inSection:(SBBBSectionInfo *)arg3;
- (BOOL)bulletinViewController:(SBBulletinViewController *)arg1 shouldHighlightBulletin:(SBBBBulletinInfo *)arg2 inSection:(SBBBSectionInfo *)arg3;
- (int)bulletinViewController:(SBBulletinViewController *)arg1 replacementAnimationForBulletin:(SBBBBulletinInfo *)arg2 inSection:(SBBBSectionInfo *)arg3;
- (int)bulletinViewController:(SBBulletinViewController *)arg1 removalAnimationForBulletin:(SBBBBulletinInfo *)arg2 inSection:(SBBBSectionInfo *)arg3;
- (int)bulletinViewController:(SBBulletinViewController *)arg1 insertionAnimationForBulletin:(SBBBBulletinInfo *)arg2 inSection:(SBBBSectionInfo *)arg3;
@end

