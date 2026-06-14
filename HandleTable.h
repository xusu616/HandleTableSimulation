#ifndef HANDLETABLE_H
#define HANDLETABLE_H

typedef struct windows_structs {
    int left, right;
    char* windows_name;
    struct windows_structs* parent;
} WND, *PWND;

#endif // HANDLETABLE_H

#define MAX_WINDOWS 1024
WND* handle_table[MAX_WINDOWS];

typedef unsigned int HWND;

