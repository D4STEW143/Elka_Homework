#include <iostream>
using namespace std;
#define offset	"\t\t\t\t\t\t"

#define ELOCHKA 

void main()

//Навалим тонну строк на вентилятор legacy-кода

{
	setlocale(LC_ALL, "Russian");

#if defined ELOCHKA
	//#Если_определено ЕЛОЧКА
	//То нижеследующий код будет виден компилятору:
	cout << offset << "В слесу родилась ёлочка. Стих";
	cout << endl;
	cout << endl;
	cout << offset << "В лесу родилась елочка,\n";
	cout << offset << "В лесу она росла,\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "Зеленая была.\n";
	cout << endl;
	cout << offset << "Метель ей пела песенку:\n";
	cout << offset << "\"Спи, елочка, бай-бай!\"\n";
	cout << offset << "Мороз снежком укутывал:\n";
	cout << offset << "\"Смотри, не замерзай!\"\n";
	cout << endl;
	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под елочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк\n";
	cout << offset << "Рысцою пробегал.\n";
	cout << endl;
	cout << offset << "Чу! Снег по лесу частому\n";
	cout << offset << "Под полозом скрипит,\n";
	cout << offset << "Лошадка мохноногая\n";
	cout << offset << "Торопится, бежит.\n";
	cout << endl;
	cout << offset << "Везет лошадка дровенки,\n";
	cout << offset << "А в дровнях старичок,\n";
	cout << offset << "Срубил он нашу елочку\n";
	cout << offset << "Под самый корешок.\n";
	cout << endl;
	cout << offset << "Теперь она, нарядная,\n";
	cout << offset << "Hа праздник к нам пришла\n";
	cout << offset << "И много, много радости\n";
	cout << offset << "Детишкам принесла!\n";
	cout << endl;


#endif 
}
// Директива #define (определить) — создает макроопределение  (макрос) и показывает компилятору, что_заменить чем_заменить.
//	В нашем случае offset это имя макроса, а табуляция это значение макроса. 
//Везде где компилятор видит имя макроса - он вставит туда значение макроса.
//#if defined и #endif это директивы условной компиляции.