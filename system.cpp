#include <iostream>
// #include "converter.h"
#include "win.hpp"

int main(int argc, char *arv[]) {
    // Value v1(1.0, "m");
    auto app = Gtk::Application::create(argc, arv, "test");
    Win windows;

    return app->run(windows);
}