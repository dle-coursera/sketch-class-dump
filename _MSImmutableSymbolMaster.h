//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableArtboardGroup.h"

@class NSString;

@interface _MSImmutableSymbolMaster : MSImmutableArtboardGroup
{
    BOOL _includeBackgroundColorInInstance;
    NSString *_symbolID;
}

+ (Class)mutableClass;
@property(retain, nonatomic) NSString *symbolID; // @synthesize symbolID=_symbolID;
@property(nonatomic) BOOL includeBackgroundColorInInstance; // @synthesize includeBackgroundColorInInstance=_includeBackgroundColorInInstance;
- (void).cxx_destruct;
- (id)keysDifferingFromObject:(id)arg1;
- (BOOL)isEqualForDiffToObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

