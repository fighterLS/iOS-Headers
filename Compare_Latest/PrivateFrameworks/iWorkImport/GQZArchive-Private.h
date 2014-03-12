/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQZArchive.h>

@interface GQZArchive (Private)
- (void)readExtraFieldFromBuffer:(const char *)arg1 size:(unsigned long long)arg2 entry:(id)arg3;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (struct GQZEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromOffset:(long long)arg1;
- (struct GQZEndOfCentralDirectory)readZip64EndOfCentralDirectoryWithEocdOffset:(long long)arg1;
- (const char *)searchForEndOfCentralDirectoryOffset:(long long *)arg1;
- (struct GQZEndOfCentralDirectory)readEndOfCentralDirectory;
- (void)collapseCommonRootDirectory;
- (void)readEntries;
@end
