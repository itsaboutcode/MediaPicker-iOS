#import <UIKit/UIKit.h>
#import "WPMediaPickerViewController.h"


/**
 A class to be used as an input view for an UITextView or UITextField.
 
 The mediaToolbar property provides a toolbar that can be used as the inputAccessoryView for this inputView.
 */
@interface WPInputMediaPickerViewController : UIViewController

/**
The delegate for the WPMediaPickerViewController events
*/
@property (nonatomic, weak) _Nullable id<WPMediaPickerViewControllerDelegate> mediaPickerDelegate;

/**
 The object that acts as the data source of the media picker.

 @Discussion
 If no object is defined before the picker is show then the picker will use a shared data source that access the user media library.
 */
@property (nonatomic, weak) _Nullable id<WPMediaCollectionDataSource> dataSource;

/**
 The internal WPMediaPickerViewController that is used to display the media.
 */
@property (nonatomic, readonly)  WPMediaPickerViewController * _Nonnull mediaPicker;

/**
 A toolbar that can be used as the inputAccessoryView for this inputView.
 */
@property (nonatomic, readonly) UIToolbar * _Nonnull mediaToolbar;

@end
