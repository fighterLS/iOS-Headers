//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDSwatchRenderingOperation.h>

@class TSDImageInfo;

__attribute__((visibility("hidden")))
@interface TSDImageRenderingOperation : TSDSwatchRenderingOperation
{
    TSDImageInfo *mImageInfo;
    BOOL mShouldClipVertically;
}

@property(retain) TSDImageInfo *imageInfo; // @synthesize imageInfo=mImageInfo;
- (void)doWorkWithReadLock;
- (void)dealloc;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect)arg4 imageInfo:(id)arg5 documentRoot:(id)arg6;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(float)arg3 swatchFrame:(struct CGRect)arg4 imageInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(BOOL)arg7;

@end
