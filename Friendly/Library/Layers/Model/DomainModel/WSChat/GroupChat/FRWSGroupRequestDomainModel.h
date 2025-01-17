//
//  FRWSGroupRequestDomainModel.h
//  Friendly
//
//  Created by Matthew James on 17.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FRGroupMessage;

#import "FRWebSocketConstants.h"
#import "FRBaseDomainModel.h"

@interface FRWSGroupRequestDomainModel : FRBaseDomainModel

@property (nonatomic, assign) FRWSMessageType messageType;
@property (nonatomic, strong) NSString* tempId;
@property (nonatomic, strong) NSString* eventId;
@property (nonatomic, strong) NSString* messageText;
@property (nonatomic, assign) FRMessageStatus msg_status;

+ (instancetype)initWithModel:(FRGroupMessage*)message;

@end
