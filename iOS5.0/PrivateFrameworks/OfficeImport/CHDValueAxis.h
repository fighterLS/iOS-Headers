/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CHDAxis.h>

@interface CHDValueAxis : CHDAxis
{
    _Bool mPercentageFormattingFlag;
    _Bool mAutoMajorUnitValue;
    _Bool mAutoMinorUnitValue;
    double mMajorUnitValue;
    double mMinorUnitValue;
    double mScalingLogBase;
}

- (id)initWithResources:(id)arg1;
- (double)majorUnitValue;
- (void)setMajorUnitValue:(double)arg1;
- (double)minorUnitValue;
- (void)setMinorUnitValue:(double)arg1;
- (double)scalingLogBase;
- (void)setScalingLogBase:(double)arg1;
- (_Bool)isPercentageFormattingFlag;
- (void)setPercentageFormattingFlag:(_Bool)arg1;
- (_Bool)isAutoMajorUnitValue;
- (_Bool)isAutoMinorUnitValue;
- (void)adjustAxisPositionForHorizontalChart;

@end

