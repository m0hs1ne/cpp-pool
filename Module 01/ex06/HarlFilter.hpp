#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

#include <iostream>

class HarlFilter
{
    private:
        void debug(void);
        void info(void);
        void error(void);
        void warning(void);
    public :
        void complain(std::string level);

};


#endif