//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IDEDownloadableContentTypeGroup : NSObject
{
    NSString *_typeName;
    NSArray *_downloadables;
}

@property(copy) NSArray *downloadables; // @synthesize downloadables=_downloadables;
@property(copy) NSString *typeName; // @synthesize typeName=_typeName;
- (void).cxx_destruct;
- (void)addDownloadableItem:(id)arg1;
- (void)removeDownloadables;

@end

