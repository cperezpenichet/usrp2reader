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

#ifndef INCLUDED_RFID_CENTER_FF_IMPL_H
#define INCLUDED_RFID_CENTER_FF_IMPL_H

#include <rfid/center_ff.h>

namespace gr {
  namespace rfid {

    class center_ff_impl : public center_ff
    {
     private:
	  float * d_window_samples;   //Array to hold samples for averaging amplitude
	  int d_window_length;        //Length of window
	  int d_window_index;         //Index to oldest sample
	  double d_avg_amp;           //Average amplitude over window
	  int d_samples_per_pulse;
     

     public:
      center_ff_impl(int samples_per_pulse);
      ~center_ff_impl();

      // Where all the action really happens
      int work(int noutput_items,
	       gr_vector_const_void_star &input_items,
	       gr_vector_void_star &output_items);
    };

  } // namespace rfid
} // namespace gr

#endif /* INCLUDED_RFID_CENTER_FF_IMPL_H */

