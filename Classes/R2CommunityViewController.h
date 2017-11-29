//
//  R2CommunityViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 5/18/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Revtwo.h"

@interface R2CommunityViewController : UIViewController
- (id)init;

@property NSString * ticketTable_CommunityTicketsTitle;
@property NSString * ticketTable_NoTicketsTitle;

@property NSArray *tags;    // tags to filter ticket(s)
@property NSArray *tickets;

//Customize chat page
@property NSInteger viewStyle;      // enum in R2ChatViewController.h
@property BOOL enableClose;
@property BOOL enableCall;
@property BOOL enableFollow;
@property BOOL enableReporting;
@property BOOL shortenNames;
@property NSString * closeButtonText;
@property BOOL enableTicketTextInChat; //shows the ticket text as the first message in chat
@property UIColor * outgoingMessageColor; //defaults to blue
@property UIColor * incomingMessageColor; //defaults to gray

@property NSString *chatToken;
@property BOOL viewIsLoading;
@property (weak, nonatomic) id<R2ViewControllerDelegate> delegateModal;
@property (unsafe_unretained, nonatomic) IBOutlet UITableView *ticketTableView;
@property (unsafe_unretained, nonatomic) IBOutlet UIActivityIndicatorView *loadingIndicator;

@end
