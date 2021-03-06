// CaboCha -- Yet Another Japanese Dependency Parser
//
//  $Id: selector_pat.h 41 2008-01-20 09:31:34Z taku-ku $;
//
//  Copyright(C) 2001-2008 Taku Kudo <taku@chasen.org>
#ifndef CABOCHA_SELECTOR_PAT_H_
#define CABOCHA_SELECTOR_PAT_H_

namespace {
// Common
// const char KUTOUTEN_PAT[] = "(。|、|,|.)";
// const char OPEN_BRACKET_PAT [] = "((|（|‘|“|《|「|『|［|〈|｛)";
// const char CLOSE_BRACKET_PAT[] = "()|）|’|”|》|」|』|］|〉|｝)";
// const char DYN_A_PAT[] = "(助詞|副詞|連体詞|接続詞)";
// const char CASE_PAT [] = "助詞";
//
// IPA
// const char IPA_FUNC_PAT[] = "(助詞|助動詞|動詞,非自立|動詞,接尾|形容詞,非自立|形容詞,接尾)";
// const char IPA_HEAD_PAT[] = "!(助詞|助動詞|動詞,非自立|動詞,接尾|形容詞,非自立|形容詞,接尾|空白|記号)";
//
// JUMAN
// const char JUMAN_FUNC_PAT[] = "!特殊";
// const char JUMAN_HEAD_PAT[] = "!(特殊|助詞|接尾辞)";
//
// UNIDIC
// const char UNIDIC_FUNC_PAT[] = "(助詞|助動詞|接尾辞,形容詞的|接尾辞,形状詞的|接尾辞,動詞的|動詞,非自立可能|形容詞,非自立可能)"
// const char UNIDIC_HEAD_PAT[] = "!(助詞|助動詞|接尾辞,形容詞的|接尾辞,形状詞的|接尾辞,動詞的|動詞,非自立可能|形容詞,非自立可能|空白|補助記号|記号)";
// const char UNIDIC_FUNC_PAT2[] = "(助詞|助動詞|接尾辞,形容詞的|接尾辞,形状詞的|接尾辞,動詞的)"
// const char UNIDIC_HEAD_PAT2[] = "!(助詞|助動詞|接尾辞,形容詞的|接尾辞,形状詞的|接尾辞,動詞的|空白|補助記号|記号)";
//
// const char UNIDIC_HEAD_PRE_PAT[] = "(動詞,一般|形容詞,一般)";

// Common
const char KUTOUTEN_PAT[] = "(\xE3\x80\x82|\xE3\x80\x81)";
const char OPEN_BRACKET_PAT [] = "((|\xEF\xBC\x88|\xE2\x80\x98|\xE2\x80\x9C|\xE3\x80\x8A|\xE3\x80\x8C|\xE3\x80\x8E|\xEF\xBC\xBB|\xE3\x80\x88|\xEF\xBD\x9B)";
const char CLOSE_BRACKET_PAT[] = "()|\xEF\xBC\x89|\xE2\x80\x99|\xE2\x80\x9D|\xE3\x80\x8B|\xE3\x80\x8D|\xE3\x80\x8F|\xEF\xBC\xBD|\xE3\x80\x89|\xEF\xBD\x9D)";
const char DYN_A_PAT[] = "(\xE5\x8A\xA9\xE8\xA9\x9E|\xE5\x89\xAF\xE8\xA9\x9E|\xE9\x80\xA3\xE4\xBD\x93\xE8\xA9\x9E|\xE6\x8E\xA5\xE7\xB6\x9A\xE8\xA9\x9E)";
const char CASE_PAT [] = "\xE5\x8A\xA9\xE8\xA9\x9E";

// IPA
const char IPA_FUNC_PAT[] = "(\xE5\x8A\xA9\xE8\xA9\x9E|\xE5\x8A\xA9\xE5\x8B\x95\xE8\xA9\x9E|\xE5\x8B\x95\xE8\xA9\x9E,\xE9\x9D\x9E\xE8\x87\xAA\xE7\xAB\x8B|\xE5\x8B\x95\xE8\xA9\x9E,\xE6\x8E\xA5\xE5\xB0\xBE|\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E,\xE9\x9D\x9E\xE8\x87\xAA\xE7\xAB\x8B|\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E,\xE6\x8E\xA5\xE5\xB0\xBE)";
const char IPA_HEAD_PAT[] = "!(\xE5\x8A\xA9\xE8\xA9\x9E|\xE5\x8A\xA9\xE5\x8B\x95\xE8\xA9\x9E|\xE5\x8B\x95\xE8\xA9\x9E,\xE9\x9D\x9E\xE8\x87\xAA\xE7\xAB\x8B|\xE5\x8B\x95\xE8\xA9\x9E,\xE6\x8E\xA5\xE5\xB0\xBE|\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E,\xE9\x9D\x9E\xE8\x87\xAA\xE7\xAB\x8B|\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E,\xE6\x8E\xA5\xE5\xB0\xBE|\xE8\xA8\x98\xE5\x8F\xB7)";

// Juman
const char JUMAN_FUNC_PAT[] = "!\xE7\x89\xB9\xE6\xAE\x8A";
const char JUMAN_HEAD_PAT[] = "!(\xE7\x89\xB9\xE6\xAE\x8A|\xE5\x8A\xA9\xE8\xA9\x9E|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E)";

// Unidic
const char UNIDIC_FUNC_PAT[] = "(\xE5\x8A\xA9\xE8\xA9\x9E|\xE5\x8A\xA9\xE5\x8B\x95\xE8\xA9\x9E|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xE7\x9A\x84|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\xBD\xA2\xE7\x8A\xB6\xE8\xA9\x9E\xE7\x9A\x84|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\x8B\x95\xE8\xA9\x9E\xE7\x9A\x84|\xE5\x8B\x95\xE8\xA9\x9E,\xE9\x9D\x9E\xE8\x87\xAA\xE7\xAB\x8B\xE5\x8F\xAF\xE8\x83\xBD|\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E,\xE9\x9D\x9E\xE8\x87\xAA\xE7\xAB\x8B\xE5\x8F\xAF\xE8\x83\xBD)";
const char UNIDIC_HEAD_PAT[] = "!(\xE5\x8A\xA9\xE8\xA9\x9E|\xE5\x8A\xA9\xE5\x8B\x95\xE8\xA9\x9E|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xE7\x9A\x84|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\xBD\xA2\xE7\x8A\xB6\xE8\xA9\x9E\xE7\x9A\x84|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\x8B\x95\xE8\xA9\x9E\xE7\x9A\x84|\xE5\x8B\x95\xE8\xA9\x9E,\xE9\x9D\x9E\xE8\x87\xAA\xE7\xAB\x8B\xE5\x8F\xAF\xE8\x83\xBD|\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E,\xE9\x9D\x9E\xE8\x87\xAA\xE7\xAB\x8B\xE5\x8F\xAF\xE8\x83\xBD|\xE7\xA9\xBA\xE7\x99\xBD|\xE8\xA3\x9C\xE5\x8A\xA9\xE8\xA8\x98\xE5\x8F\xB7|\xE8\xA8\x98\xE5\x8F\xB7)";
const char UNIDIC_FUNC_PAT2[] = "(\xE5\x8A\xA9\xE8\xA9\x9E|\xE5\x8A\xA9\xE5\x8B\x95\xE8\xA9\x9E|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xE7\x9A\x84|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\xBD\xA2\xE7\x8A\xB6\xE8\xA9\x9E\xE7\x9A\x84|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\x8B\x95\xE8\xA9\x9E\xE7\x9A\x84)";
const char UNIDIC_HEAD_PAT2[] = "!(\xE5\x8A\xA9\xE8\xA9\x9E|\xE5\x8A\xA9\xE5\x8B\x95\xE8\xA9\x9E|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E\xE7\x9A\x84|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\xBD\xA2\xE7\x8A\xB6\xE8\xA9\x9E\xE7\x9A\x84|\xE6\x8E\xA5\xE5\xB0\xBE\xE8\xBE\x9E,\xE5\x8B\x95\xE8\xA9\x9E\xE7\x9A\x84|\xE7\xA9\xBA\xE7\x99\xBD|\xE8\xA3\x9C\xE5\x8A\xA9\xE8\xA8\x98\xE5\x8F\xB7|\xE8\xA8\x98\xE5\x8F\xB7)";
const char UNIDIC_HEAD_PRE_PAT[] = "(\xE5\x8B\x95\xE8\xA9\x9E,\xE4\xB8\x80\xE8\x88\xAC|\xE5\xBD\xA2\xE5\xAE\xB9\xE8\xA9\x9E,\xE4\xB8\x80\xE8\x88\xAC)";
}
#endif
