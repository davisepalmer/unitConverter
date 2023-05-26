#ifndef WIN_HPP
#define WIN_HPP

#include <iostream>
#include <gtkmm-3.0/gtkmm.h>
// #include <gtkmm.h>

class Win : public Gtk::Window {
    public:
        Win();
    private:
        Gtk::Button m_button;
        void hello_world();
};

Win::Win() : m_button("Click me") {
    set_default_size(200, 200);
    set_title("test window");

    add(m_button);
    m_button.signal_clicked().connect(sigc::mem_fun(*this, &Win::hello_world));
    show_all();
}

void Win::hello_world() {
    std::cout << "test" << std::endl;
}

#endif