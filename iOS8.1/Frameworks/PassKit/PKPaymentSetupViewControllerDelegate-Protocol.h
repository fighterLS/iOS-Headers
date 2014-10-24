//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString, UIViewController;

@protocol PKPaymentSetupViewControllerDelegate <NSObject>
- (void)viewControllerDidTerminateSetupFlow:(UIViewController *)arg1;

@optional
- (void)handlePassAlreadyProvisionedError;
- (void)handleProvisioningError:(NSError *)arg1 forApplicationIdentifier:(NSString *)arg2;
- (void)handleDownloadedPasses:(NSArray *)arg1 fromViewController:(UIViewController *)arg2 withCompletion:(void (^)(void))arg3;
@end
