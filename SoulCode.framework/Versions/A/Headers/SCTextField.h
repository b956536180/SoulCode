//
//  SCTextField.h
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

typedef enum SCTextBorderStyle {
    SCTextBorderStyleNone = 0,
    SCTextBorderStyleLine,
    SCTextBorderStyleBezel,
    SCTextBorderStyleRoundedRect
} SCTextBorderStyle;

@interface SCTextField : UIView

@property (nonatomic, retain, readonly) UITextField         *textFiled;
@property (nonatomic, assign          ) SCTextBorderStyle   borderStyle;
@property (nonatomic, assign          ) UIView              *movingView;
@property (nonatomic, assign          ) CGFloat             offset;
@property (nonatomic, assign          ) UITextFieldViewMode clearButtonMode;
@property (nonatomic, assign          ) BOOL                isSecureTextEntry;
@property (nonatomic, retain          ) NSArray             *cancleInteractionViews; 

- (void)addObserver;
- (void)removeObserver;

@end
