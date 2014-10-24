//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCalendar.h"

@interface NSCalendar (CalClassAdditions)
+ (id)overlayCalendarForCalendarIdentifier:(id)arg1 timezone:(id)arg2;
+ (id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1;
+ (id)sharedAutoupdatingCurrentCalendar;
+ (id)CalGregorianCalendarForTimeZone:(id)arg1;
+ (id)CalGregorianGMTCalendar;
- (id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2;
- (id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2;
- (BOOL)dateIsFirstOfYear:(id)arg1;
- (BOOL)dateIsFirstOfMonth:(id)arg1;
- (int)daysInMonthContainingDate:(id)arg1;
- (int)calendarDaysFromDate:(id)arg1 toDate:(id)arg2;
- (id)dateBySanityCheckingDateRoundedToDay:(id)arg1;
- (int)secondsInDay;
- (int)secondsInMinute;
- (int)minutesInHour;
- (int)hoursInDay;
- (int)daysInWeek;
- (int)monthsInYearForDate:(id)arg1;
@end
