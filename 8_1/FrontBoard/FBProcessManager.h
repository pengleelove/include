//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBApplicationProcessDelegate.h"
#import "FBApplicationProcessObserver.h"

@class BKSProcessAssertion, FBApplicationProcess, NSHashTable, NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface FBProcessManager : NSObject <FBApplicationProcessDelegate, FBApplicationProcessObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSHashTable *_observers;
    NSMapTable *_processesByPID;
    NSMapTable *_processesByBundleID;
    FBApplicationProcess *_systemAppProcess;
    BKSProcessAssertion *_systemAppProcessAssertion;
    FBApplicationProcess *_foregroundAppProcess;
    int _workspaceLocked;
    int _workspaceLockedToken;
}

+ (id)sharedInstance;
- (BOOL)ping;
- (id)createApplicationProcessForBundleID:(id)arg1;
- (id)allProcesses;
- (void)_queue_notifyObserversUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_removeProcess:(id)arg1 withBundleID:(id)arg2 pid:(int)arg3;
- (id)_serviceClientAddedWithPID:(int)arg1 isUIApp:(BOOL)arg2 isExtension:(BOOL)arg3 bundleID:(id)arg4;
- (void)_queue_addProcess:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createApplicationProcessForBundleID:(id)arg1 withExecutionContext:(id)arg2;
- (id)_queue_processForPID:(int)arg1;
- (id)processesForBundleIdentifier:(id)arg1;
- (id)_queue_processesForBundleIdentifier:(id)arg1;
- (void)_updateWorkspaceLockedState;
- (id)_serviceClientAddedWithAuditToken:(CDStruct_6ad76789 *)arg1;
- (BOOL)_isWorkspaceLocked;
- (void)applicationProcessWillLaunch:(id)arg1;
- (id)_serviceClientAddedWithConnection:(id)arg1;
- (id)processForPID:(int)arg1;
- (void)noteProcessDidExit:(id)arg1;
- (void)noteProcess:(id)arg1 didUpdateState:(id)arg2;
- (id)applicationProcessForPID:(int)arg1;
- (id)_systemServiceClientAdded:(id)arg1;
- (id)allApplicationProcesses;
- (id)applicationProcessesForBundleIdentifier:(id)arg1;
@property(readonly, retain, nonatomic) FBApplicationProcess *systemApplicationProcess; // @synthesize systemApplicationProcess=_systemAppProcess;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

