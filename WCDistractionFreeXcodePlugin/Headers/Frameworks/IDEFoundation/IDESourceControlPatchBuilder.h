//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEWorkspace, NSMutableDictionary, NSOperationQueue, NSString;

@interface IDESourceControlPatchBuilder : NSObject
{
    IDEWorkspace *_workspace;
    NSMutableDictionary *_treeNodes;
    NSMutableDictionary *_itemNodes;
    NSOperationQueue *_queue;
    BOOL _resolved;
    NSString *_message;
    NSString *_name;
}

+ (id)patchWithLocation:(id)arg1 workspace:(id)arg2 error:(id *)arg3;
@property BOOL resolved; // @synthesize resolved=_resolved;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)filePath;
- (id)buildAtFilePath:(id)arg1 withError:(id *)arg2;
- (id)buildWithError:(id *)arg1;
- (void)_processInfoForItems:(id)arg1 inTree:(id)arg2;
- (void)addDiffDescriptors:(id)arg1 forLocation:(id)arg2;
- (void)addItems:(id)arg1 forTree:(id)arg2;
- (id)nodeForTree:(id)arg1;
- (id)nodeForItem:(id)arg1;
- (id)_itemNodeFromWrapper:(id)arg1 withInfo:(id)arg2 parent:(id)arg3;
- (id)_treeNodeFromWrapper:(id)arg1 forTree:(id)arg2 withInfo:(id)arg3;
- (id)_scanRelativeItemFilePathsFromWrapper:(id)arg1;
- (id)_bestTreeInWorkspaceForFileWrapper:(id)arg1;
- (id)_patchWithWrapper:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithWorkspace:(id)arg1;

@end

