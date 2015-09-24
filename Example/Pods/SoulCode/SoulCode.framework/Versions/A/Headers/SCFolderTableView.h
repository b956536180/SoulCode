//
//  UIFolderTableView.h
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


@class CAMediaTimingFunction;
@class SCFolderTableView;

typedef void (^FolderCompletionBlock)(void);
typedef void (^FolderCloseBlock)(UIView *subClassView, CFTimeInterval duration, CAMediaTimingFunction *timingFunction);
typedef void (^FolderOpenBlock)(UIView *subClassView, CFTimeInterval duration, CAMediaTimingFunction *timingFunction);

@protocol SCFolderTableViewDelegate <NSObject>

@optional
- (CGFloat)tableView:(SCFolderTableView *)tableView xForRowAtIndexPath:(NSIndexPath *)indexPath;

@end

@interface SCFolderTableView : UITableView

@property (strong, nonatomic) UIView                    *subClassContentView;
@property (assign, nonatomic) IBOutlet id<SCFolderTableViewDelegate> folderDelegate;

- (void)openFolderAtIndexPath:(NSIndexPath *)indexPath
              WithContentView:(UIView *)subClassContentView
                    openBlock:(FolderOpenBlock)openBlock 
                   closeBlock:(FolderCloseBlock)closeBlock
              completionBlock:(FolderCompletionBlock)completionBlock;

@end
