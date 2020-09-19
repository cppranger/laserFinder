// demoLaserSearch.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>

struct laser {
    std::string productName;

    bool line;
    bool cross;
    bool dot;
    bool lineAndDot;
    int distance;

    bool crosscutter;   //торцовочный станок
    bool marking;       //разметка
    bool edger;         //обрезной станок
    bool multipleEdger; //многопильный станок
    bool shearer;       //гильотинные ножницы
    bool swingbladeMill;//бревнопильный станок
    bool flagging;      //разметочные операции
    bool plasmaCutter;  //установка плазменной резки

    std::string radPower;
    std::string waveLength;
    std::string beamAngle;
    std::string optMaterial;
    std::string supplyVoltage;
    std::string powerSupply;
    std::string cost;
};

laser ul25lt;
laser ul3;
laser ul24;
laser ul25;
laser ul27;
laser ul2100;
laser ul2200;
laser ul25g;
laser ul210g;
laser ul230g;
laser ul25k;
laser ul25kg;
laser ul25t;

void makeUL25LT() {
    ul25lt.line = false;
    ul25lt.cross = false;
    ul25lt.dot = false;
    ul25lt.lineAndDot = true;
    ul25lt.distance = 2;

    ul25lt.crosscutter = true;
    ul25lt.marking = true;
    ul25lt.edger = false;
    ul25lt.multipleEdger = false;
    ul25lt.shearer = false;
    ul25lt.swingbladeMill = false;
    ul25lt.flagging = false;
    ul25lt.plasmaCutter = false;

    ul25lt.radPower = "2,5 мВт";
    ul25lt.waveLength = "635 нм";
    ul25lt.beamAngle = "100...200°";
    ul25lt.optMaterial = "стекло";
    ul25lt.supplyVoltage = "5В, DC";
    ul25lt.powerSupply = "Источник питания ИЭС6, DR-15-5";
    ul25lt.cost = "2100 руб.";
};

void makeUL3() {
    ul3.line = true;
    ul3.cross = false;
    ul3.dot = false;
    ul3.lineAndDot = false;
    ul3.distance = 2;

    ul3.crosscutter = true;
    ul3.marking = false;
    ul3.edger = true;
    ul3.multipleEdger = false;
    ul3.shearer = false;
    ul3.swingbladeMill = false;
    ul3.flagging = false;
    ul3.plasmaCutter = false;

    ul3.radPower = "3 мВт (или 10 мВт)";
    ul3.waveLength = "635 нм (или 650 нм при 10 мВт)";
    ul3.beamAngle = "100...200°";
    ul3.optMaterial = "стекло";
    ul3.supplyVoltage = "5В, DC";
    ul3.powerSupply = "Источник питания ИЭС6, DR-15-5";
    ul3.cost = "Под заказ";
};

void makeUL24() {
    ul24.line = true;
    ul24.cross = false;
    ul24.dot = false;
    ul24.lineAndDot = false;
    ul24.distance = 4;

    ul24.crosscutter = true;
    ul24.marking = false;
    ul24.edger = true;
    ul24.multipleEdger = true;
    ul24.shearer = false;
    ul24.swingbladeMill = false;
    ul24.flagging = false;
    ul24.plasmaCutter = false;

    ul24.radPower = "4 мВт";
    ul24.waveLength = "635 нм";
    ul24.beamAngle = "100...200°";
    ul24.optMaterial = "стекло";
    ul24.supplyVoltage = "7...24В";
    ul24.powerSupply = "Источник питания ИЭС18, DR-15-12";
    ul24.cost = "3400 руб.";
};

void makeUL25() {
    ul25.line = true;
    ul25.cross = false;
    ul25.dot = false;
    ul25.lineAndDot = false;
    ul25.distance = 4;

    ul25.crosscutter = true;
    ul25.marking = false;
    ul25.edger = true;
    ul25.multipleEdger = true;
    ul25.shearer = false;
    ul25.swingbladeMill = false;
    ul25.flagging = false;
    ul25.plasmaCutter = false;

    ul25.radPower = "5 мВт";
    ul25.waveLength = "635 нм";
    ul25.beamAngle = "100...200°";
    ul25.optMaterial = "стекло";
    ul25.supplyVoltage = "7...24В";
    ul25.powerSupply = "Источник питания ИЭС18, DR-15-12";
    ul25.cost = "Под заказ";
};

void makeUL27() {
    ul27.line = true;
    ul27.cross = false;
    ul27.dot = false;
    ul27.lineAndDot = false;
    ul27.distance = 7;

    ul27.crosscutter = true;
    ul27.marking = false;
    ul27.edger = true;
    ul27.multipleEdger = true;
    ul27.shearer = false;
    ul27.swingbladeMill = false;
    ul27.flagging = false;
    ul27.plasmaCutter = false;

    ul27.radPower = "7 мВт";
    ul27.waveLength = "635 нм";
    ul27.beamAngle = "100...200°";
    ul27.optMaterial = "стекло";
    ul27.supplyVoltage = "7...24В";
    ul27.powerSupply = "Источник питания ИЭС18, DR-15-12";
    ul27.cost = "4000 руб.";
};

void makeUL2100() {
    ul2100.line = true;
    ul2100.cross = false;
    ul2100.dot = false;
    ul2100.lineAndDot = false;
    ul2100.distance = 15;

    ul2100.crosscutter = false;
    ul2100.marking = false;
    ul2100.edger = true;
    ul2100.multipleEdger = true;
    ul2100.shearer = false;
    ul2100.swingbladeMill = true;
    ul2100.flagging = false;
    ul2100.plasmaCutter = false;

    ul2100.radPower = "100 мВт";
    ul2100.waveLength = "650 нм";
    ul2100.beamAngle = "100...200°";
    ul2100.optMaterial = "стекло";
    ul2100.supplyVoltage = "7...24В";
    ul2100.powerSupply = "Источник питания ИЭС18, DR-15-12";
    ul2100.cost = "5000 руб.";
};

void makeUL2200() {
    ul2200.line = true;
    ul2200.cross = false;
    ul2200.dot = false;
    ul2200.lineAndDot = false;
    ul2200.distance = 20;

    ul2200.crosscutter = false;
    ul2200.marking = false;
    ul2200.edger = true;
    ul2200.multipleEdger = true;
    ul2200.shearer = false;
    ul2200.swingbladeMill = true;
    ul2200.flagging = false;
    ul2200.plasmaCutter = false;

    ul2200.radPower = "200 мВт";
    ul2200.waveLength = "650 нм";
    ul2200.beamAngle = "100...200°";
    ul2200.optMaterial = "стекло";
    ul2200.supplyVoltage = "7...24В";
    ul2200.powerSupply = "Источник питания ИЭС18, DR-15-12";
    ul2200.cost = "6000 руб.";
};

void makeUL25G() {
    ul25g.line = true;
    ul25g.cross = false;
    ul25g.dot = false;
    ul25g.lineAndDot = false;
    ul25g.distance = 10;

    ul25g.crosscutter = false;
    ul25g.marking = false;
    ul25g.edger = true;
    ul25g.multipleEdger = true;
    ul25g.shearer = false;
    ul25g.swingbladeMill = true;
    ul25g.flagging = false;
    ul25g.plasmaCutter = false;

    ul25g.radPower = "10 мВт";
    ul25g.waveLength = "520 нм";
    ul25g.beamAngle = "100...200°";
    ul25g.optMaterial = "стекло";
    ul25g.supplyVoltage = "7...24В";
    ul25g.powerSupply = "Источник питания ИЭС18, DR-15-12";
    ul25g.cost = "5000 руб.";
};

void makeUL210G() {
    ul210g.line = true;
    ul210g.cross = false;
    ul210g.dot = false;
    ul210g.lineAndDot = false;
    ul210g.distance = 15;

    ul210g.crosscutter = false;
    ul210g.marking = false;
    ul210g.edger = true;
    ul210g.multipleEdger = true;
    ul210g.shearer = false;
    ul210g.swingbladeMill = true;
    ul210g.flagging = false;
    ul210g.plasmaCutter = false;

    ul210g.radPower = "10 мВт";
    ul210g.waveLength = "520 нм";
    ul210g.beamAngle = "100...200°";
    ul210g.optMaterial = "стекло";
    ul210g.supplyVoltage = "7...24В";
    ul210g.powerSupply = "Источник питания ИЭС18, DR-15-12";
    ul210g.cost = "5500 руб.";
};

void makeUL230G() {
    ul230g.line = true;
    ul230g.cross = false;
    ul230g.dot = false;
    ul230g.lineAndDot = false;
    ul230g.distance = 20;

    ul230g.crosscutter = false;
    ul230g.marking = false;
    ul230g.edger = true;
    ul230g.multipleEdger = true;
    ul230g.shearer = false;
    ul230g.swingbladeMill = true;
    ul230g.flagging = false;
    ul230g.plasmaCutter = false;

    ul230g.radPower = "30 мВт";
    ul230g.waveLength = "520 нм";
    ul230g.beamAngle = "100...200°";
    ul230g.optMaterial = "стекло";
    ul230g.supplyVoltage = "7...24В";
    ul230g.powerSupply = "Источник питания ИЭС18, DR-15-12";
    ul230g.cost = "6500 руб.";
};

void makeUL25K() {
    ul25k.line = false;
    ul25k.cross = true;
    ul25k.dot = false;
    ul25k.lineAndDot = false;
    ul25k.distance = 5;

    ul25k.crosscutter = false;
    ul25k.marking = false;
    ul25k.edger = false;
    ul25k.multipleEdger = false;
    ul25k.shearer = false;
    ul25k.swingbladeMill = false;
    ul25k.flagging = true;
    ul25k.plasmaCutter = true;

    ul25k.radPower = "5 мВт";
    ul25k.waveLength = "635 нм";
    ul25k.beamAngle = "15° или 60°";
    ul25k.optMaterial = "оптический пластик";
    ul25k.supplyVoltage = "7...24В";
    ul25k.powerSupply = "Источник питания ИЭС18, DR-15-12";
    ul25k.cost = "4000 руб.";
};

void makeUL25KG() {
    ul25kg.line = false;
    ul25kg.cross = true;
    ul25kg.dot = false;
    ul25kg.lineAndDot = false;
    ul25kg.distance = 10;

    ul25kg.crosscutter = false;
    ul25kg.marking = false;
    ul25kg.edger = false;
    ul25kg.multipleEdger = false;
    ul25kg.shearer = false;
    ul25kg.swingbladeMill = false;
    ul25kg.flagging = true;
    ul25kg.plasmaCutter = true;

    ul25kg.radPower = "5 мВт";
    ul25kg.waveLength = "520 нм";
    ul25kg.beamAngle = "60°";
    ul25kg.optMaterial = "оптический пластик";
    ul25kg.supplyVoltage = "7...24В";
    ul25kg.powerSupply = "Источник питания ИЭС18, DR-15-12";
    ul25kg.cost = "5000 руб.";
};

void makeUL25T() {
    ul25t.line = false;
    ul25t.cross = false;
    ul25t.dot = true;
    ul25t.lineAndDot = false;
    ul25t.distance = 10;

    ul25t.crosscutter = false;
    ul25t.marking = false;
    ul25t.edger = false;
    ul25t.multipleEdger = false;
    ul25t.shearer = false;
    ul25t.swingbladeMill = false;
    ul25t.flagging = true;
    ul25t.plasmaCutter = true;
    
    ul25t.radPower = "5 мВт";
    ul25t.waveLength = "650 нм";
    ul25t.beamAngle = "-";
    ul25t.optMaterial = "стекло";
    ul25t.supplyVoltage = "7...24В";
    ul25t.powerSupply = "Источник питания ИЭС18, DR-15-12";
    ul25t.cost = "3500 руб.";
};

void printProduct(struct laser a) {
    std::cout << "Рабочее расстояние:\t" << a.distance << "\n" << "Мощность излучения:\t" << a.radPower << "\n" 
        << "Длина волны:\t\t" << a.waveLength << "\n" << "Угол раскрытия:\t\t" << a.beamAngle << "\n" 
        << "Материал оптики:\t" <<a.optMaterial << "\n" << "Напряжение:\t\t" << a.supplyVoltage << "\n" << "Стоимость:\t\t" << a.cost;

    std::cout << "\n\n" << "Использование:\t";
    if (a.crosscutter == true) std::cout << "торцовочный станок, ";
    if (a.marking == true) std::cout << "разметка, ";
    if (a.edger == true) std::cout << "торцовочный станок, ";
    if (a.multipleEdger == true) std::cout << "многопильный станок, ";
    if (a.shearer == true) std::cout << "гильотинные ножницы, ";
    if (a.swingbladeMill == true) std::cout << "бревнопильный станок, ";
    if (a.flagging == true) std::cout << "разметочные операции, ";
    if (a.plasmaCutter == true) std::cout << "установка плазменной резки, ";

    std::cout << "\n\n" << "Тип лазера:\t";
    if (a.line == true) std::cout << "Линия" << "\n";
    if (a.cross == true) std::cout << "Крест" << "\n";
    if (a.dot == true) std::cout << "Точка" << "\n";
    if (a.lineAndDot == true) std::cout << "Линия с точкой" << "\n";

    std::cout << "==---==---==---==---==---==---==\n\n";
};

int main()
{
    setlocale(LC_ALL, "Russian");

    makeUL25LT();
    makeUL3();
    makeUL24();
    makeUL25();
    makeUL27();
    makeUL2100();
    makeUL2200();
    makeUL25G();
    makeUL210G();
    makeUL230G();
    makeUL25K();
    makeUL25KG();
    makeUL25T();

    printProduct(ul25lt);
    printProduct(ul3);
    printProduct(ul24);
    printProduct(ul25);
    printProduct(ul27);
    printProduct(ul2100);
    printProduct(ul2200);
    printProduct(ul25g);
    printProduct(ul210g);
    printProduct(ul230g);
    printProduct(ul25k);
    printProduct(ul25kg);
    printProduct(ul25t);
}
