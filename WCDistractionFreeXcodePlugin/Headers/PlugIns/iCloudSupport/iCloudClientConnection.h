//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSError, NSInputStream, NSMutableData, NSMutableSet, NSOutputStream, NSSet, NSString;

@interface iCloudClientConnection : NSObject <NSStreamDelegate>
{
    BOOL _isOpen;
    BOOL _hasSpaceAvailable;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    unsigned long long _outputBufferCapacity;
    id <iCloudClientConnectionDelegate> _delegate;
    NSString *_name;
    NSError *_error;
    NSMutableSet *_runLoopModesMutable;
    NSMutableData *_outputBuffer;
}

+ (id)errorWithCode:(long long)arg1;
@property(nonatomic) BOOL hasSpaceAvailable; // @synthesize hasSpaceAvailable=_hasSpaceAvailable;
@property(retain, nonatomic) NSMutableData *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property(readonly, nonatomic) NSMutableSet *runLoopModesMutable; // @synthesize runLoopModesMutable=_runLoopModesMutable;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL isOpen; // @synthesize isOpen=_isOpen;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) id <iCloudClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long outputBufferCapacity; // @synthesize outputBufferCapacity=_outputBufferCapacity;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendCommand:(id)arg1;
- (void)processOutput;
- (void)processInput;
- (void)close;
- (void)closeWithError:(id)arg1;
- (void)didCloseWithError:(id)arg1;
- (void)willCloseWithError:(id)arg1;
- (void)open;
@property(readonly, copy, nonatomic) NSSet *runLoopModes;
- (void)removeRunLoopMode:(id)arg1;
- (void)addRunLoopMode:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

