//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "DVTWindowActivationStateObserver.h"

@class DVTNotificationToken, DVTStackBacktrace, DVTViewController<DVTMainViewControllerDrawingStrategyDelegate>, NSString;

@interface DVTMainViewControllerDrawingStrategy : NSObject <DVTWindowActivationStateObserver, DVTInvalidation>
{
    BOOL _monitorWholeTree;
    BOOL _treeHasMainViewController;
    BOOL _viewControllerIsMain;
    BOOL _windowIsKey;
    BOOL _appIsActive;
    BOOL _installed;
    id <DVTCancellable> _windowActivationToken;
    id <DVTCancellable> _mainViewControllerToken;
    DVTNotificationToken *_appActivationObservation;
    DVTNotificationToken *_appDeactivationObservation;
    DVTViewController<DVTMainViewControllerDrawingStrategyDelegate> *_delegate;
}

+ (void)initialize;
@property(readonly) DVTViewController<DVTMainViewControllerDrawingStrategyDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)mainViewControllerChanged;
- (void)appActivationChanged;
@property(readonly) BOOL shouldHaveActiveAppearance;
- (void)setFlag:(char *)arg1 toValue:(BOOL)arg2;
- (void)hostViewControllerDidInstall;
- (void)hostViewControllerWillUninstall;
- (void)primitiveInvalidate;
- (id)initWithDelegate:(id)arg1 monitorWholeTree:(BOOL)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

