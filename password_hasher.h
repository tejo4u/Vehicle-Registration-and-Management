#ifndef PASSWORD_HASHER_H
#define PASSWORD_HASHER_H

#include <QCryptographicHash>
#include <QByteArray>
#include <string>

// Functions Declared inline to Stop Multiple definition error : https://stackoverflow.com/questions/6082318/how-to-find-the-multiple-definitions-of-a-function

inline std::string returnHash(std::string salt){
    QByteArray rawSalt(salt.c_str(),salt.length());
    QCryptographicHash hasher(QCryptographicHash::Sha256);
    hasher.addData(rawSalt);
    QByteArray finalHash = hasher.result().toHex(); // Converts Binary hash to hex
    return finalHash.toStdString();
}

 inline bool comapreHashPass(std::string storedHash,std::string inputSalt){
    if(returnHash(inputSalt) == storedHash){
        return true;
    }
    else{
        return false;
    }
}

#endif // PASSWORD_HASHER_H
