#pragma once

#include <QPushButton>
#include <QMainWindow>
#include <QMessageBox>

#include "domain/HashFactory.hpp"
#include "domain/IHash.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

namespace hashgen::gui
{
    class MainWindow: public QMainWindow
    {
        Q_OBJECT

    public:
        explicit MainWindow(const std::shared_ptr<domain::HashFactory>& hashFactory, QWidget* parent = nullptr);
        ~MainWindow() override = default;

    private:
        void displayAboutDialog();
        void displayAboutQtDialog();

        Ui::MainWindow* ui;
        std::shared_ptr<domain::HashFactory> hashFactory;

    private slots:
        void btnCalculateHashClicked();
    };
}
