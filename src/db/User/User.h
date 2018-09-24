#ifndef C_USER_H
#define C_USER_H

struct UserModel {
    int userID;
    int age;
    int deleted;
    char *name[50];
    char *surname[50];
};

struct UserModel CreateUser(int age, char *name, char *surname);

char *URLEncodeUser(struct UserModel user);

struct UserModel URLDecodeUser(char *userString);

#endif //C_USER_H