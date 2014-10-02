//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSCache : NSObject
{
    id _delegate;
    void *_private[5];
    void *_reserved;
}

- (id)allObjects;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1;
- (BOOL)evictsObjectsWhenApplicationEntersBackground;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1;
- (BOOL)evictsObjectsWithDiscardedContent;
- (unsigned int)countLimit;
- (void)setCountLimit:(unsigned int)arg1;
- (unsigned int)totalCostLimit;
- (void)setTotalCostLimit:(unsigned int)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned int)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
