//
//  R2MyTicketTableViewCell.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 5/12/16.
//  Copyright © 2016 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface R2MyTicketTableViewCell : UITableViewCell
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *ticketTextLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UILabel *statusLabel;
@property (unsafe_unretained, nonatomic) IBOutlet UIView *chatIndicator;

@end
