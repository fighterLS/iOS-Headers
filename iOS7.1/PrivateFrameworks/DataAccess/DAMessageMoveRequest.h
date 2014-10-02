//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DAMessageMoveRequest : NSObject
{
    NSString *_message;
    NSString *_fromFolder;
    NSString *_toFolder;
    id _context;
}

@property(retain) id context; // @synthesize context=_context;
@property(readonly) NSString *toFolder; // @synthesize toFolder=_toFolder;
@property(readonly) NSString *fromFolder; // @synthesize fromFolder=_fromFolder;
@property(readonly) NSString *message; // @synthesize message=_message;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initMoveRequestWithMessage:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3;

@end
