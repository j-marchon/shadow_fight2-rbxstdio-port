// CBIDCBEJPON.IAENJBADEON$$CACMOLMGPEC @ RVA 0x3454418

void CBIDCBEJPON_IAENJBADEON__CACMOLMGPEC
               (CBIDCBEJPON_IAENJBADEON_o *__this,int32_t attempt,
               System_Action_EOGOGKOFPLJ__o *sucessCallback,
               System_Action_EOGOGKOFPLJ__o *failCallback,
               System_Action_EOGOGKOFPLJ__o *progressChangedCallback,MethodInfo *method)

{
  System_Action_EOGOGKOFPLJ__o *method_00;
  double dVar1;
  System_Nullable_TimeSpan__o __this_00;
  System_TimeSpan_Fields local_48;
  
  method_00 = sucessCallback;
  if ((DAT_045682be & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<TimeSpan>_get_Value__);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_045682be = 1;
  }
  __this_00.fields.value.fields._ticks =
       (System_TimeSpan_Fields)
       (System_TimeSpan_Fields)Method_System_Nullable<TimeSpan>_get_Value__._ticks;
  __this_00.fields._0_8_ = &__this->fields;
  local_48._ticks =
       (int64_t)System_Nullable<TimeSpan>__get_Value(__this_00,(MethodInfo_27FB90C *)method_00);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
  }
  dVar1 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
  LKCDEAGMLCN__HIIHLLDDKGB
            ((__this->fields).resolvedUrl,(__this->fields).path,sucessCallback,failCallback,
             progressChangedCallback,(Il2CppObject *)0x0,(float)dVar1 / (float)(attempt + 1),
             (__this->fields).checkCert,
             (System_Threading_CancellationToken_o)(__this->fields).cancellationToken.fields._source
             ,(MethodInfo *)0x0);
  return;
}

