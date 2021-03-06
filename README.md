# SquareConnect

No descripton provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)

This ObjC package is automatically generated by the [Swagger Codegen](https://github.com/swagger-api/swagger-codegen) project:

- API version: 2.0
- Package version: 
- Build date: 2017-01-02T00:49:48.609-06:00
- Build package: class io.swagger.codegen.languages.ObjcClientCodegen

## Requirements

The SDK requires [**ARC (Automatic Reference Counting)**](http://stackoverflow.com/questions/7778356/how-to-enable-disable-automatic-reference-counting) to be enabled in the Xcode project.

## Installation & Usage
### Install from Github using [CocoaPods](https://cocoapods.org/)

Add the following to the Podfile:

```ruby
pod 'SquareConnect', :git => 'https://github.com/GIT_USER_ID/GIT_REPO_ID.git'
```

To specify a particular branch, append `, :branch => 'branch-name-here'`

To specify a particular commit, append `, :commit => '11aa22'`

### Install from local path using [CocoaPods](https://cocoapods.org/)

Put the SDK under your project folder (e.g. /path/to/objc_project/Vendor/SquareConnect) and then add the following to the Podfile:

```ruby
pod 'SquareConnect', :path => 'Vendor/SquareConnect'
```

### Usage

Import the following:

```objc
#import <SquareConnect/SQCApiClient.h>
#import <SquareConnect/SQCConfiguration.h>
// load models
#import <SquareConnect/SQCAddress.h>
#import <SquareConnect/SQCCaptureTransactionResponse.h>
#import <SquareConnect/SQCCard.h>
#import <SquareConnect/SQCCardBrand.h>
#import <SquareConnect/SQCChargeRequest.h>
#import <SquareConnect/SQCChargeResponse.h>
#import <SquareConnect/SQCCountry.h>
#import <SquareConnect/SQCCreateCustomerCardRequest.h>
#import <SquareConnect/SQCCreateCustomerCardResponse.h>
#import <SquareConnect/SQCCreateCustomerRequest.h>
#import <SquareConnect/SQCCreateCustomerResponse.h>
#import <SquareConnect/SQCCreateRefundRequest.h>
#import <SquareConnect/SQCCreateRefundResponse.h>
#import <SquareConnect/SQCCurrency.h>
#import <SquareConnect/SQCCustomer.h>
#import <SquareConnect/SQCDeleteCustomerCardResponse.h>
#import <SquareConnect/SQCDeleteCustomerResponse.h>
#import <SquareConnect/SQCError.h>
#import <SquareConnect/SQCErrorCategory.h>
#import <SquareConnect/SQCErrorCode.h>
#import <SquareConnect/SQCListCustomersRequest.h>
#import <SquareConnect/SQCListCustomersResponse.h>
#import <SquareConnect/SQCListLocationsResponse.h>
#import <SquareConnect/SQCListRefundsRequest.h>
#import <SquareConnect/SQCListRefundsResponse.h>
#import <SquareConnect/SQCListTransactionsRequest.h>
#import <SquareConnect/SQCListTransactionsResponse.h>
#import <SquareConnect/SQCLocation.h>
#import <SquareConnect/SQCLocationCapability.h>
#import <SquareConnect/SQCMoney.h>
#import <SquareConnect/SQCRefund.h>
#import <SquareConnect/SQCRefundStatus.h>
#import <SquareConnect/SQCRetrieveCustomerResponse.h>
#import <SquareConnect/SQCRetrieveTransactionResponse.h>
#import <SquareConnect/SQCSortOrder.h>
#import <SquareConnect/SQCTender.h>
#import <SquareConnect/SQCTenderCardDetails.h>
#import <SquareConnect/SQCTenderCardDetailsEntryMethod.h>
#import <SquareConnect/SQCTenderCardDetailsStatus.h>
#import <SquareConnect/SQCTenderCashDetails.h>
#import <SquareConnect/SQCTenderType.h>
#import <SquareConnect/SQCTransaction.h>
#import <SquareConnect/SQCTransactionProduct.h>
#import <SquareConnect/SQCUpdateCustomerRequest.h>
#import <SquareConnect/SQCUpdateCustomerResponse.h>
#import <SquareConnect/SQCVoidTransactionResponse.h>
// load API classes for accessing endpoints
#import <SquareConnect/SQCCustomerApi.h>
#import <SquareConnect/SQCCustomerCardApi.h>
#import <SquareConnect/SQCLocationApi.h>
#import <SquareConnect/SQCRefundApi.h>
#import <SquareConnect/SQCTransactionApi.h>

```

## Recommendation

It's recommended to create an instance of ApiClient per thread in a multi-threaded environment to avoid any potential issue.

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```objc


NSString* *authorization = @"authorization_example"; // The value to provide in the Authorization header of your request. This value should follow the format `Bearer YOUR_ACCESS_TOKEN_HERE`.
SQCCreateCustomerRequest* *body = [[SQCCreateCustomerRequest alloc] init]; // An object containing the fields to POST for the request.  See the corresponding object definition for field details.

SQCCustomerApi *apiInstance = [[SQCCustomerApi alloc] init];

// CreateCustomer
[apiInstance createCustomerWithAuthorization:authorization
    body:body
              completionHandler: ^(SQCCreateCustomerResponse* output, NSError* error) {
                            if (output) {
                                NSLog(@"%@", output);
                            }
                            if (error) {
                                NSLog(@"Error: %@", error);
                            }
                        }];

```

## Documentation for API Endpoints

All URIs are relative to *https://connect.squareup.com*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*SQCCustomerApi* | [**createCustomer**](docs/SQCCustomerApi.md#createcustomer) | **POST** /v2/customers | CreateCustomer
*SQCCustomerApi* | [**deleteCustomer**](docs/SQCCustomerApi.md#deletecustomer) | **DELETE** /v2/customers/{customer_id} | DeleteCustomer
*SQCCustomerApi* | [**listCustomers**](docs/SQCCustomerApi.md#listcustomers) | **GET** /v2/customers | ListCustomers
*SQCCustomerApi* | [**retrieveCustomer**](docs/SQCCustomerApi.md#retrievecustomer) | **GET** /v2/customers/{customer_id} | RetrieveCustomer
*SQCCustomerApi* | [**updateCustomer**](docs/SQCCustomerApi.md#updatecustomer) | **PUT** /v2/customers/{customer_id} | UpdateCustomer
*SQCCustomerCardApi* | [**createCustomerCard**](docs/SQCCustomerCardApi.md#createcustomercard) | **POST** /v2/customers/{customer_id}/cards | CreateCustomerCard
*SQCCustomerCardApi* | [**deleteCustomerCard**](docs/SQCCustomerCardApi.md#deletecustomercard) | **DELETE** /v2/customers/{customer_id}/cards/{card_id} | DeleteCustomerCard
*SQCLocationApi* | [**listLocations**](docs/SQCLocationApi.md#listlocations) | **GET** /v2/locations | ListLocations
*SQCRefundApi* | [**createRefund**](docs/SQCRefundApi.md#createrefund) | **POST** /v2/locations/{location_id}/transactions/{transaction_id}/refund | CreateRefund
*SQCRefundApi* | [**listRefunds**](docs/SQCRefundApi.md#listrefunds) | **GET** /v2/locations/{location_id}/refunds | ListRefunds
*SQCTransactionApi* | [**captureTransaction**](docs/SQCTransactionApi.md#capturetransaction) | **POST** /v2/locations/{location_id}/transactions/{transaction_id}/capture | CaptureTransaction
*SQCTransactionApi* | [**charge**](docs/SQCTransactionApi.md#charge) | **POST** /v2/locations/{location_id}/transactions | Charge
*SQCTransactionApi* | [**listTransactions**](docs/SQCTransactionApi.md#listtransactions) | **GET** /v2/locations/{location_id}/transactions | ListTransactions
*SQCTransactionApi* | [**retrieveTransaction**](docs/SQCTransactionApi.md#retrievetransaction) | **GET** /v2/locations/{location_id}/transactions/{transaction_id} | RetrieveTransaction
*SQCTransactionApi* | [**voidTransaction**](docs/SQCTransactionApi.md#voidtransaction) | **POST** /v2/locations/{location_id}/transactions/{transaction_id}/void | VoidTransaction


## Documentation For Models

 - [SQCAddress](docs/SQCAddress.md)
 - [SQCCaptureTransactionResponse](docs/SQCCaptureTransactionResponse.md)
 - [SQCCard](docs/SQCCard.md)
 - [SQCCardBrand](docs/SQCCardBrand.md)
 - [SQCChargeRequest](docs/SQCChargeRequest.md)
 - [SQCChargeResponse](docs/SQCChargeResponse.md)
 - [SQCCountry](docs/SQCCountry.md)
 - [SQCCreateCustomerCardRequest](docs/SQCCreateCustomerCardRequest.md)
 - [SQCCreateCustomerCardResponse](docs/SQCCreateCustomerCardResponse.md)
 - [SQCCreateCustomerRequest](docs/SQCCreateCustomerRequest.md)
 - [SQCCreateCustomerResponse](docs/SQCCreateCustomerResponse.md)
 - [SQCCreateRefundRequest](docs/SQCCreateRefundRequest.md)
 - [SQCCreateRefundResponse](docs/SQCCreateRefundResponse.md)
 - [SQCCurrency](docs/SQCCurrency.md)
 - [SQCCustomer](docs/SQCCustomer.md)
 - [SQCDeleteCustomerCardResponse](docs/SQCDeleteCustomerCardResponse.md)
 - [SQCDeleteCustomerResponse](docs/SQCDeleteCustomerResponse.md)
 - [SQCError](docs/SQCError.md)
 - [SQCErrorCategory](docs/SQCErrorCategory.md)
 - [SQCErrorCode](docs/SQCErrorCode.md)
 - [SQCListCustomersRequest](docs/SQCListCustomersRequest.md)
 - [SQCListCustomersResponse](docs/SQCListCustomersResponse.md)
 - [SQCListLocationsResponse](docs/SQCListLocationsResponse.md)
 - [SQCListRefundsRequest](docs/SQCListRefundsRequest.md)
 - [SQCListRefundsResponse](docs/SQCListRefundsResponse.md)
 - [SQCListTransactionsRequest](docs/SQCListTransactionsRequest.md)
 - [SQCListTransactionsResponse](docs/SQCListTransactionsResponse.md)
 - [SQCLocation](docs/SQCLocation.md)
 - [SQCLocationCapability](docs/SQCLocationCapability.md)
 - [SQCMoney](docs/SQCMoney.md)
 - [SQCRefund](docs/SQCRefund.md)
 - [SQCRefundStatus](docs/SQCRefundStatus.md)
 - [SQCRetrieveCustomerResponse](docs/SQCRetrieveCustomerResponse.md)
 - [SQCRetrieveTransactionResponse](docs/SQCRetrieveTransactionResponse.md)
 - [SQCSortOrder](docs/SQCSortOrder.md)
 - [SQCTender](docs/SQCTender.md)
 - [SQCTenderCardDetails](docs/SQCTenderCardDetails.md)
 - [SQCTenderCardDetailsEntryMethod](docs/SQCTenderCardDetailsEntryMethod.md)
 - [SQCTenderCardDetailsStatus](docs/SQCTenderCardDetailsStatus.md)
 - [SQCTenderCashDetails](docs/SQCTenderCashDetails.md)
 - [SQCTenderType](docs/SQCTenderType.md)
 - [SQCTransaction](docs/SQCTransaction.md)
 - [SQCTransactionProduct](docs/SQCTransactionProduct.md)
 - [SQCUpdateCustomerRequest](docs/SQCUpdateCustomerRequest.md)
 - [SQCUpdateCustomerResponse](docs/SQCUpdateCustomerResponse.md)
 - [SQCVoidTransactionResponse](docs/SQCVoidTransactionResponse.md)


## Documentation For Authorization

 All endpoints do not require authorization.


## Author




