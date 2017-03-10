#import "TWICCordovaPlugin.h"
#import <Cordova/CDV.h>
#import "SVProgressHUD.h"
#import <FirebaseStorage/FirebaseStorage.h>
#import "StreamViewController.h"

@interface TWICCordovaPlugin()

@end

@implementation TWICCordovaPlugin

- (void)show:(CDVInvokedUrlCommand*)command
{
    CDVPluginResult* pluginResult = nil;
    NSString* msg = [command.arguments objectAtIndex:0];

    if (msg == nil || [msg length] == 0) {
        pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_ERROR];
    }
    else
    {
       [SVProgressHUD showSuccessWithStatus:msg];
        pluginResult = [CDVPluginResult resultWithStatus:CDVCommandStatus_OK
                                         messageAsString:msg];
    }
    [self.commandDelegate sendPluginResult:pluginResult
                                callbackId:command.callbackId];
    
    //testing otsession    
    StreamViewController *streamViewController = [[StreamViewController alloc]initWithNibName:[StreamViewController description] bundle:nil];
    [self.viewController presentViewController:streamViewController animated:YES completion:nil];
}

- (void)configure:(CDVInvokedUrlCommand*)command
{
    [self.commandDelegate sendPluginResult:[CDVPluginResult resultWithStatus:CDVCommandStatus_OK]
                                callbackId:command.callbackId];
}
@end