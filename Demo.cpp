/**
 * Demo program for Gimatriya calculation.
 * 
 * Date: 2020-02
 */
#include "PhoneticFinder.hpp"
#include <iostream>
#include <stdexcept>
#define  c " KephalupUd lympz hUVever Vythyn deuDhulugycal KUnDexD reBer DenDaKle reZerWed BeeTing affendajes octopuZez soPD futi rapytli alder zhafe enaflinj ZqueeSe japz drayl svym syfhon rezfyratyon locomotion expellynj complex nervous excellend syghd amunj yndellygent behaviourally tiwerze curuna virus demplede UniUn SKSE   maLLUQ  Afkte YzHtY hUt cub QaQy folfol Iayr afErJeL zHyN upstairs pAlAjan dahad lalala  zhLoMY YiY SUOn ylanIa oryeL  yiyiyi  Bot iohoo saw  ieled  MOmmy  IardemshnotzY  ioloy   vent  Ialla yarden  valking    bovls vas wery dovnstairs borest sobt fovls papy peen  jirl porridje eatinj sleepinj ajaingust jolden ajain Onke Goldilokks kold qhair baqc Qame walking broke knocked Qold Khair BaKk Qame waS Saw zaid Goldiloqqz Zomeonez itZ Ztill zhe foreZt Tay Goltilokks porritge taddy anT saiT townsDairs golTen liDTle siTDing sidting sdill Dhere TownsTairs inDo foresd Dime OpUn tuo porridge    "

using namespace std;
int main() {
	string text = "Dond vorri be haffy";
    cout << phonetic::find(c , "saw") << endl;
    cout << phonetic::find(c , "went") << endl;
    cout <<phonetic::find(c , "walking") << endl;  // should print "haffy"
	try {
		cout << phonetic::find(text, "happ") << endl;   // should throw an exception - "happ" is not a full word in the sentence
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Did not find the word 'happ' in the text"
	}
}
