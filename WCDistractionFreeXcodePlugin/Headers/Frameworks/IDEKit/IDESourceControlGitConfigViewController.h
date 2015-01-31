//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class DVTBorderedView, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, DVTTableView, IDEControlGroup, IDESourceControlCreateGitRepositoryOperationInfo, IDESourceControlOperationWindow, IDESourceControlWorkingCopyConfiguration, IDESourceControlWorkingTree, NSArray, NSButton, NSImage, NSMenuItem, NSMutableArray, NSOperationQueue, NSPopUpButton, NSString, NSTextField, NSWindow;

@interface IDESourceControlGitConfigViewController : DVTViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    DVTTableView *_remotesTableView;
    DVTBorderedView *_glassBarBorderedView;
    DVTGradientImagePopUpButton *_addButton;
    DVTGradientImageButton *_removeButton;
    IDEControlGroup *_controlGroup;
    NSWindow *_newRemoteWindow;
    NSTextField *_remoteNameField;
    NSTextField *_remoteAddressField;
    NSButton *_newRemoteOKButton;
    IDESourceControlWorkingTree *_workingTree;
    IDESourceControlWorkingCopyConfiguration *_workingCopyConfiguration;
    NSMutableArray *_remotes;
    NSMutableArray *_remotesToDelete;
    IDESourceControlOperationWindow *_createRemoteWindow;
    NSTextField *_localRemoteNameField;
    NSPopUpButton *_serverPopup;
    NSMenuItem *_loadingItem;
    DVTObservingToken *_serversObservingToken;
    NSOperationQueue *_operationQueue;
    IDESourceControlCreateGitRepositoryOperationInfo *_operationInfo;
    NSTextField *_createRemoteWindowStatusText;
    BOOL _shouldHideServerWarningButton;
    BOOL _canCreateQueryComplete;
    BOOL _canCreateRepositoryOnServer;
    BOOL _localRemoteNameGood;
    BOOL _inProgress;
    id _selectedServer;
    NSArray *_servers;
    NSImage *_warningImage;
}

+ (id)keyPathsForValuesAffectingShouldHideServerWarningButton;
+ (id)defaultViewNibName;
+ (void)initialize;
@property(nonatomic) BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(nonatomic) BOOL localRemoteNameGood; // @synthesize localRemoteNameGood=_localRemoteNameGood;
@property(retain, nonatomic) NSImage *warningImage; // @synthesize warningImage=_warningImage;
@property(nonatomic) BOOL canCreateRepositoryOnServer; // @synthesize canCreateRepositoryOnServer=_canCreateRepositoryOnServer;
@property(nonatomic) BOOL canCreateQueryComplete; // @synthesize canCreateQueryComplete=_canCreateQueryComplete;
@property(nonatomic) BOOL shouldHideServerWarningButton; // @synthesize shouldHideServerWarningButton=_shouldHideServerWarningButton;
@property(retain, nonatomic) NSArray *servers; // @synthesize servers=_servers;
@property(retain, nonatomic) id selectedServer; // @synthesize selectedServer=_selectedServer;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)removeRemote:(id)arg1;
- (void)displayError:(id)arg1 forWindow:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)addExistingRemote:(id)arg1;
- (void)okAddRemote:(id)arg1;
- (void)cancelAddRemote:(id)arg1;
- (void)createNewRemote:(id)arg1;
- (void)cancelCreateRemote:(id)arg1;
- (void)okCreateRemote:(id)arg1;
- (void)createRemoteGitRepositoryForWorkingCopy:(id)arg1 withName:(id)arg2 localRemoteName:(id)arg3 pushingToServer:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)displayCannotCreateRepositorySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)displayCannotCreateRepositorySheet:(id)arg1;
- (void)_checkCanCreateRepository;
- (void)addNewServerAction:(id)arg1;
- (void)serverSelectedAction:(id)arg1;
- (void)selectServer:(id)arg1;
- (void)_updateServersPopup;
- (void)_clearServersPopup;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_setupViewsWithWorkingTrees;
- (id)currentWCC;
- (void)updateBoundWorkingCopyConfiguration;
- (void)updateBoundWorkingTree;
- (id)dvtExtraBindings;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

