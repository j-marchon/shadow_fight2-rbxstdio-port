// FDHCLNDLIDG$$Clone @ RVA 0x314B1B0

FDHCLNDLIDG_o * FDHCLNDLIDG__Clone(FDHCLNDLIDG_o *__this,MethodInfo *method)

{
  FDHCLNDLIDG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045667b5 & 1) == 0) {
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    DAT_045667b5 = 1;
    method = extraout_x1;
  }
  __this_00 = (FDHCLNDLIDG_o *)thunk_FUN_01bda818(FDHCLNDLIDG_TypeInfo,method);
  FDHCLNDLIDG___ctor(__this_00,__this,in_x2);
  return __this_00;
}

