// FDGBGINGEBP$$FPEEMMAPFCH @ RVA 0x318BE48

void FDGBGINGEBP__FPEEMMAPFCH(MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this;
  Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *__this_00;
  
  if ((DAT_04566a12 & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<LocalDailyDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566a12 = 1;
  }
  __this = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this != (GCIFMNHADDF_o *)0x0) {
    __this_00 = (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *)
                GCIFMNHADDF__BFJGHKKGOJC<object>
                          (__this,Method_GCIFMNHADDF_BFJGHKKGOJC<LocalDailyDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_LocalDailyDialog_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_LocalDailyDialog__UpdateCells(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

