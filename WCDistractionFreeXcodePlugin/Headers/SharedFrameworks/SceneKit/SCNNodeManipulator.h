//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNManipulator.h>

__attribute__((visibility("hidden")))
@interface SCNNodeManipulator : SCNManipulator
{
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _xAxisToZAxisTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _yAxisToZAxisTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _xyPlaneToYZPlaneTransform
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _xyPlaneToXZPlaneTransform
    // Error parsing type: (?="axisMove"{?="selectedAxis"S"originalPosition""axisDirection""mouseDeltaVector"}"planeMove"{?="selectedPlane"S"originalPosition""planeNormal""pointInPlane""mouseDeltaVector"}"axisRotate"{?="selectedAxis"S"originalMouseLocation"{CGPoint="x"d"y"d}"rotationSign"f"originalRotation"{__C3DQuaternion="x"f"y"f"z"f"s"f}}), name: _actionData
    BOOL _isMouseDown;
    unsigned short _action;
}

- (BOOL)mouseUp:(CDStruct_811921b8)arg1;
- (BOOL)mouseDown:(CDStruct_811921b8)arg1;
- (BOOL)mouseDragged:(CDStruct_811921b8)arg1;
- (BOOL)mouseMoved:(CDStruct_811921b8)arg1;
- (void)draw;
- (id)copy;
- (id)init;

@end

