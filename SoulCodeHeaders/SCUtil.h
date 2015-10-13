//
//  SCUtil.h
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

@interface SCUtil : NSObject

- (NSString *)getBundlePath:(NSString *)bundleName withFileName:(NSString *)fileName;

#pragma mark - Border Code

+ (void)borderWithView:(UIView *)view;

+ (void)borderWithView:(UIView *)view masksToBounds:(BOOL)masksToBounds;

+ (void)borderWithView:(UIView *)view color:(UIColor *)color;

+ (void)borderWithView:(UIView *)view color:(UIColor *)color masksToBounds:(BOOL)masksToBounds;

+ (void)borderWithView:(UIView *)view cornerRadius:(CGFloat)radius;

+ (void)borderWithView:(UIView *)view cornerRadius:(CGFloat)radius masksToBounds:(BOOL)masksToBounds;

+ (void)borderWithView:(UIView *)view cornerRadius:(CGFloat)radius color:(UIColor *)color;

+ (void)borderWithView:(UIView *)view cornerRadius:(CGFloat)radius color:(UIColor *)color masksToBounds:(BOOL)masksToBounds;

+ (UIImage*)animatedGIFNamed:(NSString*)name;

+ (UIImage*)animatedGIFWithData:(NSData *)data;

+ (BOOL)isMobileNumber:(NSString *)mobileNum;

+ (BOOL)isValidateEmail:(NSString *)email;

+ (BOOL)isValidateTelNumber:(NSString *)number;

+ (void)caughtException;

+ (void)callWithString:(NSString *)callString;

+ (CGFloat)floatValueOfCurrentDeviceVersion;

+ (void)applicationShouldDisableAutolockScreen:(BOOL)autoLock;

+ (NSString *) platformString;

+ (NSObject *)objectFromSavedInfoWithKey:(NSString *)key ;

+ (void)saveToSavedInfoWithObject:(NSObject *)object andKey:(NSString *)key;

+ (void)shakeView:(UIView *)view shake:(int)times direction:(int)direction currentTimes:(int)current withDelta:(CGFloat)delta andSpeed:(NSTimeInterval)interval;

+ (void)bessemerBaseView:(UIView *)baseView startView:(UIView *)startView endView:(UIView *)endView imageViewName:(NSString *)stringName;

+ (UIView *)lanchImageExchangeOnBaseView:(UIViewController *)loginViewController withImageView:(UIImageView *)imageView withSleepTime:(NSInteger)time;

+ (void)addLeftBarButtonWithTitle:(NSString *)title target:(id)target action:(SEL)action toController:(UIViewController *)controller;

+ (void)addRightBarButtonWithTitle:(NSString *)title target:(id)target action:(SEL)action toController:(UIViewController *)controller;

+ (void)setNavigationBarTitleColor:(UINavigationController *)navigation withColor:(UIColor *)color;

+ (NSArray *)reverseObjectEnumeratorWithArray:(NSArray *)array;

+ (UIView *)rotateViewWith:(UIImageView *)imageView;

+ (UIViewController *)findViewController:(UIView *)sourceView;

+ (UIViewController *)getCurrentVC;

@end
