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

/*
 * Properties
 */
@property NSArray * openTickets;
@property NSArray * closedTickets;
@property BOOL formIsVisible;
@property NSString *chatToken;
@property BOOL viewIsLoading;
@property (weak, nonatomic) id<R2ViewControllerDelegate> delegateModal;
/*
 * ui
 */
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *NoTicketsLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIActivityIndicatorView *loadingIndicator;
//constraints
@property (unsafe_unretained, nonatomic) IBOutlet NSLayoutConstraint *ticketFormTopConstraint;
@property (unsafe_unretained, nonatomic) IBOutlet NSLayoutConstraint *ticketTabelViewTopConstraint;
//ticket form view
@property (unsafe_unretained, nonatomic) IBOutlet UIView *ticketFormView;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *instructionLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *submitButton;
@property (unsafe_unretained, nonatomic) IBOutlet UITextView *ticketTextField;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *askQuestionButton;

//ticket table
@property (unsafe_unretained, nonatomic) IBOutlet UITableView *ticketTabelView;

- (IBAction)submitNewTicket:(id)sender;
- (IBAction)openTicketForm:(id)sender;
-(void)slideDownTicketFormView;
-(void)slideUpTicketFormView;
@end
