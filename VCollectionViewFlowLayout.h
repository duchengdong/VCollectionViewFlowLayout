//
//  EqualSpaceFlowLayout.h
//  Victor
//
//  Created by Victor on 2017/2/13.
//  Copyright © 2017年 Victor. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol  VCollectionViewFlowLayoutDelegate<UICollectionViewDelegateFlowLayout>
@end
@interface VCollectionViewFlowLayout: UICollectionViewFlowLayout
@property (nonatomic,weak) id<VCollectionViewFlowLayoutDelegate> delegate;
@end
