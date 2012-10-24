//
//  RKCPAppDelegate.h
//  RKCocoaPods
//
//  Created by Blake Watters on 10/24/12.
//  Copyright (c) 2012 RestKit. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RKCPAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
