//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTCancellable.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface IDEActivityLogSectionObservation : NSObject <DVTCancellable>
{
    CDUnknownBlockType _block;
}

+ (id)sharedNullObservation;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (CDUnknownBlockType)block;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

