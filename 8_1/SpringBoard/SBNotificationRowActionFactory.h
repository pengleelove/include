//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBNotificationRowActionFactory : NSObject
{
    BOOL _shouldUseNarrowWidthForLonelyDismissAction;
    BOOL _shouldUseExteriorDismissActionSeparators;
    Class _separatorClass;
}

+ (id)notificationCenterRowActionFactory;
+ (id)lockScreenRowActionFactory;
@property(nonatomic) BOOL shouldUseExteriorDismissActionSeparators; // @synthesize shouldUseExteriorDismissActionSeparators=_shouldUseExteriorDismissActionSeparators;
@property(nonatomic) BOOL shouldUseNarrowWidthForLonelyDismissAction; // @synthesize shouldUseNarrowWidthForLonelyDismissAction=_shouldUseNarrowWidthForLonelyDismissAction;
@property(retain, nonatomic) Class separatorClass; // @synthesize separatorClass=_separatorClass;
- (Class)_actionButtonClassForAppearance:(id)arg1;
- (id)_dismissActionForBulletin:(id)arg1 shouldUseNarrowWidth:(BOOL)arg2 isFirst:(BOOL)arg3 isLast:(BOOL)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_backgroundColorForActionStyle:(int)arg1;
- (BOOL)_isCustomAppearance:(id)arg1;
- (unsigned int)_tableViewStyleForBulletinActionStyle:(int)arg1;
- (int)_actionButtonStyleForAppearance:(id)arg1 primaryActionExists:(BOOL)arg2;
- (id)_rowActionWithBBAction:(id)arg1 button:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_rowActionWithBBAction:(id)arg1 bulletinActionStyle:(int)arg2 bulletinContext:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_updateSeparatorsForDismissButton:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3;
- (id)rowActionsForAlertItem:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (id)rowActionsForBulletin:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (void)dealloc;

@end

