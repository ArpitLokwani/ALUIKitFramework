//
//  ElementSkin.h
//  ContainerViewController
//
//  Created by emb-arpilok on 03/06/15.
//  Copyright (c) 2015 Yan Saraev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ElementSkin : UIView
+(UITextField *) textFieldWithRect:(CGRect) rect placeHolder:(NSString *) placeholder;
+ (UIButton *)button:(CGRect) fram title:(NSString *) title;
+ (UIButton *) underLinedButton:(CGRect) fram titel:(NSString *) title;
+(UIScrollView*)scrollViewWithFram:(CGRect)frame;
+ (UILabel *) labelViewWithFram:(CGRect) fram withText:(NSString*)text;
+(UIScrollView*)viewWithFrame:(CGRect)frame withImagesCount:(NSInteger)imagesCount;
+(UIView *)viewWithFrame:(CGRect)frame;
+(UIImageView *)imageViewWithFrame:(CGRect)frame;
+(UITextView *) textViewWithRect:(CGRect) rect placeHolder:(NSString *) placeholder;

@end
