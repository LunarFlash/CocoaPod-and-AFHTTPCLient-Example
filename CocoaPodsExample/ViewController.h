//
//  ViewController.h
//  CocoaPodsExample
//
//  Created by Terry Wang on 11/22/13.
//  Copyright (c) 2013 ASHP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIScrollView *showsScrollView;
@property (weak, nonatomic) IBOutlet UIPageControl *showPageControl;
- (IBAction)pageChanged:(id)sender;

@end
