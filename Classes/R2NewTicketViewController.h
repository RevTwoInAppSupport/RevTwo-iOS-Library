//
//  R2NewTicketViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 10/5/15.
//  Copyright © 2015 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Revtwo.h"

@interface R2NewTicketViewController : UIViewController <UIAlertViewDelegate, UITextViewDelegate, UIGestureRecognizerDelegate, UITextFieldDelegate>
//community mode
@property BOOL communityMode;
//text fields
@property UITextView *descriptionField;
@property UIBarButtonItem *submitButton;
//existing ticket
@property UILabel *hasTicketLabel;
@property UIBarButtonItem *closeButton;

@end
