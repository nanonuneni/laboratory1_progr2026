#pragma once
#include "IPNMExporter.h"

class P3Exporter : public IPNMExporter {
public:
    void save(const Image& img, std::ostream& out) override;
};