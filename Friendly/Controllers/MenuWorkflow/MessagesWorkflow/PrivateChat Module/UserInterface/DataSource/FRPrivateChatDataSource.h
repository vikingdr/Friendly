//
//  FRPrivateChatInteractor.h
//  Friendly
//
//  Created by Matthew James on 19.05.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class BSMemoryStorage;


@protocol FRPrivateChatDataSourceDelegate <NSObject>

@end

@interface FRPrivateChatDataSource : NSObject

@property (nonatomic, strong) BSMemoryStorage* storage;
@property (nonatomic, weak) id<FRPrivateChatDataSourceDelegate> delegate;

- (void)setupStorage;

@end
