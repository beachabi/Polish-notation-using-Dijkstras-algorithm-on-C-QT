#include "smart_calc.h"
#include "ui_smart_calc.h"

smart_calc::smart_calc(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::smart_calc) {
  setlocale(LC_ALL, "");
  setlocale(LC_ALL, "en_US.UTF-8");
  ui->setupUi(this);

  ui->lineEdit_credit_summ->setValidator(new QDoubleValidator);

  connect(ui->Button_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->Button_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->Button_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->Button_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->Button_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->Button_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->Button_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->Button_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->Button_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->Button_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));

  connect(ui->bOPEN, SIGNAL(clicked()), this, SLOT(open_open()));

  connect(ui->bCLOSE, SIGNAL(clicked()), this, SLOT(close_close()));

  connect(ui->bADD, SIGNAL(clicked()), this, SLOT(easy_math()));
  connect(ui->bSUB, SIGNAL(clicked()), this, SLOT(easy_math()));
  connect(ui->bMUL, SIGNAL(clicked()), this, SLOT(easy_math()));
  connect(ui->bDIV, SIGNAL(clicked()), this, SLOT(easy_math()));
  connect(ui->bSQR, SIGNAL(clicked()), this, SLOT(easy_math()));

  connect(ui->point, SIGNAL(clicked()), this, SLOT(print_point()));

  connect(ui->bEQUAL, SIGNAL(clicked()), this, SLOT(equal_count()));

  connect(ui->bSQRT, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->bSIN, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->bCOS, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->bASIN, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->bACOS, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->bTAN, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->bATAN, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->bLN, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->bLOG, SIGNAL(clicked()), this, SLOT(trigonometry()));

  connect(ui->Back, SIGNAL(clicked()), this, SLOT(clear_clear()));
  connect(ui->Clear, SIGNAL(clicked()), this, SLOT(clear_clear()));

  connect(ui->bX, SIGNAL(clicked()), this, SLOT(print_X()));

  //    connect(ui->btest, SIGNAL(clicked()), this, SLOT(hide_test()));
}

smart_calc::~smart_calc() { delete ui; }

void smart_calc::digits_numbers() {
  QPushButton *button = (QPushButton *)(sender());
  if (ui->lineEdit->text().right(1) == ')' ||
      ui->lineEdit->text().right(1) == 'X') {
  } else {
    ui->lineEdit->insert(button->text());
  }
}

void smart_calc::print_point() {

  char *string_for_check_c = ui->lineEdit->text().toLocal8Bit().data();

  if (ui->lineEdit->text() != "") {
    if (error_dot(string_for_check_c)) {
    } else {
      ui->lineEdit->insert(".");
    }
  }
}

void smart_calc::easy_math() {

  QPushButton *button = (QPushButton *)(sender());
  char *string_for_check = ui->lineEdit->text().toLocal8Bit().data();

  if (ui->lineEdit->text() != "") {
    if (error_math(string_for_check) || ui->lineEdit->text().right(1) == '.') {
    } else {
      ui->lineEdit->insert(button->text());
    }
  }
}

void smart_calc::equal_count() {

  QString text = ui->lineEdit->text();
  char *string_for_check = ui->lineEdit->text().toLocal8Bit().data();
  //    ui->widget->clearGraphs();

  if (ui->lineEdit->text() != "" &&
      (count_char_in_line(string_for_check, '(') ==
       count_char_in_line(string_for_check, ')'))) {

    if (check_for_X(string_for_check)) {

      double min = double(ui->spinBox_X->value());
      double max = double(ui->spinBox_Y->value());
      double step = double(ui->bStep->value());

      int col_steps = (max - min) / step + 2;

      //                qDebug() << col_steps;

      QVector<double> x(col_steps), y(col_steps);

      int arr_num = 1;

      for (float start = min; start <= max; start += step) {

        QString string_with_x = text;
        QString tostring;

        string_with_x.replace("X", tostring.setNum(start, 'f', 9));

        x[arr_num] = start;
        y[arr_num] = parse_string(string_with_x.toLocal8Bit().data());
        arr_num++;
      }
      ui->widget->clearGraphs();
      ui->widget->addGraph();
      ui->widget->graph(0)->setData(x, y);
      ui->widget->xAxis->setLabel("X");
      ui->widget->yAxis->setLabel("Y");
      ui->widget->xAxis->setRange(min, max);

      double minY = y[0], maxY = y[0];
      for (int i = 1; i < col_steps; i++) {
        if (y[i] < minY)
          minY = y[i];
        if (y[i] > maxY)
          maxY = y[i];
      }
      ui->widget->yAxis->setRange(minY, maxY);
      ui->widget->replot();

    } else {
      ui->lineEdit->setText(
          QString::number(parse_string(string_for_check), 'f', 9));
    }
  } else {
    error_window();
  }
}

void smart_calc::error_window() {
  QMessageBox msgBox;
  msgBox.setWindowTitle("ERR");
  msgBox.setText("Ошибка в веденном уравнении");
  msgBox.exec();
}

void smart_calc::trigonometry() {

  QPushButton *button = (QPushButton *)(sender());
  char *string_for_check = ui->lineEdit->text().toLocal8Bit().data();

  //    if ()
  //    if (ui->lineEdit->text() != "") {
  if (!error_math(string_for_check) || ui->lineEdit->text().right(1) == '.' ||
      ui->lineEdit->text().right(1) == 'X') {
  } else {
    ui->lineEdit->insert(button->text());
  }
  //    }
}

void smart_calc::open_open() {
  QPushButton *button = (QPushButton *)(sender());
  char *string_for_check = ui->lineEdit->text().toLocal8Bit().data();
  if (!open_br(string_for_check) || ui->lineEdit->text().right(1) == '.' ||
      ui->lineEdit->text().right(1) == 'X') {
  } else {
    ui->lineEdit->insert(button->text());
  }
}

void smart_calc::close_close() {
  QPushButton *button = (QPushButton *)(sender());
  char *string_for_check = ui->lineEdit->text().toLocal8Bit().data();
  if (!close_br(string_for_check) || ui->lineEdit->text().right(1) == '.' ||
      ui->lineEdit->text() == "") {
  } else {
    ui->lineEdit->insert(button->text());
  }
}

void smart_calc::clear_clear() {
  //    ui->widget->addGraph();
  //    ui->widget->replot();
  QPushButton *button = (QPushButton *)(sender());

  ui->widget->clearGraphs();
  //    double min = double(0);
  //    double max = double(5);
  ui->widget->yAxis->setRange(0, 5);
  ui->widget->replot();

  //    ui->widget->clearGraphs();
  //    graph(0)->data().clear();
  //            graph(0)->data()->clear();

  char *line_edit = ui->lineEdit->text().toLocal8Bit().data();

  //    ui->gra
  //    ui->widget->

  if (ui->lineEdit->text() != "") {
    if (button->text() == "Clear") {
      ui->lineEdit->setText("");
    }
    if (button->text() == "Back") {
      ui->lineEdit->setText(back_last_symb(line_edit));
    }
    //          ui->lineEdit->setText(A);}
  }
}

void smart_calc::print_X() {
  QPushButton *button = (QPushButton *)(sender());
  char *string_for_check = ui->lineEdit->text().toLocal8Bit().data();
  if (!print_X_in_line(string_for_check) ||
      ui->lineEdit->text().right(1) == '.' ||
      ui->lineEdit->text().right(1) == 'X') {
  } else {
    ui->lineEdit->insert(button->text());
  }
}

void smart_calc::differen_pay() {

  delete form_count.layout();

  QGridLayout *gLayoutLines = new QGridLayout(this);
  QString for_convert = ui->lineEdit_credit_summ->text();

  double credit_sum = for_convert.toDouble();
  double temp_cred = credit_sum;
  int amount = ui->spinBox_mount_credit->value();
  double stavka = ui->doubleSpinBox_perc_credit->value();
  double pay_per_month = credit_sum / double(amount);

  double total_payment = 0;

  //    double count_percent = 0;

  for (int i = 1; i <= amount; i++) {
    //        for(int j = 0; j < 5; j++)

    double percent_per_month = credit_sum * (stavka / 100) * 31 / 365;
    double month_payment = pay_per_month + percent_per_month;
    total_payment += month_payment;

    QString temp_string =
        "Платеж #: T | Платеж в месяц: X | Выплата процентов: Y";

    //            qDebug() << percent_per_month;

    temp_string.replace("X", QString::number(month_payment, 'f', 2));
    temp_string.replace("Y", QString::number(percent_per_month, 'f', 2));
    temp_string.replace("T", QString::number(i));

    QLabel *label_to_grid = new QLabel();
    label_to_grid->setText(temp_string);

    gLayoutLines->addWidget(label_to_grid);

    credit_sum -= pay_per_month;
    //            gLayoutChoiceRegion->addWidget(new
    //            QPushButton(QString("%1-%2").arg(i).arg(j)),
    //                                           i, j);
  }

  QString temp_string = "Всего выплачено: T | Всего выплачено процентов: X";
  temp_string.replace("X", QString::number(total_payment - temp_cred, 'f', 2));
  temp_string.replace("T", QString::number(total_payment, 'f', 2));

  QLabel *label_to_grid = new QLabel();
  label_to_grid->setText(temp_string);

  gLayoutLines->addWidget(label_to_grid);

  QWidget *widgetChoiceRegion = new QWidget();
  widgetChoiceRegion->setLayout(gLayoutLines);

  QScrollArea *scrollArea = new QScrollArea();
  scrollArea->setWidget(widgetChoiceRegion);

  QVBoxLayout *vBoxLayout = new QVBoxLayout();
  vBoxLayout->addWidget(scrollArea);

  form_count.setLayout(vBoxLayout);
  form_count.show();
}

void smart_calc::annuit_pay() {
  //    qDebug() << A;
  delete form_count.layout();

  QGridLayout *gLayoutLines = new QGridLayout(this);
  QString for_convert = ui->lineEdit_credit_summ->text();

  double credit_sum = for_convert.toDouble();
  double temp_cred = credit_sum;
  int amount = ui->spinBox_mount_credit->value();
  double stavka = ui->doubleSpinBox_perc_credit->value();
  //    double pay_per_month = credit_sum / double(amount);

  double total_payment = 0;

  //    double count_percent = 0;

  for (int i = 1; i <= amount; i++) {
    //        for(int j = 0; j < 5; j++)

    //            double percent_per_month = credit_sum * (stavka/100) * 31 /
    //            365;
    double stavka_month = stavka / 12 / 100;
    double month_payment = credit_sum *
                           (stavka_month * pow(1 + stavka_month, amount)) /
                           (pow(1 + stavka_month, amount) - 1);
    total_payment += month_payment;

    QString temp_string = "Платеж #: T | Платеж в месяц: X";
    //                                  " | Выплата процентов: Y";

    //            qDebug() << month_payment;

    temp_string.replace("X", QString::number(month_payment, 'f', 2));
    //            temp_string.replace("Y", QString::number(percent_per_month,
    //            'f', 2));
    temp_string.replace("T", QString::number(i));

    QLabel *label_to_grid = new QLabel();
    label_to_grid->setText(temp_string);

    gLayoutLines->addWidget(label_to_grid);

    //            credit_sum -= pay_per_month;
    //            gLayoutChoiceRegion->addWidget(new
    //            QPushButton(QString("%1-%2").arg(i).arg(j)),
    //                                           i, j);
  }

  QString temp_string = "Всего выплачено: T | Всего выплачено процентов: X";
  temp_string.replace("X", QString::number(total_payment - temp_cred, 'f', 2));
  temp_string.replace("T", QString::number(total_payment, 'f', 2));

  QLabel *label_to_grid = new QLabel();
  label_to_grid->setText(temp_string);

  gLayoutLines->addWidget(label_to_grid);

  QWidget *widgetChoiceRegion = new QWidget();
  widgetChoiceRegion->setLayout(gLayoutLines);

  QScrollArea *scrollArea = new QScrollArea();
  scrollArea->setWidget(widgetChoiceRegion);

  QVBoxLayout *vBoxLayout = new QVBoxLayout();
  vBoxLayout->addWidget(scrollArea);

  form_count.setLayout(vBoxLayout);
  form_count.show();
}

void smart_calc::on_b_count_deposit_clicked() {
  delete form_count.layout();

  QGridLayout *gLayoutLines = new QGridLayout(this);

  int amount = ui->spinBox_mount_deposit->value();
  double deposit_sum = ui->spinBox_deposit_summ->value();
  double temp_dep = deposit_sum;
  double stavka = ui->doubleSpinBox_perc_deposit->value();
  double tax = ui->doubleSpinBox_perc_deposit_2->value();
  //        double total_payment = 0;

  for (int i = 1; i <= amount; i++) {

    double percent_add = deposit_sum * (stavka / 12 / 100);
    deposit_sum += percent_add;

    //                double month_payment = credit_sum * (stavka_month *
    //                pow(1+stavka_month, amount)) / (pow(1+stavka_month,
    //                amount) - 1); total_payment += month_payment;

    QString temp_string =
        "Платеж #: T | Доход от процентов: X | Общая сумма вклада: Y";

    //                qDebug() << month_payment;

    temp_string.replace("X", QString::number(percent_add, 'f', 2));
    temp_string.replace("Y", QString::number(deposit_sum, 'f', 2));
    temp_string.replace("T", QString::number(i));

    QLabel *label_to_grid = new QLabel();
    label_to_grid->setText(temp_string);

    gLayoutLines->addWidget(label_to_grid);

    //            credit_sum -= pay_per_month;
    //            gLayoutChoiceRegion->addWidget(new
    //            QPushButton(QString("%1-%2").arg(i).arg(j)),
    //                                           i, j);
  }
  double total_with_tax =
      deposit_sum - ((deposit_sum - temp_dep) * (tax / 100));

  QString temp_string = "Всего получено c учетом вычета налога: T | Доход от "
                        "процентов с учетом вычета налога: X";

  temp_string.replace("X", QString::number(total_with_tax - temp_dep, 'f', 2));
  temp_string.replace("T", QString::number(total_with_tax, 'f', 2));

  QLabel *label_to_grid = new QLabel();
  label_to_grid->setText(temp_string);

  gLayoutLines->addWidget(label_to_grid);

  QWidget *widgetChoiceRegion = new QWidget();
  widgetChoiceRegion->setLayout(gLayoutLines);

  QScrollArea *scrollArea = new QScrollArea();
  scrollArea->setWidget(widgetChoiceRegion);

  QVBoxLayout *vBoxLayout = new QVBoxLayout();
  vBoxLayout->addWidget(scrollArea);

  form_count.setLayout(vBoxLayout);
  form_count.show();
}

void smart_calc::on_b_count_credit_clicked() {

  if (ui->comboBox_credit->currentText() == "Дифференцированный") {
    differen_pay();
  }
  if (ui->comboBox_credit->currentText() == "Аннуитетный") {
    annuit_pay();
  }
}
