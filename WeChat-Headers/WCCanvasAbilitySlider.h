//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

@class UIColor, UIImage;

@interface WCCanvasAbilitySlider : UISlider
{
    double _backgroundHeight;
    UIColor *_frontgroundColor;
    UIColor *_backgroundColor;
    UIImage *_backgroundImage;
    UIImage *_frontgroundImage;
}

@property(retain, nonatomic) UIImage *frontgroundImage; // @synthesize frontgroundImage=_frontgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *frontgroundColor; // @synthesize frontgroundColor=_frontgroundColor;
@property(nonatomic) double backgroundHeight; // @synthesize backgroundHeight=_backgroundHeight;
- (void).cxx_destruct;
- (id)getImageWithImage:(id)arg1;
- (id)getImageWithColor:(id)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (id)init;

@end
