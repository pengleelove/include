/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class PLImageCacheList, PLImageLoadingThread;

@interface PLImageCache : NSObject
{
    PLImageLoadingThread *_loader;
    PLImageCacheList *_cacheList;
}

- (id)newImageLoadingQueue;
- (void)_addImageToCache:(id)arg1;
- (void)invalidateCachedImageForSource:(id)arg1 asset:(id)arg2;
- (id)cachedImageFromSource:(id)arg1 forAsset:(id)arg2 loadIfNeeded:(_Bool)arg3 synchronously:(_Bool)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6;
- (id)_cachedImageFromSource:(id)arg1 asset:(id)arg2;
- (void)_uncacheImage:(id)arg1;
- (id)_imageLoader;
- (void)dealloc;
- (id)init;

@end

