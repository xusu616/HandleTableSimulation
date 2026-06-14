#include "HandleTable.h"
#include <cstring>

HWND CreateWindow(const char* name, int left, int right, HWND parent) {
    static unsigned int next_handle = 1; // Start handles from 1
    if (next_handle >= MAX_WINDOWS) {
        return 0; // No more handles available
    }

    WND* new_window = new WND;
    new_window->left = left;
    new_window->right = right;
    new_window->windows_name = strdup(name);
    new_window->parent = (parent > 0) ? handle_table[parent] : nullptr;

    handle_table[next_handle] = new_window;
    return next_handle++;
}