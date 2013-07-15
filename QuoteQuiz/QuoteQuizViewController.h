//
//  QuoteQuizViewController.h
//  QuoteQuiz
//
//  Created by ROHITH SALIM on 7/10/13.
//  Copyright (c) 2013 ROHITH SALIM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QuizTipViewController.h"

@class Quiz;

@interface QuoteQuizViewController : UIViewController <QuizTipViewControllerDelegate>

@property (nonatomic, assign) NSInteger quizIndex;
@property (nonatomic, strong) Quiz *quiz;

-(IBAction)ans1Action:(id)sender;
-(IBAction)ans2Action:(id)sender;
-(IBAction)ans3Action:(id)sender;
-(IBAction)startAgain:(id)sender;

@end
