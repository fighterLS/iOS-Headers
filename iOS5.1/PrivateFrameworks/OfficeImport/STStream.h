/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/STSStgObject.h>

@interface STStream : STSStgObject
{
    struct _Stream *m_pCStream;
}

- (id)initWithCStream:(struct _Stream *)arg1;
- (void)dealloc;
- (void)close;
- (void)releaseCStream;
- (id)getInfo;
- (void)seek:(long)arg1 fromOrigin:(int)arg2;
- (unsigned long)getPos;
- (void)setClass:(CDStruct_214f2dba)arg1;
- (id)readBytes:(unsigned long)arg1;
- (BOOL)readLEchar;
- (unsigned char)readLEbyte;
- (unsigned char)readLEboolean;
- (short)readLEshort;
- (unsigned short)readLEword;
- (long)readLElong;
- (unsigned long)readLEdword;
- (float)readLEfloat;
- (double)readLEdouble;
- (unsigned short)readLEunichar;
- (id)readLEwstring:(unsigned long)arg1;
- (void)writeBytes:(id)arg1;
- (void)writeLEbyte:(unsigned char)arg1;
- (void)writeLEchar:(BOOL)arg1;
- (void)writeLEboolean:(unsigned char)arg1;
- (void)writeLEshort:(short)arg1;
- (void)writeLEword:(unsigned short)arg1;
- (void)writeLElong:(long)arg1;
- (void)writeLEdword:(unsigned long)arg1;
- (void)writeLEfloat:(float)arg1;
- (void)writeLEdouble:(double)arg1;
- (void)writeLEunichar:(unsigned short)arg1;
- (void)writeLEwstring:(id)arg1;
- (void)writeLEwstringNoTerminator:(id)arg1;

@end

