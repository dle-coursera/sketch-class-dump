//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableExportFormat.h"

#import "MSExportFormat.h"

@class NSObject<NSCopying><NSCoding>, NSString;

@interface MSImmutableExportFormat : _MSImmutableExportFormat <MSExportFormat>
{
}

+ (id)defaultNameForScale:(double)arg1;
- (BOOL)isVectorExport;
- (id)defaultName;
- (void)migratePropertiesFromV72OrEarlierWithUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) double absoluteSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *fileFormat;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) long long namingScheme;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) double scale;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long visibleScaleType;

@end

