//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCECellValue.h>

__attribute__((visibility("hidden")))
@interface TSCEBooleanCellValue : TSCECellValue
{
    struct TSCEBooleanValue *mBooleanValue;
}

- (void)encodeToArchive:(struct BooleanCellValueArchive *)arg1;
- (id)initWithArchive:(const struct BooleanCellValueArchive *)arg1;
- (BOOL)isEqualToCellValue:(id)arg1;
- (id)displayString;
- (CDStruct_bfed0e84)formatStruct;
- (struct TSCEBooleanValue *)booleanValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithBooleanValue:(struct TSCEBooleanValue *)arg1;
- (id)initWithBoolean:(BOOL)arg1;

@end

