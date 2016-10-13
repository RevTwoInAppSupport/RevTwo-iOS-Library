//
//  R2ChatViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 4/4/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import "JSQMessagesViewController/JSQMessagesViewController.h"
#import "Revtwo.h"

@interface R2ChatViewController : JSQMessagesViewController

//properties
@property R2Ticket *ticket;

//Customize
@property BOOL enableClose;
@property BOOL enableCall;
@property BOOL enableFollow;
@property BOOL enableReporting;
@property NSString * closeButtonText;

/*
 * CUSTOM BANNER VIEW
 * 100 px tall, full width.  Displayed under the nav bar
 */
@property UIView * customBannerView;

//chat
@property NSString *chatToken;
@property NSString *username;
- (void)connect:(NSString *)authToken ticketid:(int)ticketid;

//modal
@property (weak, nonatomic) id<R2ViewControllerDelegate> delegateModal;

@end

