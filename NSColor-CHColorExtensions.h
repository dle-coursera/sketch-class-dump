//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSColor.h"

@interface NSColor (CHColorExtensions)
+ (id)colorWithGray:(float)arg1 alpha:(float)arg2;
+ (id)colorWithGray:(float)arg1;
- (id)replacementObjectForJSONEncoder:(id)arg1;
- (id)coderSafeVersion_bc;
- (id)safeColorUsingColorSpaceName_bc:(id)arg1;
- (id)safeColorUsingColorSpace_bc:(id)arg1;
- (id)safeColorForColorSpaceConversion_bc;
- (BOOL)isWhite;
- (BOOL)fuzzyIsEqual:(id)arg1;
- (struct CGColor *)newCGColor;
@end

