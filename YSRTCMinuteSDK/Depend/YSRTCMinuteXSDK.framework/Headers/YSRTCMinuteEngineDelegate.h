//
//  YSRTCMinuteEngineDelegate.h
//  YSRTCMinuteXSDK
//
//  Created by EZSaaS on 2025/4/21.
//

#ifndef YSRTCMinuteEngineDelegate_h
#define YSRTCMinuteEngineDelegate_h

@protocol YSRTCMinuteEngineDelegate <NSObject>

//sdk登出通知
- (void)onSdkLogOut;

@optional
/// 通知APP当前是否需要支持右滑关闭页面功能
/// @param bSupport 是否支持
/// @param vc 当前控制器
- (void)supportedInteractivePop:(BOOL)bSupport vc:(UIViewController *)vc;

/*!
 @brief Specify to get the response of MobileRTC authorization.
 */
- (void)onYSRTCMinuteAuthExpiredWithRefreshSuccessCallback:(void(^)(NSString *token))refreshSuccessCallback;

- (void)onYSRTCMinuteAuthNullCallBack:(void(^)(NSString *token))refreshSuccessCallback;

@end

#endif /* YSRTCMinuteEngineDelegate_h */
