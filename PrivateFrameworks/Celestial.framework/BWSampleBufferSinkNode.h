/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSampleBufferSinkNode : BWSinkNode {
    id /* block */  _sampleBufferAvailableHandler;
}

@property (nonatomic, copy) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;

- (void)dealloc;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithInputMediaType:(unsigned long)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id /* block */)sampleBufferAvailableHandler;
- (void)setSampleBufferAvailableHandler:(id /* block */)arg1;

@end
