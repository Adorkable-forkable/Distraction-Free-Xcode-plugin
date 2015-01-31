//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceResourceItem.h>

@class GPUFunctionInfo, NSString;

@interface GPUTraceShaderItem : GPUTraceResourceItem
{
    unsigned long long _shaderType;
    NSString *_infoLog;
    GPUFunctionInfo *_functionInfo;
}

@property(readonly, nonatomic) GPUFunctionInfo *functionInfo; // @synthesize functionInfo=_functionInfo;
@property(readonly, nonatomic) NSString *infoLog; // @synthesize infoLog=_infoLog;
@property(readonly, nonatomic) unsigned long long shaderType; // @synthesize shaderType=_shaderType;
- (void).cxx_destruct;
- (void)releaseRealizedResources;
- (id)program;
- (id)associatedTraceItem;
- (id)parentResourceGroup;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initFunctionWithParent:(id)arg1 shaderType:(unsigned long long)arg2 functionInfo:(id)arg3 label:(id)arg4 sharegroupID:(unsigned long long)arg5;
- (id)initShaderWithParent:(id)arg1 shaderType:(unsigned long long)arg2 infoLog:(const char *)arg3 label:(id)arg4 sharegroupID:(unsigned long long)arg5;
- (id)_initWithParent:(id)arg1 shaderType:(unsigned long long)arg2 infoLog:(const char *)arg3 functionInfo:(id)arg4 label:(id)arg5 type:(unsigned int)arg6 sharegroupID:(unsigned long long)arg7;

@end

