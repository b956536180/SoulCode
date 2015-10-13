//
//  HistoryTextField.h
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
typedef enum HistoryTextFieldOrderStyle {
    SCHistoryTextFieldOrderStyleASC = 0,
    SCHistoryTextFieldOrderStyleDESC
} SCHistoryTextFieldOrderStyle;

@protocol SCHistoryDelegate;

@interface SCHistoryTextField : UIView

@property (nonatomic, retain, readonly) UITextField                  *textField;
@property (nonatomic, assign          ) UIView            *moveingView;
@property (nonatomic, assign          ) id <SCHistoryDelegate           > delegate;
@property (nonatomic, copy            ) NSString                     *historyListTitle;
@property (nonatomic, assign          ) CGFloat                      historyListTitleHeight;
@property (nonatomic, assign          ) CGFloat                      offset;
@property (nonatomic, assign          ) CGFloat                      historyListHeight;
@property (nonatomic, assign          ) CGFloat                      leftViewWidth;
@property (nonatomic, copy            ) NSString                     *historyTextFieldIndentifier;
@property (nonatomic, assign          ) SCHistoryTextFieldOrderStyle orderStyle;

- (void)addObserver;
- (void)removeObserver;
- (void)addHistoryListWithInfo:(NSString *)info;

@end


@protocol SCHistoryDelegate <NSObject>

- (BOOL)textFieldShouldBeginEditing:(SCHistoryTextField *)textField;
- (void)textFieldDidEndEditing:(SCHistoryTextField *)textField;
- (BOOL)textField:(SCHistoryTextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string;
- (BOOL)textFieldShouldClear:(SCHistoryTextField *)textField;
- (BOOL)textFieldShouldReturn:(SCHistoryTextField *)textField;

@end
