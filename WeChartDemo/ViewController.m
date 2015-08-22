//
//  ViewController.m
//  WeChartDemo
//
//  Created by lakala on 15/7/29.
//  Copyright (c) 2015年 lakala. All rights reserved.
//

#import "ViewController.h"
#import "AppDelegate.h"
@interface ViewController (){

    AppDelegate *appDele;
}
@property (weak, nonatomic) IBOutlet UITextField *textFiled;
- (IBAction)WeChartBtn;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (IBAction)WeChartBtn {
    
    appDele = [[AppDelegate alloc] init];
    [appDele sendPay_demo:self.textFiled.text Price:self.textFiled.text];

}
@end
