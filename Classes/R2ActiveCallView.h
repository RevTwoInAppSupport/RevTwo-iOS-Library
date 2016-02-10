//
//  R2ActiveCallView.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 12/16/15.
//  Copyright © 2015 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Revtwo.h"
@interface R2ActiveCallView : UIView
@property UIButton * managecallbtn;
-(void)manageCall;
-(void)hideActiveCallView;
-(void)adjustLayout;
@end
