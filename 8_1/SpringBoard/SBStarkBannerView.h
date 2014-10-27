//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBDateLabelDelegate.h"
#import "SBStarkBannerItemObserver.h"
#import "SBUIBannerView.h"

@class NSString, SBStarkBannerItem, SBStarkBannerViewButton, SBUIBannerContext, UIImageView, UILabel, UILabel<SBBulletinDateLabel>;

@interface SBStarkBannerView : UIView <SBStarkBannerItemObserver, SBDateLabelDelegate, SBUIBannerView>
{
    SBUIBannerContext *_context;
    SBStarkBannerItem *_bannerItem;
    UIImageView *_categoryImageView;
    UILabel *_titleLabel;
    float _titleAscender;
    UILabel *_subTitleLabel;
    float _subTitleAscender;
    SBStarkBannerViewButton *_okButton;
    SBStarkBannerViewButton *_actionButton;
    struct UIEdgeInsets _contentInsets;
    UILabel<SBBulletinDateLabel> *_relevanceDateLabel;
    unsigned int _interactionAffordances;
}

- (void)dateLabelDidChange:(id)arg1;
- (void)starkBannerItemDidReloadDisplayProperties:(id)arg1;
- (BOOL)shouldBorrowScreen;
- (id)bannerContext;
- (void)_selectControl;
- (BOOL)canBecomeFirstResponder;
- (BOOL)_hasKnob;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_layoutForButton:(id)arg1 contentFrame:(struct CGRect)arg2;
- (BOOL)_shouldShowOKButton;
- (void)_setRelevanceDate:(id)arg1;
- (id)_defaultRelevanceDateFont;
- (id)_titleFont;
- (BOOL)_hasSubtitle;
- (struct UIEdgeInsets)_contentInsetsForActionType:(int)arg1;
- (struct UIEdgeInsets)_categoryImageInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

