//
//  SCInfoAlert
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

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define kSGInfoAlert_fontSize       15
#define kSGInfoAlert_width          10
#define kMax_ConstrainedSize        CGSizeMake(0, 0)

@interface SCInfoAlert : UIView{
    CGColorRef bgcolor_;
    NSString *info_;
    CGSize fontSize_;
}

+ (void)showInfo:(NSString*)info 
         bgColor:(CGColorRef)color
          inView:(UIView*)view 
        vertical:(float)height;

@end
