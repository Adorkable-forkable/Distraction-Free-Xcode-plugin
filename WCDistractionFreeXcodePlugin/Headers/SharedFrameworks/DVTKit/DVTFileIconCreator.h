//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DVTFileIconCreator : NSObject
{
}

+ (BOOL)_checkIfDirty:(id)arg1;
+ (id)iconForDVTFilePath:(id)arg1 fileDataTypeHint:(id)arg2 decorated:(BOOL)arg3;
+ (id)iconForDVTFilePath:(id)arg1 fileDataTypeHint:(id)arg2;
+ (id)iconForFileType:(id)arg1;
+ (id)_iconForFileType:(id)arg1 isDirty:(BOOL)arg2 isMissing:(BOOL)arg3;
+ (id)_baseIconForFileType:(id)arg1;
+ (id)overriderImageProviderClassByUTI;
+ (id)_xcodeBundleIconForFileType:(id)arg1;
+ (id)iconWithBaseIcon:(id)arg1 badgeIcon:(id)arg2 isDirty:(BOOL)arg3;
+ (id)iconWithBaseIcon:(id)arg1 badgeIcon:(id)arg2;
+ (id)_iconWithBaseIcon:(id)arg1 badgeIcon:(id)arg2 isDirty:(BOOL)arg3 isMissing:(BOOL)arg4;
+ (void)initialize;

@end

