#pragma once
#include "IPNMExporter.h"

class P2Exporter : public IPNMExporter {
public:
    void save(const Image& img, std::ostream& out) override;
};