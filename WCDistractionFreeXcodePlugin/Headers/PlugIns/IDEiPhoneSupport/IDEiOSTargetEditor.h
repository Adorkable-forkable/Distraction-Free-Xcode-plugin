//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "DVTInfoPlistValueCellDelegate.h"
#import "IDECapsuleListViewDataSource.h"

@class DVTChoice, DVTDelayedInvocation, DVTInfoPlistValueCell, DVTNotificationToken, DVTStackView_ML, IDECapsuleListView, IDECodesigningSettingsViewController, IDEViewController<IDECapsuleViewController>, IDEiOSIconsAndLaunchImagesViewController, NSArray, NSBox, NSButton, NSColor, NSComboBox, NSDictionary, NSMutableArray, NSPopUpButton, NSString, NSTextField, NSView;

@interface IDEiOSTargetEditor : IDEViewController <DVTInfoPlistValueCellDelegate, IDECapsuleListViewDataSource>
{
    id _targetViewController;
    DVTChoice *_selectedDeviceTab;
    NSString *_unexpandedAppIdentifier;
    id _appIdentifierFieldNotificationObserver;
    DVTNotificationToken *_frameChangeToken;
    NSArray *_imageSections;
    IDECapsuleListView *_capsuleList;
    NSView *_codesigningSettingsView;
    IDECodesigningSettingsViewController *_codesigningSettingsViewController;
    NSPopUpButton *_targetDevicePopup;
    NSComboBox *_deploymentOSCombo;
    DVTInfoPlistValueCell *_appIdentifierCell;
    NSTextField *_appIdentifierField;
    IDEViewController<IDECapsuleViewController> *_identityViewController;
    IDEViewController<IDECapsuleViewController> *_deploymentInfoViewController;
    IDEViewController<IDECapsuleViewController> *_imageViewController;
    DVTStackView_ML *_deploymentInfoStackView;
    NSBox *_universalSeparatorLine1;
    NSBox *_universalSeparatorLine2;
    NSView *_deploymentInfoDeviceFamilyView;
    NSView *_deploymentInfoDevicePickerView;
    NSView *_deploymentInfoUniversalEndcap;
    NSView *_deploymentInfoiPhoneView;
    NSView *_deploymentInfoiPadView;
    NSView *_deploymentInfoAppExtensionView;
    DVTStackView_ML *_identityStack;
    IDEViewController<IDECapsuleViewController> *_frameworksViewController;
    IDEViewController<IDECapsuleViewController> *_embeddedBinariesViewController;
    NSView *_chooseInfoPListView;
    NSButton *_chooseInfoPlistButton;
    NSTextField *_chooseInfoPlistLabel;
    NSView *_originalIdentityContentView;
    NSMutableArray *_subviewControllers;
    IDEiOSIconsAndLaunchImagesViewController *_iconsViewController;
    IDEiOSIconsAndLaunchImagesViewController *_launchImagesViewController;
    IDEViewController *_codesignTroubleController;
    DVTDelayedInvocation *_appIdentifierChangeInvocation;
    BOOL _iPhoneStatusBarTintingAvailable;
    BOOL _iPhoneStatusBarTintingCustom;
    BOOL _iPhoneStatusBarTintingShowImage;
    NSDictionary *_iconFilePathSetsByIconBaseName;
    NSArray *_targetIconFiles;
    NSString *_iPhoneStatusBarTintingStyle;
    NSColor *_iPhoneStatusBarTintingColor;
    NSString *_iPhoneStatusBarTintingImage;
    unsigned long long _selectedDeploymentInfoDeviceFamily;
    DVTStackView_ML *_imageStack;
    NSButton *_iPhoneDeploymentInfoButton;
    NSButton *_iPadDeploymentInfoButton;
    NSView *_appExtensionAPISlice;
    NSBox *_appExtensionAPISliceSeparator;
    NSBox *_appExtensionSliceSeparator;
    NSView *_targetLaunchScreenFileSlice;
}

+ (BOOL)isPrimaFacieValidVersionString:(id)arg1;
+ (id)keyPathsForValuesAffectingIPadStatusBarHidden;
+ (id)keyPathsForValuesAffectingIPhoneStatusBarHidden;
+ (id)keyPathsForValuesAffectingIPhoneStatusBarStyle;
+ (id)duplicateTarget:(id)arg1 withTargetController:(Class)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)keyPathsForValuesAffectingSelectedDeviceTabs;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(retain) NSView *targetLaunchScreenFileSlice; // @synthesize targetLaunchScreenFileSlice=_targetLaunchScreenFileSlice;
@property(retain) NSBox *appExtensionSliceSeparator; // @synthesize appExtensionSliceSeparator=_appExtensionSliceSeparator;
@property(retain) NSBox *appExtensionAPISliceSeparator; // @synthesize appExtensionAPISliceSeparator=_appExtensionAPISliceSeparator;
@property(retain) NSView *appExtensionAPISlice; // @synthesize appExtensionAPISlice=_appExtensionAPISlice;
@property(retain, nonatomic) NSButton *iPadDeploymentInfoButton; // @synthesize iPadDeploymentInfoButton=_iPadDeploymentInfoButton;
@property(retain, nonatomic) NSButton *iPhoneDeploymentInfoButton; // @synthesize iPhoneDeploymentInfoButton=_iPhoneDeploymentInfoButton;
@property(retain) DVTStackView_ML *imageStack; // @synthesize imageStack=_imageStack;
@property(nonatomic) unsigned long long selectedDeploymentInfoDeviceFamily; // @synthesize selectedDeploymentInfoDeviceFamily=_selectedDeploymentInfoDeviceFamily;
@property(copy) NSString *iPhoneStatusBarTintingImage; // @synthesize iPhoneStatusBarTintingImage=_iPhoneStatusBarTintingImage;
@property(copy) NSColor *iPhoneStatusBarTintingColor; // @synthesize iPhoneStatusBarTintingColor=_iPhoneStatusBarTintingColor;
@property(copy) NSString *iPhoneStatusBarTintingStyle; // @synthesize iPhoneStatusBarTintingStyle=_iPhoneStatusBarTintingStyle;
@property(nonatomic) BOOL iPhoneStatusBarTintingShowImage; // @synthesize iPhoneStatusBarTintingShowImage=_iPhoneStatusBarTintingShowImage;
@property(nonatomic) BOOL iPhoneStatusBarTintingCustom; // @synthesize iPhoneStatusBarTintingCustom=_iPhoneStatusBarTintingCustom;
@property(readonly) BOOL iPhoneStatusBarTintingAvailable; // @synthesize iPhoneStatusBarTintingAvailable=_iPhoneStatusBarTintingAvailable;
@property(copy) NSArray *targetIconFiles; // @synthesize targetIconFiles=_targetIconFiles;
@property(retain, nonatomic) NSDictionary *iconFilePathSetsByIconBaseName; // @synthesize iconFilePathSetsByIconBaseName=_iconFilePathSetsByIconBaseName;
@property(retain, nonatomic) id targetViewController; // @synthesize targetViewController=_targetViewController;
- (void).cxx_destruct;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (id)infoPlistValueCell:(id)arg1 expandedValueForString:(id)arg2;
- (void)refreshAppIconsAndLaunchImages;
- (BOOL)_shouldShowLaunchImages;
- (BOOL)_shouldShowAppIcons;
- (void)convertToAssetCatalogFromIconsAndLaunchImagesViewController:(id)arg1;
- (void)showLaunchImageAlertForImageName:(id)arg1;
- (void)deploymentOSChanged:(id)arg1;
@property(readonly) id headerFont;
@property(copy) NSArray *targetIPadOrientations;
@property(copy) NSArray *targetIPhoneOrientations;
@property(copy) NSString *targetLaunchScreenFile;
@property(copy) NSString *targetAppExtensionInterface;
@property(copy) NSString *targetiPadInterface;
@property(copy) NSString *targetiPhoneInterface;
- (void)_setInterfaceFileName:(id)arg1 forInterfaceKeysWithDeviceExtension:(id)arg2;
- (id)_targetIPadNib;
- (id)_targetIPadStoryboard;
- (id)_targetIPhoneNib;
- (id)_targetIPhoneStoryboard;
- (void)setTargetBuildVersion:(id)arg1;
- (id)targetBuildVersion;
@property(copy) NSString *targetVersion;
@property(copy) NSString *targetIdentifier;
@property BOOL allowAppExtensionAPIOnly;
@property(copy) NSString *targetDeploymentOS;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (id)overridingConditionSetForARCHSExpansion;
@property(copy) NSString *targetDevice;
@property BOOL iPadStatusBarHidden;
@property BOOL iPhoneStatusBarHidden;
@property(copy) NSString *iPhoneStatusBarStyle;
- (void)pickInfoPlistFile:(id)arg1;
- (id)deploymentOSVersions;
@property BOOL iPadLandscape2;
@property BOOL iPadPortrait2;
@property BOOL iPadLandscape;
@property BOOL iPadPortrait;
@property BOOL iPhoneLandscape2;
@property BOOL iPhonePortrait2;
@property BOOL iPhoneLandscape;
@property BOOL iPhonePortrait;
- (void)_updateIdentityStackView;
- (void)_updateDeploymentInfoStackView;
- (void)targetDeviceChanged:(id)arg1;
- (void)removeOrientation:(id)arg1 forDevice:(id)arg2;
- (void)setOrientation:(id)arg1 forDevice:(id)arg2;
- (void)viewWillUninstall;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)xcode3Target;
- (void)_reloadCapsuleList;
@property(readonly) BOOL iPadTargeted;
@property(readonly) BOOL iPhoneTargeted;
- (void)selectiPadDeploymentInfo:(id)arg1;
- (void)selectiPhoneDeploymentInfo:(id)arg1;
- (void)appIdentifierChanged:(id)arg1;
- (void)refreshAppIdentifier;
- (void)setIPadDisclosed:(BOOL)arg1;
- (void)setIPhoneDisclosed:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

