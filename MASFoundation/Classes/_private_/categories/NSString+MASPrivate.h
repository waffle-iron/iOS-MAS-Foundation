//
//  NSString+MASPrivate.h
//  MASFoundation
//
//  Copyright (c) 2016 CA. All rights reserved.
//
//  This software may be modified and distributed under the terms
//  of the MIT license. See the LICENSE file for details.
//

@import Foundation;


@interface NSString (MASPrivate)



///--------------------------------------
/// @name Public
///--------------------------------------

# pragma mark - Public

/**
 * 
 */
+ (NSString *)randomStringWithLength:(int)length;

/**
 *  Check if the string is empty string.
 *
 *  @return Returns YES if string is empty or NO if string is not empty.
 */
- (BOOL)isEmpty;


/**
 *  Create MD5 hash string from NSString
 *
 *  @return Returns md5 hashsed NSString
 */
- (NSString *)md5String;

@end
