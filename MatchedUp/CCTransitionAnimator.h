//
//  CCTransitionAnimator.h
//  MatchedUp
//
//  Created by Eliot Arntz on 12/23/13.
//  Copyright (c) 2013 Code Coalition. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CCTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) BOOL presenting;

@end
