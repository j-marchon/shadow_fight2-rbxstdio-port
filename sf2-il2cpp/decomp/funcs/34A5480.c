// KFOPKHPGAAK$$NDJAJHFFPKP @ RVA 0x34A5480

void KFOPKHPGAAK__NDJAJHFFPKP(KFOPKHPGAAK_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  LCKCDEKNLOA_o *__this_00;
  
  if ((DAT_045684e5 & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_045684e5 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).FNGNIKNIEMM;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Disposable_TypeInfo,method);
  }
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              ((UniRx_SerialDisposable_o *)__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty
               ,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

