//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEIndexGeniusResultsFinder.h"

@class NSArray;

@interface IBAutomaticGeniusResultsFinder : IDEIndexGeniusResultsFinder
{
    NSArray *_observationTokens;
}

+ (Class)editorDocumentClass;
- (void).cxx_destruct;
- (void)findGeniusResultsForEditorDocument:(id)arg1 selectedDocumentLocations:(id)arg2;
- (void)primitiveInvalidate;
- (void)unregisterDocumentAndSelectionObservations;
- (void)registerObservationsWithDocument:(id)arg1 andLocations:(id)arg2;
- (BOOL)_getUpdateGeniusResultsPhaseOneBlock:(CDUnknownBlockType *)arg1 phaseTwoBlock:(CDUnknownBlockType *)arg2 phaseThreeBlock:(CDUnknownBlockType *)arg3;
- (void)considerObjectForAssistantDisplay:(id)arg1 forSelectedObject:(id)arg2 usingDocStructure:(id)arg3 andAddToDictionary:(id)arg4;
- (id)editorDocument;

@end

