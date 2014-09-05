// JRSwizzle.h semver:1.0
//   Copyright (c) 2007-2011 Jonathan 'Wolf' Rentzsch: http://rentzsch.com
//   Some rights reserved: http://opensource.org/licenses/MIT
//   https://github.com/rentzsch/jrswizzle

#import <Foundation/Foundation.h>

@interface NSObject (TL_JRSwizzle)

+ (BOOL)tl_jr_swizzleMethod:(SEL)origSel_ withMethod:(SEL)altSel_ error:(NSError**)error_;
+ (BOOL)tl_jr_swizzleMethod:(SEL)origSel_ withMethod:(SEL)altSel_ withClass:(Class)withClass error:(NSError**)error_;
+ (BOOL)tl_jr_swizzleClassMethod:(SEL)origSel_ withClassMethod:(SEL)altSel_ withClass:(Class)withClass error:(NSError**)error_;

+ (void)tl_swizzleAllClassMethods:(NSArray *)selectors fromClass:(id)fromClass;
+ (void)tl_swizzleAllMethods:(NSArray *)selectors fromClass:(id)fromClass;
+ (void)tl_swizzleAllMethods:(NSArray *)selectors;

@end
