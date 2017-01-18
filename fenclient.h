#ifndef FENCLIENT_H
#define FENCLIENT_H

#include <QtWidgets>
#include <QtNetwork>


class FenClient : public QWidget
{
    Q_OBJECT

    public:
        FenClient();

    private slots:
        void on_boutonConnexion_clicked();
        void on_boutonEnvoyer_clicked();
        void on_message_returnPressed();
        void donneesRecues();
        void connecte();
        void deconnecte();
        void erreurSocket(QAbstractSocket::SocketError erreur);

    private:
        QHBoxLayout *infoServ;
        QHBoxLayout *infoClient;
        QVBoxLayout *layout;

        QLabel *ip;
        QLabel *port;
        QLabel *pseudoLabel;
        QLabel *messageLabel;

        QTextEdit *listeMessages;
        QPushButton *boutonConnexion;
        QPushButton *boutonEnvoyer;
        QSpinBox *serveurPort;

        QLineEdit *serveurIP;
        QLineEdit *pseudo;
        QLineEdit *message;

        QTcpSocket *socket; // Représente le serveur
        quint16 tailleMessage;
};

#endif // FENCLIENT_H
