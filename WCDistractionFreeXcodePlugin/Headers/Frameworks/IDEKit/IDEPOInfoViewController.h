//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTFilePathField, DVTReplacementView, NSTextField;

@interface IDEPOInfoViewController : IDEViewController
{
    DVTBorderedView *_infoHeader;
    DVTBorderedView *_secondaryHeader;
    NSTextField *_projectName;
    NSTextField *_locationTitle;
    DVTFilePathField *_locationField;
    NSTextField *_statusTitle;
    NSTextField *_statusField;
    DVTReplacementView *_replacementView;
}

- (void).cxx_destruct;
- (void)deleteAllSnapshotsAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)deleteBuildArenaAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)deleteAllSnapshots:(id)arg1;
- (void)deleteDerivedData:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)dvtExtraBindings;

@end

