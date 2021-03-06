//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol TSCH3DLightingPackageData
- (float)dropOffRateAtIndex:(unsigned int)arg1;
- (float)cutOffAngleAtIndex:(unsigned int)arg1;
- (struct Vector3)directionAtIndex:(unsigned int)arg1;
- (struct Vector3)positionAtIndex:(unsigned int)arg1;
- (struct Vector3)attenuationAtIndex:(unsigned int)arg1;
- (BOOL)enabledAtIndex:(unsigned int)arg1;
- (int)coordinateSpaceAtIndex:(unsigned int)arg1;
- (float)intensityAtIndex:(unsigned int)arg1;
- (Color_1703f521)specularColorAtIndex:(unsigned int)arg1;
- (Color_1703f521)diffuseColorAtIndex:(unsigned int)arg1;
- (Color_1703f521)ambientColorAtIndex:(unsigned int)arg1;
- (int)typeAtIndex:(unsigned int)arg1;
- (NSString *)nameAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (NSString *)packageName;
@end

