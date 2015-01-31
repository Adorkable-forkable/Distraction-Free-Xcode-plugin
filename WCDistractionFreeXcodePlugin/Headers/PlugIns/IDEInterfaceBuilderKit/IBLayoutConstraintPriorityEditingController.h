//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAutolayoutPropertyEditingController.h>

@class NSString;

@interface IBLayoutConstraintPriorityEditingController : IBAutolayoutPropertyEditingController
{
    BOOL _isApplyingPriority;
    NSString *_priorityKeyPath;
}

@property(retain, nonatomic) NSString *priorityKeyPath; // @synthesize priorityKeyPath=_priorityKeyPath;
- (void).cxx_destruct;
- (void)decrementValue;
- (void)incrementValue;
- (void)didSelectPriorityItem:(id)arg1;
- (void)syncUIFromModel;
- (void)syncModelFromUI;
- (void)_applyPriorityUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)_makePrioritySuggestionMenuItems;
- (void)_populateClippingPreventionSuggestionMenuItems:(id)arg1;
- (void)populateMenu:(id)arg1;
- (void)populateObservingTokens:(id)arg1;
- (id)constraints;
- (void)setTextField:(id)arg1;
- (BOOL)_allObjectsSharePriority:(double *)arg1;
- (void)_setPriority:(double)arg1 forEditedObject:(id)arg2;
- (double)_priorityForEditedObject:(id)arg1;

@end

