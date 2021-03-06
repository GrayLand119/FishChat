//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GifItem, UIImageView;

@interface MMGifView : UIView
{
    GifItem *m_refData;
    UIImageView *m_imageView;
    struct CGSize m_size;
    id <MMGifViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MMGifViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize m_size; // @synthesize m_size;
@property(retain, nonatomic) UIImageView *m_imageView; // @synthesize m_imageView;
@property(nonatomic) GifItem *m_refData; // @synthesize m_refData;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) _Bool isSingleFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

