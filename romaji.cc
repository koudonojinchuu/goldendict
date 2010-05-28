#include "romaji.hh"
#include <QCoreApplication>

namespace Romaji {

class HepburnHiragana: public Transliteration::Table
{
public:

  HepburnHiragana();
};

HepburnHiragana::HepburnHiragana()
{
  // Raw UTF8 -- handle with care. We'd better remap those to \xAB hex encoding
  ins( "a", "あ" ); ins( "i", "い" ); ins( "u", "う" ); ins( "e", "え" ); ins( "o", "お" ); 

  ins( "ka", "か" ); ins( "ki", "き" ); ins( "ku", "く" ); ins( "ke", "け" ); ins( "ko", "こ" ); ins( "kya", "きゃ" ); ins( "kyu", "きゅ" ); ins( "kyo", "きょ" ); 
  ins( "sa", "さ" ); ins( "shi", "し" ); ins( "su", "す" ); ins( "se", "せ" ); ins( "so", "そ" ); ins( "sha", "しゃ" ); ins( "shu", "しゅ" ); ins( "sho", "しょ" ); 
  ins( "ta", "た" ); ins( "chi", "ち" ); ins( "tsu", "つ" ); ins( "te", "て" ); ins( "to", "と" ); ins( "cha", "ちゃ" ); ins( "chu", "ちゅ" ); ins( "cho", "ちょ" ); 
  ins( "na", "な" ); ins( "ni", "に" ); ins( "nu", "ぬ" ); ins( "ne", "ね" ); ins( "no", "の" ); ins( "nya", "にゃ" ); ins( "nyu", "にゅ" ); ins( "nyo", "にょ" ); 
  ins( "ha", "は" ); ins( "hi", "ひ" ); ins( "fu", "ふ" ); ins( "he", "へ" ); ins( "ho", "ほ" ); ins( "hya", "ひゃ" ); ins( "hyu", "ひゅ" ); ins( "hyo", "ひょ" ); 
  ins( "ma", "ま" ); ins( "mi", "み" ); ins( "mu", "む" ); ins( "me", "め" ); ins( "mo", "も" ); ins( "mya", "みゃ" ); ins( "myu", "みゅ" ); ins( "myo", "みょ" ); 
  ins( "ya", "や" ); ins( "yu", "ゆ" ); ins( "yo", "よ" ); 
  ins( "ra", "ら" ); ins( "ri", "り" ); ins( "ru", "る" ); ins( "re", "れ" ); ins( "ro", "ろ" ); ins( "rya", "りゃ" ); ins( "ryu", "りゅ" ); ins( "ryo", "りょ" ); 
  ins( "wa", "わ" ); /*ゐ wi† 		ゑ we† */ ins( "wo", "を" );
  ins( "n", "ん" );
  ins( "ga", "が" ); ins( "gi", "ぎ" ); ins( "gu", "ぐ" ); ins( "ge", "げ" ); ins( "go", "ご" ); ins( "gya", "ぎゃ" ); ins( "gyu", "ぎゅ" ); ins( "gyo", "ぎょ" ); 
  ins( "za", "ざ" ); ins( "ji", "じ" ); ins( "zu", "ず" ); ins( "ze", "ぜ" ); ins( "zo", "ぞ" ); ins( "ja", "じゃ" ); ins( "ju", "じゅ" ); ins( "jo", "じょ" ); 
  ins( "da", "だ" ); ins( "(ji)", "ぢ" ); ins( "(zu)", "づ" ); ins( "de", "で" ); ins( "do", "ど" ); ins( "(ja)", "ぢゃ" ); ins( "(ju)", "ぢゅ" ); ins( "(jo)", "ぢょ" ); 
  ins( "ba", "ば" ); ins( "bi", "び" ); ins( "bu", "ぶ" ); ins( "be", "べ" ); ins( "bo", "ぼ" ); ins( "bya", "びゃ" ); ins( "byu", "びゅ" ); ins( "byo", "びょ" ); 
  ins( "pa", "ぱ" ); ins( "pi", "ぴ" ); ins( "pu", "ぷ" ); ins( "pe", "ぺ" ); ins( "po", "ぽ" ); ins( "pya", "ぴゃ" ); ins( "pyu", "ぴゅ" ); ins( "pyo", "ぴょ" ); 

// Double consonants

  ins( "kka", "っか" ); ins( "kki", "っき" ); ins( "kku", "っく" ); ins( "kke", "っけ" ); ins( "kko", "っこ" ); ins( "kkya", "っきゃ" ); ins( "kkyu", "っきゅ" ); ins( "kkyo", "っきょ" );
  ins( "ssa", "っさ" ); ins( "sshi", "っし" ); ins( "ssu", "っす" ); ins( "sse", "っせ" ); ins( "sso", "っそ" ); ins( "ssha", "っしゃ" ); ins( "sshu", "っしゅ" ); ins( "ssho", "っしょ" );
  ins( "tta", "った" ); ins( "tchi", "っち" ); ins( "ttsu", "っつ" ); ins( "tte", "って" ); ins( "tto", "っと" ); ins( "tcha", "っちゃ" ); ins( "tchu", "っちゅ" ); ins( "tcho", "っちょ" );
  ins( "nna", "っな" ); ins( "nni", "っに" ); ins( "nnu", "っぬ" ); ins( "nne", "っね" ); ins( "nno", "っの" ); ins( "nnya", "っにゃ" ); ins( "nnyu", "っにゅ" ); ins( "nnyo", "っにょ" );
  ins( "hha", "っは" ); ins( "hhi", "っひ" ); ins( "ffu", "っふ" ); ins( "hhe", "っへ" ); ins( "hho", "っほ" ); ins( "hhya", "っひゃ" ); ins( "hhyu", "っひゅ" ); ins( "hhyo", "っひょ" );
  ins( "mma", "っま" ); ins( "mmi", "っみ" ); ins( "mmu", "っむ" ); ins( "mme", "っめ" ); ins( "mmo", "っも" ); ins( "mmya", "っみゃ" ); ins( "mmyu", "っみゅ" ); ins( "mmyo", "っみょ" );
  ins( "rra", "っら" ); ins( "rri", "っり" ); ins( "rru", "っる" ); ins( "rre", "っれ" ); ins( "rro", "っろ" ); ins( "rrya", "っりゃ" ); ins( "rryu", "っりゅ" ); ins( "rryo", "っりょ" );
  ins( "wwa", "っわ" ); /*ゐ wi† 		ゑ we† 	を wo‡ 	*/
  ins( "gga", "っが" ); ins( "ggi", "っぎ" ); ins( "ggu", "っぐ" ); ins( "gge", "っげ" ); ins( "ggo", "っご" ); ins( "ggya", "っぎゃ" ); ins( "ggyu", "っぎゅ" ); ins( "ggyo", "っぎょ" );
  ins( "zza", "っざ" ); ins( "jji", "っじ" ); ins( "zzu", "っず" ); ins( "zze", "っぜ" ); ins( "zzo", "っぞ" ); ins( "jja", "っじゃ" ); ins( "jju", "っじゅ" ); ins( "jjo", "っじょ" );
  ins( "dda", "っだ" ); ins( "((ji)", "っぢ" ); ins( "((zu)", "っづ" ); ins( "dde", "っで" ); ins( "ddo", "っど" ); ins( "((ja)", "っぢゃ" ); ins( "((ju)", "っぢゅ" ); ins( "((jo)", "っぢょ" );
  ins( "bba", "っば" ); ins( "bbi", "っび" ); ins( "bbu", "っぶ" ); ins( "bbe", "っべ" ); ins( "bbo", "っぼ" ); ins( "bbya", "っびゃ" ); ins( "bbyu", "っびゅ" ); ins( "bbyo", "っびょ" );
  ins( "ppa", "っぱ" ); ins( "ppi", "っぴ" ); ins( "ppu", "っぷ" ); ins( "ppe", "っぺ" ); ins( "ppo", "っぽ" ); ins( "ppya", "っぴゃ" ); ins( "ppyu", "っぴゅ" ); ins( "ppyo", "っぴょ" );

}

class HepburnKatakana: public Transliteration::Table
{
public:

  HepburnKatakana();
};

HepburnKatakana::HepburnKatakana()
{
  // Raw UTF8 -- handle with care. We'd better remap those to \xAB hex encoding
  ins( "a", "ア" ); ins( "i", "イ" ); ins( "u", "ウ" ); ins( "e", "エ" ); ins( "o", "オ" ); 

  ins( "ka", "カ" ); ins( "ki", "キ" ); ins( "ku", "ク" ); ins( "ke", "ケ" ); ins( "ko", "コ" ); ins( "kya", "キャ" ); ins( "kyu", "キュ" ); ins( "kyo", "キョ" ); 
  ins( "sa", "サ" ); ins( "shi", "シ" ); ins( "su", "ス" ); ins( "se", "セ" ); ins( "so", "ソ" ); ins( "sha", "シャ" ); ins( "shu", "シュ" ); ins( "sho", "ショ" ); 
  ins( "ta", "タ" ); ins( "chi", "チ" ); ins( "tsu", "ツ" ); ins( "te", "テ" ); ins( "to", "ト" ); ins( "cha", "チャ" ); ins( "chu", "チュ" ); ins( "cho", "チョ" ); 
  ins( "na", "ナ" ); ins( "ni", "ニ" ); ins( "nu", "ヌ" ); ins( "ne", "ネ" ); ins( "no", "ノ" ); ins( "nya", "ニャ" ); ins( "nyu", "ニュ" ); ins( "nyo", "ニョ" ); 
  ins( "ha", "ハ" ); ins( "hi", "ヒ" ); ins( "fu", "フ" ); ins( "he", "ヘ" ); ins( "ho", "ホ" ); ins( "hya", "ヒャ" ); ins( "hyu", "ヒュ" ); ins( "hyo", "ヒョ" ); 
  ins( "ma", "マ" ); ins( "mi", "ミ" ); ins( "mu", "ム" ); ins( "me", "メ" ); ins( "mo", "モ" ); ins( "mya", "ミャ" ); ins( "myu", "ミュ" ); ins( "myo", "ミョ" ); 
  ins( "ya", "ヤ" ); ins( "yu", "ユ" ); ins( "yo", "ヨ" ); 
  ins( "ra", "ラ" ); ins( "ri", "リ" ); ins( "ru", "ル" ); ins( "re", "レ" ); ins( "ro", "ロ" ); ins( "rya", "リャ" ); ins( "ryu", "リュ" ); ins( "ryo", "リョ" ); 
  ins( "wa", "ワ" ); /*ヰ wi† 		ヱ we† 	ヲ wo‡ 	*/
  ins( "n", "ン" ); 
  ins( "ga", "ガ" ); ins( "gi", "ギ" ); ins( "gu", "グ" ); ins( "ge", "ゲ" ); ins( "go", "ゴ" ); ins( "gya", "ギャ" ); ins( "gyu", "ギュ" ); ins( "gyo", "ギョ" ); 
  ins( "za", "ザ" ); ins( "ji", "ジ" ); ins( "zu", "ズ" ); ins( "ze", "ゼ" ); ins( "zo", "ゾ" ); ins( "ja", "ジャ" ); ins( "ju", "ジュ" ); ins( "jo", "ジョ" ); 
  ins( "da", "ダ" ); ins( "(ji)", "ヂ" ); ins( "(zu)", "ヅ" ); ins( "de", "デ" ); ins( "do", "ド" ); ins( "(ja)", "ヂャ" ); ins( "(ju)", "ヂュ" ); ins( "(jo)", "ヂョ" ); 
  ins( "ba", "バ" ); ins( "bi", "ビ" ); ins( "bu", "ブ" ); ins( "be", "ベ" ); ins( "bo", "ボ" ); ins( "bya", "ビャ" ); ins( "byu", "ビュ" ); ins( "byo", "ビョ" ); 
  ins( "pa", "パ" ); ins( "pi", "ピ" ); ins( "pu", "プ" ); ins( "pe", "ペ" ); ins( "po", "ポ" ); ins( "pya", "ピャ" ); ins( "pyu", "ピュ" ); ins( "pyo", "ピョ" ); 
  ins( "ye", "イェ" ); 
  ins( "wi", "ウィ" ); ins( "we", "ウェ" ); ins( "wo", "ウォ" ); 
  ins( "va", "ヷ" ); /*ヸ vi† 		ヹ ve†*/ ins( "vo", "ヺ" ); 
  ins( "va", "ヴァ" ); ins( "vi", "ヴィ" ); ins( "vu", "ヴ" ); ins( "ve", "ヴェ" ); ins( "vo", "ヴォ" ); 
  ins( "she", "シェ" ); 
  ins( "je", "ジェ" ); 
  ins( "che", "チェ" ); 
  ins( "ti", "ティ" ); ins( "tu", "トゥ" ); 
  ins( "tyu", "テュ" ); 
  ins( "di", "ディ" ); ins( "du", "ドゥ" ); 
  ins( "dyu", "デュ" ); 
  ins( "tsa", "ツァ" ); ins( "tse", "ツェ" ); ins( "tso", "ツォ" ); 
  ins( "fa", "ファ" ); ins( "fi", "フィ" ); ins( "fe", "フェ" ); ins( "fo", "フォ" ); 
  ins( "fyu", "フュ" ); 

  // Double consonants
  ins( "kka", "ッカ" ); ins( "kki", "ッキ" ); ins( "kku", "ック" ); ins( "kke", "ッケ" ); ins( "kko", "ッコ" ); ins( "kkya", "ッキャ" ); ins( "kkyu", "ッキュ" ); ins( "kkyo", "ッキョ" );
  ins( "ssa", "ッサ" ); ins( "sshi", "ッシ" ); ins( "ssu", "ッス" ); ins( "sse", "ッセ" ); ins( "sso", "ッソ" ); ins( "ssha", "ッシャ" ); ins( "sshu", "ッシュ" ); ins( "ssho", "ッショ" );
  ins( "tta", "ッタ" ); ins( "tchi", "ッチ" ); ins( "ttsu", "ッツ" ); ins( "tte", "ッテ" ); ins( "tto", "ット" ); ins( "tcha", "ッチャ" ); ins( "tchu", "ッチュ" ); ins( "tcho", "ッチョ" );
  ins( "nna", "ッナ" ); ins( "nni", "ッニ" ); ins( "nnu", "ッヌ" ); ins( "nne", "ッネ" ); ins( "nno", "ッノ" ); ins( "nnya", "ッニャ" ); ins( "nnyu", "ッニュ" ); ins( "nnyo", "ッニョ" );
  ins( "hha", "ッハ" ); ins( "hhi", "ッヒ" ); ins( "ffu", "ッフ" ); ins( "hhe", "ッヘ" ); ins( "hho", "ッホ" ); ins( "hhya", "ッヒャ" ); ins( "hhyu", "ッヒュ" ); ins( "hhyo", "ッヒョ" );
  ins( "mma", "ッマ" ); ins( "mmi", "ッミ" ); ins( "mmu", "ッム" ); ins( "mme", "ッメ" ); ins( "mmo", "ッモ" ); ins( "mmya", "ッミャ" ); ins( "mmyu", "ッミュ" ); ins( "mmyo", "ッミョ" );
  ins( "rra", "ッラ" ); ins( "rri", "ッリ" ); ins( "rru", "ッル" ); ins( "rre", "ッレ" ); ins( "rro", "ッロ" ); ins( "rrya", "ッリャ" ); ins( "rryu", "ッリュ" ); ins( "rryo", "ッリョ" );
  ins( "wwa", "ッワ" ); /*ヰ wi† 		ヱ we† 	ヲ wo‡ 	*/
  ins( "gga", "ッガ" ); ins( "ggi", "ッギ" ); ins( "ggu", "ッグ" ); ins( "gge", "ッゲ" ); ins( "ggo", "ッゴ" ); ins( "ggya", "ッギャ" ); ins( "ggyu", "ッギュ" ); ins( "ggyo", "ッギョ" );
  ins( "zza", "ッザ" ); ins( "jji", "ッジ" ); ins( "zzu", "ッズ" ); ins( "zze", "ッゼ" ); ins( "zzo", "ッゾ" ); ins( "jja", "ッジャ" ); ins( "jju", "ッジュ" ); ins( "jjo", "ッジョ" );
  ins( "dda", "ッダ" ); ins( "((ji)", "ッヂ" ); ins( "((zu)", "ッヅ" ); ins( "dde", "ッデ" ); ins( "ddo", "ッド" ); ins( "((ja)", "ッヂャ" ); ins( "((ju)", "ッヂュ" ); ins( "((jo)", "ッヂョ" );
  ins( "bba", "ッバ" ); ins( "bbi", "ッビ" ); ins( "bbu", "ッブ" ); ins( "bbe", "ッベ" ); ins( "bbo", "ッボ" ); ins( "bbya", "ッビャ" ); ins( "bbyu", "ッビュ" ); ins( "bbyo", "ッビョ" );
  ins( "ppa", "ッパ" ); ins( "ppi", "ッピ" ); ins( "ppu", "ップ" ); ins( "ppe", "ッペ" ); ins( "ppo", "ッポ" ); ins( "ppya", "ッピャ" ); ins( "ppyu", "ッピュ" ); ins( "ppyo", "ッピョ" );
  ins( "wwi", "ッウィ" ); ins( "wwe", "ッウェ" ); ins( "wwo", "ッウォ" );
  ins( "vva", "ッヷ" ); /*ヸ vi† 		ヹ ve†*/ ins( "vvo", "ッヺ" );
  ins( "vva", "ッヴァ" ); ins( "vvi", "ッヴィ" ); ins( "vvu", "ッヴ" ); ins( "vve", "ッヴェ" ); ins( "vvo", "ッヴォ" );
  ins( "sshe", "ッシェ" );
  ins( "jje", "ッジェ" );
  ins( "tche", "ッチェ" );
  ins( "tti", "ッティ" ); ins( "ttu", "ットゥ" );
  ins( "ttyu", "ッテュ" );
  ins( "ddi", "ッディ" ); ins( "ddu", "ッドゥ" );
  ins( "ddyu", "ッデュ" );
  ins( "ttsa", "ッツァ" ); ins( "ttse", "ッツェ" ); ins( "ttso", "ッツォ" );
  ins( "ffa", "ッファ" ); ins( "ffi", "ッフィ" ); ins( "ffe", "ッフェ" ); ins( "ffo", "ッフォ" );
  ins( "ffyu", "ッフュ" );
}

vector< sptr< Dictionary::Class > > makeDictionaries( Config::Romaji const & r )
  throw( std::exception )
{
  vector< sptr< Dictionary::Class > > result;
  
  if ( r.enable )
  {
    if ( r.enableHepburn )
    {
      if ( r.enableHiragana )
      {
        static HepburnHiragana t;

        result.push_back( new Transliteration::TransliterationDictionary( "94eae5a5aaf5b0a900490f4d6b36aac0",
                            QCoreApplication::translate( "Romaji", "Hepburn Romaji for Hiragana" ).toUtf8().data(),
                            QIcon( ":/flags/jp.png" ), t, false ) );
      }
      
      if ( r.enableKatakana )
      {
        static HepburnKatakana t;

        result.push_back( new Transliteration::TransliterationDictionary( "3252a35767d3f6e85e3e39069800dd2f",
                            QCoreApplication::translate( "Romaji", "Hepburn Romaji for Katakana" ).toUtf8().data(),
                            QIcon( ":/flags/jp.png" ), t, false ) );
      }
    }
  }

  return result;
}

}