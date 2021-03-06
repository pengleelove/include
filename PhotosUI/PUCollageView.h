/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, NSPointerArray;

@interface PUCollageView : UIView {

	CGFloat _spacing;
	int _numberOfItems;
	int __numberOfImageViews;
	NSArray* __imageViews;
	NSPointerArray* __imageSizes;
	CGSize _collageSize;

}

@property (assign,nonatomic) CGSize collageSize;                          //@synthesize collageSize=_collageSize - In the implementation block
@property (assign,nonatomic) CGFloat spacing;                               //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) int numberOfItems;                           //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (nonatomic,readonly) int _numberOfImageViews;                   //@synthesize _numberOfImageViews=__numberOfImageViews - In the implementation block
@property (nonatomic,readonly) NSArray * _imageViews;                     //@synthesize _imageViews=__imageViews - In the implementation block
@property (nonatomic,readonly) NSPointerArray * _imageSizes;              //@synthesize _imageSizes=__imageSizes - In the implementation block
+(int)maximumNumberOfItems;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)numberOfItems;
-(CGFloat)spacing;
-(void)setSpacing:(CGFloat)arg1 ;
-(void)setNumberOfItems:(int)arg1 ;
-(void)setImageSize:(CGSize)arg1 forItemAtIndex:(int)arg2 ;
-(void)setImage:(id)arg1 forItemAtIndex:(int)arg2 ;
-(id)_imageSizes;
-(CGSize)collageSize;
-(id)_imageViews;
-(CGSize)imageSizeForItemAtIndex:(int)arg1 ;
-(int)_numberOfImageViews;
-(void)setCollageSize:(CGSize)arg1 ;
-(void).cxx_destruct;
@end

