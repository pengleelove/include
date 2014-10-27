//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBControlCenterSectionViewController.h"

#import "SBCCButtonControllerDelegate.h"
#import "_UISettingsKeyPathObserver.h"

@class NSMutableArray, NSMutableDictionary, NSString, SBControlCenterButtonSectionSettings;

@interface SBCCButtonSectionController : SBControlCenterSectionViewController <SBCCButtonControllerDelegate, _UISettingsKeyPathObserver>
{
    NSMutableArray *_modules;
    NSMutableDictionary *_modulesByID;
    NSMutableDictionary *_moduleControllersByID;
    SBControlCenterButtonSectionSettings *_settings;
}

+ (Class)buttonControllerClass;
+ (Class)viewClass;
@property(retain, nonatomic) SBControlCenterButtonSectionSettings *settings; // @synthesize settings=_settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)_updateSettings;
- (void)buttonController:(id)arg1 publishStatusUpdate:(id)arg2;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (id)_sortKeyForModule:(id)arg1;
- (id)_controllerForModule:(id)arg1;
- (void)_deactivateModule:(id)arg1;
- (void)_activateModule:(id)arg1;
- (void)_addButtonModule:(id)arg1;
- (id)_allButtonModules;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)view;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

