#ifndef FORM_FOR_COUNT_H
#define FORM_FOR_COUNT_H

#include <QWidget>

namespace Ui {
class form_for_count;
}

class form_for_count : public QWidget {
  Q_OBJECT

public:
  explicit form_for_count(QWidget *parent = nullptr);
  ~form_for_count();

private slots:

private:
  Ui::form_for_count *ui;
};

#endif // FORM_FOR_COUNT_H
