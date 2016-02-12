//
//  R2NewTicketViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 10/5/15.
//  Copyright © 2015 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Revtwo.h"
#import "R2NewTicket_FormView.h"

@interface R2NewTicketViewController : UIViewController

//views
@property R2NewTicket_FormView * formView;
//community mode
@property BOOL communityMode;

-(void)submitNewTicket:(NSString *)description;
-(void)dismissView;
@end
