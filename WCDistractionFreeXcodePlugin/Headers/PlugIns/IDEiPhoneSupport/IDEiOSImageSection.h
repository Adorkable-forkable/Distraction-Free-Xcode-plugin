//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSArray, NSImage, NSMutableDictionary, NSString;

@interface IDEiOSImageSection : NSObject <DVTInvalidation>
{
    NSMutableDictionary *_plistAdaptersByDevice;
    int _adapterType;
    NSString *_title;
    NSString *_groupTitle;
    NSArray *_rows;
    id <IDEiOSImageSectionDelegate> _delegate;
}

+ (void)initialize;
+ (int)sectionTypeForGroupTitle:(id)arg1;
+ (id)warningImageIcon;
+ (id)sectionInfoFromURL:(id)arg1;
+ (id)sectionForDictionary:(id)arg1 groupTitle:(id)arg2;
@property __weak id <IDEiOSImageSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)imageBaseNameForRow:(id)arg1;
- (BOOL)requiresBaseImageNameForRow:(id)arg1;
@property(readonly, copy, nonatomic) NSImage *image;
@property(nonatomic) long long applyShineEffect;
- (id)allPlistAdapters;
- (id)plistAdapterForDevice:(id)arg1;
@property(readonly) int adapterType; // @synthesize adapterType=_adapterType;
@property(readonly) int sectionType;
@property(readonly, nonatomic) BOOL supportsShine;
- (id)infoPlistCoordinator;
- (void)deleteImagesInPlist;
- (BOOL)isRowVisible:(id)arg1;
- (BOOL)hasVisibleRows;
- (id)visibleRows;
- (BOOL)isRowVisible:(id)arg1 iPhoneTargeted:(BOOL)arg2 iPadTargeted:(BOOL)arg3;
- (BOOL)hasVisibleRowsWithiPhoneTargeted:(BOOL)arg1 iPadTargeted:(BOOL)arg2;
- (void)addFilePathToInfoPlist:(id)arg1 forRow:(id)arg2;
- (void)refresh;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

