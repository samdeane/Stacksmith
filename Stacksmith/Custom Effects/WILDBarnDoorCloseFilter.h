//
//  WILDBarnDoorCloseFilter.h
//  Stacksmith
//
//  Created by Uli Kusterer on 12.05.11.
//  Copyright 2011 Uli Kusterer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>


@interface WILDBarnDoorCloseFilter : CIFilter
{
    CIImage   *inputImage;
    CIImage   *inputTargetImage;
    NSNumber  *inputTime;
}

@property (retain) CIImage*		inputImage;
@property (retain) CIImage*		inputTargetImage;
@property (retain) NSNumber*	inputTime;

@end