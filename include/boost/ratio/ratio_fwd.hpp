//  ratio_fwd.hpp  ---------------------------------------------------------------//

//  Copyright 2008 Howard Hinnant
//  Copyright 2008 Beman Dawes
//  Copyright 2009 Vicente J. Botet Escriba

//  Distributed under the Boost Software License, Version 1.0.
//  See http://www.boost.org/LICENSE_1_0.txt

/*

This code was derived by Beman Dawes from Howard Hinnant's time2_demo prototype.
Many thanks to Howard for making his code available under the Boost license.
The original code was modified to conform to Boost conventions and to section
20.4 Compile-time rational arithmetic [ratio], of the C++ committee working
paper N2798.
See http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2798.pdf.

time2_demo contained this comment:

    Much thanks to Andrei Alexandrescu,
                   Walter Brown,
                   Peter Dimov,
                   Jeff Garland,
                   Terry Golubiewski,
                   Daniel Krugler,
                   Anthony Williams.
*/

#ifndef BOOST_RATIO_RATIO_FWD_HPP
#define BOOST_RATIO_RATIO_FWD_HPP

#include <ratio>

#if defined(__GNUC__) && (__GNUC__ >= 4)
#pragma GCC system_header
#endif

namespace boost
{
	using std::ratio;
	using std::ratio_add      ;
	using std::ratio_subtract ;
	using std::ratio_multiply ;
	using std::ratio_divide   ;

	using std::ratio_equal;
	using std::ratio_not_equal;
	using std::ratio_less;
	using std::ratio_less_equal;
	using std::ratio_greater;
	using std::ratio_greater_equal;

	//using std::yocto;
	//using std::zepto;
	using std::atto;
	using std::femto;
	using std::pico;
	using std::nano;
	using std::micro;
	using std::milli;
	using std::centi;
	using std::deci;
	using std::deca;
	using std::hecto;
	using std::kilo;
	using std::mega;
	using std::giga;
	using std::tera;
	using std::peta;
	using std::exa;
	//using std::zetta;
	//using std::yotta;

#ifdef BOOST_RATIO_EXTENSIONS
//
#define BOOST_RATIO_1024 BOOST_RATIO_INTMAX_C(1024)
//
// convenience IEC typedefs
typedef std::ratio<                                                                                     BOOST_RATIO_1024> kibi;
typedef std::ratio<                                                                    BOOST_RATIO_1024*BOOST_RATIO_1024> mebi;
typedef std::ratio<                                                   BOOST_RATIO_1024*BOOST_RATIO_1024*BOOST_RATIO_1024> gibi;
typedef std::ratio<                                  BOOST_RATIO_1024*BOOST_RATIO_1024*BOOST_RATIO_1024*BOOST_RATIO_1024> tebi;
typedef std::ratio<                 BOOST_RATIO_1024*BOOST_RATIO_1024*BOOST_RATIO_1024*BOOST_RATIO_1024*BOOST_RATIO_1024> pebi;
typedef std::ratio<BOOST_RATIO_1024*BOOST_RATIO_1024*BOOST_RATIO_1024*BOOST_RATIO_1024*BOOST_RATIO_1024*BOOST_RATIO_1024> exbi;

#endif

}  // namespace boost


#endif  // BOOST_RATIO_HPP
