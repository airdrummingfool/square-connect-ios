#import <Foundation/Foundation.h>
#import "SQCCreateCustomerCardResponse.h"
#import "SQCCreateCustomerCardRequest.h"
#import "SQCDeleteCustomerCardResponse.h"
#import "SQCApi.h"

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


@interface SQCCustomerCardApi: NSObject <SQCApi>

extern NSString* kSQCCustomerCardApiErrorDomain;
extern NSInteger kSQCCustomerCardApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// CreateCustomerCard
/// Adds a card on file to an existing customer.
///
/// @param authorization The value to provide in the Authorization header of your request. This value should follow the format &#x60;Bearer YOUR_ACCESS_TOKEN_HERE&#x60;.
/// @param customerId 
/// @param body An object containing the fields to POST for the request.  See the corresponding object definition for field details.
/// 
///  code:200 message:"Success"
///
/// @return SQCCreateCustomerCardResponse*
-(NSNumber*) createCustomerCardWithAuthorization: (NSString*) authorization
    customerId: (NSString*) customerId
    body: (SQCCreateCustomerCardRequest*) body
    completionHandler: (void (^)(SQCCreateCustomerCardResponse* output, NSError* error)) handler;


/// DeleteCustomerCard
/// Removes a card on file from a customer.
///
/// @param authorization The value to provide in the Authorization header of your request. This value should follow the format &#x60;Bearer YOUR_ACCESS_TOKEN_HERE&#x60;.
/// @param customerId 
/// @param cardId 
/// 
///  code:200 message:"Success"
///
/// @return SQCDeleteCustomerCardResponse*
-(NSNumber*) deleteCustomerCardWithAuthorization: (NSString*) authorization
    customerId: (NSString*) customerId
    cardId: (NSString*) cardId
    completionHandler: (void (^)(SQCDeleteCustomerCardResponse* output, NSError* error)) handler;



@end
