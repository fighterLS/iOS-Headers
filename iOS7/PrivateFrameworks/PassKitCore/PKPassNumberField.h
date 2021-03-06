/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PassKitCore/PKPassField.h>

@class NSString;

@interface PKPassNumberField : PKPassField
{
    NSString *_currencyCode;
    long long _numberStyle;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long numberStyle; // @synthesize numberStyle=_numberStyle;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (id)value;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

