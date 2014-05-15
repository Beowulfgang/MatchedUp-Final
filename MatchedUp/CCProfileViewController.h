//
//  CCProfileViewController.h
//  MatchedUp
//
//  Created by Eliot Arntz on 12/7/13.
//  Copyright (c) 2013 Code Coalition. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CCProfileViewControllerDelegate <NSObject>

-(void)didPressLike;
-(void)didPressDislike;

@end

@interface CCProfileViewController : UIViewController

@property (strong, nonatomic) PFObject *photo;
@property (weak, nonatomic) id <CCProfileViewControllerDelegate> delegate;

@end
