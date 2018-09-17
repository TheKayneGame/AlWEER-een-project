#include "Mainwindow.h"
#include "ui_mainwindow.h"

#include <QOAuth2AuthorizationCodeFlow>
#include <QDesktopServices>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QOAuthHttpServerReplyHandler>
#include <QNetworkReply>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*
    auto google = new QOAuth2AuthorizationCodeFlow;
    google->setScope("email");
    connect(google, &QOAuth2AuthorizationCodeFlow::authorizeWithBrowser, &QDesktopServices::openUrl);

    QString val;
    QFile file;
    file.setFileName("QtClientInfo.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    val = file.readAll();
    file.close();
    qWarning() << val;
    QJsonDocument document = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject sett2 = document.object();
    QJsonValue value = sett2.value(QString("WeerProject"));
    qWarning() << value;
    QJsonObject item = value.toObject();
    qWarning() << tr("QJsonObject of description: ") << item;

    const auto object = document.object();
    const auto settingsObject = object["web"].toObject();
    const QUrl authUri(settingsObject["auth_uri"].toString());
    const auto clientId = settingsObject["client_id"].toString();
    const QUrl tokenUri(settingsObject["token_uri"].toString());
    const auto clientSecret(settingsObject["client_secret"].toString());
    const auto redirectUris = settingsObject["redirect_uris"].toArray();
    const QUrl redirectUri(redirectUris[0].toString()); // Get the first URI
    const auto port = static_cast<quint16>(redirectUri.port()); // Get the port

    google->setAuthorizationUrl(authUri);
    google->setClientIdentifier(clientId);
    google->setAccessTokenUrl(tokenUri);
    google->setClientIdentifierSharedKey(clientSecret);

    auto replyHandler = new QOAuthHttpServerReplyHandler(port, this);
    google->setReplyHandler(replyHandler);

    google->grant();

    auto reply = google->get(QUrl("https://www.googleapis.com/plus/v1/people/me"));
    */

    /*
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("weer.db");
    db.setUserName("");
    db.setPassword("");
    */

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("www.sandervandenberk.nl");
    db.setPort(3306);
    db.setUserName("weer");
    db.setPassword("admin");
    db.setDatabaseName("alWeer");

    if(db.open()){
        QSqlQuery query;

        // avgtemp
        query.prepare("SELECT avg(Temp) as avgtemp FROM alWeer.weer;");
        if(query.exec()){
            int idName = query.record().indexOf("avgtemp");
            while(query.next()){
                QString avgtemp = query.value(idName).toString();
                ui->showTemperature->setText(avgtemp);
            }
        }
        query.clear();

        // avghum
        query.prepare("SELECT avg(Humidity) as avghum FROM alWeer.weer;");
        if(query.exec()){
            int idName = query.record().indexOf("avghum");
            while(query.next()){
                QString avghum = query.value(idName).toString();
                ui->showHumidity->setText(avghum);
            }
        }
        query.clear();

        // avgbig
        query.prepare("SELECT avg(Bightness) as avgbig FROM alWeer.weer;");
        if(query.exec()){
            int idName = query.record().indexOf("avgbig");
            while(query.next()){
                QString avgbig = query.value(idName).toString();
                ui->showBrightness->setText(avgbig);
            }
        }
        query.clear();

        // avgwin
        query.prepare("SELECT avg(Windsnelheid) as avgwin FROM alWeer.weer;");
        if(query.exec()){
            int idName = query.record().indexOf("avgwin");
            while(query.next()){
                QString avgwin = query.value(idName).toString();
                ui->showWindspeed->setText(avgwin);
            }
        }
        query.clear();
    }else{
        QSqlError err = db.lastError();
        qDebug() << "Database: " << err.databaseText();
        qDebug() << "Driver: " << err.driverText();
        qDebug() << "Text: " << err.text();
    }

    //De manier om de iets in je scherm te laten zien
    //ui->showTemperature->setText();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    graph.createChart();
    graph.setCentralWidget(graph.chartView);
    graph.show();
    graph.setWindowTitle("Graphs");
}





