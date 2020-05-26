#include <QApplication>
#include <memory>

#include "domain/HashFactory.hpp"
#include "gui/MainWindow/MainWindow.hpp"

int main(int argc, char** argv)
{
    const auto& factory = std::make_shared<hashgen::domain::HashFactory>();

    QApplication app(argc, argv);
    hashgen::gui::MainWindow window(factory);
    window.show();

    return QApplication::exec();
}
