#include <QApplication>
#include <memory>

#include "domain/HashFactory.hpp"
#include "gui/MainWindow/MainWindow.hpp"

int main(int argc, char** argv)
{
    const auto& appName = "Hash Generator";
    const auto& factory = std::make_shared<hashgen::domain::HashFactory>();

    QApplication app(argc, argv);
    QApplication::setWindowIcon(QIcon(":/icons/main"));
    QApplication::setApplicationDisplayName(appName);
    QApplication::setApplicationName(appName);

    hashgen::gui::MainWindow window(factory);
    window.show();

    return QApplication::exec();
}
