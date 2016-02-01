//
//  HappeningViewController.h
//  AlphaProject
//
//  Created by CHRISTOPHER METCALF on 10/21/14.
//  Copyright (c) 2014 Infinity Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DataModel.h"
#import <Parse/Parse.h>
#import <ParseUI/ParseUI.h>


@interface HappeningViewController : PFQueryTableViewController <UITableViewDataSource, UITableViewDelegate>


@property DataModel *now;
@property (strong, nonatomic) NSMutableArray *nowList;
@property (strong, nonatomic) NSMutableArray *DataModelList;
@end
