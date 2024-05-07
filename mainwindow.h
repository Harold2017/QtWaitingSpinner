#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class WaitingSpinnerWidget;

namespace Ui
{
    class MainWindow;
}

class MainWindow: public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();

private slots:
    void showColourDialog();
    void showTextColourDialog();
    void launchBlockingSpinner();

    void setColor(QColor color);
    void setRoundness(double roundness);
    void setMinimumTrailOpacity(double minOpacity);
    void setTrailFadePercentage(double trail);
    void setRevolutionsPerSecond(int rps);
    void setNumberOfLines(int lines);
    void setLineLength(int length);
    void setLineWidth(int width);
    void setInnerRadius(int radius);
    void setText(QString const& text);
    void setTextColor(QColor color);

private:
    Ui::MainWindow* ui;
    WaitingSpinnerWidget* m_spinner;
};

#endif // MAINWINDOW_H
