//g++ -std=c++1z t.cpp -o t
#include <iostream>
#include <string>
#include <map>
#include <unistd.h>
#include "UNICODE_SYMBOLS.h"

void progress_bar(std::string uni_char);
void progress_bar(std::string arr[]);

int main(int argc, char **argv){
	std::string uni_symbols[] = {"💘",
	    "💝","💖","💗","💓","💞","💕","💟","❣","💔","❤","🧡","💛","💚","💙","💜",
	    "🖤","💯","💢","💬","👁️‍🗨️","🗯","💭","💤","💮","♨","💈","🛑","🕛","🕧","🕐",
	    "🕜","🕑","🕝","🕒","🕞","🕓","🕟","🕔","🕠","🕕","🕡","🕖","🕢","🕗","🕣",
	    "🕘","🕤","🕙","🕥","🕚","🕦","🌀","♠","♥","♦","♣","🃏","🀄","🎴","🔇","🔈",
	    "🔉","🔊","📢","📣","📯","🔔","🔕","🎵","🎶","🏧","🚮","🚰","♿","🚹","🚺",
	    "🚻","🚼","🚾","⚠","🚸","⛔","🚫","🚳","🚭","🚯","🚱","🚷","🔞","☢","☣","⬆",
	    "↗","➡","↘","⬇","↙","⬅","↖","↕","↔","↩","↪","⤴","⤵","🔃","🔄","🔙","🔚","🔛",
	    "🔜","🔝","🛐","⚛","🕉","✡","☸","☯","✝","☦","☪","☮","🕎","🔯","♈","♉","♊",
	    "♋","♌","♍","♎","♏","♐","♑","♒","♓","⛎","🔀","🔁","🔂","▶","⏩","◀",
	    "⏪","🔼","⏫","🔽","⏬","⏹","⏏","🎦","🔅","🔆","📶","📳","📴","♾","♻","🔱",
	    "📛","🔰","⭕","✅","☑","✔","✖","❌","❎","➕","➖","➗","➰","➿","〽","✳","✴",
	    "❇","‼","⁉","❓","❔","❕","❗","©","®","™","#️⃣","0️⃣","1️⃣","2️⃣","3️⃣","4️⃣","5️⃣",
	    "6️⃣","7️⃣","8️⃣","9️⃣","🔟","🔠","🔡","🔢","🔣","🔤","🅰","🆎","🅱","🆑","🆒","🆓",
	    "ℹ","🆔","Ⓜ","🆕","🆖","🅾","🆗","🅿","🆘","🆙","🆚","🈁","🈂","🈷","🈶","🈯",
	    "🉐","🈹","🈚","🈲","🉑","🈸","🈴","🈳","㊗","㊙","🈺","🈵","🔴","🔵","⚫","⚪",
	    "⬛","⬜","◼","◻","◾","◽","▪","🔶","🔷","🔸","🔹","🔺","🔻","💠","🔳","🔲"};
	std::string uni_symbols_labels[]={

    "HEART_WITH_ARROW",
"HEART_WITH_RIBBON",
"SPARKLING_HEART",
"GROWING_HEART",
"BEATING_HEART",
"REVOLVING_HEARTS",
"TWO_HEARTS",
"HEART_DECORATION",
"HEAVY_HEART_EXCLAMATION",
"BROKEN_HEART",
"RED_HEART",
"ORANGE_HEART",
"YELLOW_HEART",
"GREEN_HEART",
"BLUE_HEART",
"PURPLE_HEART",
"BLACK_HEART",
"HUNDRED_POINTS",
"ANGER_SYMBOL",
"SPEECH_BALLOON",
"EYE_IN_SPEECH_BUBBLE",
"RIGHT_ANGER_BUBBLE",
"THOUGHT_BALLOON",
"ZZZ",
"WHITE_FLOWER",
"HOT_SPRINGS",
"BARBER_POLE",
"STOP_SIGN",
"TWELVE_O’CLOCK",
"TWELVE_THIRTY",
"ONE_O’CLOCK",
"ONE_THIRTY",
"TWO_O’CLOCK",
"TWO_THIRTY",
"THREE_O’CLOCK",
"THREE_THIRTY",
"FOUR_O’CLOCK",
"FOUR_THIRTY",
"FIVE_O’CLOCK",
"FIVE_THIRTY",
"SIX_O’CLOCK",
"SIX_THIRTY",
"SEVEN_O’CLOCK",
"SEVEN_THIRTY",
"EIGHT_O’CLOCK",
"EIGHT_THIRTY",
"NINE_O’CLOCK",
"NINE_THIRTY",
"TEN_O’CLOCK",
"TEN_THIRTY",
"ELEVEN_O’CLOCK",
"ELEVEN_THIRTY",
"CYCLONE",
"SPADE_SUIT",
"HEART_SUIT",
"DIAMOND_SUIT",
"CLUB_SUIT",
"JOKER",
"MAHJONG_RED_DRAGON",
"FLOWER_PLAYING_CARDS",
"MUTED_SPEAKER",
"SPEAKER_LOW_VOLUME",
"SPEAKER_MEDIUM_VOLUME",
"SPEAKER_HIGH_VOLUME",
"LOUDSPEAKER",
"MEGAPHONE",
"POSTAL_HORN",
"BELL",
"BELL_WITH_SLASH",
"MUSICAL_NOTE",
"MUSICAL_NOTES",
"ATM_SIGN",
"LITTER_IN_BIN_SIGN",
"POTABLE_WATER",
"WHEELCHAIR_SYMBOL",
"MEN’S_ROOM",
"WOMEN’S_ROOM",
"RESTROOM",
"BABY_SYMBOL",
"WATER_CLOSET",
"WARNING",
"CHILDREN_CROSSING",
"NO_ENTRY",
"PROHIBITED",
"NO_BICYCLES",
"NO_SMOKING",
"NO_LITTERING",
"NON-POTABLE_WATER",
"NO_PEDESTRIANS",
"NO_ONE_UNDER_EIGHTEEN",
"RADIOACTIVE",
"BIOHAZARD",
"UP_ARROW",
"UP-RIGHT_ARROW",
"RIGHT_ARROW",
"DOWN-RIGHT_ARROW",
"DOWN_ARROW",
"DOWN-LEFT_ARROW",
"LEFT_ARROW",
"UP-LEFT_ARROW",
"UP-DOWN_ARROW",
"LEFT-RIGHT_ARROW",
"RIGHT_ARROW_CURVING_LEFT",
"LEFT_ARROW_CURVING_RIGHT",
"RIGHT_ARROW_CURVING_UP",
"RIGHT_ARROW_CURVING_DOWN",
"CLOCKWISE_VERTICAL_ARROWS",
"COUNTERCLOCKWISE_ARROWS_BUTTON",
"BACK_ARROW",
"END_ARROW",
"ON!_ARROW",
"SOON_ARROW",
"TOP_ARROW",
"PLACE_OF_WORSHIP",
"ATOM_SYMBOL",
"OM",
"STAR_OF_DAVID",
"WHEEL_OF_DHARMA",
"YIN_YANG",
"LATIN_CROSS",
"ORTHODOX_CROSS",
"STAR_AND_CRESCENT",
"PEACE_SYMBOL",
"MENORAH",
"DOTTED_SIX-POINTED_STAR",
"ARIES",
"TAURUS",
"GEMINI",
"CANCER",
"LEO",
"VIRGO",
"LIBRA",
"SCORPIO",
"SAGITTARIUS",
"CAPRICORN",
"AQUARIUS",
"PISCES",
"OPHIUCHUS",
"SHUFFLE_TRACKS_BUTTON",
"REPEAT_BUTTON",
"REPEAT_SINGLE_BUTTON",
"PLAY_BUTTON",
"FAST-FORWARD_BUTTON",
"REVERSE_BUTTON",
"FAST_REVERSE_BUTTON",
"UPWARDS_BUTTON",
"FAST_UP_BUTTON",
"DOWNWARDS_BUTTON",
"FAST_DOWN_BUTTON",
"STOP_BUTTON",
"EJECT_BUTTON",
"CINEMA",
"DIM_BUTTON",
"BRIGHT_BUTTON",
"ANTENNA_BARS",
"VIBRATION_MODE",
"MOBILE_PHONE_OFF",
"INFINITY",
"RECYCLING_SYMBOL",
"TRIDENT_EMBLEM",
"NAME_BADGE",
"JAPANESE_SYMBOL_FOR_BEGINNER",
"HEAVY_LARGE_CIRCLE",
"WHITE_HEAVY_CHECK_MARK",
"BALLOT_BOX_WITH_CHECK",
"HEAVY_CHECK_MARK",
"HEAVY_MULTIPLICATION_X",
"CROSS_MARK",
"CROSS_MARK_BUTTON",
"HEAVY_PLUS_SIGN",
"HEAVY_MINUS_SIGN",
"HEAVY_DIVISION_SIGN",
"CURLY_LOOP",
"DOUBLE_CURLY_LOOP",
"PART_ALTERNATION_MARK",
"EIGHT-SPOKED_ASTERISK",
"EIGHT-POINTED_STAR",
"SPARKLE",
"DOUBLE_EXCLAMATION_MARK",
"EXCLAMATION_QUESTION_MARK",
"QUESTION_MARK",
"WHITE_QUESTION_MARK",
"WHITE_EXCLAMATION_MARK",
"EXCLAMATION_MARK",
"COPYRIGHT",
"REGISTERED",
"TRADE_MARK",
"KEYCAP_NUMBER_SIGN",
"KEYCAP_DIGIT_ZERO",
"KEYCAP_DIGIT_ONE",
"KEYCAP_DIGIT_TWO",
"KEYCAP_DIGIT_THREE",
"KEYCAP_DIGIT_FOUR",
"KEYCAP_DIGIT_FIVE",
"KEYCAP_DIGIT_SIX",
"KEYCAP_DIGIT_SEVEN",
"KEYCAP_DIGIT_EIGHT",
"KEYCAP_DIGIT_NINE",
"KEYCAP:_10",
"INPUT_LATIN_UPPERCASE",
"INPUT_LATIN_LOWERCASE",
"INPUT_NUMBERS",
"INPUT_SYMBOLS",
"INPUT_LATIN_LETTERS",
"A_BUTTON_(BLOOD_TYPE)",
"AB_BUTTON_(BLOOD_TYPE)",
"B_BUTTON_(BLOOD_TYPE)",
"CL_BUTTON",
"COOL_BUTTON",
"FREE_BUTTON",
"INFORMATION",
"ID_BUTTON",
"CIRCLED_M",
"NEW_BUTTON",
"NG_BUTTON",
"O_BUTTON_(BLOOD_TYPE)",
"OK_BUTTON",
"P_BUTTON",
"SOS_BUTTON",
"UP!_BUTTON",
"VS_BUTTON",
"JAPANESE_HERE_BUTTON",
"JAPANESE_SERVICE_CHARGE_BUTTON",
"JAPANESE_MONTHLY_AMOUNT_BUTTON",
"JAPANESE_NOT_FREE_OF_CHARGE_BUTTON",
"JAPANESE_RESERVED_BUTTON",
"JAPANESE_BARGAIN_BUTTON",
"JAPANESE_DISCOUNT_BUTTON",
"JAPANESE_FREE_OF_CHARGE_BUTTON",
"JAPANESE_PROHIBITED_BUTTON",
"JAPANESE_ACCEPTABLE_BUTTON",
"JAPANESE_APPLICATION_BUTTON",
"JAPANESE_PASSING_GRADE_BUTTON",
"JAPANESE_VACANCY_BUTTON",
"JAPANESE_CONGRATULATIONS_BUTTON",
"JAPANESE_SECRET_BUTTON",
"JAPANESE_OPEN_FOR_BUSINESS_BUTTON",
"JAPANESE_NO_VACANCY_BUTTON",
"RED_CIRCLE",
"BLUE_CIRCLE",
"BLACK_CIRCLE",
"WHITE_CIRCLE",
"BLACK_LARGE_SQUARE",
"WHITE_LARGE_SQUARE",
"BLACK_MEDIUM_SQUARE",
"WHITE_MEDIUM_SQUARE",
"BLACK_MEDIUM-SMALL_SQUARE",
"WHITE_MEDIUM-SMALL_SQUARE",
"BLACK_SMALL_SQUARE",
"WHITE_SMALL_SQUARE",
"LARGE_ORANGE_DIAMOND",
"LARGE_BLUE_DIAMOND",
"SMALL_ORANGE_DIAMOND",
"SMALL_BLUE_DIAMOND",
"RED_TRIANGLE_POINTED_UP",
"RED_TRIANGLE_POINTED_DOWN",
"DIAMOND_WITH_A_DOT",
"WHITE_SQUARE_BUTTON",
"BLACK_SQUARE_BUTTON",

};
// std::string uni_symbols[] = {"alpha","beta"};
    // for (auto s : uni_symbols){
    // 	std::cout << s << std::endl;
    // }

	Uni_map_symbols ums;
	//Uni_map_symbols::iterator ums_it;

	//ums["ds"] = "sd";
	int i = 0;
	for (int i = 0; i < sizeof(uni_symbols)/sizeof(std::string);i++){
		ums[""+uni_symbols_labels[i]+""]  = ""+uni_symbols[i]+"";
		std::cout << ums[uni_symbols_labels[i]] <<std::endl;
	}
	
	i = 0;
	Uni_map_symbols_iterate(ums){
		std::cout << "{\"" << ums_it->first << "\",\"" <<ums_it->second<<"\"},"<<std::endl;
		i++;
	}
	// i=0;
	// for (Uni_map_symbols::iterator ums_it = ums.begin(); ums_it != ums.end(); ums_it++ ){
	// 	ums[""+uni_symbols_labels[i]+""]  = ""+uni_symbols[i]+"";
	// 	std::cout << ums[uni_symbols_labels[i]] <<std::endl;
	// 	std::cout << ums_it->first << ums_it->second << std::endl;
	// 	i++;
	// }

	
	Uni_map_symbols_iterate(unicode_symbols){
		std::cout << "\"" << unicode_symbols_it->first << "\"" << ":\""<<unicode_symbols_it->second<<"\","<<std::endl;
		i++;
	}

	std::string uni_character = unicode_symbols["RED_CIRCLE"];
	//progress_bar(uni_character);
	std::string clock[] = {
	"FOUR_O’CLOCK",
	"FOUR_THIRTY",
	"FIVE_O’CLOCK",
	"FIVE_THIRTY"};
	progress_bar(clock);
    return 0;
}

void progress_bar(std::string uni_char){
	for (int i = 0; i < 10; ++i)
	{
		std::cout << uni_char;
		std::flush(std::cout);
		sleep(1);
	}
	
}

void progress_bar(std::string arr[]){
	// std::string clock[] = {
	// "FOUR_O’CLOCK",
	// "FOUR_THIRTY",
	// "FIVE_O’CLOCK",
	// "FIVE_THIRTY"};
	for (int j = 0; j < 10; ++j){
		for (int i = 0; i < 4; ++i){

			std::string ch = arr[i];

			std::cout << unicode_symbols[ch];
			std::flush(std::cout);
			sleep(1);
			std::cout << "\b\b\b\b\b\b\b\b\b";
			
		}
		// std::flush(std::cout);
		// sleep(1);
	}
}