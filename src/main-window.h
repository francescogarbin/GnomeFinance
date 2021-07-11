#pragma once

#include <gtkmm/builder.h>
#include <gtkmm/headerbar.h>
#include <gtkmm/label.h>
#include <gtkmm/window.h>

class MainWindow : public Gtk::Window
{
public:
	MainWindow();

private:
	Gtk::HeaderBar *headerbar;
	Gtk::Label *label;
	Glib::RefPtr<Gtk::Builder> builder;
};
