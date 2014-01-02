/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebKit/WebPreferences.h>

@interface WebPreferences (WebPrivate)
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned long long)arg1;
+ (void)_switchNetworkLoaderToNewTestingSession;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (unsigned int)_systemCFStringEncoding;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (id)_getInstanceForIdentifier:(id)arg1;
- (void)setLowPowerVideoAudioBufferSizeEnabled:(_Bool)arg1;
- (_Bool)lowPowerVideoAudioBufferSizeEnabled;
- (void)setHiddenPageCSSAnimationSuspensionEnabled:(_Bool)arg1;
- (_Bool)hiddenPageCSSAnimationSuspensionEnabled;
- (void)setHiddenPageDOMTimerThrottlingEnabled:(_Bool)arg1;
- (_Bool)hiddenPageDOMTimerThrottlingEnabled;
- (void)setPlugInSnapshottingEnabled:(_Bool)arg1;
- (_Bool)plugInSnapshottingEnabled;
- (int)storageBlockingPolicy;
- (void)setStorageBlockingPolicy:(int)arg1;
- (void)setScreenFontSubstitutionEnabled:(_Bool)arg1;
- (_Bool)screenFontSubstitutionEnabled;
- (void)setDiagnosticLoggingEnabled:(_Bool)arg1;
- (_Bool)diagnosticLoggingEnabled;
- (double)incrementalRenderingSuppressionTimeoutInSeconds;
- (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)arg1;
- (void)setRequestAnimationFrameEnabled:(_Bool)arg1;
- (_Bool)requestAnimationFrameEnabled;
- (_Bool)shouldRespectImageOrientation;
- (void)setShouldRespectImageOrientation:(_Bool)arg1;
- (_Bool)regionBasedColumnsEnabled;
- (void)setRegionBasedColumnsEnabled:(_Bool)arg1;
- (_Bool)notificationsEnabled;
- (void)setNotificationsEnabled:(_Bool)arg1;
- (_Bool)shouldDisplayTextDescriptions;
- (void)setShouldDisplayTextDescriptions:(_Bool)arg1;
- (_Bool)shouldDisplayCaptions;
- (void)setShouldDisplayCaptions:(_Bool)arg1;
- (_Bool)shouldDisplaySubtitles;
- (void)setShouldDisplaySubtitles:(_Bool)arg1;
- (_Bool)wantsBalancedSetDefersLoadingBehavior;
- (void)setWantsBalancedSetDefersLoadingBehavior:(_Bool)arg1;
- (_Bool)backspaceKeyNavigationEnabled;
- (void)setBackspaceKeyNavigationEnabled:(_Bool)arg1;
- (void)_invalidateCachedPreferences;
- (void)setPageCacheSupportsPlugins:(_Bool)arg1;
- (_Bool)pageCacheSupportsPlugins;
- (void)setPictographFontFamily:(id)arg1;
- (id)pictographFontFamily;
- (void)setSeamlessIFramesEnabled:(_Bool)arg1;
- (_Bool)seamlessIFramesEnabled;
- (void)setMockScrollbarsEnabled:(_Bool)arg1;
- (_Bool)mockScrollbarsEnabled;
- (void)setMediaPlaybackAllowsInline:(_Bool)arg1;
- (_Bool)mediaPlaybackAllowsInline;
- (void)setMediaPlaybackRequiresUserGesture:(_Bool)arg1;
- (_Bool)mediaPlaybackRequiresUserGesture;
- (void)setNetworkInterfaceName:(id)arg1;
- (id)networkInterfaceName;
- (void)setNetworkDataUsageTrackingEnabled:(_Bool)arg1;
- (_Bool)networkDataUsageTrackingEnabled;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (unsigned int)audioSessionCategoryOverride;
- (void)setMediaPlaybackAllowsAirPlay:(_Bool)arg1;
- (_Bool)mediaPlaybackAllowsAirPlay;
- (_Bool)isHixie76WebSocketProtocolEnabled;
- (void)setHixie76WebSocketProtocolEnabled:(_Bool)arg1;
- (_Bool)isQTKitEnabled;
- (void)setQTKitEnabled:(_Bool)arg1;
- (_Bool)isAVFoundationEnabled;
- (void)setAVFoundationEnabled:(_Bool)arg1;
- (_Bool)loadsSiteIconsIgnoringImageLoadingPreference;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(_Bool)arg1;
- (_Bool)asynchronousSpellCheckingEnabled;
- (void)setAsynchronousSpellCheckingEnabled:(_Bool)arg1;
- (_Bool)fullScreenEnabled;
- (void)setFullScreenEnabled:(_Bool)arg1;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)willAddToWebView;
- (void)didRemoveFromWebView;
- (void)setUsePreHTML5ParserQuirks:(_Bool)arg1;
- (_Bool)usePreHTML5ParserQuirks;
- (void)setHyperlinkAuditingEnabled:(_Bool)arg1;
- (_Bool)hyperlinkAuditingEnabled;
- (void)setPaginateDuringLayoutEnabled:(_Bool)arg1;
- (_Bool)paginateDuringLayoutEnabled;
- (void)setSpatialNavigationEnabled:(_Bool)arg1;
- (_Bool)isSpatialNavigationEnabled;
- (void)setFrameFlatteningEnabled:(_Bool)arg1;
- (_Bool)isFrameFlatteningEnabled;
- (void)_setDiskImageCacheSavedCacheDirectory:(id)arg1;
- (id)_diskImageCacheSavedCacheDirectory;
- (void)setDiskImageCacheMaximumCacheSize:(unsigned int)arg1;
- (unsigned int)diskImageCacheMaximumCacheSize;
- (void)setDiskImageCacheMinimumImageSize:(unsigned int)arg1;
- (unsigned int)diskImageCacheMinimumImageSize;
- (void)setDiskImageCacheEnabled:(_Bool)arg1;
- (_Bool)diskImageCacheEnabled;
- (void)setAccelerated2dCanvasEnabled:(_Bool)arg1;
- (_Bool)accelerated2dCanvasEnabled;
- (void)setWebGLEnabled:(_Bool)arg1;
- (_Bool)webGLEnabled;
- (void)setWebAudioEnabled:(_Bool)arg1;
- (_Bool)webAudioEnabled;
- (void)setShowRepaintCounter:(_Bool)arg1;
- (_Bool)showRepaintCounter;
- (void)setShowDebugBorders:(_Bool)arg1;
- (_Bool)showDebugBorders;
- (void)setCSSGridLayoutEnabled:(_Bool)arg1;
- (_Bool)cssGridLayoutEnabled;
- (void)setCSSCompositingEnabled:(_Bool)arg1;
- (_Bool)cssCompositingEnabled;
- (void)setCSSRegionsEnabled:(_Bool)arg1;
- (_Bool)cssRegionsEnabled;
- (void)setCSSCustomFilterEnabled:(_Bool)arg1;
- (_Bool)cssCustomFilterEnabled;
- (void)setAcceleratedCompositingEnabled:(_Bool)arg1;
- (_Bool)acceleratedCompositingEnabled;
- (void)setCanvasUsesAcceleratedDrawing:(_Bool)arg1;
- (_Bool)canvasUsesAcceleratedDrawing;
- (void)setAcceleratedDrawingEnabled:(_Bool)arg1;
- (_Bool)acceleratedDrawingEnabled;
- (void)_setForceFTPDirectoryListings:(_Bool)arg1;
- (_Bool)_forceFTPDirectoryListings;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (id)_ftpDirectoryTemplatePath;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (id)_localStorageDatabasePath;
- (void)setDOMPasteAllowed:(_Bool)arg1;
- (_Bool)isDOMPasteAllowed;
- (void)_postPreferencesChangedAPINotification;
- (void)_postPreferencesChangedNotification;
- (void)setExperimentalNotificationsEnabled:(_Bool)arg1;
- (_Bool)experimentalNotificationsEnabled;
- (void)setLocalStorageEnabled:(_Bool)arg1;
- (_Bool)localStorageEnabled;
- (void)setStorageTrackerEnabled:(_Bool)arg1;
- (_Bool)storageTrackerEnabled;
- (void)setDatabasesEnabled:(_Bool)arg1;
- (_Bool)databasesEnabled;
- (void)_setUseSiteSpecificSpoofing:(_Bool)arg1;
- (_Bool)_useSiteSpecificSpoofing;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (int)textDirectionSubmenuInclusionBehavior;
- (void)setEditableLinkBehavior:(int)arg1;
- (int)editableLinkBehavior;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (long long)applicationCacheDefaultOriginQuota;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (long long)applicationCacheTotalQuota;
- (float)_passwordEchoDuration;
- (_Bool)_allowPasswordEcho;
- (int)_interpolationQuality;
- (void)_setInterpolationQuality:(int)arg1;
- (_Bool)_allowCompositingLayerVisualDegradation;
- (void)_setAllowCompositingLayerVisualDegradation:(_Bool)arg1;
- (_Bool)_alwaysUseAcceleratedOverflowScroll;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(_Bool)arg1;
- (_Bool)_alwaysRequestGeolocationPermission;
- (void)_setAlwaysRequestGeolocationPermission:(_Bool)arg1;
- (_Bool)_allowMultiElementImplicitFormSubmission;
- (void)_setAllowMultiElementImplicitFormSubmission:(_Bool)arg1;
- (_Bool)_alwaysUseBaselineOfPrimaryFont;
- (void)_setAlwaysUseBaselineOfPrimaryFont:(_Bool)arg1;
- (int)_NSURLDiskCacheSize;
- (void)_setNSURLDiskCacheSize:(int)arg1;
- (int)_NSURLMemoryCacheSize;
- (void)_setNSURLMemoryCacheSize:(int)arg1;
- (int)_objectCacheSize;
- (void)_setObjectCacheSize:(int)arg1;
- (int)_pageCacheSize;
- (void)_setPageCacheSize:(int)arg1;
- (float)_maxParseDuration;
- (void)_setMaxParseDuration:(float)arg1;
- (int)_layoutInterval;
- (void)_setLayoutInterval:(int)arg1;
- (float)_minimumZoomFontSize;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (_Bool)_telephoneNumberParsingEnabled;
- (void)_setTelephoneNumberParsingEnabled:(_Bool)arg1;
- (void)_setStandalone:(_Bool)arg1;
- (_Bool)_standalone;
- (unsigned long long)_maximumImageSize;
- (double)_backForwardCacheExpirationInterval;
- (void)setAllowFileAccessFromFileURLs:(_Bool)arg1;
- (_Bool)allowFileAccessFromFileURLs;
- (void)setAllowUniversalAccessFromFileURLs:(_Bool)arg1;
- (_Bool)allowUniversalAccessFromFileURLs;
- (void)setWebSecurityEnabled:(_Bool)arg1;
- (_Bool)isWebSecurityEnabled;
- (void)setUsesEncodingDetector:(_Bool)arg1;
- (_Bool)usesEncodingDetector;
- (void)setAutomaticallyDetectsCacheModel:(_Bool)arg1;
- (_Bool)automaticallyDetectsCacheModel;
- (void)setShrinksStandaloneImagesToFit:(_Bool)arg1;
- (_Bool)shrinksStandaloneImagesToFit;
- (void)setXSSAuditorEnabled:(_Bool)arg1;
- (_Bool)isXSSAuditorEnabled;
- (void)setJavaScriptCanAccessClipboard:(_Bool)arg1;
- (_Bool)javaScriptCanAccessClipboard;
- (void)setZoomsTextOnly:(_Bool)arg1;
- (_Bool)zoomsTextOnly;
- (void)setOfflineWebApplicationCacheEnabled:(_Bool)arg1;
- (_Bool)offlineWebApplicationCacheEnabled;
- (void)setLocalFileContentSniffingEnabled:(_Bool)arg1;
- (_Bool)localFileContentSniffingEnabled;
- (void)setWebArchiveDebugModeEnabled:(_Bool)arg1;
- (_Bool)webArchiveDebugModeEnabled;
- (void)setApplicationChromeModeEnabled:(_Bool)arg1;
- (_Bool)applicationChromeModeEnabled;
- (void)setAuthorAndUserStylesEnabled:(_Bool)arg1;
- (_Bool)authorAndUserStylesEnabled;
- (void)setDeveloperExtrasEnabled:(_Bool)arg1;
- (_Bool)javaScriptExperimentsEnabled;
- (void)setJavaScriptExperimentsEnabled:(_Bool)arg1;
- (_Bool)developerExtrasEnabled;
- (void)setDNSPrefetchingEnabled:(_Bool)arg1;
- (_Bool)isDNSPrefetchingEnabled;
@end
