// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "OrderedDictionary.h"
#import "Finding_BaseFindingServiceRequest.h"

@implementation Finding_BaseFindingServiceRequest

@synthesize sortOrder = _sortOrder;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    return nil;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [OrderedDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"sortOrder" propertyName:@"sortOrder" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"sortOrder"];
    
    return map;
}



-(void)dealloc {
    self.sortOrder = nil;
}

@end
