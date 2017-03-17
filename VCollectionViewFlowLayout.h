//
//  EqualSpaceFlowLayout.h
//  Victor
//
//  Created by Victor on 2017/2/13.
//  Copyright © 2017年 Victor. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol  VCollectionViewFlowLayout.mDelegate<UICollectionViewDelegateFlowLayout>
@end
@interface VCollectionViewFlowLayout.m : UICollectionViewFlowLayout
@property (nonatomic,weak) id<VCollectionViewFlowLayoutDelegate> delegate;
@end
