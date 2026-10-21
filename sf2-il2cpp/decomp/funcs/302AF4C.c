// Nekki.SF2.GUI.SimpleScroll$$CDDJEKNJPEN @ RVA 0x302AF4C

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_SimpleScroll__CDDJEKNJPEN(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int32_t index;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04565cd3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04565cd3 = 1;
    method = extraout_x1;
  }
  pUVar1 = (__this->fields).super.m_Content;
  index = Nekki_SF2_GUI_SimpleScroll__LEJPCCHDLBN(__this,method);
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar1 = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__GetChild
                       ((UnityEngine_Transform_o *)pUVar1,index,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

