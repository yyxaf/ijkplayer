//
//  IJKMediaFrameworkWithSSL.h
//  IJKMediaFrameworkWithSSL
//
//  Created by zhangxinzheng on 27/02/2017.
//  Copyright © 2017 bilibili. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for IJKMediaFrameworkWithSSL.
FOUNDATION_EXPORT double IJKMediaFrameworkWithSSLVersionNumber;

//! Project version string for IJKMediaFrameworkWithSSL.
FOUNDATION_EXPORT const unsigned char IJKMediaFrameworkWithSSLVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <IJKMediaFrameworkWithSSL/PublicHeader.h>

#import <IJKMediaFrameworkWithSSL/IJKMediaPlayback.h>
#import <IJKMediaFrameworkWithSSL/IJKMPMoviePlayerController.h>
#import <IJKMediaFrameworkWithSSL/IJKFFOptions.h>
#import <IJKMediaFrameworkWithSSL/IJKFFMoviePlayerController.h>
#import <IJKMediaFrameworkWithSSL/IJKAVMoviePlayerController.h>
#import <IJKMediaFrameworkWithSSL/IJKMediaModule.h>
#import <IJKMediaFrameworkWithSSL/IJKMediaPlayer.h>
#import <IJKMediaFrameworkWithSSL/IJKNotificationManager.h>
#import <IJKMediaFrameworkWithSSL/IJKKVOController.h>

// backward compatible for old names
#define IJKMediaPlaybackIsPreparedToPlayDidChangeNotification IJKMPMediaPlaybackIsPreparedToPlayDidChangeNotification
#define IJKMoviePlayerLoadStateDidChangeNotification IJKMPMoviePlayerLoadStateDidChangeNotification
#define IJKMoviePlayerPlaybackDidFinishNotification IJKMPMoviePlayerPlaybackDidFinishNotification
#define IJKMoviePlayerPlaybackDidFinishReasonUserInfoKey IJKMPMoviePlayerPlaybackDidFinishReasonUserInfoKey
#define IJKMoviePlayerPlaybackStateDidChangeNotification IJKMPMoviePlayerPlaybackStateDidChangeNotification
#define IJKMoviePlayerIsAirPlayVideoActiveDidChangeNotification IJKMPMoviePlayerIsAirPlayVideoActiveDidChangeNotification
#define IJKMoviePlayerVideoDecoderOpenNotification IJKMPMoviePlayerVideoDecoderOpenNotification
#define IJKMoviePlayerFirstVideoFrameRenderedNotification IJKMPMoviePlayerFirstVideoFrameRenderedNotification
#define IJKMoviePlayerFirstAudioFrameRenderedNotification IJKMPMoviePlayerFirstAudioFrameRenderedNotification
