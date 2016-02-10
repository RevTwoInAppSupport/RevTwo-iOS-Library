//
//  R2CommunityCallViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 2/1/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "R2ActiveCallView.h"

@interface R2CommunityCallViewController : UIViewController

@property UILabel * callLabel;
@property UIButton * screenShareButton;
@property UIButton * cameraButton;
@property UIImageView * screenView;
@property R2ActiveCallView * activeCallView;

-(void)requestScreenShare;
-(void)requestCamera;

-(void)showScreenShare:(UIImage *)screen;
-(void)endScreenShare;
@end
