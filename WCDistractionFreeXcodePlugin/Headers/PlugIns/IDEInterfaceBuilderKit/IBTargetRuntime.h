//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBIdiom, IBPlatform, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IBTargetRuntime : NSObject
{
    NSMutableDictionary *_imageRequestersByScaleFactor;
    BOOL _installedColorList;
    NSObject<OS_dispatch_queue> *_asynchronousRequestQueue;
    NSMutableDictionary *_requestProxiesByScaleFactor;
}

+ (id)targetRuntimeWithIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)asynchronousRequestQueue;
- (id)imageRequesterWithScaleFactor:(id)arg1;
- (Class)imageRequestProcessorClass;
- (id)asynchronousRequestProxyAttachingIfNeededForScaleFactor:(id)arg1 queue:(id)arg2;
- (id)attachToToolProxyForScaleFactor:(id)arg1 isForLiveViews:(BOOL)arg2 queue:(id)arg3 assertOnFailureToAttach:(BOOL)arg4 assertOnPostLaunchRequestFailures:(BOOL)arg5 error:(id *)arg6;
- (id)toolProxyManager;
- (id)displayNameForUserInterfaceStyle;
- (id)nextPreviewableTargetRuntime;
- (id)alternatePreviewableTargetRuntimes;
- (id)connectionClasses;
- (id)segueClasses;
@property(readonly) id <DVTFontTextFieldDataSource> fontDataSource;
- (void)installColorListIfNeeded;
- (id)colorList;
- (struct CGSize)canvasViewFramePaddingSizeForOverlayScrollers;
- (id)archiveVariantIdentifier;
- (id)archiveIdentifier;
- (id)identifier;
@property(readonly, nonatomic) IBIdiom *idiom;
@property(readonly, nonatomic) IBPlatform *platform;
- (void)dealloc;
- (id)init;
- (id)targetRuntimeWithIdiom:(id)arg1;

@end

