// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$FBADHJLMHPG @ RVA 0x34DC294

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__FBADHJLMHPG
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o **ppNVar2;
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *x;
  
  if ((DAT_0456871b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456871b = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).KCPNAKKMEGA;
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar2 != (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0) &&
       (__this_00 = ((*ppNVar2)->fields).NHNIOGOEAJB,
       __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      if (*ppNVar2 != (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0) {
        LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
        Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
        *ppNVar2 = (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0;
        thunk_FUN_01c20e04(ppNVar2,0);
        goto LAB_035dc33c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035dc33c:
  (__this->fields).HCOEDJGHJNA = true;
  return;
}

