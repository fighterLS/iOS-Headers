//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDKeyedObject.h"
#import "NSCopying.h"

@class EDString, NSString;

__attribute__((visibility("hidden")))
@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying>
{
    EDString *mFormatString;
    unsigned int mFormatId;
    _Bool mBuiltIn;
    _Bool mReferenced;
}

+ (id)contentFormatWithFormatString:(id)arg1;
+ (id)contentFormatWithFormatString:(id)arg1 formatId:(unsigned int)arg2;
+ (id)contentFormatWithNSString:(id)arg1 formatId:(unsigned int)arg2 builtIn:(_Bool)arg3;
- (_Bool)referenced;
- (_Bool)builtIn;
- (unsigned int)formatId;
- (id)formatString;
- (int)key;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContentFormat:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)setReferenced:(_Bool)arg1;
- (void)setFormatId:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

