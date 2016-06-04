//
// Created by tuczi on 04.06.16.
//

#ifndef XCOWSAY_ARGS_PARSER_HPP
#define XCOWSAY_ARGS_PARSER_HPP

#include <getopt.h>
#include <string>

#define no_argument 0
#define required_argument 1
#define optional_argument 2

struct option_t {
    int delay;
    std::string cmd;
};

extern option_t options;

const struct option longopts[] = {
    {"cmd",   required_argument, 0, 'c'},
    {"delay", required_argument, 0, 'd'},
    {0, 0,                       0, 0},
};

void set_options(int argc, char *argv[]);

#endif //XCOWSAY_ARGS_PARSER_HPP
