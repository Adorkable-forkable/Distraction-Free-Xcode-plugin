//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSArray, NSDictionary, SCNGeometry, SCNNode;

@protocol SCNPhysicsShapeJSExport <JSExport>
+ (id)shapeWithShapes:(NSArray *)arg1 transforms:(NSArray *)arg2;
+ (id)shapeWithNode:(SCNNode *)arg1 options:(NSDictionary *)arg2;
+ (id)shapeWithGeometry:(SCNGeometry *)arg1 options:(NSDictionary *)arg2;
- (id)copy;
@end

