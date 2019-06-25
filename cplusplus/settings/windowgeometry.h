#ifndef PQWINDOWGEOMETRY_H
#define PQWINDOWGEOMETRY_H

#include <QObject>
#include <QRect>
#include <QSettings>
#include <QGuiApplication>
#include <QScreen>
#include "../logger.h"

class PQWindowGeometry : public QObject {

    Q_OBJECT

public:
    explicit PQWindowGeometry(QObject *parent = 0);

    Q_PROPERTY(QRect mainWindowGeometry READ getMainWindowGeometry WRITE setMainWindowGeometry)
    const QRect getMainWindowGeometry() { return m_mainWindowGeometry; }
    void setMainWindowGeometry(QRect rect) {
        if(rect != m_mainWindowGeometry) {
            m_mainWindowGeometry = rect;
            saveGeometries();
        }
    }

    Q_PROPERTY(bool mainWindowMaximized READ getMainWindowMaximized WRITE setMainWindowMaximized)
    bool getMainWindowMaximized() { return m_mainWindowMaximized; }
    void setMainWindowMaximized(bool maximized) {
        if(maximized != m_mainWindowMaximized) {
            m_mainWindowMaximized = maximized;
            saveGeometries();
        }
    }

    Q_PROPERTY(QRect fileDialogWindowGeometry READ getFileDialogWindowGeometry WRITE setFileDialogWindowGeometry)
    QRect getFileDialogWindowGeometry() { return m_fileDialogWindowGeometry; }
    void setFileDialogWindowGeometry(QRect rect) {
        if(rect != m_fileDialogWindowGeometry) {
            m_fileDialogWindowGeometry = rect;
            saveGeometries();
        }
    }

    Q_PROPERTY(bool fileDialogWindowMaximized READ getFileDialogWindowMaximized WRITE setFileDialogWindowMaximized)
    bool getFileDialogWindowMaximized() { return m_fileDialogWindowMaximized; }
    void setFileDialogWindowMaximized(bool maximized) {
        if(maximized != m_fileDialogWindowMaximized) {
            m_fileDialogWindowMaximized = maximized;
            saveGeometries();
        }
    }

    Q_PROPERTY(QRect mainMenuWindowGeometry READ getMainMenuWindowGeometry WRITE setMainMenuWindowGeometry)
    QRect getMainMenuWindowGeometry() { return m_mainMenuWindowGeometry; }
    void setMainMenuWindowGeometry(QRect rect) {
        if(rect != m_mainMenuWindowGeometry) {
            m_mainMenuWindowGeometry = rect;
            saveGeometries();
        }
    }

    Q_PROPERTY(bool mainMenuWindowMaximized READ getMainMenuWindowMaximized WRITE setMainMenuWindowMaximized)
    bool getMainMenuWindowMaximized() { return m_mainMenuWindowMaximized; }
    void setMainMenuWindowMaximized(bool maximized) {
        if(maximized != m_mainMenuWindowMaximized) {
            m_mainMenuWindowMaximized = maximized;
            saveGeometries();
        }
    }

    Q_PROPERTY(QRect metaDataWindowGeometry READ getMetaDataWindowGeometry WRITE setMetaDataWindowGeometry)
    QRect getMetaDataWindowGeometry() { return m_metaDataWindowGeometry; }
    void setMetaDataWindowGeometry(QRect rect) {
        if(rect != m_metaDataWindowGeometry) {
            m_metaDataWindowGeometry = rect;
            saveGeometries();
        }
    }

    Q_PROPERTY(bool metaDataWindowMaximized READ getMetaDataWindowMaximized WRITE setMetaDataWindowMaximized)
    bool getMetaDataWindowMaximized() { return m_metaDataWindowMaximized; }
    void setMetaDataWindowMaximized(bool maximized) {
        if(maximized != m_metaDataWindowMaximized) {
            m_metaDataWindowMaximized = maximized;
            saveGeometries();
        }
    }

    Q_PROPERTY(QRect histogramWindowGeometry READ getHistogramWindowGeometry WRITE setHistogramWindowGeometry)
    QRect getHistogramWindowGeometry() { return m_histogramWindowGeometry; }
    void setHistogramWindowGeometry(QRect rect) {
        if(rect != m_histogramWindowGeometry) {
            m_histogramWindowGeometry = rect;
            saveGeometries();
        }
    }

    Q_PROPERTY(bool histogramWindowMaximized READ getHistogramWindowMaximized WRITE setHistogramWindowMaximized)
    bool getHistogramWindowMaximized() { return m_histogramWindowMaximized; }
    void setHistogramWindowMaximized(bool maximized) {
        if(maximized != m_histogramWindowMaximized) {
            m_histogramWindowMaximized = maximized;
            saveGeometries();
        }
    }

private:
    QRect m_mainWindowGeometry;
    bool m_mainWindowMaximized;

    QRect m_fileDialogWindowGeometry;
    bool m_fileDialogWindowMaximized;

    QRect m_mainMenuWindowGeometry;
    bool m_mainMenuWindowMaximized;

    QRect m_metaDataWindowGeometry;
    bool m_metaDataWindowMaximized;

    QRect m_histogramWindowGeometry;
    bool m_histogramWindowMaximized;

    QSettings *settings;

    void saveGeometries();

private slots:
    void readGeometries();

};

#endif // PQWINDOWGEOMETRY_H