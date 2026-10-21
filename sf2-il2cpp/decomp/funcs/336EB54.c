// Nekki.SF2.GUI.Glyphs.Glyph$$HFBOFKPLLBG @ RVA 0x336EB54

Nekki_SF2_GUI_Glyphs_ImageGlyph_o *
Nekki_SF2_GUI_Glyphs_Glyph__HFBOFKPLLBG(UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  int32_t value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Glyphs_ImageGlyph_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b07 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ImageGlyph>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    DAT_04567b07 = 1;
    method = extraout_x1;
  }
  __this = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo,method);
  UnityEngine_GameObject___ctor(__this,(MethodInfo *)0x0);
  if ((((__this != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) &&
      (UnityEngine_Transform__SetParent(__this_00,JJHEGPBBMLG,(MethodInfo *)0x0),
      JJHEGPBBMLG != (UnityEngine_Transform_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)JJHEGPBBMLG,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    value = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0);
    UnityEngine_GameObject__set_layer(__this,value,(MethodInfo *)0x0);
    pNVar1 = (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this,Method_UnityEngine_GameObject_AddComponent<ImageGlyph>__);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

