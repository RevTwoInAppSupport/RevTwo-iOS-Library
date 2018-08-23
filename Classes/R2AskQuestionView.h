//
//  R2AskQuestionView.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 6/28/17.
//  Copyright © 2017 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol R2AskQuestionPopupDelegate <NSObject>

-(void)dismissPopupView;

@end

@interface R2AskQuestionView : UIView
@property NSString *productkey;
@property (nonatomic, assign) id  delegate;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *iconCircleView;
@property (unsafe_unretained, nonatomic) IBOutlet UITextView *questionTextView;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *submitButton;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *popupContainerView;

- (IBAction)submitQuestion:(id)sender;
- (IBAction)cancel:(id)sender;

@end
