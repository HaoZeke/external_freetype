/***************************************************************************/
/*                                                                         */
/*  hbshim.h                                                               */
/*                                                                         */
/*    HarfBuzz interface for accessing OpenType features (specification).  */
/*                                                                         */
/*  Copyright 2013-2015 by                                                 */
/*  David Turner, Robert Wilhelm, and Werner Lemberg.                      */
/*                                                                         */
/*  This file is part of the FreeType project, and may only be used,       */
/*  modified, and distributed under the terms of the FreeType project      */
/*  license, LICENSE.TXT.  By continuing to use, modify, or distribute     */
/*  this file you indicate that you have read the license and              */
/*  understand and accept it fully.                                        */
/*                                                                         */
/***************************************************************************/


<<<<<<< HEAD:src/autofit/hbshim.h
#ifndef __HBSHIM_H__
#define __HBSHIM_H__
=======
#ifndef PFRDRIVR_H_
#define PFRDRIVR_H_
>>>>>>> 37412ff... Don't use macro names that contain `__' [1/2].:src/pfr/pfrdrivr.h


#include <ft2build.h>
#include FT_FREETYPE_H


#ifdef FT_CONFIG_OPTION_USE_HARFBUZZ

#include <hb.h>
#include <hb-ot.h>
#include <hb-ft.h>

#endif


FT_BEGIN_HEADER

  FT_Error
  af_get_coverage( AF_FaceGlobals  globals,
                   AF_StyleClass   style_class,
                   FT_Byte*        gstyles );

  FT_Error
  af_get_char_index( AF_StyleMetrics  metrics,
                     FT_ULong         charcode,
                     FT_ULong        *codepoint,
                     FT_Long         *y_offset );

 /* */

FT_END_HEADER

<<<<<<< HEAD:src/autofit/hbshim.h
#endif /* __HBSHIM_H__ */
=======
#endif /* PFRDRIVR_H_ */
>>>>>>> 37412ff... Don't use macro names that contain `__' [1/2].:src/pfr/pfrdrivr.h


/* END */
