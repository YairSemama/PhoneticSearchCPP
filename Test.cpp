#include "doctest.h"
#include <iostream>
#include "PhoneticFinder.hpp"
#include <string>
#define  c " KephalupUd lympz hUVever Vythyn deuDhulugycal KUnDexD reBer DenDaKle reZerWed BeeTing affendajes octopuZez soPD futi rapytli alder zhafe enaflinj ZqueeSe japz drayl svym syfhon rezfyratyon locomotion expellynj complex nervous excellend syghd amunj yndellygent behaviourally tiwerze curuna virus demplede UniUn SKSE   maLLUQ  Afkte YzHtY hUt cub QaQy folfol Iayr afErJeL zHyN upstairs pAlAjan dahad lalala  zhLoMY YiY SUOn ylanIa oryeL  yiyiyi  Bot iohoo saw  ieled  MOmmy  IardemshnotzY  ioloy   vent  Ialla yarden  valking    bovls vas wery dovnstairs borest sobt fovls papy peen  jirl porridje eatinj sleepinj ajaingust jolden ajain Onke Goldilokks kold qhair baqc Qame walking broke knocked Qold Khair BaKk Qame waS Saw zaid Goldiloqqz Zomeonez itZ Ztill zhe foreZt Tay Goltilokks porritge taddy anT saiT townsDairs golTen liDTle siTDing sidting sdill Dhere TownsTairs inDo foresd Dime OpUn tuo porridge    "
using namespace std;
using namespace phonetic;

// 7
TEST_CASE("Shuffle between v and w "){
            CHECK(phonetic::find(c , "saw") == string("saw"));
            CHECK(phonetic::find(c , "went") == string("vent"));
            CHECK(phonetic::find(c , "valking") == string("walking"));
            CHECK(phonetic::find(c , "bowls") == string("bovls"));
            CHECK(phonetic::find(c , "was") == string("vas"));
            CHECK(phonetic::find(c , "very") == string("wery"));
            CHECK(phonetic::find(c , "downstairs") == string("dovnstairs"));
}

// 4
TEST_CASE("Shuffle between b and f and p "){
            CHECK(phonetic::find(c , "forest") == string("borest"));
            CHECK(phonetic::find(c , "soft") == string("sobt"));
            CHECK(phonetic::find(c , "baby") == string("papy"));
            CHECK(phonetic::find(c , "been") == string("peen"));
}

// 7
TEST_CASE("Shuffle between g and j "){
            CHECK(phonetic::find(c , "girl") == string("jirl"));
            CHECK(phonetic::find(c , "porridge") == string("porridje"));
            CHECK(phonetic::find(c , "eating") == string("eatinj"));
            CHECK(phonetic::find(c , "sleeping") == string("sleepinj"));
            CHECK(phonetic::find(c , "again") == string("ajain"));
            CHECK(phonetic::find(c , "just") == string("gust"));
            CHECK(phonetic::find(c , "golden") == string("jolden"));
}

// 8
TEST_CASE("Shuffle between c and k and q"){
            CHECK(phonetic::find(c , "once") == string("Onke"));
            CHECK(phonetic::find(c , "Goldilocks") == string("Goldilokks"));
            CHECK(phonetic::find(c , "cold") == string("kold"));
            CHECK(phonetic::find(c , "chair") == string("qhair"));
            CHECK(phonetic::find(c , "back") == string("baqc"));
            CHECK(phonetic::find(c , "came") == string("Qame"));
            CHECK(phonetic::find(c , "broke") == string("broke"));
            CHECK(phonetic::find(c , "knocked") == string("knocked"));
}

// 5
TEST_CASE("Shuffle between s and z "){
            CHECK(phonetic::find(c , "said") == string("zaid"));
            CHECK(phonetic::find(c , "Someones") == string("Zomeonez"));
            CHECK(phonetic::find(c , "itZ") == string("its"));
            CHECK(phonetic::find(c , "still") == string("Ztill"));
            CHECK(phonetic::find(c , "She") == string("zhe"));
}

// 9
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

// 7
TEST_CASE("Shuffle between o and u "){
            CHECK(phonetic::find(c , "upon") == string("UpOn"));
            CHECK(phonetic::find(c , "too") == string("tuo"));
            CHECK(phonetic::find(c , "hot") == string("hUt"));
            CHECK(phonetic::find(c , "Soon") == string("SUOn"));
            CHECK(phonetic::find(c , "upstairs") == string("upstairs"));
            CHECK(phonetic::find(c , "Mommy") == string("MOmmy"));
            CHECK(phonetic::find(c , "But") == string("Bot"));

// 10
}

TEST_CASE("Shuffle between i and y "){
            CHECK(phonetic::find(c , "yair") == string("Iayr"));
            CHECK(phonetic::find(c , "iyi") == string("YiY"));
            CHECK(phonetic::find(c , "yeled") == string("ieled"));
            CHECK(phonetic::find(c , "YardeN") == string("yarden"));
            CHECK(phonetic::find(c , "yalla") == string("Ialla"));
            CHECK(phonetic::find(c , "yoloi") == string("ioloy"));
            CHECK(phonetic::find(c , "yohoo") == string("iohoo"));
            CHECK(phonetic::find(c , "iyiyiy") == string("yiyiyi"));
            CHECK(phonetic::find(c , "yardemshnotzi") == string("IardemshnotzY"));
            CHECK(phonetic::find(c , "ilanya") == string("ylanIa"));

}

//13
TEST_CASE("Shuffle Mix"){
            CHECK(phonetic::find(c , "abcde") == string("Afkte"));
            CHECK(phonetic::find(c , "malloc") == string("maLLUQ"));
            CHECK(phonetic::find(c , "uriel") == string("oryeL"));
            CHECK(phonetic::find(c , "shlomi") == string("zhLoMY"));
            CHECK(phonetic::find(c , "balagan") == string("pAlAjan"));
            CHECK(phonetic::find(c , "kof") == string("cub"));
            CHECK(phonetic::find(c , "lalala") == string("lalala"));
            CHECK(phonetic::find(c , "tahat") == string("dahad"));
            CHECK(phonetic::find(c , "ishti") == string("YzHtY"));
            CHECK(phonetic::find(c , "abergel") == string("afErJeL"));
            CHECK(phonetic::find(c , "kaki") == string("QaQy"));
            CHECK(phonetic::find(c , "bolbol") == string("folfol"));
            CHECK(phonetic::find(c , "shin") == string("zHyN"));
}

// 39
TEST_CASE("Shuffle Mix 2"){
            CHECK(phonetic::find(c , "cephalopod") == string("KephalupUd"));
            CHECK(phonetic::find(c , "limbs") == string("lympz"));
            CHECK(phonetic::find(c , "however") == string("hUVever"));
            CHECK(phonetic::find(c , "within") == string("Vythyn"));
            CHECK(phonetic::find(c , "teuthological") == string("deuDhulugycal"));
            CHECK(phonetic::find(c , "context") == string("KUnDexD"));
            CHECK(phonetic::find(c , "refer") == string("reBer"));
            CHECK(phonetic::find(c , "tentacle") == string("DenDaKle"));
            CHECK(phonetic::find(c , "reserved") == string("reZerWed"));
            CHECK(phonetic::find(c , "feeding") == string("BeeTing"));
            CHECK(phonetic::find(c , "appendages") == string("affendajes"));
            CHECK(phonetic::find(c , "octopuses") == string("octopuZez"));
            CHECK(phonetic::find(c , "soft") == string("soPD"));
            CHECK(phonetic::find(c , "body") == string("futi"));
            CHECK(phonetic::find(c , "rapidly") == string("rapytli"));
            CHECK(phonetic::find(c , "alter") == string("alder"));
            CHECK(phonetic::find(c , "shape") == string("zhafe"));
            CHECK(phonetic::find(c , "enabling") == string("enaflinj"));
            CHECK(phonetic::find(c , "squeeze") == string("ZqueeSe"));
            CHECK(phonetic::find(c , "gaps") == string("japz"));
            CHECK(phonetic::find(c , "trail") == string("drayl"));
            CHECK(phonetic::find(c , "swim") == string("svym"));
            CHECK(phonetic::find(c , "siphon") == string("syfhon"));
            CHECK(phonetic::find(c , "respiration") == string("rezfyratyon"));
            CHECK(phonetic::find(c , "locomotion") == string("locomotion"));
            CHECK(phonetic::find(c , "expelling") == string("expellynj"));
            CHECK(phonetic::find(c , "complex") == string("complex"));
            CHECK(phonetic::find(c , "nervous") == string("nervous"));
            CHECK(phonetic::find(c , "excellent") == string("excellend"));
            CHECK(phonetic::find(c , "sight") == string("syghd"));
            CHECK(phonetic::find(c , "among") == string("amunj"));
            CHECK(phonetic::find(c , "intelligent") == string("yndellygent"));
            CHECK(phonetic::find(c , "behaviourally") == string("behaviourally"));
            CHECK(phonetic::find(c , "diverse") == string("tiwerze"));
            CHECK(phonetic::find(c , "corona") == string("curuna"));
            CHECK(phonetic::find(c , "virus") == string("virus"));
            CHECK(phonetic::find(c , "templete") == string("demplede"));
            CHECK(phonetic::find(c , "onion") == string("UniUn"));
            CHECK(phonetic::find(c , "zqze") == string("SKSE"));

}