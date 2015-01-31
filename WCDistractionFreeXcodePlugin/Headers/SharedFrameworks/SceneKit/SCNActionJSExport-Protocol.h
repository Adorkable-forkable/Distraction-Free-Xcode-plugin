//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, SCNAction;

@protocol SCNActionJSExport <JSExport>
+ (SCNAction *)customActionWithDuration:(double)arg1 actionBlock:(void (^)(SCNNode *, double))arg2;
+ (SCNAction *)javaScriptActionWithScript:(NSString *)arg1 duration:(double)arg2;
+ (SCNAction *)runBlock:(void (^)(SCNNode *))arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
+ (SCNAction *)runBlock:(void (^)(SCNNode *))arg1;
+ (SCNAction *)removeFromParentNode;
+ (SCNAction *)waitForDuration:(double)arg1 withRange:(double)arg2;
+ (SCNAction *)waitForDuration:(double)arg1;
+ (SCNAction *)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (SCNAction *)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (SCNAction *)fadeOutWithDuration:(double)arg1;
+ (SCNAction *)fadeInWithDuration:(double)arg1;
+ (SCNAction *)repeatActionForever:(SCNAction *)arg1;
+ (SCNAction *)repeatAction:(SCNAction *)arg1 count:(unsigned long long)arg2;
+ (SCNAction *)group:(NSArray *)arg1;
+ (SCNAction *)sequence:(NSArray *)arg1;
+ (SCNAction *)scaleTo:(double)arg1 duration:(double)arg2;
+ (SCNAction *)scaleBy:(double)arg1 duration:(double)arg2;
+ (SCNAction *)rotateToAxisAngle:(struct SCNVector4)arg1 duration:(double)arg2;
+ (SCNAction *)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3)arg2 duration:(double)arg3;
+ (SCNAction *)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(BOOL)arg5;
+ (SCNAction *)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (SCNAction *)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (SCNAction *)moveTo:(struct SCNVector3)arg1 duration:(double)arg2;
+ (SCNAction *)moveBy:(struct SCNVector3)arg1 duration:(double)arg2;
+ (SCNAction *)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
@property(nonatomic) double speed;
@property(nonatomic) long long timingMode;
@property(nonatomic) double duration;
- (id)copy;
- (SCNAction *)reversedAction;
@end

