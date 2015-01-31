//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYTransport, DYTransportMessage, NSArray, NSDictionary, NSError, NSFileManager, NSMutableArray, NSMutableDictionary, NSPredicate, NSString, NSURL;

@interface DYFSStreamer : NSObject
{
    struct dispatch_queue_s *_queue;
    NSFileManager *_fileManager;
    DYTransport *_transport;
    DYTransportMessage *_initTransferAckMessage;
    NSMutableDictionary *_fileHandles;
    NSError *_deferredReceiveError;
    unsigned int _ownerUID;
    NSDictionary *_directoryAttributes;
    NSMutableArray *_urls;
    BOOL _isSender;
    BOOL _itemIsDirectory;
    BOOL _didInitiate;
    BOOL _invalid;
    NSURL *_url;
    NSString *_path;
    NSString *_destinationName;
    NSPredicate *_filenameFilter;
    NSString *_owner;
    unsigned long long _files;
    unsigned long long _bytes;
    unsigned long long _messages;
}

+ (void)denyTransfer:(id)arg1 transport:(id)arg2;
+ (id)streamItem:(id)arg1 withTransport:(id)arg2 destinationName:(id)arg3;
+ (id)streamItem:(id)arg1 withTransport:(id)arg2;
@property(readonly, nonatomic) unsigned long long messages; // @synthesize messages=_messages;
@property(readonly, nonatomic) unsigned long long bytes; // @synthesize bytes=_bytes;
@property(readonly, nonatomic) unsigned long long files; // @synthesize files=_files;
@property(copy, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSPredicate *filenameFilter; // @synthesize filenameFilter=_filenameFilter;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(readonly, retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSArray *urls; // @synthesize urls=_urls;
- (void)denyTransfer:(id)arg1;
- (id)receiveTransfer:(id)arg1;
- (BOOL)_createSymlinkWithAttributes:(id)arg1 error:(id *)arg2;
- (BOOL)_createDirectoryWithAttributes:(id)arg1 error:(id *)arg2;
- (BOOL)_createOrUpdateFileWithData:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (id)_resolveRelativePath:(id)arg1 error:(id *)arg2;
- (id)initiateTransfer;
- (BOOL)_sendCreateSymlinkMessage:(id)arg1 destination:(id)arg2 error:(id *)arg3;
- (BOOL)_sendCreateDirectoryMessage:(id)arg1 error:(id *)arg2;
- (BOOL)_sendFileAtURL:(id)arg1 relativePath:(id)arg2 error:(id *)arg3;
- (void)_invalidate;
- (void)_sendAbortMessageInReplyTo:(id)arg1 becauseOfError:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 transport:(id)arg2 asSender:(BOOL)arg3;

@end

