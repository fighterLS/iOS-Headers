/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FTServices/FTProfileMessage.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FTProfileConfirmEmailsMessage : FTProfileMessage <NSCopying>
{
    NSString *_vettingToken;
    NSString *_emailAddress;
}

@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy) NSString *vettingToken; // @synthesize vettingToken=_vettingToken;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

