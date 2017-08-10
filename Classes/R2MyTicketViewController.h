//
//  R2MyTicketViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 5/10/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RevTwo.h"

@interface R2MyTicketViewController : UIViewController <UIScrollViewDelegate>

/*
 * Customizations
 */
@property NSArray *tags;    // tags to apply to created ticket(s)
@property NSDictionary *data;   //meta data to apply to created ticket(s)
//ticket form
@property NSString * ticketForm_InstructionText;
@property NSString * ticketForm_SubmitText;
@property NSString * ticketForm_SubmitErrorText;
@property NSString * ticketForm_SubmitSuccessText;
@property NSString * ticketForm_OpenFormButtonText;

//ticket table
@property NSString * ticketTable_OpenTicketsTitle;
@property NSString * ticketTable_ClosedTicketsTitle;

@property NSString * ticketTable_NoOpenTicketsText;
@property NSString * ticketTable_NoClosedTicketsText;
@property NSString * ticketTable_NoTicketsText;

@property (weak, nonatomic) id<R2ViewControllerDelegate> delegateModal;
@end
