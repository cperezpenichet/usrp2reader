/* -*- c++ -*- */
/* 
 * Copyright 2015 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_RFID_CLOCK_RECOVERY_ZC_FF_H
#define INCLUDED_RFID_CLOCK_RECOVERY_ZC_FF_H

#include <rfid/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace rfid {

    /*!
     * \brief <+description of block+>
     * \ingroup rfid
     *
     */
    class RFID_API clock_recovery_zc_ff : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<clock_recovery_zc_ff> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of rfid::clock_recovery_zc_ff.
       *
       * To avoid accidental use of raw pointers, rfid::clock_recovery_zc_ff's
       * constructor is in a private implementation
       * class. rfid::clock_recovery_zc_ff::make is the public interface for
       * creating new instances.
       */
      static sptr make(int samples_per_pulse, int interp_factor);
    };

  } // namespace rfid
} // namespace gr

#endif /* INCLUDED_RFID_CLOCK_RECOVERY_ZC_FF_H */

