//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Search/SPSection.h>

#import "PRSDescriptionSection.h"

@class NSString, NSURL, PRSImage;

@interface SPDescriptionSection : SPSection <PRSDescriptionSection>
{
}


// Remaining properties
@property(retain, nonatomic) NSURL *attribution_url;
@property(nonatomic) BOOL description_expand; // @dynamic description_expand;
@property(retain, nonatomic) NSString *description_expand_text; // @dynamic description_expand_text;
@property(nonatomic) int description_maxlines; // @dynamic description_maxlines;
@property(nonatomic) int description_size; // @dynamic description_size;
@property(nonatomic) int description_weight; // @dynamic description_weight;
@property(retain, nonatomic) PRSImage *image; // @dynamic image;
@property(retain, nonatomic) NSString *image_align; // @dynamic image_align;
@property(retain, nonatomic) NSString *resultDescription; // @dynamic resultDescription;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) BOOL title_nowrap; // @dynamic title_nowrap;
@property(nonatomic) int title_weight; // @dynamic title_weight;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSURL *url;
@end

