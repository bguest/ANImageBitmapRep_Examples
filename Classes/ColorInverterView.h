//
//  ColorInverterView.h
//  ImageBitmapRep
//
//  Created by Alex Nichol on 2/15/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ANImageBitmapRep.h"

@interface ColorInverterView : UIView {
	ANImageBitmapRep * image;
}

- (IBAction)invert:(id)sender;
- (NSTimeInterval)preformanceTest; //Tests the preformance of bluring


@end
