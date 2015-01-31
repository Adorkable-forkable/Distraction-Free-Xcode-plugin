//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

#import "NSTextViewDelegate.h"

@class NSString;

@interface DVTStepperTextField : NSTextField <NSTextViewDelegate>
{
    unsigned long long _scrubberMode;
    float _v0;
    float _delta;
    double _minValue;
    double _maxValue;
    double _increment;
}

+ (Class)cellClass;
@property double increment; // @synthesize increment=_increment;
@property double maxValue; // @synthesize maxValue=_maxValue;
@property double minValue; // @synthesize minValue=_minValue;
- (void)textDidEndEditing:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (BOOL)_eventLocationIsOverMinusOrPlusButton:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)beginMouseDragScrubbingWithEvent:(id)arg1;
- (void)_setValueSendingAction:(double)arg1;
- (void)updateValueWithEvent:(id)arg1;
- (float)checkBounds:(float)arg1;
- (void)resetCursorRects;
- (void)setMode:(unsigned long long)arg1;
- (BOOL)becomeFirstResponder;
- (void)doCommandBySelector:(SEL)arg1;
- (void)_increment;
- (void)_decrement;
- (double)_incrementToUse;
@property(readonly) double defaultIncrement;
- (BOOL)isOpaque;
- (void)_dvtStepperTextField_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

