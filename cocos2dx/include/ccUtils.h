/*
 * ccCreateFunc.h
 *
 *  Created on: 29/06/2014
 *      Author: FrioneL
 */

#ifndef CCUTILS_H_
#define CCUTILS_H_

namespace cc {

	template<typename T, typename... Args>
    T* create(Args&& ...args) {
        auto pRet = new T();
        if (pRet && pRet->init(args...)) {
            pRet->autorelease();
            return pRet;
        }
        delete pRet;
        return nullptr;
    }
}


#endif /* CCUTILS_H_ */
