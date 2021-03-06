/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIOnboardingInterface : IKJSObject <WLKUIOnboardingInterface> {
    WLKUIOnboardingController * _controller;
    BOOL  _hasSynced;
    NSNumber * _lastReportedOptedInValue;
    BOOL  _suppressUpdates;
}

@property (nonatomic, readonly) NSArray *eligibleBids;
@property (getter=isOptedIn, nonatomic, readonly) BOOL optedIn;
@property (getter=isTvosMigrated, nonatomic, readonly) BOOL tvosMigrated;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dismiss;
- (id)eligibleBids;
- (id)initWithAppContext:(id)arg1;
- (BOOL)isOptedIn;
- (BOOL)isTvosMigrated;
- (void)migrateTvos:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)show:(id)arg1;

@end
