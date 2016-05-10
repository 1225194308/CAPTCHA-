//
//  AuthcodeView.h
//  动态验证码
//
//  Created by shao on 16/4/4.
//  Copyright © 2016年 曹少帅. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AuthcodeView : UIView

@property (strong, nonatomic) NSArray *dataArray;//字符素材数组
@property (strong, nonatomic) NSMutableString *authCodeStr;//验证码字符串

@end
