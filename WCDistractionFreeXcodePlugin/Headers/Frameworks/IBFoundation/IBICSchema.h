//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBICPseudoXMLGeneration.h"
#import "NSCoding.h"

@class IBICAppIconSetRepSlot, IBICIconSetRepSlot, IBICIdiom, IBICImageSetRepSlot, IBICLaunchImageSetRepSlot, IBICPlatform, NSMutableDictionary, NSMutableSet, NSString;

@interface IBICSchema : NSObject <NSCoding, IBICPseudoXMLGeneration>
{
    NSMutableSet *_slotComponents;
    NSMutableDictionary *_slotsComponentsByClassThenIdentifier;
    NSMutableDictionary *_slotsComponentsByClass;
    NSMutableSet *_slots;
    NSMutableDictionary *_slotsBySlotClassByPlatformID;
    NSMutableDictionary *_slotsBySlotClass;
    NSMutableDictionary *_slotsToRequiredCounterparts;
    NSMutableDictionary *_slotsToLabels;
    NSMutableDictionary *_suggestionSetsBySlotClass;
    NSMutableDictionary *_detailFooterTitles;
    NSMutableDictionary *_slotMaskSetsBySlotByPlatform;
    NSMutableDictionary *_initialDeviceSpecificImageSetRepSlotsPerPlatform;
    NSMutableDictionary *_shouldIncludeOrientationInLaunchImageNameBySlot;
    NSMutableDictionary *_pixelSizesByLaunchImageSlots;
    NSMutableDictionary *_issueProvidersPerMultipartImageClass;
    NSMutableSet *_appIconSlotsRequiringIdiomSuffixesInFileName;
    NSMutableSet *_launchImageSlotsRequiringIdiomSuffixesInFileName;
    NSMutableDictionary *_validationRecordsBySlotClass;
    NSMutableDictionary *_slotValidationRecordsBySlot;
    NSMutableDictionary *_fileTypesBySlot;
    NSMutableDictionary *_fileTypesBySlotClass;
    NSMutableDictionary *_sizeClassesBySlot;
    NSMutableDictionary *_combinationsBySlotComponentClassAndIdiom;
    NSMutableSet *_slotsToThin;
    BOOL _isConstructing;
    IBICIdiom *_universalIdiom;
    IBICPlatform *_iOSPlatform;
    IBICPlatform *_OSXPlatform;
}

+ (id)schemaFromContentsOfData:(id)arg1 error:(id *)arg2;
+ (id)schemaFromContentsOfURL:(id)arg1 error:(id *)arg2;
+ (id)sharedInstance;
+ (id)privateSharedInstance;
+ (void)clearSharedInstance;
+ (void)setSchemaProvidersPromise:(CDUnknownBlockType)arg1;
+ (void)testSchema:(id)arg1 scratchDirectory:(id)arg2;
+ (void)registerSchema:(id)arg1 forCoder:(id)arg2;
+ (id)schemaForCoder:(id)arg1;
+ (id)schemaToCoderMap;
@property(readonly) IBICPlatform *OSXPlatform; // @synthesize OSXPlatform=_OSXPlatform;
@property(readonly) IBICPlatform *iOSPlatform; // @synthesize iOSPlatform=_iOSPlatform;
@property(readonly) IBICIdiom *universalIdiom; // @synthesize universalIdiom=_universalIdiom;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)decodeDictionaryWithClassKeysForKey:(id)arg1 coder:(id)arg2;
- (void)encodeDictionaryWithClassKeys:(id)arg1 forKey:(id)arg2 coder:(id)arg3;
- (id)ibic_pseudoXMLWithIndent:(unsigned long long)arg1;
- (id)ibic_pseudoXML;
- (id)fileTypeWithIdentifier:(id)arg1;
- (id)sizeWithPointSize:(struct CGSize)arg1;
- (id)scaleWithMultiple:(double)arg1;
- (id)sizeWithIdentifier:(id)arg1;
- (id)scaleWithIdentifier:(id)arg1;
- (id)idiomWithIdentifier:(id)arg1;
- (id)subtypeWithIdentifier:(id)arg1;
- (id)platformWithIdentifier:(id)arg1;
- (id)extentWithIdentifier:(id)arg1;
- (id)deviceOrientationWithIdentifier:(id)arg1;
- (id)validLaunchImageRepSlots;
- (id)validAppIconSetRepSlots;
- (id)validIconSetRepSlots;
- (id)validImageSetRepSlots;
- (id)sizes;
- (id)scales;
- (id)idioms;
- (id)subtypes;
- (id)platforms;
- (id)extents;
- (id)deviceOrientations;
- (BOOL)isPossibleSlotToThin:(id)arg1;
- (void)addPossibleSlotToThin:(id)arg1 expander:(CDUnknownBlockType)arg2;
- (void)addPossibleSlotsToThin:(id)arg1 expander:(CDUnknownBlockType)arg2;
- (id)orderedSlotComponentClassCombinationsForClass:(Class)arg1 andIdiom:(id)arg2;
- (id)combinationAxisForIdentifier:(id)arg1 slotComponentClass:(Class)arg2 idiom:(id)arg3;
- (void)addCombinationAxisWithValues:(id)arg1 identifier:(id)arg2 title:(id)arg3 displayOrder:(double)arg4 forIdioms:(id)arg5 forSlotComponentClass:(Class)arg6;
- (id)addCombinationAxisWithValues:(id)arg1 identifier:(id)arg2 title:(id)arg3 displayOrder:(double)arg4 forIdiom:(id)arg5 forSlotComponentClass:(Class)arg6;
- (void)addSizeClasses:(id)arg1 toSlot:(id)arg2;
- (id)fileTypeForExtension:(id)arg1;
- (id)fileTypeForSlotClass:(Class)arg1 andPathExtension:(id)arg2;
- (id)preferredFileExtensionForSlotClass:(Class)arg1;
- (id)preferredFileExtensionForSlot:(id)arg1;
- (id)fileExtensionsForSlotClass:(Class)arg1;
- (id)fileExtensionsForSlot:(id)arg1;
- (id)preferredFileTypeForSlotClass:(Class)arg1;
- (id)preferredFileTypeForSlot:(id)arg1;
- (id)fileTypesForSlotClass:(Class)arg1;
- (id)fileTypesForSlot:(id)arg1;
- (void)addFileTypes:(id)arg1 forSlots:(id)arg2 expander:(CDUnknownBlockType)arg3;
- (void)addFileTypes:(id)arg1 forSlot:(id)arg2 expander:(CDUnknownBlockType)arg3;
- (void)addFileType:(id)arg1 forSlot:(id)arg2 expander:(CDUnknownBlockType)arg3;
- (BOOL)isValidFileExtension:(id)arg1 forSlotClass:(Class)arg2;
- (BOOL)isValidFileExtension:(id)arg1 forSlot:(id)arg2;
- (BOOL)isValidFileExtension:(id)arg1;
- (id)validFileExtensions;
- (id)fileTypes;
- (id)launchImageSlotsRequiringPlaceholders;
- (void)addLaunchImageSlotsRequiringPlaceholder:(id)arg1;
- (void)addLaunchImageSlotsRequiringIdiomSuffixInFileName:(id)arg1;
- (BOOL)launchImageSlotShouldIncludeIdiomSuffixInFileName:(id)arg1;
- (void)setPixelSize:(id)arg1 forLaunchImageRepSlot:(id)arg2;
- (id)pixelSizeForLaunchImageRepSlot:(id)arg1;
- (void)setShouldIncludeOrientationInLaunchImageName:(BOOL)arg1 forSlot:(id)arg2;
- (BOOL)shouldIncludeOrientationInLaunchImageNameForSlot:(id)arg1;
@property(readonly) IBICLaunchImageSetRepSlot *defaultLaunchImageSetRepSlot;
- (void)addAppIconSlotsRequiringIdiomSuffixInFileName:(id)arg1;
- (BOOL)appIconSlotShouldIncludeIdiomSuffixInFileName:(id)arg1;
- (id)validAppIconSetRepSlotsForPlatform:(id)arg1;
@property(readonly) IBICAppIconSetRepSlot *defaultAppIconSetRepSlot;
@property(readonly) IBICIconSetRepSlot *defaultIconSetRepSlot;
- (id)universalImageRepSlots;
- (id)universalImageRepSlotSuggestionSets;
- (id)deviceSpecificImageRepSlotSuggestionSets;
- (BOOL)isImageSetRepSuggestionSetDeviceSpecific:(id)arg1;
- (void)addInitialDeviceSpecificImageSetRepSlots:(id)arg1 forPlatform:(id)arg2;
- (void)addInitialDeviceSpecificImageSetRepSlot:(id)arg1 forPlatform:(id)arg2;
- (void)addInitialDeviceSpecificImageSetRepSlots:(id)arg1 forPlatform:(id)arg2 expander:(CDUnknownBlockType)arg3;
- (void)addInitialDeviceSpecificImageSetRepSlot:(id)arg1 forPlatform:(id)arg2 expander:(CDUnknownBlockType)arg3;
- (id)initialDeviceSpecificImageSetRepSlotsForPlatform:(id)arg1;
@property(readonly) IBICImageSetRepSlot *defaultImageSetRepSlot;
- (id)issueProvidersForMultipartImageClass:(Class)arg1;
- (void)addIssueProvider:(id)arg1 forMultipartImageClass:(Class)arg2;
- (id)labelForSlot:(id)arg1;
- (void)addLabel:(id)arg1 forSlot:(id)arg2;
- (id)detailFooterTitleForDetailAreaKey:(id)arg1;
- (void)setFooterTitle:(id)arg1 forDetailAreaKey:(id)arg2;
- (id)orderedSuggestionSetsForSlotClass:(Class)arg1;
- (id)suggestionSetsForSlotClass:(Class)arg1;
- (void)relateSuggestionSets:(id)arg1;
- (void)addSlotSuggestionSets:(id)arg1 markAsCounterparts:(BOOL)arg2;
- (void)addSlotSuggestionSet:(id)arg1;
- (id)validationRecordForSlot:(id)arg1;
- (id)validationRecordsForSlotClass:(Class)arg1;
- (void)addSlotValidationRecord:(id)arg1;
- (BOOL)isValidSlot:(id)arg1;
- (id)requiredCounterpartsForSlot:(id)arg1;
- (void)unionRequiredSlotEqualCounterpartSets:(id)arg1 expander:(CDUnknownBlockType)arg2;
- (void)unionRequiredSlotEqualCounterparts:(id)arg1 expander:(CDUnknownBlockType)arg2;
- (void)unionRequiredSlotCounterparts:(id)arg1 expander:(CDUnknownBlockType)arg2;
- (void)addRequiredCounterpart:(id)arg1 forSlot:(id)arg2 expander:(CDUnknownBlockType)arg3;
- (id)applicableSlotsOfClass:(Class)arg1 forPlatform:(id)arg2 targetIdioms:(id)arg3;
- (id)defaultSlotForClass:(Class)arg1;
- (id)validSlotsForSlotClass:(Class)arg1;
- (id)maskableSlotMasksOfClass:(Class)arg1 forPlatform:(id)arg2;
- (void)markSlot:(id)arg1 asMaskedBySlots:(id)arg2 forPlatform:(id)arg3;
- (void)addSlots:(id)arg1 withApplicablePlatforms:(id)arg2 expander:(CDUnknownBlockType)arg3;
- (void)addSlot:(id)arg1 withApplicablePlatforms:(id)arg2 expander:(CDUnknownBlockType)arg3;
- (id)slotComponentIdentifiersForSlotClass:(Class)arg1;
- (id)slotComponentsForSlotClass:(Class)arg1;
- (id)slotComponentOfClass:(Class)arg1 withIdentifier:(id)arg2;
- (void)addSlotComponents:(id)arg1;
- (void)addSlotComponent:(id)arg1;
- (void)assertSchemaValidity;
- (void)importDataFromProviders:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

