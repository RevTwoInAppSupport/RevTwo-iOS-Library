//
//  R2FaqTableViewController.h
//  R2-ios-pod
//
//  Created by Ashley Calder on 6/22/17.
//  Copyright © 2017 Revtwo.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Revtwo.h"
#import "R2FaqTableFooterView.h"
#import "R2AskQuestionView.h"

@interface R2FaqTableViewController : UITableViewController <R2AskQuestionDelegate,R2AskQuestionPopupDelegate, UISearchResultsUpdating, UISearchBarDelegate>

@property NSString *productkey;
@property NSArray *categories;
@property NSArray *articles;
@property R2AskQuestionView *popup;
@property UILabel *noSearchResultsLabel;
//category
@property NSString *categorySearchId;
//customize
@property NSString *generalArticleTitle;
@property NSString *searchPlaceholder;
@property BOOL enableAskQuestion;
//search
@property UISearchController *searchController;

-(BOOL)isSectionCategories: (NSInteger)section;

@property (weak, nonatomic) id<R2ViewControllerDelegate> delegateModal;

@end
