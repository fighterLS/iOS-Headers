/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCharacterSet, NSString;

@interface SFUJsonScanner : NSObject
{
    NSString *mString;
    unsigned short *mCharacters;
    unsigned int mLength;
    unsigned int mOffset;
    NSCharacterSet *mWhitespaceCharacterSet;
    NSCharacterSet *mDecimalDigitCharacterSet;
}

- (id)initWithString:(id)arg1;
- (void)dealloc;
- (unsigned short)nextCharacter;
- (void)skipWhitespace;
- (id)parseHexCharacter;
- (void)appendCharactersInRange:(struct _NSRange)arg1 toString:(id)arg2;
- (id)parseString;
- (id)parseDictionary;
- (id)parseArray;
- (BOOL)parseConstantString:(const char *)arg1;
- (id)parseNull;
- (id)parseTrue;
- (id)parseFalse;
- (id)parseNumber;
- (id)parseObject;

@end
