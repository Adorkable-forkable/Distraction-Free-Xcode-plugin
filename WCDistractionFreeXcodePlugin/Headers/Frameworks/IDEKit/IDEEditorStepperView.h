//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

#import "DVTInvalidation.h"

@class DVTGradientImageButton, DVTObservingToken, DVTStackBacktrace, NSArrayController, NSString, NSView;

@interface IDEEditorStepperView : DVTLayoutView_ML <DVTInvalidation>
{
    DVTGradientImageButton *_leftArrowButton;
    DVTGradientImageButton *_rightArrowButton;
    NSView *_centerView;
    NSArrayController *_arrayController;
    DVTObservingToken *_countObservingToken;
    BOOL _drawRightBorder;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanMove;
+ (id)_arrowButtonWithDirection:(BOOL)arg1;
@property(nonatomic) BOOL drawRightBorder; // @synthesize drawRightBorder=_drawRightBorder;
@property(retain) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)setGradientStyle:(int)arg1;
- (void)selectPrevious:(id)arg1;
- (void)selectNext:(id)arg1;
- (BOOL)canMove;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)newCenterView;
- (void)layoutBottomUp;
- (struct CGSize)centerViewSizeInHeight:(double)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

