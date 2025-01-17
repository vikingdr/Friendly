//
//  FREditProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

@class FRUserModel;

typedef NS_ENUM(NSInteger, FRChangePhotoType) {
    FRChangePhotoTypeWall,
    FRChangePhotoTypeUserPhoto,
};

@interface FREditProfileWireframe : NSObject

- (void)presentEditProfileControllerFromNavigationController:(UINavigationController*)nc userModel:(UserEntity*)userModel;
- (void)presentSettingController;
- (void)dismissEditProfileController;
- (void)presentPhotoPickerControllerWithType:(FRChangePhotoType)type;

@end
