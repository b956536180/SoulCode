//
//  ViewController.m
//  Demo
//
//  Created by Xiao on 15/9/23.
//  Copyright (c) 2015年 Xiao. All rights reserved.
//

#import "ViewController.h"
#import <SoulCode/SCUtil.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSLog(@"%lf",[SCUtil floatValueOfCurrentDeviceVersion]);
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
