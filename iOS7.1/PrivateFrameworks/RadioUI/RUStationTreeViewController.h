//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RUAudioPreviewViewDelegate.h"
#import "RUPreviewSessionObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, RUMetricsController, RUParallelScrollView, RUPreviewSession, RUProxyTableView, RUStationTreeDataSource, RadioStationTreeNode, SKUICircleProgressIndicator, SSMetricsPageEvent, UILabel, UIScrollView, UITableView;

@interface RUStationTreeViewController : UIViewController <RUAudioPreviewViewDelegate, RUPreviewSessionObserver, UITableViewDataSource, UITableViewDelegate>
{
    SKUICircleProgressIndicator *_activityIndicator;
    RadioStationTreeNode *_addingTreeNode;
    RUParallelScrollView *_containerScrollView;
    RUStationTreeDataSource *_dataSource;
    BOOL _isLoadingParentTreeNode;
    BOOL _hasLoadedParentTreeNode;
    SSMetricsPageEvent *_lastPageEvent;
    UILabel *_loadingLabel;
    NSMutableArray *_loadingTreeNodes;
    RUMetricsController *_metricsController;
    int _navigationOperation;
    RadioStationTreeNode *_parentTreeNode;
    RadioStationTreeNode *_previewingTreeNode;
    RUPreviewSession *_previewSession;
    NSMutableArray *_queuedMetricsOperations;
    RUProxyTableView *_tableView;
    BOOL _wasLastNavigationOperationAnimated;
    id <RUStationTreeViewControllerDelegate> _delegate;
}

+ (id)_imageCache;
@property(nonatomic) __weak id <RUStationTreeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateWithParentNode:(id)arg1 metricsPageEvent:(id)arg2 metricsConfiguration:(id)arg3 canReloadTableView:(BOOL)arg4;
- (id)_mediaEventForPreviewingItem:(id)arg1;
- (void)_loadAdditionalChildrenForSectionTreeNode:(id)arg1;
- (id)_indexPathForChildTreeNode:(id)arg1;
- (void)_endPreviewPlaybackWithOptions:(int)arg1 withFinalItem:(id)arg2 didFinalItemPlayToCompletion:(BOOL)arg3;
- (id)_currentPreviewTrackDescripton;
- (id)_childTreeNodeAtIndexPath:(id)arg1;
- (void)_applyPreviewingAttributesToCell:(id)arg1 forTreeNode:(id)arg2 animated:(BOOL)arg3;
- (void)_addMetricsControllerOperationBlock:(CDUnknownBlockType)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_addButtonAction:(id)arg1;
- (void)removeAddingIndicator;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)previewSession:(id)arg1 didStopWithOptions:(int)arg2 withFinalItem:(id)arg3 didFinalItemPlayToCompletion:(BOOL)arg4;
- (void)previewSession:(id)arg1 didChangeFromItem:(id)arg2 toItem:(id)arg3;
- (void)audioPreviewViewDidCancel:(id)arg1 forReason:(int)arg2;
- (id)contentScrollView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (id)_initWithDataSource:(id)arg1;
- (id)initWithParentNodeID:(long long)arg1;
- (id)initForFeaturedStations;

@end
