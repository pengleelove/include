//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplication.h"

@interface SBApplication (DefaultImage)
+ (id)_fallbackOrientationStringForOrientation:(long long)arg1 fallbackOrientation:(long long *)arg2;
+ (void)removalTimerFired:(id)arg1;
+ (void)setRemovalTimer:(double)arg1 forSnapshotWithPath:(id)arg2;
+ (void)removeCachedSnapshotsMatchingPath:(id)arg1;
+ (void)removeCachedSnapshotsForScreen:(id)arg1;
+ (void)removeCachedSnapshotSurfaceForPath:(id)arg1;
+ (void)removeCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2;
+ (void)setCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2;
+ (void)setCachedSnapshotSurface:(void *)arg1 forPath:(id)arg2 purgeAfter:(double)arg3;
+ (void *)cachedSnapshotSurfaceForPath:(id)arg1;
+ (id)systemSnapshotsDirectory;
- (id)_infoplist_defaultPNGPathForScreen:(id)arg1 launchingOrientation:(long long)arg2 imageOrientation:(long long *)arg3 resultingScale:(double *)arg4;
- (_Bool)_infoplist_defaultPNGCalculateContainsCorgiImage;
- (struct CGSize)_screenSizeForScreen:(id)arg1;
- (id)_sanitizedImageNameFromName:(id)arg1 withExtension:(id)arg2 actualExtension:(out id *)arg3;
- (id)_pathForExistingImageInCandidates:(id)arg1 forScreen:(id)arg2 launchingOrientation:(long long)arg3 imageOrientation:(long long *)arg4 resultingScale:(double *)arg5;
- (void)_addImageName:(id)arg1 toImageNamesArray:(id)arg2 screen:(id)arg3;
- (id)_cachedImageForSnapshotPath:(id)arg1 screen:(id)arg2;
- (id)_imageForSnapshotAtPath:(id)arg1 fileOrientation:(long long *)arg2;
- (id)_defaultPNGNameUsingFallbacks:(id)arg1;
- (id)_defaultImageName:(id)arg1;
- (id)_scaleSuffixForScale:(double)arg1;
- (long long)_fallbackImageOrientationForLaunchingOrientation:(long long)arg1;
- (id)_fallbackOrientationImageTagForLaunchingOrientation:(long long)arg1;
- (id)_orientationImageTagForLaunchingOrientation:(long long)arg1;
- (void)_imageOrientationParametersForLaunchingOrientation:(long long)arg1 imageTag:(id *)arg2 fallbackImageTag:(id *)arg3 fallbackOrientation:(long long *)arg4;
- (id)_imageNamesFromInfoDictionary:(id)arg1;
- (_Bool)isSnapshotPresentForLaunchingInterfaceOrientation:(long long)arg1;
- (id)_defaultImageInfoForScreen:(id)arg1 launchingOrientation:(long long)arg2;
- (_Bool)_shouldUseSnapshotForAppLaunchIfPossible;
- (id)_defaultPNGImageInfoForScreen:(id)arg1 launchingOrientation:(long long)arg2;
- (id)_snapshotImageInfoForScreen:(id)arg1 named:(id)arg2 launchingOrientation:(long long)arg3;
- (id)_snapshotImageInfoForScreen:(id)arg1 launchingOrientation:(long long)arg2;
- (id)_defaultPNGForScreen:(id)arg1 launchingOrientation:(long long)arg2 orientation:(long long *)arg3;
- (id)_defaultPNGPathForScreen:(id)arg1 launchingOrientation:(long long)arg2 imageOrientation:(long long *)arg3 resultingScale:(double *)arg4;
- (id)_defaultPNGNameFromSuspensionSettings;
- (_Bool)_applicationDoesNotHaveRestorationArchive;
- (id)_defaultPNGNameWhenActivatingFromURLSetting:(id)arg1;
- (id)_defaultPNGNameFromSearchDomainLaunchInfo:(id)arg1;
- (id)_defaultPNGNameFromActivationSettings;
- (id)_snapshotImageWithImageName:(id)arg1 forScreen:(id)arg2 launchingOrientation:(long long)arg3 originalOrientation:(long long *)arg4 currentOrientation:(long long *)arg5;
- (id)_snapshotImageForSnapshotImageInfo:(id)arg1 originalOrientation:(out long long *)arg2 currentOrientation:(out long long *)arg3;
- (id)fileSnapshotForImageInfo:(id)arg1 originalOrientation:(out long long *)arg2 currentOrientation:(out long long *)arg3;
- (id)cachedSnapshotForImageInfo:(id)arg1 originalOrientation:(out long long *)arg2 currentOrientation:(out long long *)arg3;
- (id)snapshotImageInfosWithImageName:(id)arg1 forScreen:(id)arg2 launchingOrientation:(long long)arg3;
@end
