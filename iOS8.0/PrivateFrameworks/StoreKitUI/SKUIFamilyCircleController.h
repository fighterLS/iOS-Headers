//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAFamilyCircle, NSCache, NSNumber, NSOperationQueue, SKUIClientContext, SSFamilyCircle;

@interface SKUIFamilyCircleController : NSObject
{
    SSFamilyCircle *_iTunesFamily;
    FAFamilyCircle *_iCloudFamily;
    NSNumber *_lastAccountID;
    NSCache *_imageCache;
    NSOperationQueue *_opQueue;
    SKUIClientContext *_clientContext;
    BOOL _hasLoaded;
}

+ (id)sharedController;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) FAFamilyCircle *iCloudFamily; // @synthesize iCloudFamily=_iCloudFamily;
@property(readonly, nonatomic) SSFamilyCircle *familyCircle; // @synthesize familyCircle=_iTunesFamily;
@property(readonly, nonatomic) BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
- (void).cxx_destruct;
- (void)_setProfilePicture:(id)arg1 forMember:(id)arg2;
- (void)_setITunesFamily:(id)arg1 error:(id)arg2 iCloudFamily:(id)arg3 error:(id)arg4;
- (void)_reloadDataWithPromptStyle:(int)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (id)profilePictureForFamilyMember:(id)arg1;
- (void)reloadData;
- (void)dealloc;
- (id)init;

@end
