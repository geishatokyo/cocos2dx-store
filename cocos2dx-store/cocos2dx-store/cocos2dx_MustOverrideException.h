//
//  cocos2dx_MustOverrideException.h
//  cocos2dx-store
//
//  Created by OKAYA YOHEI on 13/03/08.
//
//

#ifndef cocos2dx_store_cocos2dx_MustOverrideException_h
#define cocos2dx_store_cocos2dx_MustOverrideException_h

#include <iostream>
#include <exception>

using namespace std;

class cocos2dx_MustOverrideException : public exception {
    
public:
    virtual const char* what() const throw() {
        return "Must override this function";
    }
};

#endif
