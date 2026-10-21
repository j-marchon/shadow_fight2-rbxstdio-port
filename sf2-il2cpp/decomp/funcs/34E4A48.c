// Nekki.SF2.GUI.ResolutionImage$$GPCBFKCHEOB @ RVA 0x34E4A48

void Nekki_SF2_GUI_ResolutionImage__GPCBFKCHEOB
               (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Texture2D_o *__this_00;
  System_String_o *HCAAAAMDCNO;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_array *pUVar2;
  float fVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o value;
  
                    /* try { // try from 035e4a48 to 036e4a53 has its CatchHandler @ 035e4908 */
                    /* try { // try from 035e4a54 to 036e4a5b has its CatchHandler @ 035e4a5c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e4a40 with catch @ 035e4a5c
                       catch(type#2 @ 00000000) { ... } // from try @ 035e4a54 with catch @ 035e4a5c
                        */
  if ((DAT_04568752 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568752 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields).super.super.m_Corners;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565e5d == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565e5d = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = Util__JFJCDAJGFKD(FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH,1.0,0.001,
                              (MethodInfo *)0x0);
    if (!bVar1) {
      pUVar2 = (__this->fields).super.super.m_Corners;
      if ((pUVar2 != (UnityEngine_Vector3_array *)0x0) &&
         (__this_00 = UnityEngine_Sprite__get_texture
                                ((UnityEngine_Sprite_o *)pUVar2,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Texture2D_o *)0x0)) {
        HCAAAAMDCNO = UnityEngine_Object__get_name
                                ((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
        if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
        }
        bVar1 = KKCBGIBKOCP__INHBAMFOLNC(HCAAAAMDCNO,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UVar4 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565e5d == '\0') {
            FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
            DAT_04565e5d = '\x01';
          }
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          fVar3 = FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
          value.fields.x = UVar4.fields.x * fVar3;
          value.fields.y = UVar4.fields.y * fVar3;
          UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

