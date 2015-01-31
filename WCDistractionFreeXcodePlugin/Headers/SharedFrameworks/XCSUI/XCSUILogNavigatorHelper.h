//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEContinuousIntegrationLogNavigatorHelper.h"

@class NSString;

@interface XCSUILogNavigatorHelper : NSObject <IDEContinuousIntegrationLogNavigatorHelper>
{
}

- (int)statusOfIntegration:(id)arg1;
- (BOOL)isIntegrationFinished:(id)arg1;
- (void)performAction:(SEL)arg1 forNavigableItemSelection:(id)arg2 withNavigator:(id)arg3;
- (id)titleForNavigableItemSelection:(id)arg1 action:(SEL)arg2;
- (BOOL)navigableItemSelection:(id)arg1 allowsAction:(SEL)arg2;
- (void)additionalIntegrationsOnServerForBotNavigable:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadMoreBotsInBotNavigable:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)legacyBotNavigablesForLegacyBots:(id)arg1;
- (id)navigableItemForIntegration:(id)arg1;
- (id)navigableItemForBot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

