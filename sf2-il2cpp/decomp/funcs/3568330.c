// AJNFLEPFBJG$$EOFBIILPHJN @ RVA 0x3568330

void AJNFLEPFBJG__EOFBIILPHJN(AJNFLEPFBJG_o *__this,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *pUVar1;
  HCBNEFEHCBM_o *pHVar2;
  char local_24 [4];
  
  if ((DAT_04568c09 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_get_Value__);
    FUN_01bab630(&StringLiteral_11277);
    FUN_01bab630(&StringLiteral_22373);
    FUN_01bab630(&StringLiteral_11278);
    DAT_04568c09 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_11278,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).OMMGLBIMPDI;
  if (pUVar1 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
    pHVar2 = (pUVar1->fields).value;
    if ((pHVar2 == (HCBNEFEHCBM_o *)0x0) ||
       (local_24[0] = (pHVar2->fields).GDPEIODCJFI, (bool_conflict)local_24[0] == false)) {
      return;
    }
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_24);
    pUVar1 = (__this->fields).OMMGLBIMPDI;
    if ((pUVar1 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) &&
       (pHVar2 = (pUVar1->fields).value, pHVar2 != (HCBNEFEHCBM_o *)0x0)) {
      JLNPKGGFFDD = System_String__Format
                              (StringLiteral_22373,StringLiteral_11277,arg1,
                               (Il2CppObject *)(pHVar2->fields).DIMBHIMLDLP,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).OMMGLBIMPDI;
      if (pUVar1 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
        AJNFLEPFBJG__LJAFGHFICCB(__this,(pUVar1->fields).value,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

