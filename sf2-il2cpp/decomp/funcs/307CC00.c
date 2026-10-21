// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$CFFOLDAGGMJ @ RVA 0x307CC00

UnityEngine_Transform_o *
Nekki_SF2_GUI_Fight_EndPvpFightScreen__CFFOLDAGGMJ
          (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  
  if ((DAT_04565fe3 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<ResolutionImage>__);
    DAT_04565fe3 = 1;
  }
  __this_00 = (__this->fields)._playerLabel;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = (UnityEngine_Component_o *)
                  UnityEngine_Component__GetComponentInChildren<object>
                            ((UnityEngine_Component_o *)__this_00,
                             Method_UnityEngine_Component_GetComponentInChildren<ResolutionImage>__)
     , __this_01 != (UnityEngine_Component_o *)0x0)) {
    pUVar1 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

