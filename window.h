#ifndef WINDOW_H
#define WINDOW_H

#include <gtkmm-3.0/gtkmm.h>

class MyWindow : public Gtk::Window {
    public:
        MyWindow();
        virtual ~MyWindow();
        Gtk::Label *inputText = Gtk::manage(new Gtk::Label());
        Gtk::Label *outputText = Gtk::manage(new Gtk::Label());
        Gtk::Entry *input = Gtk::manage(new Gtk::Entry()); // only ints...

    protected:
        void on_text_changed(); // this will do all of the calculatios and change the output text
        Gtk::Box m_box;
};

#endif