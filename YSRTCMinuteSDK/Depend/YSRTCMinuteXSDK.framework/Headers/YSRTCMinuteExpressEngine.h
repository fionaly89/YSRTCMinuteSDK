//
//  YSRTCMinuteExpressEngine.h
//  YSRTCMinuteXSDK
//
//  Created by EZSaaS on 2025/4/21.
//

#import <Foundation/Foundation.h>
#import "YSRTCMinuteExpressDefines.h"
#import "YSRTCMinuteEngineDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSRTCMinuteExpressEngine : NSObject


// 有没有进行中的纪要  YES：有进行中的纪要  NO：没有进行中的纪要
@property (nonatomic, assign, readonly) BOOL runingMeeting;

+ (YSRTCMinuteExpressEngine *)sharedEngine;

/// 初始化SDK配置
/// - Parameters:
///   - profile: 配置项
///   - eventDelegate: 回调代理
+ (void)initEngineWithProfile:(YSRTCMinuteEngineProfile *)profile
                eventDelegate:(nullable id<YSRTCMinuteEngineDelegate>)eventDelegate;


/// 释放SDK
- (void)destroyEngine;

/// 展示会议纪要页面
/// - Parameters:
///   - token: 会议纪要sdk token
///   - navi: 当前导航控制器
///   - successFn: 成功回调
///   - failFn: 失败回调
- (void)showMeetingMinutesList:(NSString *)token
                          navi:(UINavigationController *)navi
               successCallback:(void(^)(UIViewController *vc))successFn
                  failCallBack:(void(^)(NSError *error))failFn;


@end

NS_ASSUME_NONNULL_END
