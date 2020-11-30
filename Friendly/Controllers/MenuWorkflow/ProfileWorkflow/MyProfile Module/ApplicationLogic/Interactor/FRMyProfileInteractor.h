//
//  FRMyProfileInteractor.h
//  Friendly
//
//  Created by Matthew James on 17.03.2016.
//  Copyright (c) 2016 Accucode Inc. All rights reserved.
//

#import "FRMyProfileInteractorIO.h"

@interface FRMyProfileInteractor : NSObject <FRMyProfileInteractorInput>

@property (nonatomic, weak) id<FRMyProfileInteractorOutput> output;

@end

