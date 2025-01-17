//
//  FRCreateEventInteractor.h
//  Friendly
//
//  Created by Matthew James on 8.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRCreateEventDataSource;

typedef NS_ENUM(NSInteger, FRCreateEventType) {
    FRCreateEventCreate,
    FRCreateEventEdit,
};


@protocol FRCreateEventViewInterface <NSObject>

- (void)updateDataSource:(FRCreateEventDataSource*)dataSource;
- (void)updateWithType:(FRCreateEventType)type;

@end
