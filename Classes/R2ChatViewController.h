//
//  R2ChatViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 4/4/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <JSQMessagesViewController/JSQMessagesViewController.h>
#import "JSQMessage.h"
#import "JSQMessagesBubbleImageFactory.h"
#import "JSQMessagesTimestampFormatter.h"
#import "R2ChatManager.h"
#import "R2Caller.h"
#import "R2CommunityCallViewController.h"
#import "Revtwo.h"

@interface R2ChatViewController : JSQMessagesViewController <JSQMessagesComposerTextViewPasteDelegate,R2ChatEventListener, R2CallerEventListener, UIImagePickerControllerDelegate>
@property BOOL *animatingTicketDropDown;
@property R2Ticket *ticket;
@property BOOL isMyTicket;
@property NSMutableArray * messages;
@property NSMutableArray * colors;
@property NSMutableDictionary * userColors;
@property UIBarButtonItem * callButton;
@property UILabel * noChatView;
//info panel
@property UIView *infoPanelView;
@property BOOL infoPanelOpen;
@property UIView * shadowPanelView;
@property UITextView * info_ticketTextView;
@property UILabel * info_dateLabel;
@property UIButton * info_closeButton;
@property UIButton * info_followButton;
@property UIButton * info_unfollowButton;
@property UIImageView *info_icon;
@property UIVisualEffectView *info_blurEffect;
//chat
@property NSString *chatToken;
@property R2ChatManager *chatManager;
- (void)connect:(NSString *)authToken ticketid:(int)ticketid;

@end
