//
//  R2CommunityTableViewCell.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 4/14/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface R2CommunityTableViewCell : UITableViewCell
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *ticketLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *dateLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *chatIndicator;

@end
