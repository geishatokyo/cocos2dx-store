//
//  MuffinStoreController.cpp
//  cocos2dx-store
//
//  Created by OKAYA YOHEI on 13/03/08.
//
//

#include "MuffinStoreController.h"
#import "StoreController.h"
#import "MuffinRushAssets.h"

MuffinStoreController* MuffinStoreController::m_instance = NULL;

void MuffinStoreController::initialize(string customSecret)
    throw(cocos2dx_MustOverrideException&) {

    NSString * str = [[NSString alloc] initWithBytes:customSecret.c_str() length:strlen(customSecret.c_str()) encoding:NSUTF8StringEncoding];
    [[StoreController getInstance] initializeWithStoreAssets:[[MuffinRushAssets alloc] init] andCustomSecret:str];    
}