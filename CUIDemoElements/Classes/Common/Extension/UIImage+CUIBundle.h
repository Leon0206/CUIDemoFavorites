//
//  UIImage+CUIBundle.h
//  Pods
//
//  Created by Leon on 03/30/2021.
//  Copyright (c) 2021 Leon. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (CUIBundle)

+ (UIImage *)imageNamed:(NSString *)name withBundleName:(NSString *)bundleName;

@end

#define CUIImageNamed(...) [UIImage imageNamed:(__VA_ARGS__) withBundleName:CUI_MODULE_NAME]

NS_ASSUME_NONNULL_END
