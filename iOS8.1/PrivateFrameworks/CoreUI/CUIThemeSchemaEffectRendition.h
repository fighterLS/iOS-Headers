//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class CUIImage, CUIShapeEffectPreset, NSDictionary;

__attribute__((visibility("hidden")))
@interface CUIThemeSchemaEffectRendition : CUIThemeRendition
{
    NSDictionary *_cuiInfo;
    CUIShapeEffectPreset *_effectPreset;
    CUIImage *_referenceImage;
}

- (id)effectPreset;
- (id)referenceImage;
- (BOOL)_generateReferenceImage;
- (void)dealloc;
- (id)coreUIOptions;
- (void)_initializeCoreUIOptions:(id)arg1;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(int)arg3;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;

@end
