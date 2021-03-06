/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MREffect.h>

@class MRCroppingSprite, MRImage, MRTextRenderer;

@interface MREffectJustATitle : MREffect
{
    MRTextRenderer *mTextRenderer0;
    MRTextRenderer *mTextRenderer1;
    MRImage *mImage0;
    MRImage *mImage1;
    MRCroppingSprite *mTextSprite0;
    MRCroppingSprite *mTextSprite1;
    struct CGRect mText0Rect;
    struct CGRect mText1Rect;
    _Bool mTextWasUpdatedSinceLastRendering;
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (_Bool)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (_Bool)isLoadedForTime:(double)arg1;
- (_Bool)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)setAttributes:(id)arg1;
- (id)init;

@end

