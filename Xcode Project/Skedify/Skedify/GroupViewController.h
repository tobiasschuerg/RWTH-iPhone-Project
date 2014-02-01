//
//  GroupViewController.h
//  Skedify
//
//  Created by M on 1/31/14.
//  Copyright (c) 2014 SkedifyGroup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ServerConnection.h"

@interface GroupViewController : UIViewController<UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textFieldGroupName;
@property (nonatomic) NSInteger groupIndex;
@end