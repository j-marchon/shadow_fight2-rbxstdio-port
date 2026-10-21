// Nekki.SF2.GUI.ResolutionImage$$.ctor @ RVA 0x34E4C54

void Nekki_SF2_GUI_ResolutionImage___ctor
               (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568753 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_Image_TypeInfo);
    DAT_04568753 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_UI_Image_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UI_Image_TypeInfo,method);
  }
  UnityEngine_UI_Image___ctor((UnityEngine_UI_Image_o *)__this,(MethodInfo *)0x0);
  return;
}

