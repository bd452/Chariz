//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import  AppKit;

#import "UXKitAppearance-Protocol.h"

@class NSColor, NSString;

@interface NSView (UXKitAppearance) <UXKitAppearance>
- (void)tintColorDidChange;
@property(nonatomic) long long tintAdjustmentMode;
@property(retain, nonatomic) NSColor *tintColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end

