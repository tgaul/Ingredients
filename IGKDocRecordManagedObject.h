//
//  IGKDocRecordManagedObject.h
//  Ingredients
//
//  Created by Alex Gordon on 25/01/2010.
//  Copyright 2010 Fileability. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface IGKDocRecordManagedObject : NSManagedObject {

}

- (NSImage *)normalIcon;
- (NSImage *)selectedIcon;

@end