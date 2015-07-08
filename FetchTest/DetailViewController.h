//
//  DetailViewController.h
//  FetchTest
//
//  Created by NieYun on 15/7/8.
//  Copyright (c) 2015年 NieYun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

