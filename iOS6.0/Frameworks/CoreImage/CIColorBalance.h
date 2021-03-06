/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, NSNumber;

@interface CIColorBalance : CIFilter
{
    CIImage *inputImage;
    CIColor *inputColor;
    NSNumber *inputStrength;
    NSNumber *inputWarmth;
    NSNumber *inputDamping;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputDamping; // @synthesize inputDamping;
@property(copy, nonatomic) NSNumber *inputWarmth; // @synthesize inputWarmth;
@property(copy, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
@property(copy, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;
- (void)setDefaults;

@end

