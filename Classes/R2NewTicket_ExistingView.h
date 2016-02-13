//
//  R2NewTicket_ExistingView.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 2/12/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol R2NewTicket_ExistingDelegate <NSObject>
-(void)dismissView;
-(void)closeTicket;
@end

@interface R2NewTicket_ExistingView : UIView
@property (nonatomic, assign) id  delegate;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *closeButton;
@property (unsafe_unretained, nonatomic) IBOutlet UITextView *ticketDescription;

- (IBAction)closeView:(id)sender;
- (IBAction)cancelTicket:(id)sender;
@end
