//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSCGContextWrapper : NSObject
{
    struct CGContext *_contextRef;
}

+ (id)wrapperWithContext:(struct CGContext *)arg1;
@property(readonly, nonatomic) struct CGContext *contextRef; // @synthesize contextRef=_contextRef;
- (void)dealloc;
- (id)initWithContextRef:(struct CGContext *)arg1;

@end

