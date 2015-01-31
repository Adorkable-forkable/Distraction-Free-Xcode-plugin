//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class SCNGeometry;

@protocol SCNLevelOfDetailJSExport <JSExport>
+ (id)levelOfDetailWithGeometry:(SCNGeometry *)arg1 worldSpaceDistance:(double)arg2;
+ (id)levelOfDetailWithGeometry:(SCNGeometry *)arg1 screenSpaceRadius:(double)arg2;
@property(readonly) double worldSpaceDistance;
@property(readonly) double screenSpaceRadius;
@property(readonly) SCNGeometry *geometry;
- (id)copy;
@end

