//
//  User.h
//  apartmentshare
//
//  Created by Tope Abayomi on 22/02/2013.
//  Copyright (c) 2013 App Design Vault. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "StackMob.h"

@interface User : SMUserManagedObject

@property (nonatomic, retain) NSString * username;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSDate * lastmodate;
@property (nonatomic, retain) NSDate * createddate;

- (id)initIntoManagedObjectContext:(NSManagedObjectContext *)context;

@end