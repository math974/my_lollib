/*
** EPITECH PROJECT, 2020
** my_ctype.h
** File description:
** character manipulation
*/

#ifndef MY_CTYPE_H_
#define MY_CTYPE_H_

////////////////////////////////////////////////////////////
//
//                             _
//     _ __ ___  _   _     ___| |_ _   _ _ __   ___
//    | '_ ` _ \| | | |   / __| __| | | | '_ \ / _ \.
//    | | | | | | |_| |  | (__| |_| |_| | |_) |  __/
//    |_| |_| |_|\__, |___\___|\__|\__, | .__/ \___|
//               |___/_____|       |___/|_|
//
//    This library offers a set of character processing functions.
//    We can classify this set of functions in two categories:
//    the test functions, to know if a character is of a certain nature,
//    and the transformation functions,
//    in particular used for the change of cases (lowercase, uppercase).
//
////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
/// \brief Checks if a character is a number.
///
/// This function allows you to test whether
/// a character is a decimal number or not.
///
/// \param c the character to be tested
///
/// \return The return value must be interpreted as a Boolean value.
///
////////////////////////////////////////////////////////////
int my_isdigit(char c);

////////////////////////////////////////////////////////////
/// \brief Checks if a character is alphabetic.
///
/// This function allows you to test whether a character is alphabetic or not.
/// A character will be considered alphabetical if it is
/// lowercase or uppercase letters.
/// Reminder: the functions of this library only process pure ASCII characters.
/// Accented letters will therefore not be considered as alpha-numeric characters.
///
/// \param c the character to be tested
///
/// \return The return value must be interpreted as a Boolean value.
///
////////////////////////////////////////////////////////////
int my_isalpha(char c);

////////////////////////////////////////////////////////////
/// \brief Checks if a character is alpha-numeric.
///
/// This function allows you to test whether a character is alpha-numeric or not.
/// A character will be considered alpha-numeric if it is a letter
/// (lowercase or uppercase) or a number. Reminder:
/// the functions of this library only process pure ASCII characters.
/// Accented letters will therefore not be considered as alpha-numeric characters.
///
/// \param c the character to be tested
///
/// \return The return value must be interpreted as a Boolean value.
///
////////////////////////////////////////////////////////////
int my_isalnum(char c);

////////////////////////////////////////////////////////////
/// \brief Check if we have to do with a control character.
///
/// The iscntrl function therefore allows you to know whether an ASCII character
/// is part of this set of control characters (between 0 and 31 and 127) or not.
///
/// \param c the character to be tested
///
/// \return The return value must be interpreted as a Boolean value.
///
////////////////////////////////////////////////////////////
int my_iscntrl(char c);

////////////////////////////////////////////////////////////
/// \brief Checks if a character is a lowercase letter.
///
/// This function allows you to test whether a given character
/// is a lowercase letter or not. Reminder: the functions of this
/// library only process pure ASCII characters.
/// Accented letters will therefore not be considered as alpha-numeric characters.
/// In addition, characters that do not even present a
/// letter will therefore not be considered lowercase.
///
/// \param c the character to be tested
///
/// \return The return value must be interpreted as a Boolean value.
///
////////////////////////////////////////////////////////////
int my_islower(char c);

///////////////////////////////////////////////////////////
/// \brief Checks whether a character is printable or not.
///
/// This function is used to test whether a character is displayed (is printable) or not.
/// Among these characters we find all the characters having a graphic representation
/// (those for which the isgraph function returns true) as well as the space character
/// (code 0x20). In other words, it is all the ASCII characters,
/// except the control characters (which can be checked via the iscntrl function).
///
/// \param c the character to be tested
///
/// \return The return value must be interpreted as a Boolean value.
///
////////////////////////////////////////////////////////////
int my_isprint(char c);

////////////////////////////////////////////////////////////
/// \brief Check if we are dealing with a punctuation character.
///
/// This function allows you to test whether a character is considered
/// an ASCII punctuation character. The following characters are considered
/// as ASCII punctuation characters:! "# $% & '() * +, -. / :; <=>? @ [\] ^ _` {|} ~.
/// This set of characters corresponds to characters having a graphic representation
/// (testable via the isgraph function) but not being alpha-numeric
/// (testable via the isalnum function).
///
/// \param c the character to be tested
///
/// \return The return value must be interpreted as a Boolean value.
///
////////////////////////////////////////////////////////////
int my_ispunct(char c);

////////////////////////////////////////////////////////////
/// \brief Check if we have to do with a space character.
///
/// This function allows you to test whether a character is considered
/// a space character or not. The following characters are considered
/// as space characters: '\ t', '\ n', '\ v', '\ f', '\ r' and space ('').
/// Compared to the isblank function, the isspace function therefore also
/// considers the characters '\ n', '\ v', '\ f' and '\ r'.
///
/// \param c the character to be tested
///
/// \return The return value must be interpreted as a Boolean value.
///
////////////////////////////////////////////////////////////
int my_issapce(char c);

////////////////////////////////////////////////////////////
/// \brief Checks if a character is an uppercase letter.
///
/// This function allows you to test whether a given character
/// is an uppercase letter or not. Reminder: the functions of
/// this library only process pure ASCII characters.
/// Accented letters will therefore not be considered as alpha-numeric characters.
/// In addition, characters that do not even present a letter
/// will therefore not be considered as a capital letter.
///
/// \param c the character to be tested
///
/// \return The return value must be interpreted as a Boolean value.
///
////////////////////////////////////////////////////////////
int my_isupper(char c);

#endif /* !MY_CTYPE_H_ */
