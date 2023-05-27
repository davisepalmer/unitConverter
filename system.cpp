#include <iostream>
// #include "converter.h"
// #include "win.hpp"
#include "window.h"

// static GtkWidget *value; // value that user can enter

int main(int argc, char *arv[]) {
    // Value v1(1.0, "m");
    auto app = Gtk::Application::create(argc, arv, "test");

    
    MyWindow windows;

    return app->run(windows);
}