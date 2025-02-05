#pragma once
#include "../MAIN/GAME_BASE.h"
#include<time.h>
#include<conio.h>
#include<ctype.h>
#include<string>
#include<stdio.h>
#include<iostream>
#include<chrono>
#include<thread>
#include<random>
#include<map>
#include<cstring>
#include"../../libOne/inc/input.h"
#define Qnumber 100

namespace GAME12
{
    class GAME :
        public GAME_BASE
    {
    public:
        GAME(class MAIN* main) :GAME_BASE(main) {};
        ~GAME() {};
        int create();
        void proc();
        void destroy();
    private:
        enum STATE { TITLE, INIT, WAIT, PLAY1, PLAY2, PLAY3, PLAY4, OVER, END };
        STATE State = TITLE;
        void title();
        void init();
        void wait();
        void play1();
        void play2();
        void play3();
        void play4();
        void over();
        void end();
        void recordInputToKana();
        void draw1(int snum);
        void draw2(int snum);
        void draw3(int snum);
        void draw4(int snum);
        void randomnum();
        INPUT_CODE gettriggerkeycode();

        int num[Qnumber], rnum, number, flag, set, count, stop;
        int background = 0;
        int teachimage = 0;
        int pretwoimage = 0;
        int twoimage = 0;
        int preoneimage = 0;
        int oneimage = 0;
        int back1 = 0;
        int back2 = 0;
        int back3 = 0;
        int back4 = 0;
        int missimage = 0;
        int overback = 0;
        int overmale = 0;
        int overfemale = 0;
        int clearback = 0;
        int clearmale = 0;
        int clearfemale = 0;
        int backbgm = 0;
        int playbgm = 0;
        int correctsound = 0;
        int incorrectsound = 0;
        int oversound = 0;
        int endsound = 0;

        std::string ch;
        float curtime, mflag;
        std::string currentInput; // 現在の入力文字列

        const char* pretwoWord[Qnumber][3] = {
            {"丁寧","ていねい"},
            {"核心","かくしん"},
            {"統轄","とうかつ"},
            {"叙景","じょけい"},
            {"督促","とくそく"},
            {"盲従","もうじゅう"},
            {"網羅","もうら"},
            {"閑散","かんさん"},
            {"厄介","やっかい"},
            {"座禅","ざぜん"},
            {"暁","あかつき"},
            {"騰貴","とうき"},
            {"吟味","ぎんみ"},
            {"棚田","たなだ"},
            {"矢面","やおもて"},
            {"輪郭","りんかく"},
            {"潤色","じゅんしょく"},
            {"下痢","げり"},
            {"長蛇","ちょうだ"},
            {"余韻","よいん"},
            {"実践","じっせん"},
            {"血眼","ちまなこ"},
            {"全廃","ぜんぱい"},
            {"批准","ひじゅん"},
            {"叔父","おじ"},
            {"総帥","そうすい"},
            {"亜流","ありゅう"},
            {"名残","なごり"},
            {"駄文","だぶん"},
            {"麻酔","ますい"},
            {"謹呈","きんてい"},
            {"溝","みぞ"},
            {"偏屈","へんくつ"},
            {"醜態","しゅうたい"},
            {"派閥","はばつ"},
            {"寮母","りょうぼ"},
            {"搭載","とうさい"},
            {"定款","ていかん"},
            {"垣根","かきね"},
            {"享年","きょうねん"},
            {"補佐","ほさ"},
            {"亜鉛","あえん"},
            {"懇意","こんい"},
            {"俊足","しゅんそく"},
            {"窃取","せっしゅ"},
            {"大枠","おおわく"},
            {"災禍","さいか"},
            {"抄本","しょうほん"},
            {"睡魔","すいま"},
            {"褒美","ほうび"},
            {"盆栽","ぼんさい"},
            {"抹消","まっしょう"},
            {"愉悦","ゆえつ"},
            {"迅速","じんそく"},
            {"詐欺","さぎ"},
            {"示唆","しさ"},
            {"報酬","ほうしゅう"},
            {"禍根","かこん"},
            {"頑丈","がんじょう"},
            {"媒介","ばいかい"},
            {"窮迫","きゅうはく"},
            {"寡少","かしょう"},
            {"併読","へいどく"},
            {"安逸","あんいつ"},
            {"巧拙","こうせつ"},
            {"還暦","かんれき"},
            {"献身","けんしん"},
            {"捜索","そうさく"},
            {"相撲","すもう"},
            {"旋風","せんぷう"},
            {"弊社","へいしゃ"},
            {"駆逐","くちく"},
            {"覇者","はしゃ"},
            {"羅列","られつ"},
            {"空疎","くうそ"},
            {"酷似","こくじ"},
            {"自粛","じしゅく"},
            {"干渉","かんしょう"},
            {"壮健","そうけん"},
            {"手綱","たづな"},
            {"割愛","かつあい"},
            {"自叙伝","じじょでん"},
            {"感銘","かんめい"},
            {"人垣","ひとがき"},
            {"鳥肌","とりはだ"},
            {"徹底","てってい"},
            {"機嫌","きげん"},
            {"荒涼","こうりょう"},
            {"苦渋","くじゅう"},
            {"克己心","こっきしん"},
            {"挑戦","ちょうせん"},
            {"野暮","やぼ"},
            {"剛直","ごうちょく"},
            {"貝塚","かいづか"},
            {"閑職","かんしょく"},
            {"唇","くちびる"},
            {"解剖","かいぼう"},
            {"更迭","こうてつ"},
            {"眺望","ちょうぼう"},
            {"拡充","かくじゅう"},
        };

        const char* twoWord[Qnumber][2] = {
            {"酪農","らくのう"},
            {"彙報","いほう"},
            {"刹那","せつな"},
            {"甚大","じんだい"},
            {"溺愛","できあい"},
            {"頻発","ひんぱつ"},
            {"尚早","しょうそう"},
            {"肯定","こうてい"},
            {"雪渓","せっけい"},
            {"嫡子","ちゃくし"},
            {"臆面","おくめん"},
            {"霜害","そうがい"},
            {"一蹴","いっしゅう"},
            {"土壌","どじょう"},
            {"旋回","せんかい"},
            {"醜悪","しゅうあく"},
            {"露呈","ろてい"},
            {"顕著","けんちょ"},
            {"国璽","こくじ"},
            {"会釈","えしゃく"},
            {"土壇場","どたんば"},
            {"愁嘆場","しゅうたんば"},
            {"回向","えこう"},
            {"罷免","ひめん"},
            {"頒布","はんぷ"},
            {"脅嚇","きょうかく"},
            {"蚊柱","かばしら"},
            {"砕石","さいせき"},
            {"抄訳","しょうやく"},
            {"曖昧","あいまい"},
            {"種苗","しゅびょう"},
            {"萎縮","いしゅく"},
            {"思索","しさく"},
            {"漆","うるし"},
            {"製靴","せいか"},
            {"咽喉","いんこう"},
            {"童歌","わらべうた"},
            {"稼働","かどう"},
            {"逓減","ていげん"},
            {"椅子","いす"},
            {"誓約書","せいやくしょ"},
            {"貼用","ちょうよう"},
            {"紙幣","しへい"},
            {"危惧","きぐ"},
            {"怨恨","えんこん"},
            {"挨拶","あいさつ"},
            {"宛先","あてさき"},
            {"産着","うぶぎ"},
            {"疎遠","そえん"},
            {"溺死","できし"},
            {"畏怖","いふ"},
            {"狂奔","きょうほん"},
            {"愛猫","あいびょう"},
            {"鬱屈","うっくつ"},
            {"旋律","せんりつ"},
            {"妖艶","ようえん"},
            {"旺盛","おうせい"},
            {"辣腕","らつわん"},
            {"過酷","かこく"},
            {"脇腹","わきばら"},
            {"諦観","ていかん"},
            {"進捗","しんちょく"},
            {"裾","すそ"},
            {"凄惨","せいさん"},
            {"蜜月","みつげつ"},
            {"親戚","しんせき"},
            {"失踪","しっそう"},
            {"捕捉","ほそく"},
            {"唾棄","だき"},
            {"瞳孔","どうこう"},
            {"汎用性","はんようせい"},
            {"勃発","ぼっぱつ"},
            {"陶冶","とうや"},
            {"臆断","おくだん"},
            {"拉致","らち"},
            {"横柄","おうへい"},
            {"瓦解","がかい"},
            {"出藍","しゅつらん"},
            {"崖","がけ"},
            {"明瞭","めいりょう"},
            {"玩味","がんみ"},
            {"賄賂","わいろ"},
            {"愚弄","ぐろう"},
            {"僅差","きんさ"},
            {"籠城","ろうじょう"},
            {"山麓","さんろく"},
            {"鍵盤","けんばん"},
            {"怨念","おんねん"},
            {"顎","あご"},
            {"虎口","ここう"},
            {"亀裂","きれつ"},
            {"脱臼","だっきゅう"},
            {"嗅覚","きゅうかく"},
            {"真摯","しんし"},
            {"餌食","えじき"},
            {"叱責","しっせき"},
            {"羨望","せんぼう"},
            {"砂嵐","すなあらし"},
            {"畏敬","いけい"},
            {"語彙","ごい"},
        };

        const char* preoneWord[Qnumber][2] = {
            {"捺印","なついん"},
            {"艶姿","あですがた"},
            {"輔弼","ほひつ"},
            {"嫉妬","しっと"},
            {"木鐸","ぼくたく"},
            {"八重葎","やえむぐら"},
            {"杏林","きょうりん"},
            {"厩舎","きゅうしゃ"},
            {"畢生","ひっせい"},
            {"鍍金","めっき"},
            {"鼎談","ていだん"},
            {"檜扇","ひおうぎ"},
            {"砧声","ちんせい"},
            {"堆積","たいせき"},
            {"夜叉","やしゃ"},
            {"匡正","きょうせい"},
            {"弘誓","ぐぜい"},
            {"俗諺","ぞくげん"},
            {"蕪辞","ぶじ"},
            {"戎馬","じゅうば"},
            {"矢鱈","やたら"},
            {"揖譲","ゆうじょう"},
            {"形骸","けいがい"},
            {"洞察","どうさつ"},
            {"塵芥","じんかい"},
            {"吻合","ふんごう"},
            {"一瞥","いちべつ"},
            {"兜巾","ときん"},
            {"允可","いんか"},
            {"唖然","あぜん"},
            {"集輯","しゅうしゅう"},
            {"趨向","すうこう"},
            {"廟議","びょうぎ"},
            {"螺旋","らせん"},
            {"灼熱","しゃくねつ"},
            {"佃煮","つくだに"},
            {"壺中","こちゅう"},
            {"凌雲","りょううん"},
            {"酒肴","しゅこう"},
            {"芳醇","ほうじゅん"},
            {"老爺","ろうや"},
            {"尖端","せんたん"},
            {"雌蕊","めしべ"},
            {"湛然","たんぜん"},
            {"暢達","ちょうたつ"},
            {"嚢中","のうちゅう"},
            {"馴致","じゅんち"},
            {"箪笥","たんす"},
            {"賭博","とばく"},
            {"枕頭","ちんとう"},
            {"鶯遷","おうせん"},
            {"兇刃","きょうじん"},
            {"閉塞","へいそく"},
            {"堰塞","えんそく"},
            {"凄絶","せいぜつ"},
            {"翰墨","かんぼく"},
            {"補填","ほてん"},
            {"所謂","いわゆる"},
            {"庇護","ひご"},
            {"柴扉","さいひ"},
            {"騒擾","そうじょう"},
            {"浮腫","ふしゅ"},
            {"脆弱","ぜいじゃく"},
            {"鞠問","きくもん"},
            {"呪術","じゅじゅつ"},
            {"筆鋒","ひっぽう"},
            {"謙遜","けんそん"},
            {"犀利","さいり"},
            {"正閏","せいじゅん"},
            {"靭性","じんせい"},
            {"燦燦","さんさん"},
            {"忌引","きびき"},
            {"艶冶","えんや"},
            {"狐狸","こり"},
            {"律呂","りつりょ"},
            {"襖","ふすま"},
            {"苧麻","ちょま"},
            {"挽歌","ばんか"},
            {"罫線","けいせん"},
            {"歪曲","わいきょく"},
            {"亡骸","なきがら"},
            {"牡蠣","かき"},
            {"蓋世","がいせい"},
            {"満腔","まんこう"},
            {"巽位","そんい"},
            {"悶絶","もんぜつ"},
            {"椿寿","ちんじゅ"},
            {"尤物","ゆうぶつ"},
            {"嬰児","えいじ"},
            {"濃艶","のうえん"},
            {"衣桁","いこう"},
            {"欽慕","きんぼ"},
            {"蓋棺","がいかん"},
            {"厩肥","きゅうひ"},
            {"蕩尽","とうじん"},
            {"外甥","がいせい"},
            {"僻遠","へきえん"},
            {"野狐","やこ"},
            {"拳固","げんこ"},
            {"喧伝","けんでん"},

        };
        const char* oneWord[Qnumber][2] = {
            {"瑰麗","かいれい"},
            {"烏鵲","うじゃく"},
            {"解傭","かいよう"},
            {"安佚","あんいつ"},
            {"胡乱","うろん"},
            {"邏卒","らそつ"},
            {"闃然","げきぜん"},
            {"間隙","かんげき"},
            {"千仞","せんじん"},
            {"蒐集","しゅうしゅう"},
            {"咫尺","しせき"},
            {"刈穫","がいかく"},
            {"浅葱","あさぎ"},
            {"仇讐","きゅうしゅう"},
            {"煢然","けいぜん"},
            {"飛礫","つぶて"},
            {"関雎","かんしょ"},
            {"顧眄","こべん"},
            {"臚列","ろれつ"},
            {"器皿","きべい"},
            {"圧状","おうじょう"},
            {"一掬","いっきく"},
            {"仏龕","ぶつがん"},
            {"弛張","しちょう"},
            {"盥漱","かんそう"},
            {"佚遊","いつゆう"},
            {"嫩草","どんそう"},
            {"諛言","ゆげん"},
            {"囃子","はやし"},
            {"懐孕","かいよう"},
            {"明礬","みょうばん"},
            {"放曠","ほうこう"},
            {"神饌","しんせん"},
            {"恐懼","きょうく"},
            {"簷滴","えんてき"},
            {"靉靆","あいたい"},
            {"竿檣","かんしょう"},
            {"午餉","ごしょう"},
            {"拘繋","こうけい"},
            {"蘊藉","うんしゃ"},
            {"煢煢","けいけい"},
            {"冪冪","べきべき"},
            {"翅鳥","しちょう"},
            {"袂別","べいべつ"},
            {"舟楫","しゅうしゅう"},
            {"縹色","はなだいろ"},
            {"検覈","けんかく"},
            {"斂葬","れんそう"},
            {"軋轢","あつれき"},
            {"軒輊","けんち"},
            {"頤使","いし"},
            {"禰宜","ねぎ"},
            {"流眄","りゅうべん"},
            {"遁走","とんそう"},
            {"瓦礫","がれき"},
            {"雲鬢","うんびん"},
            {"喚鐘","かんしょう"},
            {"窮愁","きゅうしゅう"},
            {"呑噬","どんぜい"},
            {"鷙鳥","しちょう"},
            {"憐惜","れんせき"},
            {"癰疽","ようそ"},
            {"圏套","けんとう"},
            {"潸然","さんぜん"},
            {"峻別","しゅんべつ"},
            {"狡黠","こうかつ"},
            {"涵養","かんよう"},
            {"舳艫","じくろ"},
            {"欷歔","さきょ"},
            {"貶謫","へんたく"},
            {"肯綮","こうけい"},
            {"覬覦","きゆ"},
            {"詠懐","えいかい"},
            {"塵埃","じんあい"},
            {"救恤","きゅうじゅつ"},
            {"束脩","そくしゅう"},
            {"鶴唳","かくれい"},
            {"捍格","かんかく"},
            {"甄別","けんべつ"},
            {"驍名","ぎょうめい"},
            {"聯想","れんそう"},
            {"蠹毒","とどく"},
            {"灌注","かんちゅう"},
            {"蜑戸","たんこ"},
            {"嶄然","ざんぜん"},
            {"鷸蚌","いつぼう"},
            {"羈絆","きはん"},
            {"擣衣","とうい"},
            {"乖離","かいり"},
            {"冪法","べきほう"},
            {"荏苒","じんぜん"},
            {"丱角","かんかく"},
            {"輜重","しちょう"},
            {"万斛","ばんこく"},
            {"俊髦","しゅんぼう"},
            {"宏闊","こうかつ"},
            {"驚懼","きょうく"},
            {"婚娶","こんしゅ"},
            {"諠鬧","けんとう"},
            {"訥弁","とつべん"},
        };
    };

}