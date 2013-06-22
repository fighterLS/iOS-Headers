/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "GKContentRefresh-Protocol.h"
#import "GKURLHandling-Protocol.h"

@class GKBackgroundView, UIPopoverController;

@interface UIViewController (GKAdditions) <GKContentRefresh, GKURLHandling>
- (id)_gkAlertViewWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)_gkPerformActivityType:(id)arg1 withActivityItemsAndSharingInfo:(id)arg2;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkPresentActivityViewControllerForActivityItems:(id)arg1 fromView:(id)arg2 withCompletionHandler:(id)arg3;
- (void)_gkPresentActivityViewController:(id)arg1;
- (void)_gkDismissActivityViewControllerAnimated:(BOOL)arg1;
- (void)_gkRestoreStatusBarStyle:(BOOL)arg1;
- (void)_gkSaveStatusBarStyle:(BOOL)arg1;
- (void)_gkSaveStatusBarStyleAnimated:(BOOL)arg1 setToStyle:(int)arg2;
@property(nonatomic) UIPopoverController *gkPopoverController;
- (void)gkAdjustBackgroundForSplitPosition;
@property(readonly, nonatomic) GKBackgroundView *_gkBackgroundView;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkSetContentsNeedUpdateWithHandler:(id)arg1;
- (void)_gkForceNextContentUpdate;
- (void)_gkResetContents;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
@end
