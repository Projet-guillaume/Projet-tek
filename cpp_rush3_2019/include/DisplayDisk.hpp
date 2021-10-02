//
// Created by Ugo on 2/1/20.
//

#ifndef CPP_RUSH3_2019_DISPLAYDISK_HPP
#define CPP_RUSH3_2019_DISPLAYDISK_HPP

#include "IMonitorDisplay.hpp"

class DisplayDisk : public IMonitorDisplay {
public:
    DisplayDisk();
    ~DisplayDisk();
    void disk_display();
private:
    Disk _a;
};

#endif //CPP_RUSH3_2019_DISPLAYDISK_HPP
