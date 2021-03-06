//
//  BaseTableViewController.h
//  Skedify
//
//  Created by M on 1/24/14.
//  Copyright (c) 2014 SkedifyGroup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "CustomBadge.h"
#import "ServerConnection.h"



@interface BaseTableViewController : UITableViewController <CLLocationManagerDelegate,ServerConnectionViewedDelegate>

@property CustomBadge *notificationBadge;
@property UIButton *badgeButton;
-(NSString *) suitableNameWithAddedDotsIfAboveAcceptableSize:(NSString *) name AndAcceptableSize:(NSInteger) acceptableSize;
-(void)buttonNotifications:(id)sender;
-(void)notificationRecieved;
@end
