//
//  Source/Headers/BaseBoard/BSAuditToken.h
//  LaunchInSafeMode
//
//  Created by inoahdev on 5/20/17.
//  Copyright © 2017 inoahdev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BSAuditToken : NSObject
+ (instancetype)tokenForCurrentProcess;
@end
