//
//  R2IncomingCallViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 5/27/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface R2IncomingCallViewController : UIViewController


@property NSString * incomingCallText;
@property UIColor * textColor;


@property (unsafe_unretained, nonatomic) IBOutlet UILabel *incomingCallLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *declineButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *acceptButton;
- (IBAction)acceptCall:(id)sender;
- (IBAction)declineCall:(id)sender;
-(void)connectingCall;
@end
