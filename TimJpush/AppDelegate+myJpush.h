//
//  jiaAppDelegate+myGt.h
//  Pods
//
//  Created by wujunyang on 16/7/7.
//
//

#import "AppDelegate.h"

#import <JPUSHService.h>
#import <UserNotifications/UserNotifications.h>

typedef void(^DealPushDataBlock)(NSDictionary *userInfo, UIApplicationState state);


@interface  AppDelegate (myJpush)
//<JPUSHRegisterDelegate ,  UNUserNotificationCenterDelegate  >

@property (copy,nonatomic) DealPushDataBlock pushBlock;
//other
@property (strong, nonatomic)  NSString *deviceToken;
@property (strong, nonatomic)  NSString *registrationID;



- (void)setUpCategoryForIos10;
- (void)setUpCategoryForIos8_9;
- (void)setUpCategoryForIOS7;


//处理个推本地通知，判断是否存在gtNotification方法
- (void)localMessageHandleing:(NSDictionary *)dic ;
//处理苹果远程通知，判断是否存在receiveRemoteNotification方法
- (void)receiveRemoteMessageHandleing:(NSDictionary *)dic ;
//获得deviceToken
-(void)receiveDeviceTokenHandleing:(NSString *)deviceToken;

///[launchOptions objectForKey:UIApplicationLaunchOptionsRemoteNotificationKey];
-(void)receiveNotificationByLaunchingOptionsUserInfo:(NSDictionary*)dic;

@end
