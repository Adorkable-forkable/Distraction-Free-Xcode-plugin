//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTTextCompletionItemInfoProvider.h"

@interface IDEQuickHelpIndexCompletionItemInfoProvider : NSObject <DVTTextCompletionItemInfoProvider>
{
}

- (void)_observeQuickHelpControllerForContent:(id)arg1 altContent:(id)arg2 width:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)infoViewControllerForAssociatedUSRs:(id)arg1 descriptionText:(id)arg2 width:(double)arg3 context:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)infoViewControllerForCompletionItemName:(id)arg1 container:(id)arg2 symbolKind:(id)arg3 displayText:(id)arg4 descriptionText:(id)arg5 width:(double)arg6 context:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end

