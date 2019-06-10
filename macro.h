
//
//  Created by Chen on 2019/5/8.
//  Copyright © 2019 Chen. All rights reserved.
//

#ifndef Common_h
#define Common_h
#define RGB(r, g, b)        [UIColor colorWithRed:(r)/255.f \
green:(g)/255.f \
blue:(b)/255.f \
alpha:1.f]

#define SHOW_ALERT(_message_)  UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"提示" message:_message_ preferredStyle:UIAlertControllerStyleAlert];\
UIAlertAction *sureAcion = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil];\
[alertController addAction:sureAcion];\
[self presentViewController:alertController animated:YES completion:nil];\
#define WEAK_SELF __weak typeof(self) weakSelf = self;
//App版本号
#define APP_VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define APPDELEGATE   ((AppDelegate *)[[UIApplication sharedApplication] delegate])
//IOS的版本
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
//NSString相关
#define STRING_FORMAT(string, args...) [NSString stringWithFormat:string, args]
#define STRING_EQUAL(x, y) [(x) isEqualToString:(y)]
//获取图片
#define GET_IMAGE(imageName) [UIImage imageNamed:STRING_FORMAT(@"%@", imageName)]
#define WeakSelf __weak typeof(self) weakSelf = self;
// 屏幕的宽
#define ScreenWidth                         [[UIScreen mainScreen] bounds].size.width
// 屏幕的高
#define ScreenHeight                        [[UIScreen mainScreen] bounds].size.height
#define mainScreenBounds [[UIScreen mainScreen] bounds]
//状态栏高度
#define KStatuesBarHeight  ([UIApplication sharedApplication].statusBarFrame.size.height)
#define KNavigationBarHeight 44.0
//导航栏高度+状态栏高度
#define kViewTopHeight (KStatuesBarHeight + KNavigationBarHeight)
//iphoneX适配差值
#define KiPhoneXSafeAreaDValue ([[UIApplication sharedApplication] statusBarFrame].size.height>20?34:0)

// 定义通用颜色
#define kBlackColor         [UIColor blackColor]
#define kWhiteColor         [UIColor whiteColor]
#define kGrayColor          [UIColor grayColor]
#define kDarkGrayColor      [UIColor darkGrayColor]
#define kLightGrayColor     [UIColor lightGrayColor]
#define kRedColor           [UIColor redColor]
#define kGreenColor         [UIColor greenColor]
#define kBlueColor          [UIColor blueColor]
#define kClearColor         [UIColor clearColor]

#define USER_DEFAULTS [NSUserDefaults standardUserDefaults]
#define NOTIFI_CENTER [NSNotificationCenter defaultCenter]
#define APPLICATION   [UIApplication sharedApplication]
#define APPDELEGATE   ((AppDelegate *)[[UIApplication sharedApplication] delegate])

// 字体大小(常规/粗体)
#define BOLDSYSTEMFONT(FONTSIZE)[UIFont boldSystemFontOfSize:FONTSIZE]
#define SYSTEMFONT(FONTSIZE)    [UIFont systemFontOfSize:FONTSIZE]
#define FONT(NAME, FONTSIZE)    [UIFont fontWithName:(NAME) size:(FONTSIZE)]
#endif /* Common_h */
