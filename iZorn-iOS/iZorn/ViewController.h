//
//  ViewController.h
//  iZorn
//
//  Copyright (c) 2012 iZettle AB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PaintingView.h"
#import "UIView+ValidationError.h"

@interface ViewController : UIViewController <PaintingViewProtocol>

- (BOOL)handleURL:(NSURL *)url;

@end
