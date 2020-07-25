#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of v and w") {
    string text = "wake me up when windows vista gets better than windows ten";
    CHECK(find(text, "wake") == string("wake"));
    CHECK(find(text, "vake") == string("wake"));
    CHECK(find(text, "when") == string("when"));
    CHECK(find(text, "vhen") == string("when"));
    CHECK(find(text, "windows") == string("windows"));
    CHECK(find(text, "windovs") == string("windows"));
    CHECK(find(text, "vindows") == string("windows"));
    CHECK(find(text, "vindovs") == string("windows"));
    CHECK(find(text, "vista") == string("vista"));
    CHECK(find(text, "wista") == string("vista"));
}

TEST_CASE("Test replacement of b and f and p") {
    string text = "practice makes perfect";
    CHECK(find(text, "practice") == string("practice"));
    CHECK(find(text, "fractice") == string("practice"));
    CHECK(find(text, "bractice") == string("practice"));
    CHECK(find(text, "perpect") == string("perfect"));
    CHECK(find(text, "perfect") == string("perfect"));
    CHECK(find(text, "perbect") == string("perfect"));
    CHECK(find(text, "ferfect") == string("perfect"));
    CHECK(find(text, "ferpect") == string("perfect"));
    CHECK(find(text, "ferbect") == string("perfect"));
    CHECK(find(text, "berbect") == string("perfect"));
    CHECK(find(text, "berpect") == string("perfect"));
    CHECK(find(text, "berfect") == string("perfect"));
}

TEST_CASE("Test replacement of g and j") {
    string text = "good morning my name is jarin";
    CHECK(find(text, "good") == string("good"));
    CHECK(find(text, "jood") == string("good"));
    CHECK(find(text, "morning") == string("morning"));
    CHECK(find(text, "morninj") == string("morning"));
    CHECK(find(text, "jarin") == string("jarin"));
    CHECK(find(text, "garin") == string("jarin"));
    text = "gordan and jarin are the best programmers in ariel";
    CHECK(find(text, "gordan") == string("gordan"));
    CHECK(find(text, "jordan") == string("gordan"));
    CHECK(find(text, "programmers") == string("programmers"));
    CHECK(find(text, "projrammers") == string("programmers"));
}

TEST_CASE("Test replacement of c and k and q") {
    string text = "he is quiet and kalm when he is qooking ";
    CHECK(find(text, "qooking") == string("qooking"));
    CHECK(find(text, "cooking") == string("qooking"));
    CHECK(find(text, "kooking") == string("qooking"));
    CHECK(find(text, "koocing") == string("qooking"));
    CHECK(find(text, "qooqing") == string("qooking"));
    CHECK(find(text, "kuiet") == string("quiet"));
    CHECK(find(text, "cuiet") == string("quiet"));
    CHECK(find(text, "quiet") == string("quiet"));
    CHECK(find(text, "calm") == string("kalm"));
    CHECK(find(text, "calm") == string("kalm"));
    CHECK(find(text, "qalm") == string("kalm"));
    CHECK(find(text, "kalm") == string("kalm"));
}

TEST_CASE("Test replacement of s and z") {
    string text = " shazam zoom and waze are a great apps ";
    CHECK(find(text, "shazam") == string("shazam"));
    CHECK(find(text, "shasam") == string("shazam"));
    CHECK(find(text, "zhazam") == string("shazam"));
    CHECK(find(text, "zhasam") == string("shazam"));
    CHECK(find(text, "apps") == string("apps"));
    CHECK(find(text, "appz") == string("apps"));
    CHECK(find(text, "zoom") == string("zoom"));
    CHECK(find(text, "soom") == string("zoom"));
    CHECK(find(text, "waze") == string("waze"));
    CHECK(find(text, "wase") == string("waze"));
}

TEST_CASE("Test replacement of d and t") {
    string text = "the database is shutdown";
    CHECK(find(text, "the") == string("the"));
    CHECK(find(text, "dhe") == string("the"));
    CHECK(find(text, "database") == string("database"));
    CHECK(find(text, "tatabase") == string("database"));
    CHECK(find(text, "tadabase") == string("database"));
    CHECK(find(text, "dadabase") == string("database"));
    CHECK(find(text, "shutdown") == string("shutdown"));
    CHECK(find(text, "shuttown") == string("shutdown"));
    CHECK(find(text, "shuddown") == string("shutdown"));
    CHECK(find(text, "shudtown") == string("shutdown"));

}

TEST_CASE("Test replacement of o and u") {
    string text = "yesterday you said tomorrow just do it";
    CHECK(find(text, "you") == string("you"));
    CHECK(find(text, "yuo") == string("you"));
    CHECK(find(text, "yoo") == string("you"));
    CHECK(find(text, "yuu") == string("you"));
    CHECK(find(text, "tomorrow") == string("tomorrow"));
    CHECK(find(text, "tumorrow") == string("tomorrow"));
    CHECK(find(text, "tumurrow") == string("tomorrow"));
    CHECK(find(text, "tumurruw") == string("tomorrow"));
    CHECK(find(text, "tomurruw") == string("tomorrow"));
    CHECK(find(text, "tomorruw") == string("tomorrow"));
    CHECK(find(text, "tumorruw") == string("tomorrow"));
    CHECK(find(text, "tomurrow") == string("tomorrow"));
    CHECK(find(text, "just") == string("just"));
    CHECK(find(text, "jost") == string("just"));
    CHECK(find(text, "do") == string("do"));
    CHECK(find(text, "du") == string("do"));
}

TEST_CASE("Test replacement of i and y") {
    string text = " everything you can imagine is real";
    CHECK(find(text, "everything") == string("everything"));
    CHECK(find(text, "everithing") == string("everything"));
    CHECK(find(text, "everythyng") == string("everything"));
    CHECK(find(text, "everithyng") == string("everything"));
    CHECK(find(text, "imagine") == string("imagine"));
    CHECK(find(text, "ymagine") == string("imagine"));
    CHECK(find(text, "imagyne") == string("imagine"));
    CHECK(find(text, "ymagyne") == string("imagine"));
    CHECK(find(text, "is") == string("is"));
    CHECK(find(text, "ys") == string("is"));
    CHECK(find(text, "you") == string("you"));
    CHECK(find(text, "iou") == string("you"));
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Jordan Stav and Yarin";
    CHECK(find(text, "Jordan") == string("Jordan"));
    CHECK(find(text, "Yarin") == string("Yarin"));
    CHECK(find(text, "Stav") == string("Stav"));
    CHECK(find(text, "jordan") == string("Jordan"));
    CHECK(find(text, "yarin") == string("Yarin"));
    CHECK(find(text, "stav") == string("Stav"));
    CHECK(find(text, "JORDAN") == string("Jordan"));
    CHECK(find(text, "YARIN") == string("Yarin"));
    CHECK(find(text, "STAV") == string("Stav"));
}