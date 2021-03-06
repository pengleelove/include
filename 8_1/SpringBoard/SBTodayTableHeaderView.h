//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface SBTodayTableHeaderView : UIView
{
    UILabel *_dateLabel;
    UILabel *_lunarDateLabel;
    BOOL _isContentValid;
    struct CGRect _calculatedDateLabelFrame;
    BOOL _achievedPreferredDateLabelLayout;
    struct CGSize _sizeThatFitsCalculatedDateLabelFrame;
    struct CGRect _calculatedLunarDateLabelFrame;
    int _layoutMode;
}

+ (float)lunarDateBaselineOffset;
+ (id)defaultLunarDateFont;
+ (id)defaultDateFont;
+ (id)defaultTextColor;
+ (id)defaultBackgroundColor;
@property(nonatomic) int layoutMode; // @synthesize layoutMode=_layoutMode;
- (void)layoutSubviews;
- (void)_layoutLunarDateLabel;
- (struct CGRect)_lunarDateLabelFrameForBounds:(struct CGRect)arg1;
- (void)_layoutDateLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)_isCachedSizeThatFitsValidForSize:(struct CGSize)arg1;
- (struct CGRect)dateLabelFrameForBounds:(struct CGRect)arg1 force:(BOOL)arg2;
- (BOOL)_dateLabelNeedsLayoutForSize:(struct CGSize)arg1;
- (float)_dateLabelWidthForSize:(struct CGSize)arg1 layoutMode:(int)arg2;
- (id)lunarDateHeaderString;
- (BOOL)showsLunarDate;
- (id)lunarCalendarIdentifier;
- (id)dateHeaderAttributedStringOnSingleLine:(BOOL)arg1;
- (id)dateHeaderOnSingleLine:(BOOL)arg1;
- (void)invalidateContent;
- (void)_updateForContentCategorySizeDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

