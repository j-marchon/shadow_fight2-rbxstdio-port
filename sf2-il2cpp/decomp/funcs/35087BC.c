// KEIAEKNFNNA.GJHCOOIGICA$$NEMPBMNDIKK @ RVA 0x35087BC

void KEIAEKNFNNA_GJHCOOIGICA__NEMPBMNDIKK
               (KEIAEKNFNNA_GJHCOOIGICA_o *__this,int64_t __,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this_00;
  UnityEngine_Object_o *exists;
  KEIAEKNFNNA_o *pKVar2;
  UniRx_SerialDisposable_o *__this_01;
  
  if ((DAT_045688b5 & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<LotteryDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045688b5 = 1;
  }
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    exists = (UnityEngine_Object_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this_00,Method_GCIFMNHADDF_BFJGHKKGOJC<LotteryDialog>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if (bVar1) {
      if (exists == (UnityEngine_Object_o *)0x0) goto LAB_036088c0;
      if ((exists[0x13].klass != (UnityEngine_Object_c *)0x0) || (*(int *)&exists[0xe].monitor != 0)
         ) {
        return;
      }
    }
    pKVar2 = (__this->fields).__4__this;
    if (pKVar2 != (KEIAEKNFNNA_o *)0x0) {
      __this_01 = (pKVar2->fields).BGIOGEDMPOH;
      if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
        UniRx_SerialDisposable__set_Disposable
                  (__this_01,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        JJPNLEPEAFM__FGGGLJNFDLF((__this->fields).questId,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_036088c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

