#include "window.h"
#include <iostream>
// #include <gtkmm-3.0/gtkmm.h>

MyWindow::MyWindow() {
    set_default_size(200, 200);
    set_title("test window");
    set_icon_from_file("measuring-tape.png");
    // icon attribute => <a href="https://www.flaticon.com/free-icons/measuring-tape" title="measuring tape icons">Measuring tape icons created by Freepik - Flaticon</a>

    add(m_box);
    m_box.pack_start(*inputText);
    m_box.pack_start(*input);
    m_box.pack_start(*outputText);
    input->signal_changed().connect(sigc::mem_fun(*this, &MyWindow::on_text_changed));
    show_all();

    inputText->set_text("Input");
    outputText->set_text("Output");
    
    // creating and setting input box
    input->set_text("0");
    set_focus_child(*input);
    input->select_region(0, input->get_text_length());
    input->signal_changed().connect(sigc::mem_fun(*this, &MyWindow::on_text_changed));
    m_box.pack_start(*input);
}

MyWindow::~MyWindow() {
    std::cout << "destructor called" << std::endl;
}

void MyWindow::on_text_changed() {
    std::cout << "test from line 34" << std::endl; 
    std::string inputText = input->get_text();
    std::cout << inputText << std::endl;
    outputText->set_text(inputText);
}
