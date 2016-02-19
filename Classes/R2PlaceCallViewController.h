//
//  R2PlaceCallViewController.h
//  RevTwoSample
//
//  Created by Ashley Calder on 1/29/16.
//  Copyright © 2016 RevTwo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "R2CommunityTicketView.h"

@interface R2PlaceCallViewController : UIViewController

//@property NSString *ticket;
@property NSDictionary *ticket;
@property R2CommunityTicketView *ticketView;

@property UILabel * callLabel;
@property UILabel * ticketLabel;
@property UIButton * callButton;

@end
