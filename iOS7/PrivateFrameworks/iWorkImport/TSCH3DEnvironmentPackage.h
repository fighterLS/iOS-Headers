/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

// Not exported
@interface TSCH3DEnvironmentPackage : NSObject <NSCopying>
{
    NSMutableArray *mMaterials;
}

- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (void)addMaterial:(id)arg1;
- (id)materialEnumerator;
- (unsigned long long)materialCount;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

