/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@class NSDate, NSTimer, UILabel;

@interface PLCameraElapsedTimeView : UIImageView
{
    UILabel *_minutes;
    UILabel *_seconds;
    NSTimer *_timer;
    NSDate *_startTime;
    _Bool _autorotationEnabled;
    _Bool _watchingOrientationChanges;
    long long _orientation;
}

- (void)_setDeviceOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)setOrientation:(long long)arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_startWatchingDeviceOrientationChanges;
@property(nonatomic) _Bool autorotationEnabled;
- (void)stopTimer;
- (void)startTimer;
- (void)_update:(id)arg1;
- (id)_createTimeLabelWithFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

