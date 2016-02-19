//
//  R2CommunityTicketView.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 2/19/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol R2CommunityCall_OptionsDelegate <NSObject>
-(void)placeCall;
@end

@interface R2CommunityTicketView : UIView
@property (nonatomic, assign) id  delegate;
@property (unsafe_unretained, nonatomic) IBOutlet UITextView *ticketText;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *ticketDate;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *connectingLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *callButton;
- (IBAction)placeCall:(id)sender;

@end
