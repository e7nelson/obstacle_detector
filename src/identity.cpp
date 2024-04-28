#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "obstacle_detector/include/identity.h"

using namespace std;


int main() {
    char sira_name_primitive[1024];
    gethostname(sira_name_primitive, 1024);
    sira_name = string(sira_name_primitive);
    if (sira_name == string("sirab-T15")) {
        sira_follower = string("sirab");
        sira_leader = string("sirar");
        sira_leader_frame = string("ridgeRframe_from_marker_left");
        sira_follower_frame = string("ridgeBframe");
    }
    else {
        sira_follower = string("sirar");
        sira_leader = string("sirab");
        sira_leader_frame = string("ridgeBframe_from_marker_right");
        sira_follower_frame = string("ridgeRframe");
    }
}
