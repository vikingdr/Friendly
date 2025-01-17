//
//  FRWebSocketConstants.h
//  Friendly
//
//  Created by Matthew James on 17.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

typedef NS_ENUM(NSInteger, FRWSMessageType) {
    FRWSMessageTypeGroupChat = 1,
    FRWSMessagePrivateChat,
    FRWSMessageTypeUpdateMsgStatus
};

typedef NS_ENUM(NSInteger, FRMessageStatus) {
    FRMessageStatusCreated = 0,
    FRMessageStatusSend = 1,
    FRMessageStatusDelivered = 2,
    FRMessageStatusRead = 3,
};
