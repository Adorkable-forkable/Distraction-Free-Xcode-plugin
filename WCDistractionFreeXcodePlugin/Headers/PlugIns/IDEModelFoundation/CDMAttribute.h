//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEModelFoundation/CDMProperty.h>

@class NSMutableArray, NSString;

@interface CDMAttribute : CDMProperty
{
    long long attributeType;
    NSString *defaultValueString;
    NSString *minValueString;
    NSString *maxValueString;
    NSString *regularExpressionString;
    NSString *valueTransformerName;
    NSMutableArray *attributeTypes;
    BOOL allowsExternalBinaryDataStorage;
}

+ (id)keyPathsForValuesAffectingInspectedAttributeType;
+ (id)keyPathsForValuesAffectingMaxValueObject;
+ (id)keyPathsForValuesAffectingMaxValueString;
+ (id)keyPathsForValuesAffectingMinValueObject;
+ (id)keyPathsForValuesAffectingMinValueString;
@property(nonatomic) long long attributeType; // @synthesize attributeType;
@property(copy, nonatomic) NSString *valueTransformerName; // @synthesize valueTransformerName;
@property(copy, nonatomic) NSString *regularExpressionString; // @synthesize regularExpressionString;
@property(copy, nonatomic) NSString *maxValueString; // @synthesize maxValueString;
@property(copy, nonatomic) NSString *minValueString; // @synthesize minValueString;
@property(copy, nonatomic) NSString *defaultValueString; // @synthesize defaultValueString;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)xmlElementDescription;
- (id)xmlElementAttributes;
- (id)initWithXMLElementDescription:(id)arg1 belongingToModel:(id)arg2;
@property(readonly) NSString *attributeTypeString;
- (void)setAttributeTypeIndex:(long long)arg1;
- (long long)attributeTypeIndex;
- (void)_createAttributeTypesArray;
- (id)addKeysToDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 inModel:(id)arg2;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (id)undoManager;
- (BOOL)mapsDirectlyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property BOOL allowsExternalBinaryDataStorage; // @synthesize allowsExternalBinaryDataStorage;
- (void)setInspectedAttributeType:(long long)arg1;
- (id)nilDefaultAttributeTypes;
- (id)zeroDefaultAttributeTypes;
- (id)numericalMinMaxAttributeTypes;
- (long long)inspectedAttributeType;
@property(copy) id maxValueObject;
@property(copy) id minValueObject;
- (id)maxValueObjectNonNilValue;
- (id)minValueObjectNonNilValue;
- (id)defaultValueObjectNonNilValue;
@property(retain) id defaultValueObject;
- (id)defaultValueObjectForString:(id)arg1 withType:(long long)arg2;
- (void)cascadeChangesToLegacyAttribute:(id)arg1;
- (id)initWithLegacyAttribute:(id)arg1 belongingToEntity:(id)arg2 inModel:(id)arg3;
- (void)_registerUndoBlockForFoundAttribute:(CDUnknownBlockType)arg1;
- (id)code_propertyTypePrimitiveParameter;
- (id)code_propertyTypePrimitiveSwift;
- (id)code_propertyTypePrimitive;
- (id)code_propertyTypeSwift;
- (id)code_propertyTypePointer;
- (id)validateStringValue:(id)arg1 asType:(unsigned long long)arg2;
- (BOOL)willHangNaturalLanguageParser:(id)arg1;

@end

