//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDocumentLocation, IDELogViewController, NSArray;

@protocol IDELogViewControllerDelegate <NSObject>
- (void)logViewController:(IDELogViewController *)arg1 selectedIndexPathsDidChange:(NSArray *)arg2;
- (DVTDocumentLocation *)logViewController:(IDELogViewController *)arg1 replacementDocumentLocationForOriginalDocumentLocation:(DVTDocumentLocation *)arg2;
@end

