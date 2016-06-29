//
//  R2CommunityCall_CallingView.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 5/25/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol R2CommunityCall_CallingDelegate <NSObject>

-(void)dismissView;
-(void)endCall;
-(void)setCamera;
-(void)setSpeaker:(BOOL)speakerOn;
-(void)setMute:(BOOL)muteOn;
@end


@interface R2CommunityCall_CallingView : UIView
@property (nonatomic, assign) id  delegate;
@property BOOL speakerOn;
@property BOOL muteOn;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *nameLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIImageView *backgroundImageView;

@property (unsafe_unretained, nonatomic) IBOutlet UIButton *speakerButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *muteButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *endCallButton;
- (IBAction)endCall:(id)sender;
- (IBAction)manageSpeaker:(id)sender;
- (IBAction)manageMute:(id)sender;

@end
