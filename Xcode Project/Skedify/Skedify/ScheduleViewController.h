//
//  ScheduleViewController.h
//  Skedify
//
//  Created by M on 1/24/14.
//  Copyright (c) 2014 SkedifyGroup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ScheduleScrollView.h"
#import "GlobalVariables.h"


@interface ScheduleViewController : UIViewController<UIScrollViewDelegate>
@property (strong, nonatomic) IBOutlet ScheduleScrollView *scrollView;


@end