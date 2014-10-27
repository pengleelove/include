//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UITableViewCellActionButton.h"

@class SBNotificationSeparatorView, UIImageView;

@interface SBTableViewCellDismissActionButton : _UITableViewCellActionButton
{
    UIImageView *_dismissImageView;
    SBNotificationSeparatorView *_topSeparatorView;
    SBNotificationSeparatorView *_bottomSeparatorView;
    BOOL _shouldUseNarrowWidth;
    BOOL _drawsTopSeparator;
    BOOL _drawsBottomSeparator;
    Class _separatorClass;
}

@property(nonatomic) BOOL drawsBottomSeparator; // @synthesize drawsBottomSeparator=_drawsBottomSeparator;
@property(nonatomic) BOOL drawsTopSeparator; // @synthesize drawsTopSeparator=_drawsTopSeparator;
@property(retain, nonatomic) Class separatorClass; // @synthesize separatorClass=_separatorClass;
@property(nonatomic) BOOL shouldUseNarrowWidth; // @synthesize shouldUseNarrowWidth=_shouldUseNarrowWidth;
- (void)_updateSeparator:(id *)arg1 withVisibility:(BOOL)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

