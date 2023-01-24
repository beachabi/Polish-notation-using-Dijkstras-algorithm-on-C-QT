#ifndef SMART_CALC_H
#define SMART_CALC_H

#include <QDoubleValidator>
#include <QIntValidator>
#include <QMainWindow>
#include <QMessageBox>
#include <cmath>

#include <form_for_count.h>

extern "C" {
#include "../../s21_smart_calc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class smart_calc;
}
QT_END_NAMESPACE

class smart_calc : public QMainWindow {
  Q_OBJECT

public:
  smart_calc(QWidget *parent = nullptr);
  ~smart_calc();

private slots:

  void digits_numbers();
  void print_point();
  void easy_math();
  void equal_count();
  void trigonometry();
  void open_open();
  void close_close();

  void clear_clear();

  void print_X();

  void error_window();

  void differen_pay();
  void annuit_pay();

  //    void hide_test();

  //    void on_Button_1_clicked();
  //    void on_Button_2_clicked();
  //    void on_Button_3_clicked();
  //    void on_Button_4_clicked();
  //    void on_Button_5_clicked();
  //    void on_Button_6_clicked();
  //    void on_Button_7_clicked();
  //    void on_Button_8_clicked();
  //    void on_Button_9_clicked();
  //    void on_Button_0_clicked();

  //    void on_EQUAL_clicked();

  //    void on_point_clicked();

  //    void on_ADD_clicked();

  //    void on_SUB_clicked();

  //    void on_MUL_clicked();

  //    void on_DIV_clicked();

  //    void on_SQR_clicked();

  //    void on_SQRT_clicked();

  //    void on_SIN_clicked();

  //    void on_COS_clicked();

  //    void on_ASIN_clicked();

  //    void on_ACOS_clicked();

  //    void on_TAN_clicked();

  //    void on_ATAN_clicked();

  //    void on_LOG_clicked();

  //    void on_LN_clicked();

  //    void on_OPEN_clicked();

  //    void on_CLOSE_clicked();

  //    void on_UNAR_MIN_clicked();

  void on_b_count_credit_clicked();

  void on_b_count_deposit_clicked();

private:
  Ui::smart_calc *ui;
  form_for_count form_count;
  //    form_for_count

  //    form_for_count form_for_count_show;
};
#endif // SMART_CALC_H
