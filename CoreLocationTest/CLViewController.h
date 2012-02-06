//
//  CLViewController.h
//  CoreLocationTest
//
//  Created by William Lyon on 2/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIKit.h>

#import "CoreLocationController.h"

@interface CLViewController : UIViewController <CoreLocationControllerDelegate> {
	CoreLocationController *CLController;
	IBOutlet UILabel *locLabel;
}

@property (nonatomic, retain) CoreLocationController *CLController;

@end

