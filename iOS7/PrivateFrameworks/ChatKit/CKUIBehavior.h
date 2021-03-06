/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CKUIBehavior : NSObject
{
    double _bubbleIndentationDuringEditMode;
}

+ (id)sharedBehaviors;
@property(readonly, nonatomic) double bubbleIndentationDuringEditMode; // @synthesize bubbleIndentationDuringEditMode=_bubbleIndentationDuringEditMode;
- (id)timestampDateFormatter;
@property(readonly, nonatomic) NSString *transcriptDefaultPNG;
@property(readonly, nonatomic) NSString *conversationListDefaultPNG;
- (unsigned long long)conversationCacheSize;
- (id)dimmingViewBackgroundColor;
- (_Bool)dimsTranscriptWhileEditingConversations;
- (_Bool)shouldDimTranscript;
- (double)senderSummaryConversationListSpace;
- (double)bottomConversationListSpace;
- (double)topConversationListSpace;
- (double)conversationListDateBodyLeading;
- (double)conversationListSummaryBodyLeading;
- (double)conversationListSenderBodyLeading;
- (id)forwardImage;
- (id)red_chevronImage;
- (id)siri_chevronImage;
- (id)blue_chevronImage;
- (id)green_chevronImage;
- (id)gray_chevronImage;
- (id)chevronImageForColorType:(BOOL)arg1;
- (id)systemGrayChevronImage;
- (id)whiteChevronImage;
- (id)chevronImage;
- (_Bool)showsChevronImage;
- (id)conversationListDateFont;
- (id)conversationListSummaryFont;
- (id)conversationListSenderFont;
- (double)entryFieldElementPadding;
- (double)entryFieldLineFragmentPadding;
- (id)characterCountFont;
- (id)entryFieldDividerColor;
- (id)entryFieldBackgroundColor;
- (id)entryFieldGrayColor;
- (id)lightGrayColor;
- (id)photoButtonColor;
- (id)red_sendButtonColor;
- (id)siri_sendButtonColor;
- (id)blue_sendButtonColor;
- (id)green_sendButtonColor;
- (id)gray_sendButtonColor;
- (id)sendButtonColorForColorType:(BOOL)arg1;
- (id)textDocumentIcon;
- (id)errorDocumentIcon;
- (id)genericDocumentIcon;
- (struct CGSize)documentIconSize;
- (struct UIEdgeInsets)documentIconAlignmentRectInsets;
- (_Bool)supportsPassbookAttachments;
- (double)balloonMaxWidthForOrientation:(BOOL)arg1;
- (double)rightBalloonMaxWidth;
- (double)leftBalloonMaxWidth;
- (double)contactPhotoBalloonMargin;
- (struct UIEdgeInsets)balloonMaskFrameInsets;
- (struct UIEdgeInsets)balloonMaskFrameCapInsets;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)skinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)balloonMaskCapInsets;
- (struct CGSize)skinnyBalloonMaskSize;
- (struct CGSize)balloonMaskSize;
- (double)skinnyBalloonWidthDifference;
- (double)balloonMaskTailWidth;
- (double)balloonTextLineHeight;
- (id)balloonSubjectFont;
- (id)balloonTextFont;
- (id)attachmentBalloonTextColor;
- (id)attachmentBalloonActionColor;
- (id)red_balloonOverlayColor;
- (id)siri_balloonOverlayColor;
- (id)blue_balloonOverlayColor;
- (id)green_balloonOverlayColor;
- (id)gray_balloonOverlayColor;
- (id)balloonOverlayColorForColorType:(BOOL)arg1;
- (id)red_backgroundBalloonColor;
- (id)siri_backgroundBalloonColor;
- (id)blue_backgroundBalloonColor;
- (id)green_backgroundBalloonColor;
- (id)gray_backgroundBalloonColor;
- (id)backgroundBalloonColorForColorType:(BOOL)arg1;
- (id)red_balloonTextLinkColor;
- (id)siri_balloonTextLinkColor;
- (id)blue_balloonTextLinkColor;
- (id)green_balloonTextLinkColor;
- (id)gray_balloonTextLinkColor;
- (id)balloonTextLinkColorForColorType:(BOOL)arg1;
- (id)red_balloonTextColor;
- (id)siri_balloonTextColor;
- (id)blue_balloonTextColor;
- (id)green_balloonTextColor;
- (id)gray_balloonTextColor;
- (id)balloonTextColorForColorType:(BOOL)arg1;
- (id)red_unfilledBalloonColor;
- (id)siri_unfilledBalloonColor;
- (id)blue_unfilledBalloonColor;
- (id)green_unfilledBalloonColor;
- (id)gray_unfilledBalloonColor;
- (id)unfilledBalloonColorForColorType:(BOOL)arg1;
- (id)red_balloonColors;
- (id)siri_balloonColors;
- (id)blue_balloonColors;
- (id)green_balloonColors;
- (id)gray_balloonColors;
- (id)balloonColorsForColorType:(BOOL)arg1;
- (double)bottomTranscriptSpace;
- (double)topTranscriptSpace;
- (double)largeTranscriptSpace;
- (double)mediumTranscriptSpace;
- (double)smallTranscriptSpace;
- (double)timestampBodyLeadingFraction:(double)arg1;
- (double)timestampBodyLeading;
- (double)balloonBalloonTranscriptSpace:(_Bool)arg1;
- (double)transcriptDrawerOverlap;
- (void)invalidateTranscriptDrawerWidth;
- (double)transcriptDrawerWidth;
- (struct UIEdgeInsets)contactPhotoTranscriptInsets;
- (struct UIEdgeInsets)serviceTranscriptInsets;
- (struct UIEdgeInsets)timestampTranscriptInsets;
- (struct UIEdgeInsets)entityTranscriptInsets;
- (struct UIEdgeInsets)statusTranscriptInsets;
- (struct UIEdgeInsets)balloonTranscriptInsets;
- (double)transcriptBoldTextHeight;
- (struct UIEdgeInsets)transcriptBoldTextAlignmentInsets;
- (id)transcriptStatusParagraphStyle;
- (id)transcriptBoldTextFont;
- (id)transcriptTextFont;
- (id)transcriptTextColor;
- (id)readerFont;
- (double)spaceBetweenEditToolbarButtons;
- (_Bool)isAccessibilityPreferredContentSizeCategory;
- (id)appTintColor;
@property(readonly, nonatomic) _Bool shouldShowContactPhotos;
- (id)previewTitleFont;
- (double)previewTitleBarHeight;
- (struct UIEdgeInsets)minimumPlayButtonInsets;
- (struct CGSize)mapThumbnailFillSize;
- (struct CGSize)attachmentBalloonSize;
- (struct CGSize)untailedPreviewFillSizeForImageSize:(struct CGSize)arg1;
- (struct CGSize)thumbnailFillSizeForImageSize:(struct CGSize)arg1;
- (id)transcriptSeparatorColor;
- (id)transcriptHeaderTextFont;
- (id)transcriptBackgroundColor;
- (double)transcriptContactImageDiameter;
- (double)recipientOverlaySingleLineContentHeight;
- (_Bool)shouldRefreshAlternateAddressesSheet;
- (_Bool)shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
- (double)collapsedRecipientListLeftPadding;
- (_Bool)shouldShowDisclosureChevronInRecipientAtoms;
- (_Bool)shouldHomogenizeAtomsForPreferredService;
- (double)conversationListRowHeight;
- (double)conversationListMultipleContactsImageDiameter;
- (double)conversationListContactImageDiameter;
@property(readonly, nonatomic) _Bool useContactPhotosInConversationList;
@property(readonly, nonatomic) _Bool presentForwardingUIModally;
@property(readonly, nonatomic) _Bool usesPersistentConversationSelection;
@property(readonly, nonatomic) _Bool selectNewConversationOnDeletion;
@property(readonly, nonatomic) _Bool selectNewConversationOnStateRestore;
@property(readonly, nonatomic) _Bool showPendingInConversationList;
- (id)red_recipientTextColor;
- (id)siri_recipientTextColor;
- (id)blue_recipientTextColor;
- (id)green_recipientTextColor;
- (id)gray_recipientTextColor;
- (id)recipientTextColorForColorType:(BOOL)arg1;
- (double)updateTranscriptInsetsAnimationDuration;
- (double)editingTransitionAnimationDuration;
- (double)resizeMessageEntryViewAnimationDuration;
- (double)throwMessageAnimationDuration;
- (double)scrollInNewMessageAnimationDuration;
- (double)fadeInBubbleAnimationDuration;
- (double)_transcriptAnimationScaleFactor;
@property(readonly, nonatomic) _Bool isN9xScreen;
@property(readonly, nonatomic) _Bool supportsTypingIndicatorAnimation;
@property(readonly, nonatomic) _Bool shouldSetConversationKeyboardOnSearchBeginEnd;
@property(readonly, nonatomic) double scrollToHideKeyboardGestureThreshold;
@property(readonly, nonatomic) double escapeVelocityForHidingKeyboard;
@property(readonly, nonatomic) double velocityThresholdForHidingKeyboard;
@property(readonly, nonatomic) _Bool usesVelocityDirectionToDetermineWhetherToHideKeyboard;
@property(readonly, nonatomic) _Bool usesDistanceToDetermineWhetherToHideKeyboard;
@property(readonly, nonatomic) _Bool usesScrollGestureToHideKeyboard;
- (_Bool)returnKeySendsMessage;
@property(readonly, nonatomic) _Bool shouldBackfillTranscript;
@property(readonly, nonatomic) _Bool shouldShowSendProgressIndicator;
@property(readonly, nonatomic) _Bool canAccessCoreRecents;
@property(readonly, nonatomic) _Bool canAccessPhotos;
@property(readonly, nonatomic) _Bool canAccessContacts;
@property(readonly, nonatomic) _Bool photosIsWhitelisted;
@property(readonly, nonatomic) _Bool cameraIsWhitelisted;
@property(readonly, nonatomic) _Bool mailIsWhitelisted;
@property(readonly, nonatomic) _Bool faceTimeAudioIsWhitelisted;
@property(readonly, nonatomic) _Bool faceTimeVideoIsWhitelisted;
@property(readonly, nonatomic) _Bool phoneIsWhitelisted;
@property(readonly, nonatomic) _Bool madridRegistrationShowsSplashScreenOnSignin;
@property(readonly, nonatomic) _Bool madridRegistrationShowsSplashScreen;
@property(readonly, nonatomic) long long madridRegistrationAppearanceStyle;
- (_Bool)isSupportedInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) unsigned long long defaultConversationSummaryMessageCount;
@property(readonly, nonatomic) unsigned long long defaultConversationViewingMessageCount;
@property(readonly, nonatomic) _Bool presentsReaderController;
@property(readonly, nonatomic) _Bool presentsQuickLookController;
@property(readonly, nonatomic) _Bool showTranscriptButtonsInNavigationBar;
@property(readonly, nonatomic) _Bool usesPopovers;
- (double)transcriptPortraitWidth;
- (double)leftSplitPaneWidthForUIInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) _Bool lowClearanceInLandscape;
@property(readonly, nonatomic) _Bool splitViewEnabled; // @dynamic splitViewEnabled;

@end

