//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocumentGroupMemberWrapper.h>

@class IBStoryboardDocument;

@interface IBStoryboardGroupMemberWrapper : IBDocumentGroupMemberWrapper
{
}

- (id)navigableDocumentLocation;
- (id)childWrappers;
- (id)image;
- (id)name;
- (void)didReorderDescendantConnection:(id)arg1;
- (void)didAddOrRemoveDescendantConnection:(id)arg1;
- (id)originatedSegueMemberWrappers;
@property(readonly) IBStoryboardDocument *document;

@end

