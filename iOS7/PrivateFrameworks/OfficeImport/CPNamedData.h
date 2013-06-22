/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString;

@interface CPNamedData : NSObject
{
    NSData *mData;
    NSString *mName;
}

+ (id)namedDataWithData:(id)arg1 named:(id)arg2;
@property(readonly, nonatomic) NSString *name; // @synthesize name=mName;
@property(readonly, nonatomic) NSData *data; // @synthesize data=mData;
- (void)dealloc;
- (id)initWithData:(id)arg1 named:(id)arg2;

@end
