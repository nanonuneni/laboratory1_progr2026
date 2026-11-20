#pragma once
#include <ostream>
#include <memory>

class Image;

class IPNMExporter {
public:
    virtual ~IPNMExporter() = default;
    virtual void save(const Image& img, std::ostream& out) = 0;
};

std::unique_ptr<IPNMExporter> createExporter(int format);