/* -*- c++ -*- */

#define RFID_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "rfid_swig_doc.i"

%{
#include "rfid/center_ff.h"
#include "rfid/clock_recovery_zc_ff.h"
#include "rfid/reader_f.h"
#include "rfid/tag_decoder_f.h"
#include "rfid/command_gate_cc.h"
%}


%include "rfid/center_ff.h"
GR_SWIG_BLOCK_MAGIC2(rfid, center_ff);
%include "rfid/clock_recovery_zc_ff.h"
GR_SWIG_BLOCK_MAGIC2(rfid, clock_recovery_zc_ff);
%include "rfid/reader_f.h"
GR_SWIG_BLOCK_MAGIC2(rfid, reader_f);
%include "rfid/tag_decoder_f.h"
GR_SWIG_BLOCK_MAGIC2(rfid, tag_decoder_f);
%include "rfid/command_gate_cc.h"
GR_SWIG_BLOCK_MAGIC2(rfid, command_gate_cc);
