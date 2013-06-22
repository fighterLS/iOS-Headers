/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITextContentView.h"

#import "DOMEventListener-Protocol.h"

@interface SUMessageTextContentView : UITextContentView <DOMEventListener>
{
}

- (void)_sendDidChangeSize;
- (void)_sendDidChange;
- (BOOL)_hasImages;
- (void)_collapseIfNecessary;
- (void)handleEvent:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)setMarginEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)insertHTMLString:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 webView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initSUMessageTextContentView;

// Remaining properties
@property(nonatomic) id <SUMessageTextContentViewDelegate> delegate; // @dynamic delegate;

@end
