//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOPlaceDataProxy.h"

@class GEOPhoneNumberMUIDMapper, GEOPlaceDataCacheRegister, NSLock, NSMapTable, NSMutableOrderedSet, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy>
{
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
    GEOPlaceDataCacheRegister *_cacheRegister;
    GEOPhoneNumberMUIDMapper *_phoneNumberMapper;
    NSMutableSet *_requestsInProgress;
    NSMutableOrderedSet *_placeHashes;
}

- (void)_privacyAndLocationSettingsResetObserver:(id)arg1;
- (void)_callHistoryRecentsClearedObserver:(id)arg1;
- (void)_resetPhoneNumberMapper;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;
- (void)applyRAPUpdatedMapItems:(id)arg1;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 requesterHandler:(CDUnknownBlockType)arg3;
- (void)_cachePlaceData:(id)arg1 forKey:(struct _GEOTileKey)arg2 shouldOptimizeWritesToDisk:(BOOL)arg3;
- (id)_cachedPlaceForForwardGeocodeRequest:(id)arg1;
- (void)_trackPlaceData:(id)arg1 forGeocodingParameters:(id)arg2;
- (void)trackPlaceData:(id)arg1;
- (void)fetchAllCacheEntriesWithRequesterHandler:(CDUnknownBlockType)arg1;
- (int)_invalidationStateForPlace:(id)arg1;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 requesterHandler:(CDUnknownBlockType)arg4;
- (void)requestMUIDs:(id)arg1 includeETA:(BOOL)arg2 traits:(id)arg3 requesterHandler:(CDUnknownBlockType)arg4;
- (void)cancelRequest:(id)arg1;
- (void)startRequest:(id)arg1 traits:(id)arg2 finished:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
