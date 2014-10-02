//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDFPSCounter.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface TSDFPSCACounter : TSDFPSCounter
{
    unsigned int mCAFrameCount;
    NSTimer *mTimer;
    unsigned int mMaxFrameDelta;
    BOOL _shouldRunTimer;
}

@property(nonatomic) BOOL shouldRunTimer; // @synthesize shouldRunTimer=_shouldRunTimer;
- (void)stopLoggingFPS;
- (void)startLoggingFPS;
- (void)p_updateFrameCount;
- (void)reset;
- (id)init;

@end
