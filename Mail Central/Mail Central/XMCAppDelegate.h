//
//  XMCAppDelegate.h
//  Mail Central
//
//  Created by D. Rimron on 21/07/2012.
//  Copyright (c) 2012 Xalior. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface XMCAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
