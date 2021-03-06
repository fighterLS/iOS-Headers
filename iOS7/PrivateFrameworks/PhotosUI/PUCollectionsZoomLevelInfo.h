/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUGridZoomLevelInfo.h>

#import "PUSectionedGridLayoutDelegate-Protocol.h"

@class NSArray;

@interface PUCollectionsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate>
{
    NSArray *_allMomentLists;
}

- (void).cxx_destruct;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2;
- (long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)modelDidChange;
- (_Bool)supportsIncrementalChangeNotifications;
- (id)diagnosticsProviderForVisualSection:(long long)arg1;
- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;
- (void)updateLayoutMetricsForWidth:(double)arg1;
- (int)imageFormat;
- (long long)maxRowsPerSection;
- (id)sectionHeaderElementKind;
- (id)renderedStripsElementKind;
- (id)newCollectionViewLayout;
- (struct __CFString *)aggregateLevelKey;
- (_Bool)hasEnoughContentToDisplay;
- (id)displayTitle;
- (id)_momentLists;

@end

