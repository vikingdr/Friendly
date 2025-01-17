//
//  FRHomeInteractor.h
//  Friendly
//
//  Created by Matthew James on 01.07.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class BSMemoryStorage;


@protocol FRHomeDataSourceDelegate <NSObject>

@end

@interface FRHomeDataSource : NSObject

@property (nonatomic, strong) BSMemoryStorage* storage;
@property (nonatomic, weak) id<FRHomeDataSourceDelegate> delegate;

- (void)setupStorage;

@end
