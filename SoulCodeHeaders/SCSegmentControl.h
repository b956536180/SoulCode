//
//  SKSegmentControl.h
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

@interface SCSegmentControl : UIControl

@property (nonatomic, retain                        ) UIColor    *tintColor;
@property (nonatomic, retain                        ) UIColor    *textColor;
@property (nonatomic, retain                        ) UIColor    *textShadowColor;
@property (nonatomic, assign                        ) NSUInteger selectedIndex;
@property (nonatomic, copy) void (^indexChangedBlock) (NSUInteger newIndex  );
@property (nonatomic, assign                        ) CGFloat    cornerRadius;
@property (nonatomic, assign                        ) CGFloat    height;
@property (nonatomic, assign                        ) CGFloat    width;
@property (nonatomic, assign                        ) UIColor    *sliderTintColor;
@property (nonatomic, assign                        ) UIColor    *sliderTextColor;
@property (nonatomic, assign                        ) UIColor    *sliderTextShadowColor;

- (id)initWithSegmentTitles:(NSString *)title, ... NS_REQUIRES_NIL_TERMINATION;
- (void)moveSliderToIndex:(NSUInteger)segmentIndex animate:(BOOL)animate;

@end
