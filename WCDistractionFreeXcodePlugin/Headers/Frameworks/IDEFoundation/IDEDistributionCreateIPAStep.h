//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionProcessingStep.h>

@class NSString;

@interface IDEDistributionCreateIPAStep : IDEDistributionProcessingStep
{
    NSString *name;
}

+ (id)processingStep;
@property(copy) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (_Bool)processWithContext:(id)arg1 andError:(id *)arg2;

@end

