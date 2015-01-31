//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MTLToolsServices/DYMTLResourceObject.h>

#import "DYFrameBuffer.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface DYMTLFramebuffer : DYMTLResourceObject <DYFrameBuffer>
{
    unsigned long long _visibilityResultBuffer;
    NSDictionary *_attachmentsDict;
}

@property(readonly, nonatomic) NSDictionary *attachmentsDict; // @synthesize attachmentsDict=_attachmentsDict;
@property(readonly, nonatomic) unsigned long long visibilityResultBuffer; // @synthesize visibilityResultBuffer=_visibilityResultBuffer;
- (void).cxx_destruct;
- (id)initWithProperties:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long containerID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) int internalID;
@property(readonly, nonatomic) BOOL isStatic;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long objectID;
@property(readonly, nonatomic) NSMutableDictionary *properties;
@property(readonly, nonatomic) unsigned int resourceType;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned int target;

@end

