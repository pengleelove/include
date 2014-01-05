/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoSelectionManagerDelegate.h>

@class NSPointerArray, PUPhotoSelectionManager, NSOrderedSet, NSString;

@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerDelegate> {

	NSPointerArray* _observers;
	BOOL _selectingAssets;
	BOOL _selectingTargetAlbum;
	BOOL _targetAlbumIsNewLocalAlbum;
	int _status;
	PUPhotoSelectionManager* _photoSelectionManager;
	NSObject* _sourceAlbum;
	NSOrderedSet* _transferredAssets;
	NSObject* _targetAlbum;
	NSString* _localizedPrompt;
	int _promptLocation;
	/*^block*/ id _bannerGenerator;

}

@property (assign,nonatomic) int status;                                                             //@synthesize status=_status - In the implementation block
@property (getter=isSelectingAssets,nonatomic,readonly) BOOL selectingAssets;                        //@synthesize selectingAssets=_selectingAssets - In the implementation block
@property (getter=isSelectingTargetAlbum,nonatomic,readonly) BOOL selectingTargetAlbum;              //@synthesize selectingTargetAlbum=_selectingTargetAlbum - In the implementation block
@property (nonatomic,retain) PUPhotoSelectionManager * photoSelectionManager;                        //@synthesize photoSelectionManager=_photoSelectionManager - In the implementation block
@property (nonatomic,retain) NSObject<PLAlbumProtocol> * sourceAlbum;                                //@synthesize sourceAlbum=_sourceAlbum - In the implementation block
@property (nonatomic,copy) NSOrderedSet * transferredAssets;                                         //@synthesize transferredAssets=_transferredAssets - In the implementation block
@property (nonatomic,retain) NSObject<PLAlbumProtocol> * targetAlbum;                                //@synthesize targetAlbum=_targetAlbum - In the implementation block
@property (assign,nonatomic) BOOL targetAlbumIsNewLocalAlbum;                                        //@synthesize targetAlbumIsNewLocalAlbum=_targetAlbumIsNewLocalAlbum - In the implementation block
@property (nonatomic,copy) NSString * localizedPrompt;                                               //@synthesize localizedPrompt=_localizedPrompt - In the implementation block
@property (assign,nonatomic) int promptLocation;                                                     //@synthesize promptLocation=_promptLocation - In the implementation block
@property (nonatomic,copy) id bannerGenerator;                                                       //@synthesize bannerGenerator=_bannerGenerator - In the implementation block
-(id)init;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)isSelectingAssets;
-(void)removeSessionInfoObserver:(id)arg1 ;
-(void)addSessionInfoObserver:(id)arg1 ;
-(/*^block*/ id)bannerGenerator;
-(id)photoSelectionManager;
-(int)promptLocation;
-(id)localizedPrompt;
-(NSObject*)targetAlbum;
-(void)setPromptLocation:(int)arg1 ;
-(void)setBannerGenerator:(/*^block*/ id)arg1 ;
-(void)setPhotoSelectionManager:(id)arg1 ;
-(void)photoSelectionManagerSelectionDidChange:(id)arg1 ;
-(void)_enumerateObserversWithBlock:(/*^block*/ id)arg1 ;
-(BOOL)isSelectingTargetAlbum;
-(NSObject*)sourceAlbum;
-(void)setSourceAlbum:(NSObject*)arg1 ;
-(id)transferredAssets;
-(void)setTransferredAssets:(id)arg1 ;
-(void)setTargetAlbum:(NSObject*)arg1 ;
-(BOOL)targetAlbumIsNewLocalAlbum;
-(void)setTargetAlbumIsNewLocalAlbum:(BOOL)arg1 ;
-(void)setLocalizedPrompt:(id)arg1 ;
-(void).cxx_destruct;
@end
