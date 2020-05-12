#include "application.h"

#include <ostream>

Application::Application(const std::string& appName,
    const std::string& publisher,
    const std::string& version,
    const std::string& installDate,
    const std::string& location) :
    mAppName(appName),
    mPublisher(publisher),
    mVersion(version),
    mInstallDate(parseDate(installDate)),
    mLocation(location) { }

std::string Application::appName() const
{
    return mAppName;
}

std::string Application::publisher() const
{
    return mPublisher;
}

std::string Application::version() const
{
    return mVersion;
}

std::string Application::installDate() const
{
    return mInstallDate;
}

std::string Application::location() const
{
    return mLocation;
}

std::ostream& operator << (std::ostream& stream, Application& application) {
    stream << application.mAppName << " " << application.mVersion << "\n\t";
    stream << "Publisher: " << application.mPublisher << "\n\t";
    stream << "Installed " << application.mInstallDate << "\n\t";
    stream << "Into " << application.mLocation << std::endl;

    return stream;
}

std::string Application::parseDate(const std::string& date) {
    if (date.length() < 8) return date;

    std::string ret = date.substr(0, 4) + "/";
    ret += date.substr(4, 2) + "/";
    ret += date.substr(6, 2);
    return ret;
}
