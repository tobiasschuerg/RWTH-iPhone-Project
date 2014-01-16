//
//  Member.m
//  Skedify
//
//  Created by M on 1/14/14.
//  Copyright (c) 2014 SkedifyGroup. All rights reserved.
//

#import "Member.h"

@implementation Member


- (id)initWithDictionary:(NSDictionary *)dict
{
    self = [super init];
    return self;
}

- (id)initWithName:(NSString *)theNickName
{
    self = [super init];
    _nickName = theNickName;
    
    return self;
}

- (id)initWithEmail:(NSString *)theEmail;
{
    self = [super init];
    _emailAddress = theEmail;
    return self;
}

-(NSString *) getStrongestIdentifier
{
    if(_nickName!=nil)
    {
        return _nickName;
    }
    else
    {
        return _emailAddress;
    }
}

@end
