//
//  JMActionSheet.h
//  Components
//
//  Created by jerome morissard on 24/05/2015.
//  Copyright (c) 2015 Jérôme Morissard. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "JMActionSheetDescription.h"

#import "JMActionSheetItem.h"
#import "JMActionSheetImageItem.h"
#import "JMActionSheetPickerItem.h"
#import "JMActionSheetCollectionItem.h"

@interface JMActionSheet : NSObject

+ (void)showActionSheetDescription:(JMActionSheetDescription *)actionSheetDescription inViewController:(UIViewController *)viewController;
+ (void)showActionSheetDescription:(JMActionSheetDescription *)actionSheetDescription inViewController:(UIViewController *)viewController fromView:(UIView *)view;
+ (void)showActionSheetDescription:(JMActionSheetDescription *)actionSheetDescription inViewController:(UIViewController *)viewController fromView:(UIView *)view permittedArrowDirections:(UIPopoverArrowDirection)arrowDirections;

@end
