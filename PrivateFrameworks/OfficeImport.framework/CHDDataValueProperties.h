/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDDataLabel, CHDMarker, OADGraphicProperties;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
    CHDDataLabel *mDataLabel;
    unsigned int mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
    CHDMarker *mMarker;
}

+ (id)dataValueProperties;

- (id)dataLabel;
- (unsigned int)dataValueIndex;
- (void)dealloc;
- (id)graphicProperties;
- (id)init;
- (unsigned int)key;
- (id)marker;
- (void)setDataLabel:(id)arg1;
- (void)setDataValueIndex:(unsigned int)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setMarker:(id)arg1;
- (id)shallowCopyWithIndex:(int)arg1;

@end