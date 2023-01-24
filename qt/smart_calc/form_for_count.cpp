#include "form_for_count.h"
#include "ui_form_for_count.h"
#include <QLabel>
#include <QVBoxLayout>

form_for_count::form_for_count(QWidget *parent)
    : QWidget(parent), ui(new Ui::form_for_count) {

  ui->setupUi(this);
}

form_for_count::~form_for_count() { delete ui; }
