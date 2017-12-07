//
//  WebServices.h
//  TD
//
//  Created by Sergio Martinez on 12/5/17.
//  Copyright © 2017 UAG. All rights reserved.
//
#import <JSONModel/JSONModel.h>
@interface WebServices : JSONModel
+(void)placePostRequestWithURL:(NSString *)action withData:(NSDictionary *)dataToSend withHandler:(void (^)(NSURLResponse *response, NSData *data, NSError *error))ourBlock;

+(void) register:(NSDictionary *)data calledBy:(id)calledBy withSuccess:(SEL)successCallback andFailure:(SEL)failureCallback;

@end
