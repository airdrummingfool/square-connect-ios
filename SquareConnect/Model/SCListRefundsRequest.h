#import <Foundation/Foundation.h>
#import "SCObject.h"

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



@protocol SCListRefundsRequest
@end

@interface SCListRefundsRequest : SCObject

/* The beginning of the requested reporting period, in RFC 3339 format. [optional]
 */
@property(nonatomic) NSString* beginTime;
/* The end of the requested reporting period, in RFC 3339 format. [optional]
 */
@property(nonatomic) NSString* endTime;
/* The order in which results are listed in the response. [optional]
 */
@property(nonatomic) NSString* sortOrder;
/* A pagination cursor to retrieve the next set of results for your original query to the endpoint. [optional]
 */
@property(nonatomic) NSString* cursor;

@end
