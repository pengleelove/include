//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIController.h"

@interface SBUIController (SBUIAnimationController)
+ (id)_zoomViewWithIOSurfaceSnapshotOfApp:(id)arg1 includeStatusBar:(_Bool)arg2 includeBanner:(_Bool)arg3;
+ (id)_zoomViewForApplication:(id)arg1 screen:(id)arg2 interfaceOrientation:(long long)arg3 includeStatusBar:(_Bool)arg4 includeBanner:(_Bool)arg5 snapshotFrame:(struct CGRect *)arg6 canUseIOSurface:(_Bool)arg7 decodeImage:(_Bool)arg8;
+ (id)_zoomViewForApplication:(id)arg1 screen:(id)arg2 image:(id)arg3 interfaceOrientation:(long long)arg4 originalImageOrientation:(long long)arg5 currentImageOrientation:(long long)arg6 includeStatusBar:(_Bool)arg7 includeBanner:(_Bool)arg8 snapshotFrame:(struct CGRect *)arg9 canUseIOSurface:(_Bool)arg10 decodeImage:(_Bool)arg11;
+ (id)zoomViewForApplication:(id)arg1 withImage:(id)arg2 originalOrientation:(long long)arg3 currentOrientation:(long long)arg4;
+ (id)zoomViewForContextHostView:(id)arg1 application:(id)arg2 includeStatusBar:(_Bool)arg3 includeBanner:(_Bool)arg4;
+ (id)zoomViewForApplication:(id)arg1 includeStatusBar:(_Bool)arg2 includeBanner:(_Bool)arg3 canUseIOSurface:(_Bool)arg4 decodeImage:(_Bool)arg5;
+ (id)rawZoomViewForApplication:(id)arg1 onScreen:(id)arg2;
+ (struct CGRect)snapshotRectForOrientation:(long long)arg1 statusBarStyleRequest:(id)arg2 hidden:(_Bool)arg3;
@end
