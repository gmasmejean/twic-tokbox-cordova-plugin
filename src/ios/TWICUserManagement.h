//
//  TWICUserManagement.h
//  TWICDemoApp
//
//  Created by Emmanuel Castellani on 20/04/2017.
//
//

#import <Foundation/Foundation.h>

static NSString *UserAmbassadorKey       = @"ambassador";
static NSString *UserAvatarKey           = @"avatar";
static NSString *UserBackgroundKey       = @"background";
static NSString *UserBirthDateKey        = @"birth_date";
static NSString *UserContactStateKey     = @"contact_state";
static NSString *UserContactsKey         = @"contacts_count";
static NSString *UserEmailKey            = @"email";
static NSString *UserFirstnameKey        = @"firstname";
static NSString *UserGenderKey           = @"gender";
static NSString *UserHasEmailNotifierKey = @"has_email_notifier";
static NSString *UserIdKey               = @"id";
static NSString *UserInterestKey         = @"interest";
static NSString *UserLastnameKey         = @"lastname";
static NSString *UserNationalityKey      = @"nationality";
static NSString *UserShortNameKey        = @"short_name";
static NSString *UserNicknameKey         = @"nickname";
static NSString *UserOrganizationIdKey   = @"organization_id";
static NSString *UserOriginKey           = @"origin";
static NSString *UserPositionKey         = @"position";
static NSString *UserRolesKey            = @"roles";

@interface TWICUserManagement : NSObject
+ (TWICUserManagement *)sharedInstance;

-(void)configureWithUserIds:(NSArray*)userIds
            completionBlock:(void(^)())completionBlock
               failureBlock:(void (^)(NSError *error))failureBlock;

-(NSArray *)allUsers;

-(NSString *)avatarURLStringForUser:(NSDictionary *)user;
@end