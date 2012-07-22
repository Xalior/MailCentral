//
//  MCAppDelegate.h
//  Mail Central
//
//  Created by D. Rimron on 22/07/2012.
//  Copyright (c) 2012 D. Rimron. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MCAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
