//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableArray, NSMutableDictionary;

@interface DTStacks : NSObject <NSFastEnumeration>
{
    NSMutableArray *_orderedStacks;
    NSMutableArray *_orderedKeys;
    NSMutableDictionary *_keyedStacks;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (id)allKeys;
- (id)stackForIndexedKey:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)stacksWithRange:(struct _NSRange)arg1;
- (void)enumerateStacksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStacksUsingBlock:(CDUnknownBlockType)arg1;
- (void)appendValue:(id)arg1 forIndexedKey:(id)arg2;

@end

