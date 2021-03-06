/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class TWMentionImageView, TWSession, TWUserRecord, UILabel;

@interface TWMentionTableViewCell : UITableViewCell
{
    TWMentionImageView *_iconView;
    UILabel *_topNameLabel;
    UILabel *_bottomNameLabel;
    UILabel *_searchTextLabel;
    int _type;
    TWUserRecord *_userRecord;
    TWSession *_session;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) TWSession *session; // @synthesize session=_session;
@property(retain, nonatomic) TWUserRecord *userRecord; // @synthesize userRecord=_userRecord;
- (void)refreshFields;
- (void)layoutSubviews;
- (void)updateCellSubviews;
- (struct CGRect)searchTextLabelFrame;
- (struct CGRect)bottomNameLableFrame;
- (struct CGRect)topNameLableFrame;
- (struct CGRect)iconViewRect;
- (void)dealloc;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateLabelColors:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

