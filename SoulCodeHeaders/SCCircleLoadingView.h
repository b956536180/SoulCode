//
//  SCCircleLoadingView.h
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

@interface SCCircleLoadingView : UIView

//default is 1.0f
@property (nonatomic, assign  ) CGFloat lineWidth;

//default is [UIColor lightGrayColor]
@property (nonatomic, strong  ) UIColor *lineColor;

@property (nonatomic, readonly) BOOL    isAnimating;

//use this to init
- (id)initWithFrame:(CGRect)frame;

- (void)startAnimation;
- (void)stopAnimation;

@end
