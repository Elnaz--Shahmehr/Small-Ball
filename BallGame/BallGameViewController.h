//
//  BallGameViewController.h
//  BallGame
//
//  Created by Elnaz Shahmehr on 10/17/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BallGameViewController : UIViewController {
    
    IBOutlet UIButton *startbutton;
    NSTimer * randomMain;
    CGPoint pos;
    IBOutlet UIImageView *player;
    IBOutlet UIImageView *enemy;
}

-(IBAction)start;

@end
