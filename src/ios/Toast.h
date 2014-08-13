#import <Cordova/CDV.h>

@interface Toast : CDVPlugin

- (void)show:(CDVInvokedUrlCommand*)command;
- (void)setTopBottomOffset:(CDVInvokedUrlCommand*)command;

@end