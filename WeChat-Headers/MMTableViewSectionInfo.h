//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewUserInfo.h"

@class NSMutableArray;

@interface MMTableViewSectionInfo : MMTableViewUserInfo
{
    SEL _makeHeaderSel;
    id _makeHeaderTarget;
    SEL _makeFooterSel;
    id _makeFooterTarget;
    double _fHeaderHeight;
    double _fFooterHeight;
    NSMutableArray *_arrCells;
    _Bool _bUseDynamicSize;
}

+ (id)sectionInfoFooterWithView:(id)arg1;
+ (id)sectionInfoHeaderWithView:(id)arg1;
+ (id)sectionInfoHeaderMakeSel:(SEL)arg1 makeTarget:(id)arg2;
+ (id)sectionInfoHeader:(id)arg1 Footer:(id)arg2;
+ (id)sectionInfoFooter:(id)arg1;
+ (id)sectionInfoHeader:(id)arg1;
+ (id)sectionInfoDefaut;
@property(nonatomic) _Bool bUseDynamicSize; // @synthesize bUseDynamicSize=_bUseDynamicSize;
@property(nonatomic) double fFooterHeight; // @synthesize fFooterHeight=_fFooterHeight;
@property(nonatomic) double fHeaderHeight; // @synthesize fHeaderHeight=_fHeaderHeight;
@property(nonatomic) __weak id makeFooterTarget; // @synthesize makeFooterTarget=_makeFooterTarget;
@property(nonatomic) SEL makeFooterSel; // @synthesize makeFooterSel=_makeFooterSel;
@property(nonatomic) __weak id makeHeaderTarget; // @synthesize makeHeaderTarget=_makeHeaderTarget;
@property(nonatomic) SEL makeHeaderSel; // @synthesize makeHeaderSel=_makeHeaderSel;
- (void).cxx_destruct;
- (void)setHeaderTitle:(id)arg1;
- (void)setFooterTitle:(id)arg1;
- (id)getHeaderView;
- (void)setHeaderView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)removeCellAt:(unsigned long long)arg1;
- (id)getCellAt:(unsigned long long)arg1;
- (unsigned long long)getCellCount;
- (void)addCell:(id)arg1;
- (void)insertCell:(id)arg1 At:(unsigned int)arg2;
- (id)init;
- (void)sortCellsByText;
- (void)sortCellsByTheText;

@end

