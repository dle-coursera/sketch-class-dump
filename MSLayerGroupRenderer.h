//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseLayerRenderer.h"

@interface MSLayerGroupRenderer : MSBaseLayerRenderer
{
}

- (void)endMaskWithContext:(id)arg1 oldAlpha:(double)arg2;
- (id)maskImageForShape:(id)arg1 context:(id)arg2 scale:(double)arg3;
- (void)beginAlphaMask:(id)arg1 context:(id)arg2;
- (double)beginMask:(id)arg1 context:(id)arg2;
- (void)renderSubLayer:(id)arg1 skipFills:(BOOL)arg2 ignoreDirtyRect:(BOOL)arg3 maskShapeGroup:(id)arg4 context:(id)arg5;
- (void)renderSubLayersOfGroup:(id)arg1 ignoreDirtyRect:(BOOL)arg2 context:(id)arg3;
- (void)doDrawLayer:(id)arg1 ignoreDirtyRect:(BOOL)arg2 context:(id)arg3;

@end

