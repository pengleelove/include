//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBLockScreenPluginLoader : NSObject
{
}

- (Class)_principleClassFromBundleWithName:(id)arg1;
- (BOOL)_verifyPrincipleClass:(Class)arg1 fromBundleWithName:(id)arg2;
- (id)_pluginControllerFromPrincipalClass:(Class)arg1;
- (id)pluginControllerForName:(id)arg1 activationContext:(id)arg2;

@end

