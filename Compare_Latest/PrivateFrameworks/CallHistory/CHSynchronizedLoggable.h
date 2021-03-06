//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CHLoggerProtocol.h"
#import "CHSynchronizableProtocol.h"

@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject <CHLoggerProtocol, CHSynchronizableProtocol>
{
    CHLogger *_logger;
    CHSynchronizable *_synchronizable;
}

- (void).cxx_destruct;
- (BOOL)executeSyncWithBOOL:(CDUnknownBlockType)arg1;
- (id)executeSyncWithResult:(CDUnknownBlockType)arg1;
- (void)executeSync:(CDUnknownBlockType)arg1;
- (void)execute:(CDUnknownBlockType)arg1;
- (id)queue;
- (void)logWithLevel:(unsigned int)arg1 withFormat:(id)arg2;
- (BOOL)shouldLogForLevel:(unsigned int)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (id)initWithName:(id)arg1;

@end

