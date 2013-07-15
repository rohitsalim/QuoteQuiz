//
//  Quiz.h
//  QuoteQuiz
//
//  Created by ROHITH SALIM on 7/10/13.
//  Copyright (c) 2013 ROHITH SALIM. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Quiz : NSObject

@property (nonatomic, strong) NSMutableArray *movieArray;
@property (nonatomic, readonly, strong) NSString *quote;
@property (nonatomic, readonly, strong) NSString *ans1;
@property (nonatomic, readonly, strong) NSString *ans2;
@property (nonatomic, readonly, strong) NSString *ans3;
@property (nonatomic, assign) NSInteger correctCount;
@property (nonatomic, assign) NSInteger incorrectCount;
@property (nonatomic, assign) NSInteger quizCount;
@property (nonatomic, assign) NSInteger tipCount;
@property (nonatomic, strong) NSString *tip;

-(id) initWithQuiz:(NSString *) plistName;
-(void) nextQuestion: (NSUInteger) idx;
-(BOOL) checkQuestion: (NSUInteger) question forAnswer: (NSUInteger) answer;

@end
