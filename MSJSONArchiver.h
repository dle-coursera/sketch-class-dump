//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseArchiver.h"

@class BCJSONEncoder;

@interface MSJSONArchiver : MSBaseArchiver
{
}

+ (void)archiveObject:(id)arg1 coder:(id)arg2;
+ (id)archiverFromCoder:(id)arg1;
+ (void)defineClassAliases;
+ (void)load;
- (id)replacementObjectForObject:(id)arg1;
- (void)encodeSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)encodeRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) BCJSONEncoder *encoder;

@end
