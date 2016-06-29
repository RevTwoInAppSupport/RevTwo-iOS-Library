//
//  R2CommunityViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 5/18/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RevTwo.h"

@interface R2CommunityViewController : UIViewController

@property NSString * ticketTable_CommunityTicketsTitle;
@property NSString * ticketTable_NoTicketsTitle;

@property NSArray *tags;    // tags to filter ticket(s)
@property NSArray *tickets;
@property NSString *chatToken;
@property BOOL viewIsLoading;
@property (weak, nonatomic) id<R2ViewControllerDelegate> delegateModal;
@property (unsafe_unretained, nonatomic) IBOutlet UITableView *ticketTableView;
@property (unsafe_unretained, nonatomic) IBOutlet UIActivityIndicatorView *loadingIndicator;

@end
