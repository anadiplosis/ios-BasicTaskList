//
//  DSTToDoItem.h
//  ToDoList
//
//  Created by David Tallon on 9/3/14.
//  Copyright (c) 2014 davetallon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DSTToDoItem : NSObject


@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
