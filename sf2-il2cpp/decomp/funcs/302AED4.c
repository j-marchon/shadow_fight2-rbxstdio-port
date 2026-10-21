// Nekki.SF2.GUI.SimpleScroll$$FNJPFFGAMPF @ RVA 0x302AED4

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_SimpleScroll__FNJPFFGAMPF(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565cbe & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04565cbe = 1;
    method = extraout_x1;
  }
  pUVar1 = (__this->fields).super.m_Content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar1 = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__GetChild
                       ((UnityEngine_Transform_o *)pUVar1,
                        (uint)((__this->fields).GNMNFMOHDMG.fields !=
                              (UnityEngine_Vector2_Fields)0x0),(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

