//
//  ZDDeviceTools.h
//  RLVerification
//
//  Created by 刘义增 on 2020/7/30.
//  Copyright © 2020 ccop. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZDDeviceTools : NSObject

/// 判断设备是否是 刘海屏
+ (BOOL)zd_isiPhoneX;

/// 判断设备 是否是 横屏
+ (BOOL)zd_isInterfaceLandscape;

@end

NS_ASSUME_NONNULL_END