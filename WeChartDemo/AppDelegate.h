//
//  AppDelegate.h
//  WeChartDemo
//
//  Created by lakala on 15/7/29.
//  Copyright (c) 2015年 lakala. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

//APP端签名相关头文件
#import "payRequsestHandler.h"

//服务端签名只需要用到下面一个头文件
//#import "ApiXml.h"
#import <QuartzCore/QuartzCore.h>
#import "WXApi.h"
@class AlixPayResult;
@interface AppDelegate : UIResponder <UIApplicationDelegate,
UIAlertViewDelegate, WXApiDelegate>
{
    UIImageView *splashView;
    enum WXScene _scene;
    
    
}

@property (strong, nonatomic) UIWindow *window;

- (void)sendPay_demo:(id)orderNO Price:(NSString *)price;
- (void)sendPay_demo:(id)price;
@end

