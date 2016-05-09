/*
 Revtwo.h
 Revtwo iOS API version 0.4
 
 Copyright (c) 2015 Revtwo.com.
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

extern int const R2MODE_DEVELOPMENT;
extern int const R2MODE_TESTFLIGHT;
extern int const R2MODE_PRODUCTION;

void R2Initialize(NSString *productKey, NSString *secretKey, int mode);

// NSLog substitutes
enum {
    LOGENTRY_TRACE = 1,
    LOGENTRY_DEBUG = 2,
    LOGENTRY_WARNING = 3,
    LOGENTRY_ERROR
};
void R2Log(NSString *format, ...);
void R2Error(NSString *format, ...);
void R2Warn(NSString *format, ...);
void R2Debug(NSString *format, ...);
void R2Trace(NSString *format, ...);
// Swift print
void R2Print(NSString *message, NSInteger level);

bool R2IsTicketOpen();
void R2OpenTicket(NSString *text, NSString *name, NSString *email, NSString *phone, BOOL communityMode);
void R2CloseTicket();
void R2DeclineCall();
void R2AcceptCall();
void R2EndCall();

BOOL R2isUsingSpeaker();
void R2SetSpeaker(BOOL useSpeaker);
BOOL R2isMute();
void R2Mute(BOOL isMute);

void R2UpdatePushCredentials(NSData *token);
void R2ReceivedNotification();

NSString * R2get_signedInUserName();
NSString * R2get_signedInUserEmail();
NSString * R2get_signedInUserPhone();
/*
void customize_incomingCall_text(NSString *text);
void customize_incomingCall_textColor(UIColor *)color;
void customize_incomingCall_backgroundColor(UIColor *)color;
void customize_incomingCall_image(UIImage *)image;
*/

@interface Revtwo : NSObject

 - (void)R2customize_incomingCall_text:(NSString *)text;
 - (void)R2customize_incomingCall_textColor:(UIColor *)color;
- (void)R2customize_incomingCall_backgroundColor:(UIColor *)color gradientOn:(BOOL)gradient;
 - (void)R2customize_incomingCall_image:(UIImage *)image;
- (void)R2set_signedInUser:(NSString *)name email:(NSString *)email phone:(NSString *)phone;

@end