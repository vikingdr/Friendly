//
//  FRMessage+Create.h
//  Friendly
//
//  Created by Matthew James on 18.05.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//

@class FRPrivatChatResponseModel, FRPrivateJSONMessage;

#import "FRPrivateMessage.h"

@interface FRPrivateMessage (Create)

- (void)updatePriveteMessage:(FRPrivatChatResponseModel*)model;
- (void)updateLastMessage:(FRPrivateJSONMessage*)model;
+ (FRPrivateMessage*)createWithModel:(FRPrivateJSONMessage*)model inContext:(NSManagedObjectContext*)context;


@end
