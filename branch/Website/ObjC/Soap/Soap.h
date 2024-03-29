/*
 Soap.h
 Provides method for serializing and deserializing values to and from the web service.
 Authors:	Jason Kichline, andCulture - Harrisburg, Pennsylvania USA
          Karl Schulenburg, UMAI Development - Shoreditch, London UK
*/

#import "TouchXML.h"
#import "SoapObject.h"

@interface Soap : NSObject {
	
}

// Creates the XML request for the SOAP envelope.
+ (NSString*) createEnvelope: (NSString*) method forNamespace: (NSString*) ns containing: (NSDictionary*) containing;

// Creates the XML request for the SOAP envelope. - Karl
+ (NSString*) createEnvelope: (NSString*) method ofAction: (NSString*) action forNamespace: (NSString*) ns containing: (SoapObject*) containing;

// Serializes an object to a string, XML representation.
+ (NSString*) serialize: (id) object;

// Calls an HTTP service
+ (NSMutableData*) callService: (NSString*) service data: (NSString*) data action: (NSString*) action delegate: (SEL) delegate;

// Gets the node from another node by name
+ (CXMLNode*) getNode: (CXMLNode*) element withName: (NSString*) name;

// Finds nodes in a parent with a given XPath query
+ (NSArray*) findNodes: (CXMLNode*) node xpath: (NSString*) xpath;

// Finds a single node with the given XPath query
+ (CXMLNode*) findNode: (CXMLNode*) node xpath: (NSString*) xpath;

// Deserializes a node into an object.
+ (NSObject*) deserialize: (CXMLNode*) element forObject: (NSObject*) object;

// Determines if an object is an array
+ (BOOL) isArray: (NSObject*) value;

// Determines if an object is an object with properties.
+ (BOOL) isObject: (NSObject*) value;

// Gets the value of a named node from a parent node.
+ (NSString*) getNodeValue: (CXMLNode*) node withName: (NSString*) name;

@end
