//
//  CycleScrollView.h
//  SoulCode
//
//  Created by 5Z4 on 12-12-01.
//  Copyright (c) 2012年 zhifang_Liu. All rights reserved.
//
//     _____  _____
//    /           /    /     /
//   /_____      /    /_____/
//        /     /          /
//  _____/     /_____     /

#import <UIKit/UIKit.h>

@interface SCCycleScrollView : UIView

@property (nonatomic , readonly                               ) UIScrollView *scrollView;
@property (nonatomic , copy) NSInteger (^totalPagesCount      ) (          void                );
@property (nonatomic , copy) UIView *(^fetchContentViewAtIndex) (NSInteger pageIndex      );
@property (nonatomic , copy) void (^TapActionBlock            ) (NSInteger pageIndex      );
@property (nonatomic , assign                                 ) UIImage      *titleViewBakGround;
@property (nonatomic, strong                                  ) UIColor      *titleColor;
@property (nonatomic, strong                                  ) UIColor      *spotlightColor;
@property (nonatomic , strong) UIPageControl *pageView;
- (id)initWithFrame:(CGRect)frame animationDuration:(NSTimeInterval)animationDuration;
- (id)initWithFrame:(CGRect)frame animationDuration:(NSTimeInterval)animationDuration withTitleArray:(NSArray *)titleArray;

@end