#ifndef PQVARIABLES_H
#define PQVARIABLES_H

#include <QObject>

class PQVariables : public QObject {

    Q_OBJECT

public:
        static PQVariables& get() {
            static PQVariables instance;
            return instance;
        }

        PQVariables(PQVariables const&)     = delete;
        void operator=(PQVariables const&) = delete;

        Q_PROPERTY(QString cmdFilePath READ getCmdFilePath WRITE setCmdFilePath NOTIFY cmdFilePathChanged)
        QString getCmdFilePath() { return m_cmdFilePath; }
        void setCmdFilePath(QString path) {
            if(path != m_cmdFilePath) {
                m_cmdFilePath = path;
                emit cmdFilePathChanged();
            }
        }

        Q_PROPERTY(bool cmdOpen READ getCmdOpen WRITE setCmdOpen NOTIFY cmdOpenChanged)
        bool getCmdOpen() { return m_cmdOpen; }
        void setCmdOpen(bool val) {
            if(val != m_cmdOpen) {
                m_cmdOpen = val;
                emit cmdOpenChanged();
            }
        }

        Q_PROPERTY(bool cmdShow READ getCmdShow WRITE setCmdShow NOTIFY cmdShowChanged)
        bool getCmdShow() { return m_cmdShow; }
        void setCmdShow(bool val) {
            if(val != m_cmdShow) {
                m_cmdShow = val;
                emit cmdShowChanged();
            }
        }

        Q_PROPERTY(bool cmdHide READ getCmdHide WRITE setCmdHide NOTIFY cmdHideChanged)
        bool getCmdHide() { return m_cmdHide; }
        void setCmdHide(bool val) {
            if(val != m_cmdHide) {
                m_cmdHide = val;
                emit cmdHideChanged();
            }
        }

        Q_PROPERTY(bool cmdToggle READ getCmdToggle WRITE setCmdToggle NOTIFY cmdToggleChanged)
        bool getCmdToggle() { return m_cmdToggle; }
        void setCmdToggle(bool val) {
            if(val != m_cmdToggle) {
                m_cmdToggle = val;
                emit cmdToggleChanged();
            }
        }

        Q_PROPERTY(bool cmdThumbs READ getCmdThumbs WRITE setCmdThumbs NOTIFY cmdThumbsChanged)
        bool getCmdThumbs() { return m_cmdThumbs; }
        void setCmdThumbs(bool val) {
            if(val != m_cmdThumbs) {
                m_cmdThumbs = val;
                emit cmdThumbsChanged();
            }
        }

        Q_PROPERTY(bool cmdNoThumbs READ getCmdNoThumbs WRITE setCmdNoThumbs NOTIFY cmdNoThumbsChanged)
        bool getCmdNoThumbs() { return m_cmdNoThumbs; }
        void setCmdNoThumbs(bool val) {
            if(val != m_cmdNoThumbs) {
                m_cmdNoThumbs = val;
                emit cmdNoThumbsChanged();
            }
        }

        Q_PROPERTY(bool cmdTray READ getCmdTray WRITE setCmdTray NOTIFY cmdTrayChanged)
        bool getCmdTray() { return m_cmdTray; }
        void setCmdTray(bool val) {
            if(val != m_cmdTray) {
                m_cmdTray = val;
                emit cmdTrayChanged();
            }
        }

        Q_PROPERTY(bool cmdDebug READ getCmdDebug WRITE setCmdDebug NOTIFY cmdDebugChanged)
        bool getCmdDebug() { return m_cmdDebug; }
        void setCmdDebug(bool val) {
            if(val != m_cmdDebug) {
                m_cmdDebug = val;
                emit cmdDebugChanged();
            }
        }

private:
        PQVariables() {}

        QString m_cmdFilePath;
        bool m_cmdOpen;
        bool m_cmdShow;
        bool m_cmdHide;
        bool m_cmdToggle;
        bool m_cmdThumbs;
        bool m_cmdNoThumbs;
        bool m_cmdTray;
        bool m_cmdDebug;

signals:
        void cmdFilePathChanged();
        void cmdOpenChanged();
        void cmdShowChanged();
        void cmdHideChanged();
        void cmdToggleChanged();
        void cmdThumbsChanged();
        void cmdNoThumbsChanged();
        void cmdTrayChanged();
        void cmdDebugChanged();

};


#endif // PQVARIABLES_H
