//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHSheetController.h"

#import "NSTextViewDelegate.h"

@class JSTTextView, NSButton, NSPopUpButton, NSString, NSTextField, NSTextView, NSUndoManager;

@interface MSRunCustomScriptSheet : CHSheetController <NSTextViewDelegate>
{
    JSTTextView *inputField;
    NSButton *saveButton;
    NSTextField *scriptNameField;
    NSButton *runButton;
    NSPopUpButton *actionButton;
    NSTextView *_logField;
    NSUndoManager *_undoManager;
}

@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) NSTextView *logField; // @synthesize logField=_logField;
- (void).cxx_destruct;
- (void)redoAction:(id)arg1;
- (void)undoAction:(id)arg1;
- (id)undoManagerForTextView:(id)arg1;
- (void)scriptingMenuAction:(id)arg1;
- (void)commentSelection:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)saveAction:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)runScript:(id)arg1;
- (id)commandToRunWithName:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

