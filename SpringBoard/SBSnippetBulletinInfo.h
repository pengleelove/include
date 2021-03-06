/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBBBBulletinInfo.h"

@class UIImage;

@interface SBSnippetBulletinInfo : SBBBBulletinInfo
{
    CGFloat _viewHeight;
    struct CGRect _textRect;
    struct CGSize _referenceSize;
    UIImage *_icon;
}

@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void)populateReusableView:(id)arg1;
- (CGFloat)heightForReusableViewInTableView:(id)arg1;
- (BOOL)_isLayoutValidWithReferenceSize:(struct CGSize)arg1;
- (id)_representedBulletin;
- (void)invalidateCachedLayoutData;
- (Class)reusableViewClass;
- (id)identifier;
- (void)dealloc;

@end

