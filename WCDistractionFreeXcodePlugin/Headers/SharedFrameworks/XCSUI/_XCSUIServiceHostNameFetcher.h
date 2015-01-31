//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString, XCSService;

@interface _XCSUIServiceHostNameFetcher : NSObject
{
    NSMutableData *_fetchedData;
    XCSService *_service;
    NSString *_knownConnectionAddress;
}

@property(copy) NSString *knownConnectionAddress; // @synthesize knownConnectionAddress=_knownConnectionAddress;
@property(retain) XCSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)fetchCanonicalName;

@end

