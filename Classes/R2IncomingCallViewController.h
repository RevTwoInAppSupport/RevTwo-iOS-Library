//
//  R2IncomingCallViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 11/18/15.
//  Copyright © 2015 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface R2IncomingCallViewController : UIViewController

@property NSString * incomingCallText;
@property UIImage * incomingCallImage;
@property UIColor * backgroundColor;
@property BOOL backgroundGradient;
@property UIColor * textColor;

@property UILabel * incomingCallLabel;
@property UIButton * acceptButton;
@property UIButton * declineButton;
@property UIImageView * callImgView;
@property (nonatomic, strong) CAGradientLayer *gradientLayer;
@property BOOL useGradient;
-(void)connectingCall;
-(void)doneConnectingCall;
@end
