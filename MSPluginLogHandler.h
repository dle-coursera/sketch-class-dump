//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECLogHandler.h"

@class MSPluginCommand;

@interface MSPluginLogHandler : ECLogHandler
{
    MSPluginCommand *_command;
}

@property(nonatomic) __weak MSPluginCommand *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (void)logFromChannel:(id)arg1 withObject:(id)arg2 arguments:(struct __va_list_tag [1])arg3 context:(CDStruct_5b5d1a5d *)arg4;
- (id)initWithCommand:(id)arg1;

@end

