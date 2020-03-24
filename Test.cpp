#include "doctest.h"
#include <iostream>
#include "PhoneticFinder.hpp"
#include <string>
#define  c "saw vent valking bovls vas wery dovnstairs borest sobt fovls papy peen  jirl porridje eatinj sleepinj ajaingust jolden ajain Onke Goldilokks kold qhair baqc Qame walking broke knocked Qold Khair BaKk Qame waS Saw zaid Goldiloqqz Zomeonez itZ Ztill zhe foreZt Tay Goltilokks porritge taddy anT saiT townsDairs golTen liDTle siTDing sidting sdill Dhere TownsTairs inDo foresd Dime OpUn tuo porridge"
using namespace std;
using namespace phonetic;

TEST_CASE("Shuffle between v and w "){
            CHECK(phonetic::find(c , "saw") == string("saw"));
            CHECK(phonetic::find(c , "went") == string("vent"));
            CHECK(phonetic::find(c , "valking") == string("walking"));
            CHECK(phonetic::find(c , "bowls") == string("bovls"));
            CHECK(phonetic::find(c , "was") == string("vas"));
            CHECK(phonetic::find(c , "very") == string("wery"));
            CHECK(phonetic::find(c , "downstairs") == string("dovnstairs"));
}

TEST_CASE("Shuffle between b and f and p "){
            CHECK(phonetic::find(c , "forest") == string("borest"));
            CHECK(phonetic::find(c , "soft") == string("sobt"));
            CHECK(phonetic::find(c , "baby") == string("papy"));
            CHECK(phonetic::find(c , "been") == string("peen"));
}

TEST_CASE("Shuffle between g and j "){
            CHECK(phonetic::find(c , "girl") == string("jirl"));
            CHECK(phonetic::find(c , "porridge") == string("porridje"));
            CHECK(phonetic::find(c , "eating") == string("eatinj"));
            CHECK(phonetic::find(c , "sleeping") == string("sleepinj"));
            CHECK(phonetic::find(c , "again") == string("ajain"));
            CHECK(phonetic::find(c , "just") == string("gust"));
            CHECK(phonetic::find(c , "golden") == string("jolden"));
}

TEST_CASE("Shuffle between c and k and q  "){
            CHECK(phonetic::find(c , "once") == string("Onke"));
            CHECK(phonetic::find(c , "Goldilocks") == string("Goldilokks"));
            CHECK(phonetic::find(c , "cold") == string("kold"));
            CHECK(phonetic::find(c , "chair") == string("qhair"));
            CHECK(phonetic::find(c , "back") == string("baqc"));
            CHECK(phonetic::find(c , "came") == string("Qame"));
            CHECK(phonetic::find(c , "broke") == string("broke"));
            CHECK(phonetic::find(c , "knocked") == string("knocked"));
}

TEST_CASE("Shuffle between s and z "){
            CHECK(phonetic::find(c , "said") == string("zaid"));
            CHECK(phonetic::find(c , "Someones") == string("Zomeonez"));Someones
            CHECK(phonetic::find(c , "itZ") == string("its"));
            CHECK(phonetic::find(c , "still") == string("Ztill"));
            CHECK(phonetic::find(c , "She") == string("zhe"));
}

TEST_CASE("Shuffle between d and t "){
            CHECK(phonetic::find(c , "day") == string("Tay"));
            CHECK(phonetic::find(c , "Daddy") == string("taddy"));
            CHECK(phonetic::find(c , "and") == string("anT"));
            CHECK(phonetic::find(c , "little") == string("liDTle"));
            CHECK(phonetic::find(c , "sitting") == string("sidting"));
            CHECK(phonetic::find(c , "there") == string("Dhere"));
            CHECK(phonetic::find(c , "into") == string("inDo"));
            CHECK(phonetic::find(c , "forest") == string("foresd"));
            CHECK(phonetic::find(c , "time") == string("Dime"));

}

TEST_CASE("Shuffle between o and u "){
            CHECK(phonetic::find(c , "upon") == string("UpOn"));
            CHECK(phonetic::find(c , "too") == string("tuo"));
        //    CHECK(phonetic::find(c , "hot!") == string("hot!"));
        //    CHECK(phonetic::find(c , "Soon,") == string("Soon,"));
        //    CHECK(phonetic::find(c , "‘Someone’s") == string("‘Someone’s"));
        //    CHECK(phonetic::find(c , "upstairs.") == string("upstairs."));
        //    CHECK(phonetic::find(c , "Mummy!’") == string("Mummy!’"));
        //    CHECK(phonetic::find(c , "just") == string("just"));
        //    CHECK(phonetic::find(c , "But") == string("But"));


}