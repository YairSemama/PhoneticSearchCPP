#include "doctest.h"
#include <iostream>
#include "PhoneticFinder.hpp"
#include <string>
#define c "Once upon a time there was a little girl Her name was Goldilocks She had golden hair One day Goldilocks was walking in the forest She saw a house and knocked on the door She went inside Nobody was there Goldilocks saw three bowls on the table She was hungry This porridge is too hot This porridge is too cold This porridge is just right Goldilocks ate all the porridge Goldilocks was tired now This chair is too big This chair is too big too This chair is just right But the chair broke Goldilocks was very tired She went upstairs This bed is too hard This bed is too soft This bed is just right Soon the bears came home Someones been eating my porridge said Daddy Bear Someones been eating my porridge said Mummy Bear Someones been eating my porridge and its all gone said Baby Bear Someones been sitting on my chair said Daddy Bear Someones been sitting on my chair said Mummy Bear Someones been sitting on my chair and its broken said Baby Bear Someones been sleeping in my bed said Daddy Bear Someones been sleeping in my bed said Mummy Bear Someones been sleeping in my bed and shes still there said Baby Bear Goldilocks woke up and saw the three bears Help She ran downstairs and into the forest She never came back again"
using namespace std;

TEST_CASE("Shuffle between v and w "){
    CHECK(phonetic::find(c , "sav") == string("saw"));
    CHECK(phonetic::find(c , "vent") == string("went"));
    CHECK(phonetic::find(c , "valking") == string("walking"));
    CHECK(phonetic::find(c , "bovls") == string("bowls"));
    CHECK(phonetic::find(c , "vas") == string("was"));
    CHECK(phonetic::find(c , "wery") == string("very"));
    CHECK(phonetic::find(c , "dovnstairs") == string("downstairs"));

}

TEST_CASE("Shuffle between b and f and p "){
            CHECK(phonetic::find(c , "borest") == string("forest"));
            CHECK(phonetic::find(c , "porest") == string("forest"));
            CHECK(phonetic::find(c , "sobt") == string("soft"));
            CHECK(phonetic::find(c , "fovls") == string("bowls"));
            CHECK(phonetic::find(c , "powls") == string("bowls"));
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
            CHECK(phonetic::find(c , "Goldiloqqs") == string("Goldilocks"));
            CHECK(phonetic::find(c , "walking") == string("walking"));
            CHECK(phonetic::find(c , "broke!") == string("broke!"));
            CHECK(phonetic::find(c , "knocked") == string("knocked"));
            CHECK(phonetic::find(c , "Qold!") == string("cold!"));
            CHECK(phonetic::find(c , "Khair!’") == string("chair!’"));
            CHECK(phonetic::find(c , "BaKk") == string("back"));
            CHECK(phonetic::find(c , "Qame") == string("came"));
            CHECK(phonetic::find(c , "GoldiloQQs") == string("Goldilocks"));


}

TEST_CASE("Shuffle between s and z "){
            CHECK(phonetic::find(c , "waS") == string("was"));
            CHECK(phonetic::find(c , "waZ") == string("was"));
            CHECK(phonetic::find(c , "GoldilockS") == string("Goldilocks"));
            CHECK(phonetic::find(c , "Goldilockz") == string("Goldilocks"));
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
            CHECK(phonetic::find(c , "liDTle!") == string("little"));
            CHECK(phonetic::find(c , "liTDle") == string("little"));
            CHECK(phonetic::find(c , "siTDing") == string("sitting"));
            CHECK(phonetic::find(c , "sidting") == string("sitting"));
            CHECK(phonetic::find(c , "sdill") == string("still"));
            CHECK(phonetic::find(c , "Dhere!’") == string("there!’"));
            CHECK(phonetic::find(c , "TownsTairs") == string("downstairs"));
            CHECK(phonetic::find(c , "inDo") == string("into"));
            CHECK(phonetic::find(c , "foresd") == string("forest"));
            CHECK(phonetic::find(c , "Dime") == string("time"));

}

TEST_CASE("Shuffle between o and u "){
            CHECK(phonetic::find(c , "Tay") == string("day"));
            CHECK(phonetic::find(c , "Goltilokks") == string("Goldilocks"));
            CHECK(phonetic::find(c , "porritge") == string("porridge"));
            CHECK(phonetic::find(c , "taddy") == string("Daddy"));
            CHECK(phonetic::find(c , "anT") == string("and"));
            CHECK(phonetic::find(c , "saiT") == string("said"));
            CHECK(phonetic::find(c , "townsDairs") == string("downstairs"));
            CHECK(phonetic::find(c , "golTen") == string("golden"));
            CHECK(phonetic::find(c , "liDTle!") == string("little"));
            CHECK(phonetic::find(c , "liTDle") == string("little"));
            CHECK(phonetic::find(c , "siTDing") == string("sitting"));
            CHECK(phonetic::find(c , "sidting") == string("sitting"));
            CHECK(phonetic::find(c , "sdill") == string("still"));
            CHECK(phonetic::find(c , "Dhere!’") == string("there!’"));
            CHECK(phonetic::find(c , "TownsTairs") == string("downstairs"));
            CHECK(phonetic::find(c , "inDo") == string("into"));
            CHECK(phonetic::find(c , "foresd") == string("forest"));
            CHECK(phonetic::find(c , "Dime") == string("time"));

}