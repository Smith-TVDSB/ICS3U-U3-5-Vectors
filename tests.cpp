// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"

#include "student.hpp" // student implementations

//TESTS

TEST_CASE("Exercise One") //Named ExerciseOne, tagged with example
{
    CHECK(exerciseOne({61, 98, 59, 73, 1, 100, 62, 21, 89, 91},62) == 6);
    CHECK(exerciseOne({61, 98, 59, 73, 1, 100, 62, 21, 89, 91},67) == -1);
    CHECK(exerciseOne({62, 98, 59, 73, 1, 100, 62, 21, 89, 91},62) == 0);
    CHECK(exerciseOne({61, 98, 59, 73, 1, 100, 62, 21, 89, 91},100) == 5);
    CHECK(exerciseOne({52, 37, 635, 742, 539, 655, 214, 159, 983, 908, 729, 6, 387, 17, 962, 638, 338, 912, 446, 887, 34, 36, 370, 233, 76, 146, 317, 692, 560, 325, 187, 695, 874, 749, 678, 301, 541, 797, 344, 440, 968, 920, 945, 967, 37, 115, 604, 812, 716, 232, 229, 212, 256, 312, 341, 545, 441, 311, 228, 651, 335, 625, 11, 828, 316, 116, 325, 266, 938, 525, 281, 345, 93, 307, 349, 569, 756, 805, 900, 31, 310, 247, 472, 494, 516, 938, 555, 81, 683, 159, 712, 36, 912, 273, 617, 9, 543, 519, 100, 18}, 214) == 6);
    CHECK(exerciseOne({440, 948, 538, 4, 447, 690, 279, 654, 487, 527, 70, 419, 61, 673, 952, 208, 546, 309, 645, 954, 132, 608, 117, 531, 462, 135, 444, 491, 870, 514, 77, 495, 82, 565, 867, 158, 577, 94, 976, 773, 398, 908, 55, 232, 754, 453, 960, 194, 196, 937, 863, 999, 687, 22, 535, 831, 51, 849, 633, 950, 980, 530, 173, 390, 818, 674, 880, 186, 640, 589, 41, 723, 277, 583, 136, 295, 368, 4, 119, 857, 283, 719, 660, 539, 62, 538, 520, 497, 310, 595, 164, 609, 329, 576, 575, 552, 248, 769, 971, 820}, 51) == 56);
    CHECK(exerciseOne({207, 508, 84, 1000, 850, 667, 683, 485, 373, 163, 119, 45, 33, 861, 352, 492, 758, 327, 414, 118, 177, 41, 237, 738, 94, 962, 654, 74, 782, 785, 888, 784, 602, 681, 75, 356, 422, 615, 301, 602, 195, 828, 963, 52, 178, 188, 31, 780, 794, 526, 100, 657, 692, 455, 634, 279, 665, 996, 493, 753, 257, 11, 18, 662, 911, 658, 628, 385, 117, 188, 456, 611, 96, 514, 415, 458, 193, 340, 90, 943, 656, 271, 570, 351, 873, 992, 979, 458, 853, 338, 995, 995, 920, 429, 911, 919, 92, 700, 206, 940}, 193) == 76);
}

TEST_CASE("Exercise Two")
{
    CHECK(exerciseTwo({"banana","apple","orange","grapes","pear"}) == "apple");
    CHECK(exerciseTwo({"squirtle", "charmander", "bulbasaur","pikachu"}) == "bulbasaur");
    CHECK(exerciseTwo({"z","x","y","h","t","c"}) == "c");
}

// Notes for teacher: 
// can use variables and libraries
// can use logic operators and loops
// you can run a specific test by using ./tests <TEST CASE NAME HERE>


