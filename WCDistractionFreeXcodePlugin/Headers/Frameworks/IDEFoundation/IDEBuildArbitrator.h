//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTMapTable, NSOperationQueue;

@interface IDEBuildArbitrator : NSObject
{
    NSOperationQueue *_serializationQueue;
    DVTMapTable *_fileProducingBuildTasksByFilePath;
    DVTMapTable *_registeringBuildersByFilePath;
    DVTMapTable *_registeredFilePathsByBuilder;
}

+ (id)sharedBuildArbitrator;
+ (void)initialize;
- (void).cxx_destruct;
- (void)unregisterAllBuildTasksForBuilder:(id)arg1;
- (void)unregisterBuildTaskWhichProducesFileAtPath:(id)arg1 forBuilder:(id)arg2;
- (id)registerBuildTask:(id)arg1 asProducerOfFileAtPath:(id)arg2 forBuilder:(id)arg3;
- (id)init;

@end

