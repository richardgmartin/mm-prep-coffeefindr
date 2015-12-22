//
//  DetailViewController.h
//  CoffeeFindr
//
//  Created by Richard Martin on 2015-12-21.
//  Copyright © 2015 richard martin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoffeePlace.h"

@interface DetailViewController : UIViewController

@property CoffeePlace *coffeePlace;
@property CLLocation *currentLocation;


@end
