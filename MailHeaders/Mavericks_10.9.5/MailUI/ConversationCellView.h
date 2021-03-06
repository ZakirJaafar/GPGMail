/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSView.h"

@class CALayer, NSLayoutConstraint, NSViewController;

@interface ConversationCellView : NSView
{
    NSViewController *_viewController;
    BOOL _emphasized;
    BOOL _selected;
    BOOL _focused;
    BOOL _primary;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_midXConstraint;
    NSLayoutConstraint *_minYConstraint;
    CALayer *_shadowLayer;
    CALayer *_overlayLayer;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) NSLayoutConstraint *minYConstraint; // @synthesize minYConstraint=_minYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *midXConstraint; // @synthesize midXConstraint=_midXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateLayer;
- (id)makeBackingLayer;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)_enclosingConversationView;
@property(nonatomic) BOOL primary;
@property(nonatomic) BOOL focused;
@property(nonatomic) BOOL selected;
@property(nonatomic) BOOL emphasized;
@property(retain, nonatomic) NSViewController *viewController;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (BOOL)clipsToBounds;
- (void)dealloc;

@end

