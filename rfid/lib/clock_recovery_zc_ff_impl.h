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

#ifndef INCLUDED_RFID_CLOCK_RECOVERY_ZC_FF_IMPL_H
#define INCLUDED_RFID_CLOCK_RECOVERY_ZC_FF_IMPL_H

#include <rfid/clock_recovery_zc_ff.h>

namespace gr {
  namespace rfid {

    class clock_recovery_zc_ff_impl : public clock_recovery_zc_ff
    {
     private:
	  float d_nominal_sp_pulse;
	  float d_samples_per_pulse;
	  float d_last_zc_count;
	  bool d_last_was_pos;
	  float d_max_drift;
	  float d_alpha;
	  int d_interp_factor; //Kill this.

     public:
      clock_recovery_zc_ff_impl(int samples_per_pulse, int interp_factor);
      ~clock_recovery_zc_ff_impl();

      // Where all the action really happens
      void forecast (int noutput_items, gr_vector_int &ninput_items_required);

      int general_work(int noutput_items,
		       gr_vector_int &ninput_items,
		       gr_vector_const_void_star &input_items,
		       gr_vector_void_star &output_items);
    };

  } // namespace rfid
} // namespace gr

#endif /* INCLUDED_RFID_CLOCK_RECOVERY_ZC_FF_IMPL_H */

