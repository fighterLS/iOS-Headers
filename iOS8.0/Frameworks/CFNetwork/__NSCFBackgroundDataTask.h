//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

#import "NSStreamDelegate.h"

@class NSFileHandle, NSInputStream, NSObject<OS_dispatch_io>, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate>
{
    NSInputStream *_requestBodyStream;
    NSInputStream *_initialStream;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_io> *_pipeIO;
    unsigned int _bytesRead;
    BOOL _streamBased;
    NSFileHandle *_readHandle;
}

@property(readonly, getter=isStreamBased) BOOL streamBased; // @synthesize streamBased=_streamBased;
@property(readonly) NSFileHandle *readHandle; // @synthesize readHandle=_readHandle;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)finishStream:(BOOL)arg1;
- (void)readFromStream;
- (void)_onqueue_didReceiveData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)_onqueue_willBeRetried;
- (void)_onqueue_needNewBodyStream:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)captureStream:(id)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_openStream;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

