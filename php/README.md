##API actions:

### USER

- **action=Login&username=<email_address>**
- **action=SetNickname&username=<username>&nickname=<nickname>**

### GROUP

- **action=AddGroup&username=<email_address>&groupname=<groupname>**
> -> retrieves the groupID

- **action=AddGroupUser&username=<email_address>&groupID=<groupID>&adder=<username>**

- **action=RemoveGroupUser&username=<email_address>&groupID=<groupID>**

- **action=GetGroups&username=<username>**

- **action=GetGroupUsers&groupID=<groupID>**
- 
- **action=RenameGroup&groupID=<groupID>&groupname=<new_groupname>**

### SCHEDULE

- **action=CalculateGroupSchedule&username=<email_address>&groupID=<groupID>&start=<unix_timestamp>&end=<unix_timestamp>**

> -> retrieves an array in the following format:
[{"start":"1970-01-01 00:15:00","end":"1970-01-01 00:29:59","state":"appointment_fixed"},{"start":"1970-01-01 00:30:00","end":"1970-01-01 00:44:59","state":"busy"},{"start":"1970-01-01 00:45:00","end":"1970-01-01 00:59:59","state":"busy”}]

- **action=SetAppointment&groupID=<groupID>&start=<unix_timestamp>&end=<unix_timestamp>**

- **action=DeleteAppointment&groupID=<groupID>&start=<unix_timestamp>&end=<unix_timestamp>**

- **action=SetAvailable&username=<email_address>&start=<unix_timestamp>&end=<unix_timestamp>**

- **action=SetBusy&username=<email_address>&start=<unix_timestamp>&end=<unix_timestamp>**


### Invitation / Notification
- **action=GetGroupInvitations&username=<username>**
> ->retrieves senders (the people who added the user to a group)


- **action=AcceptInvitation&username=<username>&groupID=<groupID>**
- **action=RejectInvitation&username=<username>&groupID=<groupID>**

### Retrieves group invitations and appointments
- **action=PullData&username=<username>**
### Retrieves shake information
- **action=PullData&username=<username>&getShakeInfo=1**
>
-> checks AppointmentRequests, myGroups, shaking -> sends the client new information. If there’s information about shaking, just let the client know about shaking.

-> shake information returns the last group that the user’s assigned to by a shake event in the last 15 seconds.

### misc

- **action=Shake&username=<username>&latitude=<latitude>&longitude=<longitude>**
>
-> sends the server that one person shaked the phone.

###Is this necessary???
> 
> *action=GetAppointmentRequests&username=<username>*









