//
//  FRSettingInteractor.h
//  Friendly
//
//  Created by Matthew James on 25.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class BSMemoryStorage, FRSettingModel,FRSettingDomainModel;


@protocol FRSettingDataSourceDelegate <NSObject>

@end

@interface FRSettingDataSource : NSObject

@property (nonatomic, strong) BSMemoryStorage* storage;
@property (nonatomic, weak) id<FRSettingDataSourceDelegate> delegate;

- (void)setupStorage:(Setting*)model;
- (FRSettingDomainModel*)settingsDomainModel;

@end
