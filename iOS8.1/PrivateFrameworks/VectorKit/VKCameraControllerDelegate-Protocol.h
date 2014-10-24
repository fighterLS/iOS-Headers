//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKAnimation, VKCameraController;

@protocol VKCameraControllerDelegate <NSObject>
- (void)cameraController:(VKCameraController *)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)cameraController:(VKCameraController *)arg1 canZoomInDidChange:(BOOL)arg2;
- (id <VKTrackableAnnotationPresentation>)cameraController:(VKCameraController *)arg1 presentationForAnnotation:(id <VKTrackableAnnotation>)arg2;
- (void)cameraController:(VKCameraController *)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(VKCameraController *)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraController:(VKCameraController *)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)cameraController:(VKCameraController *)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(VKCameraController *)arg1;
- (void)cameraController:(VKCameraController *)arg1 requestsDisplayRate:(int)arg2;
- (void)runAnimation:(VKAnimation *)arg1;
@end
