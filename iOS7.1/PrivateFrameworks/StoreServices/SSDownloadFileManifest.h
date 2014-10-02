//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject
{
    SSXPCConnection *_connection;
    int _manifestType;
}

- (void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeItemWithAssetPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)rebuildManifestWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) int manifestType;
- (void)getPathsForFilesWithClass:(int)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithManifestType:(int)arg1;
- (id)init;

@end
