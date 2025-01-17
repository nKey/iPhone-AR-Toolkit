//
//  ARCoordinate.h
//  iPhoneAugmentedRealityLib
//
//  Created by Zac White on 8/1/09.
//  Copyright 2009 Zac White. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

#define degreesToRadians(x) (M_PI * x / 180.0)
#define radiansToDegrees(x) (x * (180.0/M_PI))

@interface ARCoordinate : NSObject {
	double radialDistance;
	double inclination;
	double azimuth;
	
	NSString *title;
	NSString *subtitle;
}

- (NSUInteger) hash;
- (BOOL) isEqual:(id)other;
- (BOOL) isEqualToCoordinate:(ARCoordinate *) otherCoordinate;

+ (ARCoordinate *)coordinateWithRadialDistance:(double)newRadialDistance inclination:(double)newInclination azimuth:(double)newAzimuth;

@property (nonatomic, retain)	NSString *title;
@property (nonatomic, copy)		NSString *subtitle;
@property (nonatomic) double	radialDistance;
@property (nonatomic) double	inclination;
@property (nonatomic) double	azimuth;

@end
