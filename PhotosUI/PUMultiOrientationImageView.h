/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:06 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIView, UIImage;

@interface PUMultiOrientationImageView : UIView {

	NSArray* _orientedSubviews;
	UIView* _currentOrientedSubview;
	BOOL _allowsEdgeAntialiasing;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL allowsEdgeAntialiasing;              //@synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing - In the implementation block
-(void)setImage:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentMode:(int)arg1 ;
-(id)image;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(BOOL)allowsEdgeAntialiasing;
-(void)_updateLayout;
-(void)_updateSubviews;
-(void).cxx_destruct;
@end
