//
//  BallGameAppDelegate.h
//  BallGame
//
//  Created by Elnaz Shahmehr on 10/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BallGameViewController;

@interface BallGameAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet BallGameViewController *viewController;

@end
