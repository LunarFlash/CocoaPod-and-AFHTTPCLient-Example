//
//  TracktAPIClient.h
//  CocoaPodsExample
//
//  Created by Terry Wang on 11/22/13.
//  Copyright (c) 2013 ASHP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFHTTPClient.h>

extern NSString * const kTraktAPIKey;
extern NSString * const kTraktBaseURLString;


@interface TraktAPIClient : AFHTTPClient
// TEST COMMIT
+(TraktAPIClient *)sharedClient;


@end
