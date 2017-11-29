/*
 Revtwo.h
 Revtwo iOS API version 2.2
 
 Copyright (c) 2015 Revtwo.com.
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class R2Ticket;

enum R2MODE {
    R2MODE_DEVELOPMENT,
    R2MODE_TESTFLIGHT,
    R2MODE_PRODUCTION
};

//**************************************************************
@interface Revtwo : NSObject
+(void)start:(NSString *)productKey secretKey:(NSString *)secretKey mode:(int)mode enableCalls:(bool)enableCalls;
+(bool)callingEnabled;
+(void)Print:(NSString *)message level:(int)level;
+(bool)isTicketOpen;
+(void)openTicket:(NSString *)text tags:(NSArray *)tags data:(NSDictionary *)data completionHandler:(void(^)(R2Ticket *ticket, NSString *chatToken))completionHandler;
+(void)openTicketLocation:(NSString *)text tags:(NSArray *)tags lat:(double)lat lng:(double)lng data:(NSDictionary *)data completionHandler:(void(^)(R2Ticket *ticket, NSString *chatToken))completionHandler;
// +(void)closeTicket:(R2Ticket *)ticket;
+(void)updatePushToken:(NSData *)token;
+(BOOL)handleNotification:(NSDictionary *)dictionary;
+(NSString *)avatarBase;

// enable testing
+ (void)setDomain:(NSString *)domain;
+ (void)setLogLevel:(int)level;
@end

/*
 * productKey and secretKey come from your Revtwo model
 * mode is one of the enum values above
 */
void R2Initialize(NSString *productKey, NSString *secretKey, int mode, bool enableCalls);

// Onjective-C NSLog substitutes
enum LOGENTRY {
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
 * If push notifications are enabled in the app, call this to report the credentials to Revtwo so it can send notifications
 */
void R2UpdatePushCredentials(NSData *token);
/*
 * Let Revtwo handle notifications
 */
BOOL R2ReceivedNotification(NSDictionary *dictionary);

NSString * R2getUUID();

//**************************************************************
@interface R2Customize : NSObject

+ (void)setIncomingCallText:(NSString *)text;
+ (void)setIncomingCallTextColor:(UIColor *)color;
+ (void)setResolvedPopupTitleText:(NSString *)text;
+ (void)setResolvedPopupMessageText:(NSString *)text;
+ (void)setUser:(NSString *)name email:(NSString *)email;
+ (NSString *)getUserName;
+ (NSString *)getUserEmail;
+ (void)setLanguage:(NSString *)language;   // ISO 639-1 compliant 2 letter code to override the phone default
+ (void)enableCalls:(BOOL)calls voice:(BOOL)voice screen:(BOOL)screen;
+ (void)enableCallTicketPrompt:(BOOL)prompt;
+ (void)enableRating:(BOOL)enabled;
@end

//**************************************************************
@interface R2Ticket : NSObject
enum {
    TICKET_OPEN = 2,
    TICKET_CLOSED = 3
};
@property NSNumber *_id;        // a local id only
@property NSNumber *serverid;   // the official id of a ticket
@property NSString *text;       // the question
@property NSString *username;   // the user who asked [optional]
@property NSString *email;      // the user's email [optional]
@property NSNumber *status;     // OPEN or CLOSED
@property NSNumber *created_ts; // unix time of this ticket
@property NSNumber *duration_ts;  // seconds this ticket was open [optional]
@property NSNumber *lastchat;   // unix time of last chat message
@property NSString *tags;       // string of comma delimited tags [optional]
@property NSNumber *lat;        // location of the ticket [optional]
@property NSNumber *lng;        // location of the ticket [optional]
@property NSNumber *myticket;   // flag if this is my ticket (1=mine)
@property NSDictionary *data;   // metadata collected with this ticket, depends on your app [optional]
@property NSString *uid;        // the ticket creator (app uuid) just like in chats
// If ticket is assigned to a helpdesk user
@property NSString *assignedFirstName;
@property NSString *assignedLastName;
@property NSString *assignedAvatar;
@property NSNumber *rating;


+(R2Ticket *)findById:(NSNumber *)id;
+(R2Ticket *)findByServerId:(NSNumber *)id;
+(NSArray *)findOpen;
+(NSArray *)find:(int)limit after:(int)after;

+(void)getTicket:(NSNumber *)ticketid completionHandler:(void(^)(R2Ticket *ticket, NSString *chatToken))completionHandler;
+(BOOL)getMyTickets:(bool)includeClosed following:(bool)following completionHandler:(void(^)(NSArray *tickets, NSString *chatToken))completionHandler;
+(BOOL)getUserTickets:(NSString *)email includeClosed:(bool)includeClosed completionHandler:(void(^)(NSArray *tickets, NSString *chatToken))completionHandler;
+(void)getUnreadUserTickets:(NSString *)email completionHandler:(void(^)(NSNumber *unread))completionHandler;
+(BOOL)getCommunityTickets:(NSArray *)tags lat:(NSNumber *)lat lng:(NSNumber *)lng range:(NSNumber *)range completionHandler:(void(^)(NSArray *tickets, NSString *chatToken))completionHandler;
+(void)sendChat:(int)ticketid message:(NSString *)text;
+(void)sendPicture:(int)ticketid picture:(UIImage *)image;
+(void)sendFile:(int)ticketid data:(NSData *)data name:(NSString *)name;


-(BOOL)flagContent:(NSString *)chatId completionHandler:(void(^)(NSString *error))completionHandler;

-(instancetype)initWithDescription:(NSString *)text;
-(instancetype)initFromJSON:(NSDictionary *)data;
-(int)save;
-(void)close;
-(bool)isOpen;
-(bool)isFollowing;
-(bool)hasUnread;
-(void)setViewed;
-(int)getLastView;
-(NSString *)description;

+ (void)setup;
+ (void)clean;
+ (NSArray *)fromJSON:(NSArray *)json;

@end

@protocol R2ViewControllerDelegate <NSObject>

- (void)didDismissR2ViewController;

@end

NSString* R2FormatTimestamp(double timestamp);
