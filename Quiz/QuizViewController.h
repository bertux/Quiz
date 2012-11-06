//
//  QuizViewController.h
//  Quiz
//
//  Created by victor on 06/11/12.
//  Copyright (c) 2012 victor. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuizViewController : UIViewController
{
    int currentQuestionIndex;
    
    // The model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    // The view objects - don't worry about IBOutlet -
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
}

// Methods
- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;

@end
