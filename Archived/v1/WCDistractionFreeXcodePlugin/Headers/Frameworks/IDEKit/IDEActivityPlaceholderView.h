//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEActivityView, IDEWorkspaceWindowController, NSString;

@interface IDEActivityPlaceholderView : NSView <DVTInvalidation>
{
    IDEWorkspaceWindowController *_workspaceWindowController;
    IDEActivityView *_activityView;
}

+ (void)initialize;
@property(retain) IDEWorkspaceWindowController *workspaceWindowController; // @synthesize workspaceWindowController=_workspaceWindowController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)hitTest:(struct CGPoint)arg1;
- (double)_offsetFromTopOfWindowInFullScreen;
- (double)_offsetFromTopOfWindow;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)sizeAndPositionActivityView;
- (void)sizeToFitToolbarDisplayMode:(unsigned long long)arg1 sizeMode:(unsigned long long)arg2;
- (Class)_activityViewClass;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

