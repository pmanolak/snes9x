#pragma once
#include "ui_FoldersPanel.h"
#include "EmuApplication.hpp"

class FoldersPanel :
    public Ui::FoldersPanel,
    public QWidget
{
  public:
    explicit FoldersPanel(EmuApplication *app);
    void showEvent(QShowEvent *event) override;
    void connectEntry(QComboBox *combo, QLineEdit *lineEdit, QPushButton *browse, int *location, std::string *folder);
    void refreshEntry(QComboBox *combo, QLineEdit *lineEdit, QPushButton *browse, int *location, std::string *folder);
    void refreshData();
    EmuApplication *app;
};