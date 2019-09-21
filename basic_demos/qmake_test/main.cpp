#include <iostream>
#include <QWidget>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[]){

	QApplication app(argc, argv);

	QWidget w;

	w.show();

	cout << "Qmake test!" << endl;

	app.exec();

	return 0;

}
