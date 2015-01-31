//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTDKDetailViewController.h"

#import "DTDKTableViewDelegate.h"
#import "DVTWindowActivationStateObserver.h"

@class DVTDevice, DVTObservingToken, NSArray, NSArrayController, NSButton, NSSearchField, NSSplitView, NSString, NSTextView, NSView;

@interface IDEiPhoneOrganizerCrashLogViewController : DTDKDetailViewController <DTDKTableViewDelegate, DVTWindowActivationStateObserver>
{
    DVTObservingToken *_selectionToken;
    DVTObservingToken *_migrationToken;
    DVTObservingToken *_needsSymbolicationToken;
    id _lastSelectedObject;
    id <DVTCancellable> _windowActivationStateObserverCancellable;
    _Bool _isArrayControllerSetUp;
    NSArray *_sortDescriptors;
    NSArrayController *_arrayController;
    DVTDevice *_device;
    NSSearchField *_searchField;
    NSTextView *_textView;
    NSSplitView *_splitView;
    NSView *_listContainerView;
    NSButton *_deviceLogsButton;
    NSButton *_allLogsButton;
}

+ (id)defaultViewNibName;
+ (id)nibName;
+ (void)initialize;
@property(retain) NSButton *allLogsButton; // @synthesize allLogsButton=_allLogsButton;
@property(retain) NSButton *deviceLogsButton; // @synthesize deviceLogsButton=_deviceLogsButton;
@property(retain) NSView *listContainerView; // @synthesize listContainerView=_listContainerView;
@property(retain) NSSplitView *splitView; // @synthesize splitView=_splitView;
@property(retain) NSTextView *textView; // @synthesize textView=_textView;
@property(retain) NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) DVTDevice *device; // @synthesize device=_device;
@property(retain) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
- (void).cxx_destruct;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (void)allLogsAction:(id)arg1;
- (void)deviceLogsAction:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)unsymbolicateLog:(id)arg1;
- (void)resymbolicateLog:(id)arg1;
- (void)importLog:(id)arg1;
- (void)exportUnsymbolicatedLog:(id)arg1;
- (void)exportLog:(id)arg1;
- (void)setupSelectionButton:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)tableView:(id)arg1 contextMenuForRows:(id)arg2;
- (void)tableView:(id)arg1 deleteRows:(id)arg2;
- (void)resymbolicateRepresentedItems:(id)arg1;
- (void)exportRepresentedItems:(id)arg1;
- (void)deleteRepresentedItems:(id)arg1;
- (void)unsymbolicateItems:(id)arg1;
- (void)resymbolicateItems:(id)arg1;
- (void)exportItems:(id)arg1 unsymbolicated:(BOOL)arg2;
- (void)deleteItems:(id)arg1;
@property(copy) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_clearArrayController;
- (void)_setupArrayController;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)_symbolicateSelectedLog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

