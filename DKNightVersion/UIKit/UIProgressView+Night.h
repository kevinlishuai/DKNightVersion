//
//  UIProgressView+Night.h
//  UIProgressView+Night
//
//  Copyright (c) 2015 Draveness. All rights reserved.
//
//  These files are generated by ruby script, if you want to modify code
//  in this file, you are supposed to update the ruby code, run it and
//  test it. And finally open a pull request.

#import <UIKit/UIKit.h>
#import "NSObject+Night.h"

@interface UIProgressView (Night)

@property (nonatomic, copy, setter = dk_setProgressTintColorPicker:) DKColorPicker dk_progressTintColorPicker;
@property (nonatomic, copy, setter = dk_setTrackTintColorPicker:) DKColorPicker dk_trackTintColorPicker;

@end

@interface UIProgressView (Inspectable)

@property (nonatomic, strong) IBInspectable UIColor *normalProgressTintColor;
@property (nonatomic, strong) IBInspectable UIColor *normalTrackTintColor;

@property (nonatomic, strong) IBInspectable UIColor *nightProgressTintColor;
@property (nonatomic, strong) IBInspectable UIColor *nightTrackTintColor;

@end
