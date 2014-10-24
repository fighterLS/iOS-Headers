//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegListController.h>

#import "CNFRegFirstRunDelegate.h"
#import "CNFRegViewAccountControllerDelegate.h"
#import "CNFRegWizardControllerDelegate.h"

@class NSArray, NSMutableArray, NSNumber, NSString, PSSpecifier, TUAccountsController;

@interface CNFRegSettingsController : CNFRegListController <CNFRegWizardControllerDelegate, CNFRegViewAccountControllerDelegate, CNFRegFirstRunDelegate>
{
    PSSpecifier *_faceTimeEnabledGroupSpecifier;
    PSSpecifier *_faceTimeEnabledSpecifier;
    NSArray *_accountGroupSpecifiers;
    NSArray *_aliasGroupSpecifiers;
    NSArray *_callerIdGroupSpecifiers;
    PSSpecifier *_addAddressButtonSpecifier;
    NSArray *_replyWithMessageGroupSpecifiers;
    NSArray *_blacklistGroupSpecifiers;
    NSArray *_receiveRelayCallsGroupSpecifiers;
    PSSpecifier *_blankAddressSpecifier;
    NSString *_pendingAddress;
    NSMutableArray *_addresses;
    CDUnknownBlockType _alertHandler;
    NSNumber *_delayedRefreshAnimatedFlag;
    struct {
        unsigned int listeningForFinishedEditingEvents:1;
        unsigned int appeared:1;
        unsigned int ignoringTextFieldChanges:1;
        unsigned int showEnableSwitch:1;
        unsigned int refreshingCallerIdValues:1;
    } _settingsFlags;
    BOOL _showReceiveRelayCalls;
    TUAccountsController *_accountsController;
}

+ (BOOL)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) TUAccountsController *accountsController; // @synthesize accountsController=_accountsController;
@property(readonly, nonatomic) BOOL showReceiveRelayCalls; // @synthesize showReceiveRelayCalls=_showReceiveRelayCalls;
@property(copy, nonatomic) NSString *pendingAddress; // @synthesize pendingAddress=_pendingAddress;
@property(copy, nonatomic) CDUnknownBlockType alertHandler; // @synthesize alertHandler=_alertHandler;
- (void)_handleOutgoingRelayCallerIDChanged;
- (void)_handleRelayCapabilitiesChanged;
- (void)_handleFaceTimeEntitlementStatusChanged;
- (void)_handleFaceTimeCTRegistrationStatusChanged;
- (void)_handleFaceTimeStateChanged;
- (void)_setupAccountHandlersForNormalOperation;
- (void)_setupAccountHandlersForDisabledOperation;
- (void)_setupAccountHandlersForDisabling;
- (BOOL)_allAccountsAreDeactivated;
- (void)_handleSuccessfulAccountReactivation:(id)arg1;
- (void)_handleFailedAccountReactivation:(id)arg1 error:(id)arg2;
- (void)_setupAccountHandlers;
- (BOOL)_shouldUseDisabledHandlers;
- (BOOL)popToFirstRunControllerAnimated:(BOOL)arg1;
- (BOOL)_popFromSettingsAnimated:(BOOL)arg1;
- (void)_updateControllerStateAnimated:(BOOL)arg1;
- (void)showSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(BOOL)arg3;
- (int)groupIdForSpecifierId:(id)arg1;
- (int)groupIdForSpecifier:(id)arg1;
- (int)indexOfLastSpecifierInGroup:(id)arg1;
- (void)refreshBlacklistSettingsAnimated:(BOOL)arg1;
- (void)showBlacklistSettings:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldShowBlacklistSettings;
- (void)showReplyWithMessage:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldShowReplyWithMessage;
- (id)createSpecifierForCallerIdAlias:(id)arg1;
- (void)updateSpecifier:(id)arg1 withCallerIdAlias:(id)arg2;
- (void)refreshAllCallerIdAliasSpecifiers;
- (void)refreshCallerIdSpecifier:(id)arg1;
- (void)setCallerId:(id)arg1;
- (void)refreshCallerIdAliasesAnimated:(BOOL)arg1;
- (id)callerIdAliasSpecifiers;
- (id)possibleCallerIdAliases;
- (BOOL)showCallerId:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_showAliasValidationError:(id)arg1;
- (id)aliasDetailControllerForSpecifier:(id)arg1;
- (void)setAliasSelected:(id)arg1;
- (id)createSpecifierForAlias:(id)arg1;
- (BOOL)_canDeselectAlias:(id)arg1;
- (id)aliasWithIdentifier:(id)arg1;
- (void)setPendingAddress:(id)arg1 forSpecifier:(id)arg2;
- (id)pendingAddressForSpecifier:(id)arg1;
- (void)stopEditingTextField:(BOOL)arg1;
- (void)_clearBlankAliasField;
- (void)startEditingTextField;
- (void)textFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (id)blankAliasTextField;
- (id)getAddAliasTextForSpecifier:(id)arg1;
- (void)_updateAddAliasButtonText;
- (void)addAddressTapped:(id)arg1;
- (id)statusForAlias:(id)arg1;
- (id)statusForSpecifier:(id)arg1;
- (id)aliasForSpecifier:(id)arg1;
- (BOOL)additionalAliasesAvailable;
- (void)showAddAliasButton:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isShowingAddButton;
- (void)showBlankAlias:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isShowingBlankAlias;
- (BOOL)showAliases:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateSpecifier:(id)arg1 withAlias:(id)arg2;
- (void)refreshAllAliasSpecifiers;
- (void)refreshAliasSpecifier:(id)arg1;
- (void)refreshAliasesAnimated:(BOOL)arg1;
- (BOOL)_shouldShowAliasInfo;
- (id)aliasSpecifiers;
- (void)clearAccountCache;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (void)viewAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2;
- (void)_showLocaleChooserWithAccount:(id)arg1;
- (id)_localeChooserForAccount:(id)arg1;
- (void)_hideLocaleChooser;
- (void)_showViewAccountControllerForAccount:(id)arg1;
- (void)_showSignInController;
- (void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2;
- (BOOL)showAccounts:(BOOL)arg1 animated:(BOOL)arg2;
- (void)refreshAccountsAnimated:(BOOL)arg1;
- (void)updateSpecifier:(id)arg1 withAccount:(id)arg2;
- (id)createSpecifierForAccount:(id)arg1;
- (id)_specifierIdentifierForAccount:(id)arg1;
- (void)_reloadSpecifier:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)accountSpecifiers;
- (void)accountTappedWithSpecifier:(id)arg1;
- (void)_showAccountAlertForAccount:(id)arg1;
- (id)getAccountNameForSpecifier:(id)arg1;
- (void)showAllSettings:(BOOL)arg1 animated:(BOOL)arg2;
- (void)refreshReceiveRelayCallsSettingsAnimated:(BOOL)arg1;
- (void)showReceiveRelayCallsSettings:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldShowReceiveRelayCalls;
@property(nonatomic) BOOL showEnableSwitch;
- (void)refreshEnabledStateAnimated:(BOOL)arg1;
- (void)refreshFaceTimeSettingsAnimated:(BOOL)arg1;
- (void)refreshFaceTimeSettingsWithDelayAnimated:(BOOL)arg1;
- (void)_refreshFaceTimeSettingsDelayed:(id)arg1;
- (id)getReceiveRelayedCallsEnabledForSpecifier:(id)arg1;
- (void)setReceiveRelayedCallsEnabled:(id)arg1 specifier:(id)arg2;
- (id)getFaceTimeEnabledForSpecifier:(id)arg1;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2;
- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 animated:(BOOL)arg3;
- (void)_updateSwitchDelayed;
- (void)_updateSwitch;
- (id)_switchFooterText;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_cacheIndividualSpecifier:(id)arg1 includeInGroup:(char *)arg2;
- (void)_cacheSpecifierGroup:(id)arg1 withSpecifiers:(id)arg2;
- (void)keyboardDismissed:(id)arg1;
- (void)returnKeyPressed:(id)arg1;
- (void)stopListeningForFinishedEditingEventNotifications;
- (void)startListeningForFinishedEditingEventNotifications;
- (void)_tearDownAllListeners;
- (void)_setupAllListeners;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)customTitle;
- (id)logName;
- (void)_handleDeactivation:(id)arg1;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)formSheetViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (id)_operationalAccountsForService:(int)arg1;
- (id)_operationalAccounts;
- (id)_appleIDAccounts;
- (id)_useableAccounts;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)specifierList;
- (id)bundle;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
