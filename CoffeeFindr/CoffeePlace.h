//
//  CoffeePlace.h
//  CoffeeFindr
//
//  Created by Richard Martin on 2015-12-21.
//  Copyright © 2015 richard martin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>


@interface CoffeePlace : NSObject

@property MKMapItem *mapItem;
@property float milesDifference;

@end
