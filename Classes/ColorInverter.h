//
//  ColorInverter.h
//  ImageBitmapRep
//
//  Created by Alex Nichol on 2/15/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ColorInverterView.h"

@interface ColorInverter : UIViewController {

   IBOutlet ColorInverterView* colorInverterView;
   IBOutlet UILabel* resultLabel;
}
- (IBAction)testPerformance:(id)sender;


@end
