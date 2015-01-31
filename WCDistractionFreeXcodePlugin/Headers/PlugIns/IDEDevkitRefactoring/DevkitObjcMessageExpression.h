//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEDevkitRefactoring/DevkitExpression.h>

@class DevkitLocation, NSMutableArray, NSString;

@interface DevkitObjcMessageExpression : DevkitExpression
{
    NSString *_messageName;
    NSMutableArray *_keywordLocations;
    DevkitLocation *_lbracket;
    DevkitLocation *_rbracket;
}

- (void).cxx_destruct;
- (id)prettyPrint;
- (id)overallLocation;
- (id)rightBracketLocation;
- (id)leftBracketLocation;
- (void)setRightBracketLoc:(id)arg1;
- (void)setLeftBracketLoc:(id)arg1;
- (id)keywordLocations;
- (id)messageName;
- (void)setMessageName:(id)arg1;
- (id)init;

@end

