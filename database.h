#ifndef DATABASE_H
#define DATABASE_H
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVector>
#include <QMap>
#include <QDebug>

struct Unit{
    int id;
    QString name;
    QString shortname;
};
struct ProductClass{
    int id;
    QString code;
    QString name;
    bool isTerminal;
    int baseUnitID;
    int parentID;
    int orderindex;
};
struct Product{
    int id;
    QString name;
    QString articleNumber;
    double price;
    QString manufacturer;
    int productclassID;
};

class Database : public QObject
{
    Q_OBJECT

public:
    explicit Database(QObject *parent = nullptr);
    ~Database();

    bool connectToDatabase();
    bool initializeDatabase();

    bool addUnit( const QString &name, const QString &shortmane);
    QVector<Unit> getAllUnits();

    bool AddProductClass(const ProductClass &cls);
    bool deleteProductClass(int id);
    bool moveProductClass(int classID, int newParentID);

    QVector<ProductClass> getAllProductClasses();
    QVector<ProductClass> getChild(int parentID);
    QVector<ProductClass> getAllDEscendants(int parentID);
    QVector<ProductClass> getAllParents(int classID);
    QVector<ProductClass> getTerminalClasses(int parentID);

    bool classCodeExists(const QString &code);
    bool checkCycle( int classID, int newParentID);

    bool addProduct(const Product &product);
    bool deleteProduct( int id);

    QVector<Product> getAllProduct();
    QVector<Product> getProductsByClass(int classID);

    int getProductCount();
    int getClassCount();
    int getUnitsCount();
private:
    QSqlDatabase db;
    QString dbPath;

    ProductClass mapProductsClass(QSqlQuery &query);
    Product  mapProducts(QSqlQuery &query);

};


#endif // DATABASE_H
