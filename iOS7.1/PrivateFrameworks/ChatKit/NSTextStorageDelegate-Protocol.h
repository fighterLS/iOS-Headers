//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTextStorage;

@protocol NSTextStorageDelegate <NSObject>

@optional
- (void)textStorage:(NSTextStorage *)arg1 didProcessEditing:(unsigned int)arg2 range:(struct _NSRange)arg3 changeInLength:(int)arg4;
- (void)textStorage:(NSTextStorage *)arg1 willProcessEditing:(unsigned int)arg2 range:(struct _NSRange)arg3 changeInLength:(int)arg4;
@end
