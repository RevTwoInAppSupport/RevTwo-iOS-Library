/*
 Revtwo.h
 Revtwo iOS API version 1.0
 
 Copyright (c) 2015 Revtwo.com.
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class R2Ticket;

enum {
    R2MODE_DEVELOPMENT,
    R2MODE_TESTFLIGHT,
    R2MODE_PRODUCTION
};
/*
 * productKey and secretKey come from your Revtwo model
 * mode is one of the enum values above
 */
void R2Initialize(NSString *productKey, NSString *secretKey, int mode);

// Onjective-C NSLog substitutes
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
// Swift print substitute
void R2Print(NSString *message, NSInteger level);

/*
 * Ticket functions
 */
bool R2IsTicketOpen();
void R2OpenTicket(NSString *text, NSString *name, NSString *email, NSString *phone, NSArray *tags);
void R2CloseTicket(R2Ticket *ticket);

void R2DeclineCall();
void R2AcceptCall();
void R2EndCall();

BOOL R2isUsingSpeaker();
void R2SetSpeaker(BOOL useSpeaker);
BOOL R2isMute();
void R2Mute(BOOL isMute);

/*
 * If push notifications are enabled in the app, call this to report the credentials to Revtwo so it can send notifications
 */
void R2UpdatePushCredentials(NSData *token);
/*
 * Let Revtwo handle notifications
 */
BOOL R2ReceivedNotification(NSDictionary *dictionary);

NSString * R2getUUID();

NSString * R2get_signedInUserName();
NSString * R2get_signedInUserEmail();
NSString * R2get_signedInUserPhone();

//**************************************************************
@interface Revtwo : NSObject

- (void)R2customize_incomingCall_text:(NSString *)text;
- (void)R2customize_incomingCall_textColor:(UIColor *)color;
- (void)R2customize_resolvedPopupTitle_text:(NSString *)text;
- (void)R2customize_resolvedPopupMessage_text:(NSString *)text;
- (void)R2set_signedInUser:(NSString *)name email:(NSString *)email phone:(NSString *)phone;

@end

//**************************************************************
@interface R2Ticket : NSObject
enum {
    OPEN = 2,
    CLOSED = 3
};
@property NSNumber *_id;
@property NSNumber *serverid;
@property NSString *text;
@property NSNumber *status;
//@property NSString *created;
@property NSNumber *created_ts;       // unix time of this ticket
@property NSNumber *lastchat;   // unix time of last chat message


+(R2Ticket *)findById:(NSNumber *)id;
+(R2Ticket *)findByServerId:(NSNumber *)id;
+(NSArray *)findOpen;
+(NSArray *)find:(int)limit after:(int)after;

-(instancetype)initWithDescription:(NSString *)text;
-(int)save;
-(bool)isOpen;
- (NSString *)description;

+ (void)setup;
+ (void)clean;
+ (NSArray *)fromJSON:(NSArray *)json;

@end

//**************************************************************
// Track last view and following status on a ticket
@interface R2TicketView : NSObject

@property NSNumber *ticket_id;
@property NSNumber *date;
@property BOOL following;

+(R2TicketView *)findById:(int)id;
+(NSArray *)find:(int)limit;

-(instancetype)initWithId:(NSNumber *)ticket_id date:(NSNumber *)date;
-(int)save;
- (NSString *)description;

+ (void)setup;
+ (void)delete:(NSNumber *)ticket_id;
+ (void)clean;

@end


@protocol R2ViewControllerDelegate <NSObject>

- (void)didDismissR2ViewController;

@end

NSString* R2FormatTimestamp(double timestamp);
