//
// Created by mbelleville on 01/02/2020.
//

#ifndef CPP_RUSH3_2019_DISK_HPP
#define CPP_RUSH3_2019_DISK_HPP


class Disk {
public:
    Disk();
    ~Disk();
    std::string getModel() const { return _Model; }
    std::string getVendor() const { return _Vendor; }
    std::string getTotal() const { return _Total; }
    std::string getUsed() const { return _Used; }
    std::string getAvail() const { return _Avail; }
    std::string getPercent() const { return _Percent; }


private:
    std::string _Model;
    std::string _Vendor;
    std::string _Total;
    std::string _Used;
    std::string _Avail;
    std::string _Percent;
};

#endif //CPP_RUSH3_2019_DISK_HPP
