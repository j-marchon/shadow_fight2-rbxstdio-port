// KICJDJCJLKJ$$NMNBJNGOALH @ RVA 0x348C900

void KICJDJCJLKJ__NMNBJNGOALH
               (KICJDJCJLKJ_o *__this,KICJDJCJLKJ_AIKDHBPGCGN_o *JEAMIBIGAON,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_045683e9 & 1) == 0) {
    __this = (KICJDJCJLKJ_o *)FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_045683e9 = 1;
  }
  if (JEAMIBIGAON != (KICJDJCJLKJ_AIKDHBPGCGN_o *)0x0) {
    __this_00 = (JEAMIBIGAON->fields).KKDOGECGHBO;
    __this = (KICJDJCJLKJ_o *)UniRx_Disposable_TypeInfo;
    if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
      __this = (KICJDJCJLKJ_o *)thunk_FUN_01ba7564();
    }
    if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable
                (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      (JEAMIBIGAON->fields).CKMCIBNMADJ = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

