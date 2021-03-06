/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterFlow : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NEFilterAbsoluteVerdict * _currentVerdict;
    BOOL  _isOpen;
    BOOL  _isRemediationFlow;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) NSURL *URL;
@property (retain) NEFilterAbsoluteVerdict *currentVerdict;
@property BOOL isOpen;
@property BOOL isRemediationFlow;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)close;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentVerdict;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isOpen;
- (BOOL)isRemediationFlow;
- (id)queue;
- (void)setCurrentVerdict:(id)arg1;
- (void)setIsOpen:(BOOL)arg1;
- (void)setIsRemediationFlow:(BOOL)arg1;
- (void)setQueue:(id)arg1;

@end
