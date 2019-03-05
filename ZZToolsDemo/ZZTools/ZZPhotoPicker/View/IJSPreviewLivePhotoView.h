//
//  IJSPreviewLivePhotoView.h
//  JSPhotoSDK
//
//  Created by shan on 2017/6/15.
//  Copyright © 2017年 shan. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZZPhotoPickerAssetModel;

@interface IJSPreviewLivePhotoView : UIView

/**数据模型*/
@property (nonatomic ,   weak) ZZPhotoPickerAssetModel *assetModel;

/**
 *  播放
*/
- (void)playLivePhotos;
- (void)stopLivePhotos;

@end