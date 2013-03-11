//
//  MuffinStoreController.h
//  cocos2dx-store
//
//  Created by OKAYA YOHEI on 13/03/08.
//
//

#ifndef __cocos2dx_store__MuffinStoreController__
#define __cocos2dx_store__MuffinStoreController__

#include <iostream>
#include "cocos2dx_StoreController.h"

/*
 TODO : implement base singleton class
 */
class MuffinStoreController : public cocos2dx_StoreController {
private:
    static MuffinStoreController* m_instance;
    MuffinStoreController(){}
    MuffinStoreController(const MuffinStoreController&);
    MuffinStoreController& operator=(const MuffinStoreController&);
public:
    static MuffinStoreController* getInstance(){
        if(m_instance == NULL){
            m_instance = new MuffinStoreController();
        }
        return m_instance;
    }
    void initialize(string customSecret) throw(cocos2dx_MustOverrideException&);
};

#endif /* defined(__cocos2dx_store__MuffinStoreController__) */
