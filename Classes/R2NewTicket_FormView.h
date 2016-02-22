//
//  R2NewTicket_FormView.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 2/11/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol R2NewTicket_FormDelegate <NSObject>
-(void)dismissView;
-(void)submitNewTicket:(NSString *)description;
@end

@interface R2NewTicket_FormView : UIView<UITextViewDelegate>
@property (nonatomic, assign) id  delegate;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *formTitle;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *closeButton;
@property (unsafe_unretained, nonatomic) IBOutlet UITextView *ticketDescription;
- (IBAction)closeView:(id)sender;

@end
