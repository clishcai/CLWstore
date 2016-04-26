//
//  UZGuideViewController.m
//  WZGuideViewController
//
//  Created by majinyu on 15-12-19.
//  Copyright (c) 2015年 majinyu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MacroUtil.h"
#import "GuideImageName.h"

@class GuideViewController;

/**
 * @brief           引导界面类
 *
 *                  首次启动APP的引导界面，根据所用的图片来确定翻页次数。
 * @author          xiaog
 * @version         0.1
 * @date            2012-12-17
 */
@interface GuideViewController : UIViewController

+ (GuideViewController *)sharedGuide;

+ (void)show;
+ (void)hide;

@end
