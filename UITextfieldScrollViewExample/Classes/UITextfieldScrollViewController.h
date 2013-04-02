//
//  UIViewControllerTexfieldScroll.h
//  PosteID
//
//  Created by Xcode on 29/03/13.
//
//

#import <UIKit/UIKit.h>

#define DEFAULT_DISTACE_FROM_KEYBOARD       20.0

@interface UITextfieldScrollViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic, retain) IBOutlet UIScrollView *scrollView;
@property (nonatomic, assign) CGFloat distanceFromKeyboard;
@property (nonatomic, assign) BOOL scrollToPreviousPosition;

@end
