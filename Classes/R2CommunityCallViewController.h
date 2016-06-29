//
//  R2CommunityCallViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 2/1/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Revtwo.h"
#import "R2CommunityCall_CallingView.h"
#import "R2CommunityCall_OptionsView.h"
#import "R2CommunityCall_ScreenShareView.h"

@interface R2CommunityCallViewController : UIViewController<R2CommunityCall_OptionsDelegate, R2CommunityCall_ScreenShareDelegate>

@property R2CommunityCall_CallingView * callingView;
@property R2CommunityCall_OptionsView * optionsView;
@property R2CommunityCall_ScreenShareView * screenShareView;
@property R2Ticket *ticket;


-(void)showScreenShare:(UIImage *)screen orientation:(NSString *)orientation;
-(void)endScreenShare;

//delegate methods
-(void)dismissView;
-(void)endCall;
-(void)setScreenShare;
-(void)setCamera;
-(void)setSpeaker:(BOOL)speakerOn;
-(void)setMute:(BOOL)muteOn;
@end
