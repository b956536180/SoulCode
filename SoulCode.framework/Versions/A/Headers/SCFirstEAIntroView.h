//
//  SCFirstEAIntroView.h
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


@protocol EAIntroDelegate
@optional
- (void)introDidFinish;
@end

@interface SCFirstEAIntroView : UIView <UIScrollViewDelegate>

@property (nonatomic, assign) id<EAIntroDelegate> delegate;

@property (nonatomic, assign) bool            swipeToExit;
@property (nonatomic, assign) bool            hideOffscreenPages;
@property (nonatomic, retain) UIImage         *bgImage;
@property (nonatomic, retain) UIView          *titleView;
@property (nonatomic, assign) CGFloat         titleViewY;
@property (nonatomic, retain) UIPageControl   *pageControl;
@property (nonatomic, assign) CGFloat         pageControlY;
@property (nonatomic, retain) UIButton        *skipButton;

@property (nonatomic, assign) NSInteger       currentPageIndex;
@property (nonatomic, retain) UIScrollView    *scrollView;
@property (nonatomic, retain) UIImageView     *bgImageView;
@property (nonatomic, retain) UIImageView     *pageBgBack;
@property (nonatomic, retain) UIImageView     *pageBgFront;
@property (nonatomic, retain) NSArray         *pages;

- (id)initWithFrame:(CGRect)frame andPages:(NSArray *)pagesArray;

- (void)showInView:(UIView *)view animateDuration:(CGFloat)duration;
- (void)hideWithFadeOutDuration:(CGFloat)duration;

@end
