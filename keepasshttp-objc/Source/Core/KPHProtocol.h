//
//  SPSProtocol.h
//  keypasshttp
//
//  Created by Tim Kretschmer on 3/28/14.
//  Copyright (c) 2014 xbigtk13x. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Response.h"
#import "Request.h"
#import "Aes.h"

@interface KPHProtocol : NSObject
+ (NSString *)encode64:(NSArray *) b;
+ (NSArray *)decode64:(NSString *) s;
+ (BOOL) VerifyRequest:(Request *) r aes:(Aes *) aes;
+ (BOOL) TestRequestVerifier: (Request *) r aes:(Aes *) aes key:(NSString *) key;
@end
