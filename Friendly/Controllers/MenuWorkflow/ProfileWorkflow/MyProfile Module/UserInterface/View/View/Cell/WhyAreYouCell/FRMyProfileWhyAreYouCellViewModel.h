//
//  FRMyProfileWhyAreYouCellViewModel.h
//  Friendly
//
//  Created by Matthew James on 21.03.16.
//  Copyright © 2016 Accucode Inc. All rights reserved.
//


@interface FRMyProfileWhyAreYouCellViewModel : NSObject

@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* subtitle;
@property (nonatomic, assign, readonly) CGFloat cellHeight;

- (NSAttributedString*)attributedString;

@end
