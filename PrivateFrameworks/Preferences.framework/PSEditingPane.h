/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier, UIView;



@interface PSEditingPane : UIView 
{
    PSSpecifier *_specifier;
    id _delegate;
    unsigned int _requiresKeyboard : 1;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _pinstripeRect;
    UIView *_pinstripeView;
}

@property CGRect pinstripeRect;

+ (float)preferredHeight;
+ (id)defaultBackgroundColor;

- (void)setPreferenceSpecifier:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRect;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setPinstripeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pinstripeRect;
- (id)specifierLabel;
- (BOOL)wantsNewButton;
- (void)addNewValue;
- (void)editMode;
- (void)doneEditing;
- (BOOL)changed;
- (BOOL)requiresKeyboard;
- (void)setPreferenceValue:(id)arg1;
- (id)preferenceSpecifier;
- (void)viewDidBecomeVisible;
- (id)preferenceValue;
- (BOOL)handlesDoneButton;

@end