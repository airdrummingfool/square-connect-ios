#import <Foundation/Foundation.h>
#import <ISO8601/ISO8601.h>
#import <AFNetworking/AFNetworking.h>
#import "SQCJSONResponseSerializer.h"
#import "SQCJSONRequestSerializer.h"
#import "SQCQueryParamCollection.h"
#import "SQCConfiguration.h"
#import "SQCResponseDeserializer.h"
#import "SQCSanitizer.h"
#import "SQCLogger.h"

/**
* Square Connect API
* No descripton provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: 2.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#import "SQCAddress.h"
#import "SQCCaptureTransactionResponse.h"
#import "SQCCard.h"
#import "SQCCardBrand.h"
#import "SQCChargeRequest.h"
#import "SQCChargeResponse.h"
#import "SQCCountry.h"
#import "SQCCreateCustomerCardRequest.h"
#import "SQCCreateCustomerCardResponse.h"
#import "SQCCreateCustomerRequest.h"
#import "SQCCreateCustomerResponse.h"
#import "SQCCreateRefundRequest.h"
#import "SQCCreateRefundResponse.h"
#import "SQCCurrency.h"
#import "SQCCustomer.h"
#import "SQCDeleteCustomerCardResponse.h"
#import "SQCDeleteCustomerResponse.h"
#import "SQCError.h"
#import "SQCErrorCategory.h"
#import "SQCErrorCode.h"
#import "SQCListCustomersRequest.h"
#import "SQCListCustomersResponse.h"
#import "SQCListLocationsResponse.h"
#import "SQCListRefundsRequest.h"
#import "SQCListRefundsResponse.h"
#import "SQCListTransactionsRequest.h"
#import "SQCListTransactionsResponse.h"
#import "SQCLocation.h"
#import "SQCLocationCapability.h"
#import "SQCMoney.h"
#import "SQCRefund.h"
#import "SQCRefundStatus.h"
#import "SQCRetrieveCustomerResponse.h"
#import "SQCRetrieveTransactionResponse.h"
#import "SQCSortOrder.h"
#import "SQCTender.h"
#import "SQCTenderCardDetails.h"
#import "SQCTenderCardDetailsEntryMethod.h"
#import "SQCTenderCardDetailsStatus.h"
#import "SQCTenderCashDetails.h"
#import "SQCTenderType.h"
#import "SQCTransaction.h"
#import "SQCTransactionProduct.h"
#import "SQCUpdateCustomerRequest.h"
#import "SQCUpdateCustomerResponse.h"
#import "SQCVoidTransactionResponse.h"



@class SQCConfiguration;

/**
 * A key for `NSError` user info dictionaries.
 *
 * The corresponding value is the parsed response body for an HTTP error.
 */
extern NSString *const SQCResponseObjectErrorKey;

@interface SQCApiClient : AFHTTPSessionManager

@property(nonatomic, assign) NSURLRequestCachePolicy cachePolicy;
@property(nonatomic, assign) NSTimeInterval timeoutInterval;
@property(nonatomic, readonly) NSOperationQueue* queue;

/// In order to ensure the HTTPResponseHeaders are correct, it is recommended to initialize one SQCApiClient instance per thread.
@property(nonatomic, readonly) NSDictionary* HTTPResponseHeaders;

@property(nonatomic, strong) id<SQCResponseDeserializer> responseDeserializer;

@property(nonatomic, strong) id<SQCSanitizer> sanitizer;
/**
 * Clears Cache
 */
+(void)clearCache;

/**
 * Turns on cache
 *
 * @param enabled If the cached is enable, must be `YES` or `NO`
 */
+(void)setCacheEnabled:(BOOL) enabled;

/**
 * Gets the request queue size
 *
 * @return The size of `queuedRequests` static variable.
 */
+(NSUInteger)requestQueueSize;

/**
 * Sets the client unreachable
 *
 * @param state off line state, must be `YES` or `NO`
 */
+(void) setOfflineState:(BOOL) state;

/**
 * Gets if the client is unreachable
 *
 * @return The client offline state
 */
+(BOOL) getOfflineState;

/**
 * Sets the client reachability, this may be overridden by the reachability manager if reachability changes
 *
 * @param The client reachability.
 */
+(void) setReachabilityStatus:(AFNetworkReachabilityStatus) status;

/**
 * Gets the client reachability
 *
 * @return The client reachability.
 */
+(AFNetworkReachabilityStatus) getReachabilityStatus;

/**
 * Gets the next request id
 *
 * @return The next executed request id.
 */
+(NSNumber*) nextRequestId;

/**
 * Generates request id and add it to the queue
 *
 * @return The next executed request id.
 */
+(NSNumber*) queueRequest;

/**
 * Removes request id from the queue
 *
 * @param requestId The request which will be removed.
 */
+(void) cancelRequest:(NSNumber*)requestId;

/**
 * Customizes the behavior when the reachability changed
 *
 * @param changeBlock The block will be executed when the reachability changed.
 */
+(void) setReachabilityChangeBlock:(void(^)(int))changeBlock;

/**
 * Sets the api client reachability strategy
 */
- (void)configureCacheReachibility;

/**
 * Sets header for request
 *
 * @param value The header value
 * @param forKey The header key
 */
-(void)setHeaderValue:(NSString*) value
               forKey:(NSString*) forKey;

/**
 * Updates header parameters and query parameters for authentication
 *
 * @param headers The header parameter will be udpated, passed by pointer to pointer.
 * @param querys The query parameters will be updated, passed by pointer to pointer.
 * @param authSettings The authentication names NSArray.
 */
- (void) updateHeaderParams:(NSDictionary **)headers
                queryParams:(NSDictionary **)querys
           WithAuthSettings:(NSArray *)authSettings;

/**
 * Performs request
 *
 * @param path Request url.
 * @param method Request method.
 * @param pathParams Request path parameters.
 * @param queryParams Request query parameters.
 * @param body Request body.
 * @param headerParams Request header parameters.
 * @param authSettings Request authentication names.
 * @param requestContentType Request content-type.
 * @param responseContentType Response content-type.
 * @param completionBlock The block will be executed when the request completed.
 *
 * @return The request id.
 */
-(NSNumber*) requestWithPath:(NSString*) path
                      method:(NSString*) method
                  pathParams:(NSDictionary *) pathParams
                 queryParams:(NSDictionary*) queryParams
                  formParams:(NSDictionary *) formParams
                       files:(NSDictionary *) files
                        body:(id) body
                headerParams:(NSDictionary*) headerParams
                authSettings:(NSArray *) authSettings
          requestContentType:(NSString*) requestContentType
         responseContentType:(NSString*) responseContentType
                responseType:(NSString *) responseType
             completionBlock:(void (^)(id, NSError *))completionBlock;

/**
 * Custom security policy
 *
 * @return AFSecurityPolicy
 */
- (AFSecurityPolicy *) customSecurityPolicy;

/**
 * SQCConfiguration return sharedConfig
 *
 * @return SQCConfiguration
 */
- (SQCConfiguration*) configuration;


@end