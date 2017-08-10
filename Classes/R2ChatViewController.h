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

enum VIEWSTYLE {
    VIEWSTYLE_MULTICOLOR = 1,
    VIEWSTYLE_AVATAR = 2
};

//properties
@property R2Ticket *ticket;

//Customize
@property NSInteger viewStyle;
@property BOOL enableClose;
@property BOOL enableCall;
@property BOOL enableFollow;
@property BOOL enableReporting;
@property NSString * closeButtonText;
@property BOOL enableTicketTextInChat; //shows the ticket text as the first message in chat
@property UIColor * outgoingMessageColor; //defaults to blue
@property UIColor * incomingMessageColor; //defaults to gray

//chat
@property NSString *chatToken;

//modal
@property (weak, nonatomic) id<R2ViewControllerDelegate> delegateModal;

@end

