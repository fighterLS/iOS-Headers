/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITableViewCell.h>

@class _UITableViewCellOldEditingData;

@interface UITableViewCell (UITableViewCellStatic)
- (void)_setDrawsTopSeparatorDuringReordering:(BOOL)arg1;
- (BOOL)_drawsTopSeparatorDuringReordering;
- (void)_setReordering:(BOOL)arg1;
- (void)_resetSelectionTimer;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_menuDismissed:(id)arg1;
- (void)_topShadowDidFadeOut;
- (void)_updateTopShadowView:(BOOL)arg1;
- (void)_updateContentClip;
- (void)_longPressGestureRecognized:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)_editingTransitionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (struct CGSize)_imageInsetSize;
- (struct CGSize)_textInsetSize;
- (id)_imageView;
- (id)_editableTextField;
- (id)_detailTextLabel;
- (id)_textLabel;
- (id)_defaultFont;
- (void)_showReorderControl;
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)arg1;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (BOOL)_isCurrentlyConsideredHighlighted;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2;
- (void)_layoutSubviewsAnimated:(BOOL)arg1;
- (void)_removeRemoveControl;
- (void)_releaseRemoveControl;
- (id)_createRemoveControlForStyle:(int)arg1;
- (id)_currentAccessoryView:(BOOL)arg1;
- (id)_disclosurePressedImage:(BOOL)arg1;
- (id)_disclosureImage:(BOOL)arg1;
- (id)_tintedDisclosureImagePressed:(BOOL)arg1;
- (void)_finishedFadingGrabber:(id)arg1 finished:(BOOL)arg2;
- (void)_setGrabberHidden:(BOOL)arg1;
- (void)_releaseReorderingControl;
- (id)_reorderingSeparatorView;
- (id)_reorderingControl;
- (void)_createReorderControlIfNeeded;
@property(retain, nonatomic) _UITableViewCellOldEditingData *oldEditingData;
@end
