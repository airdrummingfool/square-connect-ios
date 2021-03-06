#import "SQCCustomerCardApi.h"
#import "SQCQueryParamCollection.h"
#import "SQCCreateCustomerCardResponse.h"
#import "SQCCreateCustomerCardRequest.h"
#import "SQCDeleteCustomerCardResponse.h"


@interface SQCCustomerCardApi ()

@property (nonatomic, strong) NSMutableDictionary *defaultHeaders;

@end

@implementation SQCCustomerCardApi

NSString* kSQCCustomerCardApiErrorDomain = @"SQCCustomerCardApiErrorDomain";
NSInteger kSQCCustomerCardApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    self = [super init];
    if (self) {
        SQCConfiguration *config = [SQCConfiguration sharedConfig];
        if (config.apiClient == nil) {
            config.apiClient = [[SQCApiClient alloc] init];
        }
        _apiClient = config.apiClient;
        _defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

- (id) initWithApiClient:(SQCApiClient *)apiClient {
    self = [super init];
    if (self) {
        _apiClient = apiClient;
        _defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

+ (instancetype)sharedAPI {
    static SQCCustomerCardApi *sharedAPI;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        sharedAPI = [[self alloc] init];
    });
    return sharedAPI;
}

-(NSString*) defaultHeaderForKey:(NSString*)key {
    return self.defaultHeaders[key];
}

-(void) addHeader:(NSString*)value forKey:(NSString*)key {
    [self setDefaultHeaderValue:value forKey:key];
}

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key {
    [self.defaultHeaders setValue:value forKey:key];
}

-(NSUInteger) requestQueueSize {
    return [SQCApiClient requestQueueSize];
}

#pragma mark - Api Methods

///
/// CreateCustomerCard
/// Adds a card on file to an existing customer.
///  @param authorization The value to provide in the Authorization header of your request. This value should follow the format `Bearer YOUR_ACCESS_TOKEN_HERE`. 
///
///  @param customerId  
///
///  @param body An object containing the fields to POST for the request.  See the corresponding object definition for field details. 
///
///  @returns SQCCreateCustomerCardResponse*
///
-(NSNumber*) createCustomerCardWithAuthorization: (NSString*) authorization
    customerId: (NSString*) customerId
    body: (SQCCreateCustomerCardRequest*) body
    completionHandler: (void (^)(SQCCreateCustomerCardResponse* output, NSError* error)) handler {
    // verify the required parameter 'authorization' is set
    if (authorization == nil) {
        NSParameterAssert(authorization);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"authorization"] };
            NSError* error = [NSError errorWithDomain:kSQCCustomerCardApiErrorDomain code:kSQCCustomerCardApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'customerId' is set
    if (customerId == nil) {
        NSParameterAssert(customerId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"customerId"] };
            NSError* error = [NSError errorWithDomain:kSQCCustomerCardApiErrorDomain code:kSQCCustomerCardApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'body' is set
    if (body == nil) {
        NSParameterAssert(body);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"body"] };
            NSError* error = [NSError errorWithDomain:kSQCCustomerCardApiErrorDomain code:kSQCCustomerCardApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/v2/customers/{customer_id}/cards"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (customerId != nil) {
        pathParams[@"customer_id"] = customerId;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    if (authorization != nil) {
        headerParams[@"Authorization"] = authorization;
    }
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    bodyParam = body;

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SQCCreateCustomerCardResponse*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SQCCreateCustomerCardResponse*)data, error);
                                }
                           }
          ];
}

///
/// DeleteCustomerCard
/// Removes a card on file from a customer.
///  @param authorization The value to provide in the Authorization header of your request. This value should follow the format `Bearer YOUR_ACCESS_TOKEN_HERE`. 
///
///  @param customerId  
///
///  @param cardId  
///
///  @returns SQCDeleteCustomerCardResponse*
///
-(NSNumber*) deleteCustomerCardWithAuthorization: (NSString*) authorization
    customerId: (NSString*) customerId
    cardId: (NSString*) cardId
    completionHandler: (void (^)(SQCDeleteCustomerCardResponse* output, NSError* error)) handler {
    // verify the required parameter 'authorization' is set
    if (authorization == nil) {
        NSParameterAssert(authorization);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"authorization"] };
            NSError* error = [NSError errorWithDomain:kSQCCustomerCardApiErrorDomain code:kSQCCustomerCardApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'customerId' is set
    if (customerId == nil) {
        NSParameterAssert(customerId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"customerId"] };
            NSError* error = [NSError errorWithDomain:kSQCCustomerCardApiErrorDomain code:kSQCCustomerCardApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'cardId' is set
    if (cardId == nil) {
        NSParameterAssert(cardId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"cardId"] };
            NSError* error = [NSError errorWithDomain:kSQCCustomerCardApiErrorDomain code:kSQCCustomerCardApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/v2/customers/{customer_id}/cards/{card_id}"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (customerId != nil) {
        pathParams[@"customer_id"] = customerId;
    }
    if (cardId != nil) {
        pathParams[@"card_id"] = cardId;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    if (authorization != nil) {
        headerParams[@"Authorization"] = authorization;
    }
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"DELETE"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SQCDeleteCustomerCardResponse*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SQCDeleteCustomerCardResponse*)data, error);
                                }
                           }
          ];
}



@end
