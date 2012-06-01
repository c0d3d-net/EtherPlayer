//
//  AirplayHandler.h
//  EtherPlayer
//
//  Created by Brendon Justin on 5/31/12.
//  Copyright (c) 2012 Brendon Justin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AirplayHandler : NSObject

- (void)transcodeInput;

@property (strong, nonatomic) NSString *inputPath;

@end