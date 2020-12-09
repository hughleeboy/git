#include <iostream>
#include <git2.h>

int main() {
    git_libgit2_init();
    std::cout << "Hello, World!" << std::endl;
    git_libgit2_shutdown();
    return 0;
}
