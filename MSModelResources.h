//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHSingletonObject.h"

@class NSArray, NSBitmapImageRep, NSBundle;

@interface MSModelResources : CHSingletonObject
{
    NSBundle *_bundle;
    NSArray *_noiseImages;
    NSBitmapImageRep *_errorPattern;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSBitmapImageRep *errorPattern; // @synthesize errorPattern=_errorPattern;
@property(copy, nonatomic) NSArray *noiseImages; // @synthesize noiseImages=_noiseImages;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)resourcesNeedingMigration;
- (id)loadNoiseImageWithIndex:(long long)arg1;
- (id)loadImageWithName:(id)arg1;
- (void)preloadResources;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForImageResource:(id)arg1;

@end

