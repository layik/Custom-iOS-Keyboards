//
//  PMCustomKeyboard.h
//  PunjabiKeyboard
//
//  Created by Kulpreet Chilana on 7/31/12.
//  Copyright (c) 2012 Kulpreet Chilana. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

#define kFont [UIFont fontWithName:@"GurmukhiMN" size:20]
#define kAltLabel @"۱۲۳"
#define kReturnLabel @"گەڕانەوە"
#define kSpaceLabel @"بۆشایی "
#define kChar @[ @"ق", @"و", @"ە", @"ر", @"ت", @"ی", @"ئ", @"ح", @"ۆ", @"پ", @"ا", @"س", @"د", @"ف", @"گ", @"ھ", @"ژ", @"ک", @"ل", @"ز", @"خ", @"ج", @"ڤ", @"ب", @"ن", @"م" ]
#define kChar_shift @[ @"ئ", @"وو", @"ة", @"ڕ", @"ط", @"ێ", @"ء", @"ع", @"ؤ", @"ث", @"آ", @"ش", @"ذ", @"إ", @"غ", @"ە", @"أ", @"ك", @"ڵ", @"ض", @"ص", @"چ", @"ظ", @"ي", @"»", @"«" ]
#define kChar_alt @[ @"۱", @"۲", @"۳", @"٤", @"٥", @"٦", @"۷", @"۸", @"۹", @"٠", @"-", @"/", @":", @"؛", @"(", @")", @"£", @"&", @"@", @"\"", @".", @"،", @"؟", @"!",@"'", @"$", ]

@protocol PMCustomKeyboardDelegate;

@interface PMCustomKeyboard : UIView <UIInputViewAudioFeedback>

@property (strong, nonatomic) IBOutlet UIImageView *keyboardBackground;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *characterKeys;
@property (strong, nonatomic) IBOutlet UIButton *shiftButton;
@property (strong, nonatomic) IBOutlet UIButton *altButton;
@property (strong, nonatomic) IBOutlet UIButton *returnButton;
@property (strong, nonatomic) IBOutlet UIButton *deleteButton;
@property (strong) id<UITextInput> textView;
@property (strong, nonatomic) IBOutlet UIButton *spaceButton;
@property (strong) id<PMCustomKeyboardDelegate> delegate;

- (IBAction)returnPressed:(id)sender;
- (IBAction)characterPressed:(id)sender;
- (IBAction)shiftPressed:(id)sender;
- (IBAction)altPressed:(id)sender;
- (IBAction)deletePressed:(id)sender;
- (IBAction)unShift;
- (IBAction)spacePressed:(id)sender;

@end

@protocol PMCustomKeyboardDelegate <NSObject>

- (void)characterPressed:(NSString *)stringCharacter;

@end
