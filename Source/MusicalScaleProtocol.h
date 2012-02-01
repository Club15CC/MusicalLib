//
//  MusicalScaleDef.h
//  AirPluckHarp
//
//  Created by Hari Karam Singh on 09/09/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol MusicalScaleProtocol <NSObject>

+ (NSInteger const *)halfstepsArray;
+ (NSUInteger const)halfstepsArrayCount;
+ (NSUInteger const)octavesCovered;

@end
