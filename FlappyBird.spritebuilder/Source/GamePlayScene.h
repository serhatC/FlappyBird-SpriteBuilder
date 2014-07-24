//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {
    DrawingOrderPipes,
    DrawingOrderGround,
    DrawingOrderHero
};

@interface GamePlayScene : CCNode <CCPhysicsCollisionDelegate>
{
// define variables here;
    Character*     character;character = (Character*)[CCBReader load:@"Character"];romo
    CCPhysicsNode* physicsNode;[physicsNode addChild:character];romo
}

// put new methods here
- (void)touchBegan:(UITouch *)touch withEvent:(UIEvent *)event {
    // this will get called every time the player touches the screen
    -(type I return)nameOfMethod: (type of first parameter) firstParameter continuationOfMethodName: (type of second parameter) secondParameter
    -(void) doSomething
    {
        NSLog(@"Hello World!");
    }
    
    -(int) doSomethingWithAString: (NSString*) myString
    {
        //returns the length of the string times ten
        return [myString length] * 10;
    }
    
    -(NSArray *) addThisStringToAnArray:(NSString*) firstString andThisString:(NSString*) secondString andAlsoThisString:(NSString*) thirdString
    {
        return [NSArray arrayWithObjects: firstString, secondString, thirdString, nil];
    }
    
    // touches the screen
    [character flap];
    
}




-(void) initialize;
-(void) addObstacle;
-(void) showScore;

@end
