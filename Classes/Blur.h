//
//  Blur.h
//  ImageBitmapRep
//
//  Created by Alex Nichol on 2/15/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BlurView.h"

@interface Blur : UIViewController {
	IBOutlet BlurView * blurView;
   IBOutlet UILabel* resultLabel;
}

- (IBAction)progressChange:(id)sender;
- (IBAction)testPerformance:(id)sender;

@end
