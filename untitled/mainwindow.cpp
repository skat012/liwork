#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <LimeReport>
#include "C:/Users/maykl/lime/LimeReport-master/include/lrreportengine.h"
#include "C:/Users/maykl/lime/LimeReport-master/include/lrcallbackdatasourceintf.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    report = new LimeReport::ReportEngine(this);

    report->dataManager()->addModel("string_list",stringListModel,true);
    report->loadFromFile("File name");
    report->previewReport();
    report->printReport();
}

MainWindow::~MainWindow()
{


    delete ui;
}
