//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditorDocument.h"

#import "DVTSourceLandmarkProvider.h"
#import "DVTSourceTextViewDelegate.h"
#import "DVTTextFindable.h"
#import "DVTTextReplacable.h"
#import "DVTTextStorageDelegate.h"
#import "IDEDiagnosticControllerDataSource.h"
#import "IDEDocumentStructureProviding.h"
#import "IDEObjectiveCSourceCodeGenerationDestination.h"


@interface IDESourceCodeDocument : IDEEditorDocument <IDEDiagnosticControllerDataSource, IDEDocumentStructureProviding, DVTTextFindable, DVTTextReplacable, DVTTextStorageDelegate, IDEObjectiveCSourceCodeGenerationDestination, DVTSourceLandmarkProvider, DVTSourceTextViewDelegate>
{
    DVTTextStorage *_textStorage;
    DVTSourceCodeLanguage *_language;
    IDEDiagnosticController *_diagnosticController;
    NSArray *_sourceLandmarks;
    NSMutableSet *_pendingAdjustNodeTypeRequests;
    IDESourceCodeAdjustNodeTypesRequest *_lastAdjustNodeTypesRequest;
    struct _NSRange _prefetchedNodeTypesLineRange;
    DVTGeneratedContentProvider *_generatedContentProvider;
    IDEGeneratedContentStatusContext *_generatedContentStatusContext;
    BOOL _generatesContent;
    DVTObservingToken *_generatedContentProviderDisplayNameObserver;
    DVTNotificationToken *_indexDidIndexWorkspaceObserver;
    DVTNotificationToken *_indexDidChangeObserver;
    unsigned long long _lineEndings;
    unsigned long long _textEncoding;
    BOOL _usesLanguageFromFileDataType;
    BOOL _languageSupportsSymbolColoring;
    BOOL _setUpPrintInfoDefaults;
    BOOL _isUnicodeWithBOM;
    BOOL _isUnicodeBE;
    BOOL _droppedRecomputableState;
    DVTDelayedInvocation *_dropRecomputableState;
    DVTObservingToken *_firstEditorWorkspaceToken;
    DVTObservingToken *_firstEditorWorkspaceActiveSchemeToken;
    DVTNotificationToken *_firstEditorWorkspaceActiveSchemeBuildablesDidChangeToken;
    NSMutableArray *_registeredEditors;
    BOOL _notifiesWhenClosing;
    NSSet *__firstEditorWorkspacePreferredIndexableIdentifiers;
    NSDictionary *__firstEditorWorkspaceBuildSettings;
}

+ (id)keyPathsForValuesAffecting_firstEditorWorkspace;
+ (id)keyPathsForValuesAffectingSourceLanguageServiceContext;
+ (id)syntaxColoringPrefetchLogAspect;
+ (id)topLevelStructureLogAspect;
+ (void)initialize;
@property(copy) NSDictionary *_firstEditorWorkspaceBuildSettings; // @synthesize _firstEditorWorkspaceBuildSettings=__firstEditorWorkspaceBuildSettings;
@property(copy) NSSet *_firstEditorWorkspacePreferredIndexableIdentifiers; // @synthesize _firstEditorWorkspacePreferredIndexableIdentifiers=__firstEditorWorkspacePreferredIndexableIdentifiers;
@property BOOL notifiesWhenClosing; // @synthesize notifiesWhenClosing=_notifiesWhenClosing;
@property(retain) IDEGeneratedContentStatusContext *generatedContentStatusContext; // @synthesize generatedContentStatusContext=_generatedContentStatusContext;
@property BOOL generatesContent; // @synthesize generatesContent=_generatesContent;
@property(readonly) struct _NSRange prefetchedNodeTypesLineRange; // @synthesize prefetchedNodeTypesLineRange=_prefetchedNodeTypesLineRange;
@property(nonatomic) unsigned long long lineEndings; // @synthesize lineEndings=_lineEndings;
@property unsigned long long textEncoding; // @synthesize textEncoding=_textEncoding;
@property(nonatomic) BOOL usesLanguageFromFileDataType; // @synthesize usesLanguageFromFileDataType=_usesLanguageFromFileDataType;
@property(retain, nonatomic) DVTSourceCodeLanguage *language; // @synthesize language=_language;
@property(readonly) DVTTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void).cxx_destruct;
- (void)_delayedDropRecomputableState:(id)arg1;
- (void)_restoreRecomputableState;
- (void)_dropRecomputableState;
- (void)_documentMovingToForeground;
- (void)_documentMovingToBackground:(BOOL)arg1;
- (void)registerDocumentEditor:(id)arg1;
- (void)unregisterDocumentEditor:(id)arg1;
- (id)_firstEditorWorkspace;
- (id)_firstEditor;
- (id)sourceCodeGenerator:(id)arg1 commitInsertionOfSourceCodeForCompositeResult:(id)arg2 error:(id *)arg3;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCAtSynthesizeWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCPropertyDeclarationWithName:(id)arg2 type:(id)arg3 inClassNamed:(id)arg4 options:(id)arg5 error:(id *)arg6;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCPropertyReleaseForTeardownWithName:(id)arg2 type:(id)arg3 inClassNamed:(id)arg4 options:(id)arg5 error:(id *)arg6;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCInstanceVariableReleaseForTeardownWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_primitiveAddObjectiveCReleaseForTeardownMethodWithSourceCodeGenerator:(id)arg1 withReleaseCallCode:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCInstanceVariableDeclarationWithName:(id)arg2 type:(id)arg3 inClassNamed:(id)arg4 options:(id)arg5 error:(id *)arg6;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCClassMethodDefinitionWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCClassMethodDeclarationWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCInstanceMethodDefinitionWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_primitiveAppendObjectiveCSourceCode:(id)arg1 afterItem:(id)arg2 prependNewLine:(BOOL)arg3;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCInstanceMethodDeclarationWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_primitiveAddObjectiveCMethodSourceCode:(id)arg1 toClassItem:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)_primitiveAddObjectiveCSourceCode:(id)arg1 toClassItem:(id)arg2 withOptions:(id)arg3 insertAdditionalNewlineWhenInsertingWithAfterBeforeHint:(BOOL)arg4 insertAtEndWhenInsertingWithoutHint:(BOOL)arg5 insertAfterObjCBlockWhenInsertingAtBeginning:(BOOL)arg6 ignoreHintItemsConformingToSpecifications:(id)arg7 onlyConsiderItemsConformingToSpecifications:(id)arg8 error:(id *)arg9;
- (id)_insertObjectiveCSourceCode:(id)arg1 inTeardownMethodForClassNamed:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_teardownMethodNameForSourceCodeGeneratorWithOptions:(id)arg1;
- (BOOL)_hasObjCMethodImplementationForName:(id)arg1 forClassNamed:(id)arg2;
- (id)_objCMethodImplementationItemForName:(id)arg1 inClassItem:(id)arg2;
- (id)_insertObjCSourceCode:(id)arg1 inTopLevelOfClassItem:(id)arg2 withInsertAfterHint:(id)arg3 andInsertBeforeHint:(id)arg4 ignoreHintItemsConformingToSpecifications:(id)arg5 onlyConsiderItemsConformingToSpecifications:(id)arg6 insertAdditionalNewline:(BOOL)arg7 insertAtEndWhenInsertingWithoutHint:(BOOL)arg8 insertAfterObjCBlockWhenInsertingAtBeginning:(BOOL)arg9;
- (id)_insertObjCSourceCode:(id)arg1 inContainingSourceModelItem:(id)arg2 withInsertAfterHint:(id)arg3 andInsertBeforeHint:(id)arg4 ignoreHintItemsConformingToSpecifications:(id)arg5 onlyConsiderItemsConformingToSpecifications:(id)arg6 insertAdditionalNewline:(BOOL)arg7 fallbackInsertionBlock:(CDUnknownBlockType)arg8;
- (long long)_insertionHintMatchPriorityForObjCSourceModelItem:(id)arg1 givenInsertionHintItemName:(id)arg2 andLanguageSpecification:(id)arg3 ignoreItemsConformingToSpecifications:(id)arg4 onlyConsiderItemsConformingToSpecifications:(id)arg5;
- (id)_insertObjCSourceCode:(id)arg1 inTopLevelOfClassItem:(id)arg2 asCloseAsPossibleToLineNumber:(unsigned long long)arg3 error:(id *)arg4;
- (id)_insertObjCSourceCode:(id)arg1 inContainingSourceModelItem:(id)arg2 asCloseAsPossibleToLineNumber:(unsigned long long)arg3 firstPossibleItemToInsertBefore:(id)arg4 error:(id *)arg5;
- (id)_insertionHintForObjCSourceModelItem:(id)arg1;
- (id)_firstObjCSourceModelItemToInsertBeforeInInstanceVariableBlock:(id)arg1;
- (id)_firstTopLevelObjCInterfaceSourceModelItemToInsertBeforeInClassItem:(id)arg1;
- (id)_insertSourceCode:(id)arg1 atBeginningOfClassSourceModelItem:(id)arg2 insertOnNextLine:(BOOL)arg3 insertAfterObjCBlock:(BOOL)arg4;
- (id)_insertSourceCode:(id)arg1 atEndOfClassSourceModelItem:(id)arg2 insertOnNextLine:(BOOL)arg3;
- (id)_insertSourceCode:(id)arg1 atEndOfContainingSourceModelItem:(id)arg2 insertOnNextLine:(BOOL)arg3 beforeItemMatchingPredicateBlock:(CDUnknownBlockType)arg4;
- (id)_insertSourceCode:(id)arg1 atBeginningOfContainingSourceModelItem:(id)arg2 insertOnNextLine:(BOOL)arg3 afterItemMatchingPredicateBlock:(CDUnknownBlockType)arg4;
- (id)_primitiveInsertSourceCode:(id)arg1 atBeginning:(BOOL)arg2 ofContainingSourceModelItem:(id)arg3 insertOnNextLine:(BOOL)arg4 afterOrBeforeItemMatchingPredicateBlock:(CDUnknownBlockType)arg5;
- (id)textDocumentLocationForInsertingSourceCode:(id)arg1 atLocation:(unsigned long long)arg2;
- (id)_instanceVariableDeclarationBlockItemForClassItem:(id)arg1;
- (id)_objCCategoryImplementationClassModelItemForClassNamed:(id)arg1 categoryName:(id)arg2 error:(id *)arg3;
- (id)_objCCategoryInterfaceClassModelItemForClassNamed:(id)arg1 categoryName:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_objCImplementationClassModelItemForClassNamed:(id)arg1 error:(id *)arg2;
- (id)_objCInterfaceClassModelItemForClassNamed:(id)arg1 error:(id *)arg2;
- (id)_classModelItemForClassNamed:(id)arg1 withConditionBlock:(CDUnknownBlockType)arg2;
- (id)errorForNotFindingClassItemForClassNamed:(id)arg1 humanReadableClassItemType:(id)arg2;
- (id)supportedSourceCodeLanguagesForSourceCodeGeneration;
- (long long)defaultPropertyAccessControl;
- (id)emptyPrivateCopy;
- (id)privateCopy;
- (id)diffDataSource;
- (id)textViewWillReturnPrintJobTitle:(id)arg1;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)sourceLanguageServiceAvailabilityNotification:(BOOL)arg1 message:(id)arg2;
- (BOOL)textStorageShouldAllowEditing:(id)arg1;
- (void)textStorageDidUpdateSourceLandmarks:(id)arg1;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)updateChangeCount:(unsigned long long)arg1;
- (BOOL)replaceTextWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (BOOL)replaceFindResults:(id)arg1 inSelection:(struct _NSRange)arg2 withString:(id)arg3 withError:(id *)arg4;
- (BOOL)replaceFindResults:(id)arg1 withString:(id)arg2 withError:(id *)arg3;
- (BOOL)replaceFindResults:(id)arg1 withString:(id)arg2 inSelection:(struct _NSRange)arg3 withError:(id *)arg4;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (id)documentLocationFromCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)characterRangeFromDocumentLocation:(id)arg1;
- (id)updatedLocationFromLocation:(id)arg1 toTimestamp:(double)arg2;
- (id)indexCompatibleLocationFromLocation:(id)arg1;
- (id)editorCompatibleLocationFromLocation:(id)arg1;
- (void)prefetchNodeTypesExtraLines:(unsigned long long)arg1 upDirection:(BOOL)arg2 withContext:(id)arg3;
- (void)initialPrefetchNodeTypesForLineRange:(struct _NSRange)arg1 withContext:(id)arg2;
- (void)_prefetchNodeTypesForLineRange:(struct _NSRange)arg1 withContext:(id)arg2;
- (long long)nodeTypeForItem:(id)arg1 withContext:(id)arg2;
- (void)_adjustNodeTypeForIdentifierItem:(id)arg1 withContext:(id)arg2;
- (void)editorDocumentWillClose;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)_configureDocumentReadFromURL:(id)arg1 orData:(id)arg2 ofType:(id)arg3 usedEncoding:(unsigned long long)arg4 preferredLineEndings:(unsigned long long)arg5 readOutAttributes:(id)arg6;
- (id)_readOptionsDictionaryForURL:(id)arg1 preferredEncoding:(unsigned long long)arg2 inOutData:(id *)arg3;
- (unsigned long long)_lineEndingUsedInString:(id)arg1;
- (BOOL)canSaveAs;
- (BOOL)canSave;
@property(readonly) DVTPerformanceMetric *openingPerformanceMetric;
- (id)editedContents;
@property(readonly, copy) NSString *description;
- (id)displayName;
@property(readonly) NSArray *knownFileReferences;
- (struct _NSRange)lineRangeOfSourceLandmark:(id)arg1;
- (id)sourceLandmarkItemAtLineNumber:(unsigned long long)arg1;
- (id)sourceLandmarkItemAtCharacterIndex:(unsigned long long)arg1;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (void)invalidateAndDisableDiagnosticController;
- (void)invalidateDiagnosticController;
@property(retain) IDEDiagnosticController *diagnosticController; // @synthesize diagnosticController=_diagnosticController;
- (id)printInfo;
- (void)setTextEncoding:(unsigned long long)arg1 convertContents:(BOOL)arg2;
@property(readonly, nonatomic) NSDictionary *sourceLanguageServiceContext;
@property(readonly) DVTFileDataType *fileDataType;
- (id)init;
- (void)setSdefSupport_text:(id)arg1;
- (id)sdefSupport_text;
- (void)setSdefSupport_selection:(id)arg1;
- (id)sdefSupport_selection;
- (void)setSdefSupport_selectedParagraphRange:(id)arg1;
- (id)sdefSupport_selectedParagraphRange;
- (void)setSdefSupport_selectedCharacterRange:(id)arg1;
- (id)sdefSupport_selectedCharacterRange;
- (void)setSdefSupport_notifiesWhenClosing:(BOOL)arg1;
- (BOOL)sdefSupport_notifiesWhenClosing;
- (void)setSdefSupport_contents:(id)arg1;
- (id)sdefSupport_contents;
- (void)setSdefSupport_editorSettings:(id)arg1;
- (id)sdefSupport_editorSettings;
- (id)objectSpecifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSURL *fileURL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property unsigned long long supportedMatchingOptions;

@end

