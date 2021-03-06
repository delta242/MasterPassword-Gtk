//
// Created by lukas on 16.03.16.
//

#ifndef MPW_GTK_INCOGNITO_USER_H
#define MPW_GTK_INCOGNITO_USER_H

#include "user.h"

/**
 * This class represents an incognito user, that uses a temporary
 * account without the ability, to store sites or the master password.
 */
class IncognitoUser : public User {
public:
    IncognitoUser(std::string userName);

    virtual bool isIncognito();
    virtual bool unlockMasterKey(std::string &masterPassword);
    virtual const std::unordered_map<std::string, Service> *getServices() const;
    virtual void addService(Service &service);
    virtual void removeService(std::string serviceName);
};


#endif //MPW_GTK_INCOGNITO_USER_H
