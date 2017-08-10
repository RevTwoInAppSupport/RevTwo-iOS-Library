//
//  R2FaqTableFooterView.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 6/27/17.
//  Copyright © 2017 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol R2AskQuestionDelegate <NSObject>

-(void)showPopupView;

@end


@interface R2FaqTableFooterView : UIView
@property (nonatomic, assign) id  delegate;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *askQuestionButton;
- (IBAction)askQuestion:(id)sender;

@end
