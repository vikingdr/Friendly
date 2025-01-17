//
//  FRSearchEventByCategoryInteractor.h
//  Friendly
//
//  Created by Matthew James on 24.04.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

typedef NS_ENUM(NSInteger, FRSearchEventByCategoryHudType) {
    FRSearchEventByCategoryHudTypeError,
    FRSearchEventByCategoryHudTypeShowHud,
    FRSearchEventByCategoryHudTypeHideHud,
};

@protocol FRSearchEventByCategoryInteractorInput <NSObject>

- (void)loadData;
- (void)loadEventWithString:(NSString*)string;

@end


@protocol FRSearchEventByCategoryInteractorOutput <NSObject>

- (void)dataLoaded;
- (void)showHudWithType:(FRSearchEventByCategoryHudType)type title:(NSString*)title message:(NSString*)message;
- (void)loadedEvents:(NSArray*)eventList users:(NSArray*)users;

@end
