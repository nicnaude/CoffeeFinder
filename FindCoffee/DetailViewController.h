//
//  DetailViewController.h
//  FindCoffee
//
//  Created by Nicholas Naudé on 05/01/2016.
//  Copyright © 2016 Nicholas Naudé. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoffeePlace.h"

@interface DetailViewController : UIViewController

@property CoffeePlace *coffeePlace;

@property CLLocation *currentLocation;

@end
