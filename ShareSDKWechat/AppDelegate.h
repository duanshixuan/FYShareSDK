//
//  AppDelegate.h
//  ShareSDKWechat
//
//  Created by 段世宜 on 2017/8/23.
//  Copyright © 2017年 段世宜. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

