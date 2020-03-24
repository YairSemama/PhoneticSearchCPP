#include "doctest.h"
#include <iostream>
#include "PhoneticFinder.hpp"
#include <string>
#define  c "saw vent valking bovls vas wery dovnstairs borest sobt fovls papy peen  jirl porridje eatinj sleepinj ajaingust jolden ajain Onke Goldilokks kold qhair baqc Qame walking broke knocked Qold Khair BaKk Qame waS Saw zaid Goldiloqqz Zomeonez itZ Ztill zhe foreZt Tay Goltilokks porritge taddy anT saiT townsDairs golTen liDTle siTDing sidting sdill Dhere TownsTairs inDo foresd Dime OpUn tuo porridge"
using namespace std;
using namespace phonetic;

TEST_CASE("Shuffle between v and w "){
    CHECK(phonetic::find(c , "saw") == string("saw"));
    CHECK(phonetic::find(c , "wend") == string("vent"));
    CHECK(phonetic::find(c , "walking") == string("valking"));
    CHECK(phonetic::find(c , "bowls") == string("bovls"));
    CHECK(phonetic::find(c , "vas") == string("was"));
    CHECK(phonetic::find(c , "wery") == string("very"));
    CHECK(phonetic::find(c , "dovnstairs") == string("downstairs"));

}

TEST_CASE("Shuffle between b and f and p "){
            CHECK(phonetic::find(c , "borest") == string("forest"));
            CHECK(phonetic::find(c , "porest") == string("forest"));
            CHECK(phonetic::find(c , "sobt") == string("soft"));
            CHECK(phonetic::find(c , "fovls") == string("bowls"));
            CHECK(phonetic::find(c , "papy") == string("baby"));
            CHECK(phonetic::find(c , "peen") == string("been"));

}

TEST_CASE("Shuffle between g and j "){
            CHECK(phonetic::find(c , "jirl") == string("girl"));
            CHECK(phonetic::find(c , "porridje") == string("porridge"));
            CHECK(phonetic::find(c , "eatinj") == string("eating"));
            CHECK(phonetic::find(c , "sleepinj") == string("sleeping"));
            CHECK(phonetic::find(c , "ajain") == string("again"));
            CHECK(phonetic::find(c , "gust") == string("just"));
            CHECK(phonetic::find(c , "jolden") == string("golden"));
            CHECK(phonetic::find(c , "ajain") == string("again"));

}

TEST_CASE("Shuffle between c and k and q  "){
            CHECK(phonetic::find(c , "Onke") == string("once"));
            CHECK(phonetic::find(c , "Goldilokks") == string("Goldilocks"));
            CHECK(phonetic::find(c , "kold") == string("cold"));
            CHECK(phonetic::find(c , "qhair") == string("chair"));
            CHECK(phonetic::find(c , "baqc") == string("back"));
            CHECK(phonetic::find(c , "Qame") == string("came"));
            CHECK(phonetic::find(c , "walking") == string("walking"));
            CHECK(phonetic::find(c , "broke") == string("broke"));
            CHECK(phonetic::find(c , "knocked") == string("knocked"));
            CHECK(phonetic::find(c , "Qold!") == string("cold!"));
            CHECK(phonetic::find(c , "Khair") == string("chair"));
            CHECK(phonetic::find(c , "BaKk") == string("back"));
            CHECK(phonetic::find(c , "Qame") == string("came"));


}

TEST_CASE("Shuffle between s and z "){
            CHECK(phonetic::find(c , "Saw") == string("saw"));
            CHECK(phonetic::find(c , "zaid") == string("said"));
            CHECK(phonetic::find(c , "Goldiloqqz") == string("Goldilocks"));
            CHECK(phonetic::find(c , "Zomeonez") == string("Someones"));
            CHECK(phonetic::find(c , "itZ") == string("its"));
            CHECK(phonetic::find(c , "Ztill") == string("still"));
            CHECK(phonetic::find(c , "zhe") == string("She"));
            CHECK(phonetic::find(c , "foreZt") == string("forest"));

}

TEST_CASE("Shuffle between d and t "){
            CHECK(phonetic::find(c , "Tay") == string("day"));
            CHECK(phonetic::find(c , "Goltilokks") == string("Goldilocks"));
            CHECK(phonetic::find(c , "porritge") == string("porridge"));
            CHECK(phonetic::find(c , "taddy") == string("Daddy"));
            CHECK(phonetic::find(c , "anT") == string("and"));
            CHECK(phonetic::find(c , "saiT") == string("said"));
            CHECK(phonetic::find(c , "townsDairs") == string("downstairs"));
            CHECK(phonetic::find(c , "golTen") == string("golden"));
            CHECK(phonetic::find(c , "liDTle") == string("little"));
            CHECK(phonetic::find(c , "siTDing") == string("sitting"));
            CHECK(phonetic::find(c , "sidting") == string("sitting"));
            CHECK(phonetic::find(c , "sdill") == string("still"));
            CHECK(phonetic::find(c , "Dhere") == string("there"));
            CHECK(phonetic::find(c , "TownsTairs") == string("downstairs"));
            CHECK(phonetic::find(c , "inDo") == string("into"));
            CHECK(phonetic::find(c , "foresd") == string("forest"));
            CHECK(phonetic::find(c , "Dime") == string("time"));

}

TEST_CASE("Shuffle between o and u "){
            CHECK(phonetic::find(c , "OpUn") == string("upon"));
            CHECK(phonetic::find(c , "tuo") == string("too"));
            CHECK(phonetic::find(c , "porridge") == string("porridge));
            CHECK(phonetic::find(c , "soft") == string("soft"));
            CHECK(phonetic::find(c , "hot!") == string("hot!"));
            CHECK(phonetic::find(c , "Soon,") == string("Soon,"));
            CHECK(phonetic::find(c , "‘Someone’s") == string("‘Someone’s"));
            CHECK(phonetic::find(c , "‘Someone’s!") == string("‘Someone’s"));
            CHECK(phonetic::find(c , "Goldilocks") == string("Goldilocks"));
            CHECK(phonetic::find(c , "Goldilocks") == string("Goldilocks"));
            CHECK(phonetic::find(c , "upon") == string("upon"));
            CHECK(phonetic::find(c , "upstairs.") == string("upstairs."));
            CHECK(phonetic::find(c , "Mummy!’") == string("Mummy!’"));
            CHECK(phonetic::find(c , "just") == string("just"));
            CHECK(phonetic::find(c , "But") == string("But"));


}