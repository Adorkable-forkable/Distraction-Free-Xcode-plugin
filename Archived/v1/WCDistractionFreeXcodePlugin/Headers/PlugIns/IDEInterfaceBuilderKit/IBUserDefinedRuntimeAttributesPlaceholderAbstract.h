//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAttributePlaceholder.h>

@class NSArray;

@interface IBUserDefinedRuntimeAttributesPlaceholderAbstract : IBAttributePlaceholder
{
    float _orderPriority;
    NSArray *_userDefinedRuntimeAttributes;
}

@property(nonatomic) float orderPriority; // @synthesize orderPriority=_orderPriority;
@property(retain, nonatomic) NSArray *userDefinedRuntimeAttributes; // @synthesize userDefinedRuntimeAttributes=_userDefinedRuntimeAttributes;
- (void).cxx_destruct;
- (id)archiveConnection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 andUserDefinedRuntimeAttributes:(id)arg2;

@end

