#include <gtkmm/application.h>
#include <user_manager.h>
#include "mpw_login_window.h"
#include "mpw_password_window.h"

int main(int argc, char *argv[]) {
    user_manager *userManager = new user_manager;
    userManager->readFromConfig();

    // Init gtk
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv);

    // Init the login window
    mpw_login_window *loginWindow = new mpw_login_window{userManager};

    // Launch the application
    return app->run(*loginWindow->getWindow());
}