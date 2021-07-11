#include "main-window.h"
#include <memory>

static void
on_activate (Glib::RefPtr<Gtk::Application> app)
{
	static std::unique_ptr<Gtk::Window> window;
	if(!window) {
		window = std::make_unique<MainWindow>();
		window->property_application() = app;
		window->property_default_width() = 600;
		window->property_default_height() = 300;
		app->add_window(*window);
	}
	window->present();
}

int
main (int argc, char *argv[])
{
	int ret;
	Glib::RefPtr<Gtk::Application> app =
		Gtk::Application::create("org.gnome.finance", Gio::APPLICATION_FLAGS_NONE);
	app->signal_activate().connect(sigc::bind(&on_activate, app));
	ret = app->run(argc, argv);
	return ret;
}
