#import "SCTransaction.h"

@implementation SCTransaction

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"id": @"_id", @"location_id": @"locationId", @"created_at": @"createdAt", @"tenders": @"tenders", @"refunds": @"refunds", @"reference_id": @"referenceId", @"product": @"product" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"_id", @"locationId", @"createdAt", @"tenders", @"refunds", @"referenceId", @"product"];
  return [optionalProperties containsObject:propertyName];
}

@end
