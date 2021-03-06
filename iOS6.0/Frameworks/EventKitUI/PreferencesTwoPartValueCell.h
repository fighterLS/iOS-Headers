/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class TwoPartTextLabel, UIColor;

@interface PreferencesTwoPartValueCell : UITableViewCell
{
    TwoPartTextLabel *_twoPartLabel;
    unsigned int _notifiedShort;
    id <EKCellShortener> _shortener;
}

@property(nonatomic) id <EKCellShortener> shortener; // @synthesize shortener=_shortener;
- (void)checkValueWidths;
- (void)shorten;
- (void)layoutSubviews;
- (void)_layoutSubviewsCore;
- (void)layoutText:(id)arg1 andValue:(id)arg2;
@property(readonly, nonatomic) UIColor *valueColor;
- (void)dealloc;
@property(readonly, nonatomic) TwoPartTextLabel *twoPartTextLabel;

@end

