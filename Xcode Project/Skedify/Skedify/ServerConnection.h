//
//  ServerConnection.h
//  Skedify
//
//  Created by M on 1/14/14.
//  Copyright (c) 2014 SkedifyGroup. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "Member.h"
#import "Group.h"
#import "GlobalVariables.h"


@protocol ServerConnectionCurrentNotifiableShakableViewDelegate <NSObject>
@required
- (void)shakeRecieved;
@optional
- (void)notifitcationRecieved;
@end
@interface ServerConnection : NSObject
{
    NSInteger * userIdentifier;
}

+ (ServerConnection *) sharedServerConnection;
- (NSArray *) GetGroupList;
- (NSArray *) GetGroupContacts: (NSInteger) groupIdentifier;
- (void) addGroup:(Group *) theGroup WithMembersEmails:(NSArray *) membersEmails;
- (Group *) GetGroup:(NSInteger) index;
- (void) AppStart;
- (void) SendToServerShakeLocation:(CLLocation *)location;
- (void) SendToServerRemoveGroup:(Group *)group;
- (void) SendToServerAcceptGroupRequest:(Group *) group;
- (void) SendToServerRejectGroupRequest:(Group *) group;
- (void) SendToServerRejectMeeting:(Group *) group fromTimeSlot:(NSDate *) startingTimeSlot;
- (void) SendToServerAcceptMeeting:(Group *) group fromTimeSlot:(NSDate *) startingTimeSlot;
- (void) addScheduleSlotStartingAtDate:(NSDate *) startDate andEndingAtDate:(NSDate *) endDate;
- (void) addScheduleSlotStartingAtDate:(NSDate *) startDate;

@property (nonatomic, readonly) NSMutableArray *groupsList;
@property (nonatomic, weak) id<ServerConnectionCurrentNotifiableShakableViewDelegate> delegatenotificationsView;
@property NSMutableArray *notificationsList;
@property int notificationsNotReadCounter;
@end
