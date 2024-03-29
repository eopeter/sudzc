/*
 SoapObject.m
 Implementation of the SoapObject base object that provides initialization and deallocation methods
 Authors:	Jason Kichline, andCulture - Harrisburg, Pennsylvania USA
          Karl Schulenburg, UMAI Development - Shoreditch, London UK
*/
#import "SoapObject.h"

@implementation SoapObject

// Initialization include for every object - important (NSString and NSDates's to nil) - Karl
- (id) init
{
	if (self = [super init])
	{
	}
	return self;
}

// Static method for initializing from a node.
+ (id) newWithNode: (CXMLNode*) node
{
	return (id)[[SoapObject alloc] initWithNode: node];
}

// Called when initializing the object from a node
- (id) initWithNode: (CXMLNode*) node
{
	if(self = [self init])
	{
	}
	return self;
}

// This will get called when traversing objects, returning nothing is ok - Karl
- (NSMutableString*) serialize
{
	NSMutableString* s = [[[NSMutableString alloc] init] autorelease];
	return s;
}

- (void) dealloc
{
	[super dealloc];
}

@end