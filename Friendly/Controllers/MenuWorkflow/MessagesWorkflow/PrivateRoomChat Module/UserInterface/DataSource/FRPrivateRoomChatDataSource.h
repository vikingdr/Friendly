//
//  FRPrivateRoomChatInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class BSMemoryStorage;


@protocol FRPrivateRoomChatDataSourceDelegate <NSObject>

@end

@interface FRPrivateRoomChatDataSource : NSObject

@property (nonatomic, strong) BSMemoryStorage* storage;
@property (nonatomic, weak) id<FRPrivateRoomChatDataSourceDelegate> delegate;

- (void)setupStorage;

@end
