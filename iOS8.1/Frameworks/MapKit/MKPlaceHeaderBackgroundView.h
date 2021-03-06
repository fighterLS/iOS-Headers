//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MKPlaceHeaderViewCinematics.h"

@class MKMapItem, NSString;

@interface MKPlaceHeaderBackgroundView : UIView <MKPlaceHeaderViewCinematics>
{
    int _backgroundType;
    MKMapItem *_mapItem;
    id <MKPlaceHeaderBackgroundViewDelegate> _delegate;
    int _preparationState;
}

+ (id)backgroundViewForMapItem:(id)arg1 headerView:(id)arg2;
+ (id)backgroundViewForBackgroundType:(int)arg1 mapItem:(id)arg2 headerView:(id)arg3;
+ (Class)classForBackgroundType:(int)arg1;
+ (int)backgroundTypeForMapItem:(id)arg1;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) int backgroundType; // @synthesize backgroundType=_backgroundType;
@property(nonatomic) int preparationState; // @synthesize preparationState=_preparationState;
@property(nonatomic) __weak id <MKPlaceHeaderBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)reset;
- (void)present;
- (void)prepareForPresentation;
- (id)initWithFrame:(struct CGRect)arg1 mapItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

