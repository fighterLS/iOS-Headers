/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIFont;

@interface CalendarCustomTimeView : UIView
{
    int _style;
    unsigned int _isAllDay:1;
    unsigned int _showDates:1;
    unsigned int _highlighted:1;
    unsigned int _forceSingleLine:1;
    unsigned int _startDesignator:2;
    unsigned int _endDesignator:2;
    CDStruct_b0fa4487 _startDate;
    CDStruct_b0fa4487 _endDate;
    NSString *_startTimeString;
    NSString *_endTimeString;
    NSString *_startDateString;
    NSString *_endDateString;
    UIFont *_timeFont;
    UIFont *_designatorFont;
    UIFont *_betweenFont;
    NSString *_betweenTimesString;
    NSString *_startDesignatorString;
    NSString *_endDesignatorString;
    float _startTimeX;
    float _startDateX;
    float _endTimeX;
    float _endDateX;
    float _startTimeDesignatorX;
    float _endTimeDesignatorX;
    float _betweenTimeX;
    float _firstLineWidth;
    float _secondLineWidth;
    float _fullWidth;
    float _fullHeight;
    float _yTextOffset;
}

- (float)fullTextWidth;
- (float)fullTextHeight;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isHighlighted;
- (void)setForceSingleLine:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)relayoutText;
- (void)setStartDate:(CDStruct_b0fa4487)arg1 endDate:(CDStruct_b0fa4487)arg2;
- (id)_dateString:(CDStruct_b0fa4487)arg1;
- (id)_timeString:(CDStruct_b0fa4487)arg1 use24Hr:(BOOL)arg2;
- (int)_designatorForTime:(CDStruct_b0fa4487)arg1 use24Hr:(BOOL)arg2;
- (BOOL)_isTwoLinesHigh;
- (BOOL)showDates;
- (void)setShowDates:(BOOL)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (void)_rebuildStrings;
- (void)_localeChanged;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end

