#ifndef AUTHWINDOW_H
#define AUTHWINDOW_H

#include <QWidget>

namespace Ui {
    class AuthWindow;
}

class AuthWindow : public QWidget
{
        Q_OBJECT

    public:
        explicit AuthWindow(QWidget *parent = nullptr);
        ~AuthWindow();

    private slots:
        void on_showPassButton_clicked(bool checked);

    private:
        Ui::AuthWindow *ui;
};

#endif // AUTHWINDOW_H
