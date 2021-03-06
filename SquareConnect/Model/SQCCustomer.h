#import <Foundation/Foundation.h>
#import "SQCObject.h"

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
#import "SQCCard.h"


@protocol SQCCustomer
@end

@interface SQCCustomer : SQCObject

/* The customer's unique ID. [optional]
 */
@property(nonatomic) NSString* _id;
/* The time when the customer was created, in RFC 3339 format. [optional]
 */
@property(nonatomic) NSString* createdAt;
/* The time when the customer was updated, in RFC 3339 format. [optional]
 */
@property(nonatomic) NSString* updatedAt;
/* Cards on file for the customer. [optional]
 */
@property(nonatomic) NSArray<SQCCard>* cards;
/*  [optional]
 */
@property(nonatomic) NSString* givenName;
/*  [optional]
 */
@property(nonatomic) NSString* familyName;
/*  [optional]
 */
@property(nonatomic) NSString* nickname;
/*  [optional]
 */
@property(nonatomic) NSString* companyName;
/*  [optional]
 */
@property(nonatomic) NSString* emailAddress;
/*  [optional]
 */
@property(nonatomic) SQCAddress* address;
/*  [optional]
 */
@property(nonatomic) NSString* phoneNumber;
/*  [optional]
 */
@property(nonatomic) NSString* referenceId;
/*  [optional]
 */
@property(nonatomic) NSString* note;

@end
