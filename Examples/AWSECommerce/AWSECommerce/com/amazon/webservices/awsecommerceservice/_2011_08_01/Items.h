// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Item;
@class CorrectedQuery;
@class Request;
@class SearchBinSets;
@class SearchResultsMap;

/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface Items : NSObject <PicoBindable> {

@private
    Request *_request;
    CorrectedQuery *_correctedQuery;
    NSString *_qid;
    NSString *_engineQuery;
    NSNumber *_totalResults;
    NSNumber *_totalPages;
    NSString *_moreSearchResultsUrl;
    SearchResultsMap *_searchResultsMap;
    NSMutableArray *_item;
    SearchBinSets *_searchBinSets;

}


/**
 (public property)
 
 type : class Request
*/
@property (nonatomic, strong) Request *request;

/**
 (public property)
 
 type : class CorrectedQuery
*/
@property (nonatomic, strong) CorrectedQuery *correctedQuery;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *qid;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *engineQuery;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, strong) NSNumber *totalResults;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, strong) NSNumber *totalPages;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, strong) NSString *moreSearchResultsUrl;

/**
 (public property)
 
 type : class SearchResultsMap
*/
@property (nonatomic, strong) SearchResultsMap *searchResultsMap;

/**
 (public property)
 
 entry type : class Item
*/

@property (nonatomic, strong) NSMutableArray *item;

/**
 (public property)
 
 type : class SearchBinSets
*/
@property (nonatomic, strong) SearchBinSets *searchBinSets;


@end
