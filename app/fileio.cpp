#include "fileio.h"
#include <QUrl>
#include <QFile>
#include <QTextStream>

FileIO::FileIO()
{
}

bool FileIO::write(const QString& sourceUrl, const QString& data) {
    if (sourceUrl.isEmpty())
        return false;

    QUrl url(sourceUrl);
    QFile file(url.toLocalFile());
    if (!file.open(QFile::WriteOnly | QFile::Truncate))
        return false;

    QTextStream out(&file);
    out.setCodec("UTF-8"); // Ensure UTF-8 encoding
    out << data;
    file.close();
    return true;
}

QString FileIO::read(const QString& sourceUrl) {
    if (sourceUrl.isEmpty())
        return "";

    QUrl url(sourceUrl);
    QFile file(url.toLocalFile());
    if (!file.open(QFile::ReadOnly))
        return "";

    QTextStream in(&file);
    in.setCodec("UTF-8"); // Ensure UTF-8 encoding
    QString result = in.readAll();
    file.close();
    return result;
}
