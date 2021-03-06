/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewController.h>

@class NSIndexPath, PUGridMagnifiedView;

@interface PUGridMagnifiedImageViewController : UIViewController {

	BOOL _canShowFullScreen;
	id _delegate;
	NSIndexPath* _itemIndexPath;
	CGFloat _magnifiedYOffset;
	int _imageFormat;
	CGFloat _shadowRadius;
	CGFloat _shadowOpacity;
	PUGridMagnifiedView* _magnifiedView;
	CGPoint _gestureWindLocation;
	CGSize _magnifiedSize;
	CGSize _shadowOffset;
	CGPoint _lastLocation;
	CGRect _itemWindFrame;
	CGRect _trackingWindFrame;
	UIEdgeInsets _magnifiedDragEdgeInsets;

}

@property (assign,nonatomic,__weak) id delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGPoint gestureWindLocation;                       //@synthesize gestureWindLocation=_gestureWindLocation - In the implementation block
@property (nonatomic,retain) NSIndexPath * itemIndexPath;                       //@synthesize itemIndexPath=_itemIndexPath - In the implementation block
@property (assign,nonatomic) CGRect itemWindFrame;                              //@synthesize itemWindFrame=_itemWindFrame - In the implementation block
@property (nonatomic,readonly) BOOL canShowFullScreen;                          //@synthesize canShowFullScreen=_canShowFullScreen - In the implementation block
@property (assign,nonatomic) CGRect trackingWindFrame;                          //@synthesize trackingWindFrame=_trackingWindFrame - In the implementation block
@property (assign,nonatomic) CGFloat magnifiedYOffset;                            //@synthesize magnifiedYOffset=_magnifiedYOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets magnifiedDragEdgeInsets;              //@synthesize magnifiedDragEdgeInsets=_magnifiedDragEdgeInsets - In the implementation block
@property (assign,nonatomic) int imageFormat;                                   //@synthesize imageFormat=_imageFormat - In the implementation block
@property (assign,nonatomic) CGSize magnifiedSize;                              //@synthesize magnifiedSize=_magnifiedSize - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                               //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) CGFloat shadowRadius;                                //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) CGFloat shadowOpacity;                               //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (nonatomic,retain) PUGridMagnifiedView * magnifiedView;               //@synthesize magnifiedView=_magnifiedView - In the implementation block
@property (assign,nonatomic) CGPoint lastLocation;                              //@synthesize lastLocation=_lastLocation - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)shadowOffset;
-(void)loadView;
-(void)setShadowOpacity:(CGFloat)arg1 ;
-(void)setShadowRadius:(CGFloat)arg1 ;
-(CGFloat)shadowRadius;
-(int)imageFormat;
-(id)initWithDelegate:(id)arg1 ;
-(void)setItemWindFrame:(CGRect)arg1 ;
-(void)setGestureWindLocation:(CGPoint)arg1 ;
-(void)setItemIndexPath:(id)arg1 ;
-(void)beginMagnification;
-(void)continueMagnification;
-(void)endMagnification;
-(BOOL)canShowFullScreen;
-(id)itemIndexPath;
-(void)prepareForRelease;
-(CGRect)magnifiedImageWindFrame;
-(void)hideMagnifiedThumbnailWithAnimation:(BOOL)arg1 ;
-(UIEdgeInsets)magnifiedDragEdgeInsets;
-(void)setMagnifiedDragEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setImageFormat:(int)arg1 ;
-(CGFloat)magnifiedYOffset;
-(void)setMagnifiedYOffset:(CGFloat)arg1 ;
-(void)setMagnifiedSize:(CGSize)arg1 ;
-(void)setTrackingWindFrame:(CGRect)arg1 ;
-(void)setupMagnifiedView;
-(CGPoint)gestureWindLocation;
-(CGRect)itemWindFrame;
-(id)magnifiedView;
-(BOOL)gestureInNewLocation;
-(void)setLastLocation:(CGPoint)arg1 ;
-(void)setMagnifiedView:(id)arg1 ;
-(id)installMagnifiedView;
-(id)imageForMagnifyLocation:(CGPoint)arg1 ;
-(CGSize)magnifiedSize;
-(CGFloat)shadowOpacity;
-(CGPoint)lastLocation;
-(CGRect)trackingWindFrame;
-(BOOL)isValidMagnifyLocation:(CGPoint)arg1 ;
-(id)imageForIndexPath:(id)arg1 ;
-(void).cxx_destruct;
@end

