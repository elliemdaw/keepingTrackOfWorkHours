#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

private slots:
    void on_lineEdit_textChanged(QString);
    void on_lineEdit_2_textChanged(QString);
    void on_lineEdit_3_textChanged(QString);
    void on_lineEdit_4_textChanged(QString);
    void on_lineEdit_5_textChanged(QString);
    void on_lineEdit_6_textChanged(QString);
    void on_lineEdit_7_textChanged(QString);
    void on_lineEdit_8_textChanged(QString);
    void on_lineEdit_9_textChanged(QString);
    void on_lineEdit_10_textChanged(QString);
    void on_lineEdit_11_textChanged(QString);
    void on_lineEdit_12_textChanged(QString);
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
};

#endif // MAINWINDOW_H
