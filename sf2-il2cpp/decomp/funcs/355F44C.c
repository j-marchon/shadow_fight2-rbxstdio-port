// Nekki.SF2.GUI.Fight.ScreenModel$$JHJBEMDEEHG @ RVA 0x355F44C

void Nekki_SF2_GUI_Fight_ScreenModel__JHJBEMDEEHG
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,
               Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_o *DKMMBMBMJBO,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_ScreenModel_MPGAFKNLIPG__o *pSVar1;
  
  if ((DAT_04568bbb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenModel_MPGAFKNLIPG_TypeInfo);
    DAT_04568bbb = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ScreenModel_MPGAFKNLIPG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)DKMMBMBMJBO;
    thunk_FUN_01c20e04(__this_00 + 1,DKMMBMBMJBO);
    pSVar1 = (__this->fields).OnComboUp;
    if (pSVar1 != (System_Action_ScreenModel_MPGAFKNLIPG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0365f4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,__this_00,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

