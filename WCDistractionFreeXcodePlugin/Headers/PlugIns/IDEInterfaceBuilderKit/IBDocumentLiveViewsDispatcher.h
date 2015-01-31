//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IBDocument, NSMutableDictionary, NSOrderedSet, NSString;

@interface IBDocumentLiveViewsDispatcher : NSObject <DVTInvalidation>
{
    NSMutableDictionary *_debugSessionsByIdentifier;
    IBDocument *_document;
    NSOrderedSet *_activeDebuggingSessions;
}

+ (id)_queueForLaunchingLiveViewsTools;
+ (void)initialize;
@property(copy, nonatomic) NSOrderedSet *activeDebuggingSessions; // @synthesize activeDebuggingSessions=_activeDebuggingSessions;
@property(readonly, nonatomic) __weak IBDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)refreshLiveViews;
- (BOOL)canRefreshLiveViews;
- (void)_debugLiveViews:(id)arg1 invokedFromTabController:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)_createAndAddSessionForDebuggingViews:(id)arg1;
- (void)_attachToLiveViewsTool:(id)arg1 toDebugViews:(id)arg2 session:(id)arg3 fromDeviceProcessInformation:(id)arg4 runDestination:(id)arg5 invokedInTabController:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;
- (id)_titleForDebuggingViews:(id)arg1;
- (void)_registerObserverForObject:(id)arg1 keyPath:(id)arg2 inContextOfSessionWithIdentifier:(id)arg3 handlerBlock:(CDUnknownBlockType)arg4;
- (void)_stopObservingDebugSessionWithIdentifier:(id)arg1;
- (void)_didFinishAttachingToLiveViewsTool:(id)arg1 toDebugViews:(id)arg2 session:(id)arg3 sessionIdentifier:(id)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)sendDebugRequestsForView:(id)arg1 marshalledRepresentation:(id)arg2 tool:(id)arg3 queue:(id)arg4;
- (id)_runDestinationForAttachingToPlatform:(id)arg1;
- (id)liveViewsManager;
- (void)_findProcessInformationForAttachingToLiveViewsTool:(id)arg1 runDestination:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_launchLiveViewsToolForTargetRuntime:(id)arg1 builtBundleInstances:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeActiveDebuggingSession:(id)arg1;
- (void)_addActiveDebuggingSession:(id)arg1;
- (void)debugLiveViewsGivenSelection:(id)arg1 invokedFromTabController:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (BOOL)canDebugLiveViewsGivenSelection:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

