//
//  FREventFilterInteractor.h
//  Friendly
//
//  Created by Matthew James on 21.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRFilterModel, FREventFilterDomainModel;

typedef NS_ENUM(NSInteger, FREventFilterHudType) {
    FREventFilterHudTypeError,
    FREventFilterHudTypeShowHud,
    FREventFilterHudTypeHideHud,
};

@protocol FREventFilterInteractorInput <NSObject>

- (void)loadData;
- (void)updateFilter:(FREventFilterDomainModel*)filter;

@end


@protocol FREventFilterInteractorOutput <NSObject>

- (void)dataLoaded:(Filter*)model;
- (void)showHudWithType:(FREventFilterHudType)type title:(NSString*)title message:(NSString*)message;
- (void)close;

@end
