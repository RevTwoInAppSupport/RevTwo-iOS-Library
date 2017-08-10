//
//  R2KnowledgeBaseViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 10/17/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "Revtwo.h"

@interface R2KnowledgeBaseViewController : UIViewController
@property NSString * kbURL;
@property NSString * answerid;
@property NSString * responseid;
@property R2Ticket *ticket;
@property (unsafe_unretained, nonatomic) IBOutlet WKWebView *webView;
@property (unsafe_unretained, nonatomic) IBOutlet UIButton *acceptButton;
- (IBAction)acceptAnswer:(id)sender;

@end
