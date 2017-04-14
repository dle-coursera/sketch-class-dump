//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDragRectEventHandler.h"

@class MSShapePathLayer, NSArray, NSMutableArray;

@interface MSInsertShapeEventHandler : MSDragRectEventHandler
{
    NSMutableArray *_insertedShapes;
    MSShapePathLayer *_prototypeLayer;
    NSArray *_snapLines;
    NSArray *_snapRects;
    struct CGRect _initialPrototypeRect;
}

@property(retain, nonatomic) NSArray *snapRects; // @synthesize snapRects=_snapRects;
@property(nonatomic) struct CGRect initialPrototypeRect; // @synthesize initialPrototypeRect=_initialPrototypeRect;
@property(retain, nonatomic) NSArray *snapLines; // @synthesize snapLines=_snapLines;
@property(retain, nonatomic) MSShapePathLayer *prototypeLayer; // @synthesize prototypeLayer=_prototypeLayer;
- (void).cxx_destruct;
- (BOOL)allowsSwitchToInsertAction;
- (void)drawRectPreview;
- (void)drawInRect:(struct CGRect)arg1 cache:(id)arg2;
- (void)resizeLayer:(id)arg1 toRect:(struct CGRect)arg2;
- (id)insertShapeAsNewLayer:(struct CGRect)arg1;
- (id)insertShapeAsSubPathOfShape:(id)arg1 inRect:(struct CGRect)arg2;
- (id)performActionWithRect:(struct CGRect)arg1 constrainProportions:(BOOL)arg2;
- (id)imageName;
- (void)addSnapRectsForImmutableGroup:(id)arg1 withAncestors:(id)arg2 toArray:(id)arg3;
- (void)cacheSnapPointsInBackground;
- (struct CGPoint)snapMouseToEdges:(struct CGPoint)arg1 guides:(id *)arg2;
- (struct CGPoint)snapMouseAndShowSnapLines:(struct CGPoint)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)setInsertionRect:(struct CGRect)arg1;
- (id)applicableActionItemIdentifier;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;

@end

