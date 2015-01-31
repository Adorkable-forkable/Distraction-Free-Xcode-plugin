//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

@class IBAutoCompletingComboBoxDataSource, IBButtonComboBox, IDEInspectorKeyPath, NSTextField;

@interface IBAbstractCustomClassInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IBAutoCompletingComboBoxDataSource *_moduleComboBoxDatasource;
    IBButtonComboBox *_classComboBox;
    IBAutoCompletingComboBoxDataSource *_classComboBoxDatasource;
    IBButtonComboBox *_moduleComboBox;
    NSTextField *_classComboBoxLabel;
    NSTextField *_moduleComboBoxLabel;
}

@property(retain) NSTextField *moduleComboBoxLabel; // @synthesize moduleComboBoxLabel=_moduleComboBoxLabel;
@property(retain) NSTextField *classComboBoxLabel; // @synthesize classComboBoxLabel=_classComboBoxLabel;
@property(retain) IBButtonComboBox *moduleComboBox; // @synthesize moduleComboBox=_moduleComboBox;
@property(retain) IBAutoCompletingComboBoxDataSource *classComboBoxDatasource; // @synthesize classComboBoxDatasource=_classComboBoxDatasource;
@property(retain) IBButtonComboBox *classComboBox; // @synthesize classComboBox=_classComboBox;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)refreshClassComboBox;
- (void)refreshModuleComboBox;
- (void)userDidChangeModuleName:(id)arg1;
- (void)userDidChangeClassName:(id)arg1;
- (void)revealCustomClassInEditor:(id)arg1;
- (void)applyValidatedModuleName:(id)arg1 toMember:(id)arg2;
- (void)applyValidatedClassName:(id)arg1 toMember:(id)arg2;
- (void)applyValidatedClassName:(id)arg1 moduleName:(id)arg2 toMember:(id)arg3;
- (id)formattedClassSymbolByApplyingValidatedClassName:(id)arg1 moduleName:(id)arg2 toMemberWithRuntimeClassName:(id)arg3 moduleProvider:(id)arg4;
- (BOOL)anyCustomClasses;
- (BOOL)allObjectsCanChangeClassName;
- (id)commonModuleProvider;
- (id)commonModuleName;
- (id)commonEffectiveUnformattedClassName;
- (id)commonEffectiveClassName;
- (id)commonRuntimeClassName;
- (id)commonBaseClassOfMembers;
- (id)leastDerivedValidClassName;
- (BOOL)isLegalClassName:(id)arg1 minimumName:(id)arg2;
- (BOOL)isCompleteType:(id)arg1;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (double)baseline;
- (id)inspectedDocumentMembers;
- (BOOL)canMemberChangeCustomClassName:(id)arg1;
- (id)externalCustomClassModuleProviderForMember:(id)arg1;
- (id)externalCustomFormattedClassNameForMember:(id)arg1;
- (id)externalCustomFormattedClassSymbolForMember:(id)arg1;
- (void)setExternalCustomFormattedClassSymbol:(id)arg1 forMember:(id)arg2;
- (id)externalCustomClassNameForMember:(id)arg1;
- (id)runtimeClassNameForMember:(id)arg1;
- (id)effectiveFormattedClassSymbolForMember:(id)arg1;
- (id)effectiveUnformattedClassNameForMember:(id)arg1;
- (id)effectiveClassNameForMember:(id)arg1;
- (id)nibName;
- (id)nibBundle;
- (id)inspectedDocument;
- (id)inspectorController;
- (id)activeWorkspaceTabController;
- (id)workspaceWindowController;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

