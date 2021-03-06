//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPTextBaseCommand.h>

@class TSWPSelection, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPTextCommand : TSWPTextBaseCommand
{
    TSWPStorage *_storage;
    TSWPSelection *_selection;
    struct TSWPStorageTransaction *_undoRedoTransaction;
    struct _NSRange _restoreRange;
    struct _NSRange _redoRestoreRange;
    struct _NSRange _performRange;
}

+ (id)newObjectForUnarchiver:(id)arg1;
@property(nonatomic) struct _NSRange restoreRange; // @synthesize restoreRange=_restoreRange;
@property(nonatomic) struct _NSRange performRange; // @synthesize performRange=_performRange;
@property(nonatomic) struct _NSRange redoRestoreRange; // @synthesize redoRestoreRange=_redoRestoreRange;
@property(readonly, nonatomic) TSWPSelection *selection; // @synthesize selection=_selection;
- (id).cxx_construct;
- (void)p_setSelectionToRange:(struct _NSRange)arg1 isVisual:(BOOL)arg2 leadingEdge:(BOOL)arg3;
- (void)p_setSelectionToRange:(struct _NSRange)arg1;
- (void)p_invalidateSelection:(id)arg1;
- (void)p_invalidateRange:(struct _NSRange)arg1;
- (struct TSWPStorageTransaction *)undoRedoTransaction;
- (void)redo;
- (void)undo;
- (struct _NSRange)undoRedo;
- (void)doUndoRedo;
- (void)commit;
- (void)doCommit;
- (BOOL)process;
- (BOOL)shouldRunSynchronously;
- (id)initFromUnarchiver:(id)arg1;
- (const struct TextCommandArchive *)textCommandArchiveFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct TextCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
@property(readonly, nonatomic) int persistenceKind;
- (void)saveToArchive:(struct TextCommandArchive *)arg1 archiver:(id)arg2;
- (id)actionString;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2;
- (void)setRestoreRangeWithSelection:(id)arg1;
@property(readonly, nonatomic) TSWPStorage *storage;

@end

