//
//  R2CommunityCall_ScreenShareView.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 2/11/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol R2CommunityCall_ScreenShareDelegate <NSObject>

-(void)dismissView;
-(void)endCall;
-(void)setScreenShare;
-(void)setCamera;
-(void)setSpeaker:(BOOL)speakerOn;
-(void)setMute:(BOOL)muteOn;
@end

@interface R2CommunityCall_ScreenShareView : UIView

@property (nonatomic, assign) id  delegate;
@property BOOL speakerOn;
@property BOOL muteOn;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *screenImageView;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *closeButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *screenShareButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *cameraButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *muteButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *speakerButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *endCallButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *buttonWrap;

- (IBAction)endCall:(id)sender;
- (IBAction)closeScreen:(id)sender;
- (IBAction)manageScreenShare:(id)sender;
- (IBAction)manageCamera:(id)sender;
- (IBAction)manageMute:(id)sender;
- (IBAction)manageSpeaker:(id)sender;

@end
