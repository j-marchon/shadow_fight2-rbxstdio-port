// Nekki.SF2.GUI.Common.Hints.HintCache$$KABFGOPBGOI @ RVA 0x32B8590

Nekki_SF2_GUI_Common_Hints_HintUI_o *
Nekki_SF2_GUI_Common_Hints_HintCache__KABFGOPBGOI
          (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t OHLKNCPBCBL,int32_t HDAEJLFDNJC,
          UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintUI_o *x;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_Common_Hints_HintUI_o *pNVar2;
  
  if ((DAT_0456746b & 1) == 0) {
    FUN_01bab630(&GKOFFCMIOFC_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456746b = 1;
  }
  if ((GKOFFCMIOFC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  x = GKOFFCMIOFC__LDEODGHMPCG(OHLKNCPBCBL,HDAEJLFDNJC,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintUI_o *)0x0;
  if (!bVar1) {
    if ((x == (Nekki_SF2_GUI_Common_Hints_HintUI_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Transform__SetParent(__this_00,JJHEGPBBMLG,false,(MethodInfo *)0x0);
    pNVar2 = x;
  }
  return pNVar2;
}

