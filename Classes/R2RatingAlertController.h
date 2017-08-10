//
//  R2RatingAlertController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 5/31/17.
//  Copyright © 2017 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Revtwo.h"

@interface R2RatingAlertController : UIAlertController
@property R2Ticket *ticket;
@property int rating;
@property UIButton *star1;
@property UIButton *star2;
@property UIButton *star3;
@property UIButton *star4;
@property UIButton *star5;
-(void)setup;
@end
