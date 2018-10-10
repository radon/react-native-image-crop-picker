//
//  UIImage+UIImage_RSKImageCropper.h
//  imageCropPicker
//
//  Created by Giuseppe Silvestri on 25/09/18.
//  Copyright © 2018 Ivan Pusic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (UIImage_RSKImageCropper)
// Fix the orientation of the image.
- (UIImage *)fixOrientation;

// Rotate the image clockwise around the center by the angle, in radians.
- (UIImage *)rotateByAngle:(CGFloat)angleInRadians;

@end
