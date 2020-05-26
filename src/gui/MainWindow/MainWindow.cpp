#include "gui/MainWindow/MainWindow.hpp"
#include "./ui_MainWindow.h"

#include <iostream>

using namespace hashgen::gui;

MainWindow::MainWindow(const std::shared_ptr<hashgen::domain::HashFactory>& hashFactory, QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow()),
    hashFactory(hashFactory)
{
    ui->setupUi(this);

    // Connect slots
    connect(ui->actionAbout, &QAction::triggered, this, &MainWindow::displayAboutDialog);
    connect(ui->actionAboutQt, &QAction::triggered, this, &MainWindow::displayAboutQtDialog);
    connect(ui->btnCalculateHash, &QPushButton::pressed, this, &MainWindow::btnCalculateHashClicked);

    // Insert hashes into combobox
    for (const auto& algorithm: hashFactory->getAvailableAlgorithms()) {
        ui->cbAlgorithm->addItem(algorithm.c_str());
    }
}

void MainWindow::displayAboutDialog()
{
    const auto& title = "Hash Generator";
    const auto& description = "Hash Generator is a small application to generate multiple hashes from any input string you give it. The code is designed to easily add new hashing algorithms so if you're missing anything feel free to open a pull-request or create an issue.";

    QMessageBox::about(this, title, description);
}

void MainWindow::displayAboutQtDialog()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::btnCalculateHashClicked()
{
    const auto& selectedAlgorithm = ui->cbAlgorithm->currentText().toStdString();
    const auto& inputData = ui->textInput->document()->toRawText().toStdString();
    const auto& hashObject = hashFactory->getHash(selectedAlgorithm);
    const auto& calculatedHash = hashObject->hash(inputData);

    ui->textHash->document()->setPlainText(calculatedHash.c_str());
}
