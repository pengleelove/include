/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotosUI/PhotosUI-Structs.h>
@interface PUPhotosSharingViewControllerSpec : NSObject {

	BOOL _maximizeImageHeight;
	int _fastImageFormat;
	int _qualityImageFormat;
	int _zoomingImageFormat;
	CGFloat _interItemSpacing;

}

@property (nonatomic,readonly) int fastImageFormat;                        //@synthesize fastImageFormat=_fastImageFormat - In the implementation block
@property (nonatomic,readonly) int qualityImageFormat;                     //@synthesize qualityImageFormat=_qualityImageFormat - In the implementation block
@property (nonatomic,readonly) int zoomingImageFormat;                     //@synthesize zoomingImageFormat=_zoomingImageFormat - In the implementation block
@property (nonatomic,readonly) CGFloat interItemSpacing;                     //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (nonatomic,readonly) BOOL maximizeImageHeight;                   //@synthesize maximizeImageHeight=_maximizeImageHeight - In the implementation block
@property (nonatomic,readonly) CGSize selectionBadgeSize; 
@property (nonatomic,readonly) UIOffset selectionBadgeOffset; 
@property (nonatomic,readonly) unsigned selectionBadgeCorner; 
-(CGFloat)interItemSpacing;
-(int)fastImageFormat;
-(int)qualityImageFormat;
-(BOOL)embedsActivityViewForOrientation:(int)arg1 ;
-(CGSize)selectionBadgeSize;
-(UIOffset)selectionBadgeOffset;
-(BOOL)maximizeImageHeight;
-(int)zoomingImageFormat;
-(UIEdgeInsets)collectionViewLayoutContentInsetForOrientation:(int)arg1 ;
-(unsigned)selectionBadgeCorner;
-(BOOL)allowsInterfaceRotation;
@end

