//
//  GJImageSightTool.h
//  图片
//
//  Created by 郭杰 on 2018/6/22.
//  Copyright © 2018年 郭杰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface GJImageSightTool : NSObject

/**
 *  点击图片，浏览全屏大图
 *
 *  @param currentImageview 当前图片
 *  @param alpha            背景透明度
 */
+(void)gj_ScanBigImageWithImageView:(UIImageView *)currentImageview alpha:(CGFloat)alpha;


@end
