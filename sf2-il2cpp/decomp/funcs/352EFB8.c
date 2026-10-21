// Nekki.Utils.DetailedLog$$get_Instance @ RVA 0x352EFB8

Nekki_Utils_DetailedLog_o * Nekki_Utils_DetailedLog__get_Instance(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  MethodInfo *method_00;
  Nekki_Utils_DetailedLog_o *pNVar2;
  
  if ((DAT_04568a49 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<DetailedLog>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15455);
    DAT_04568a49 = 1;
  }
  pNVar2 = Nekki_Utils_DetailedLog_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this,StringLiteral_15455,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pNVar2 = (Nekki_Utils_DetailedLog_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (__this,Method_UnityEngine_GameObject_AddComponent<DetailedLog>__);
      Nekki_Utils_DetailedLog_TypeInfo->static_fields->CBDMFFMCJBK = pNVar2;
      thunk_FUN_01c20e04(Nekki_Utils_DetailedLog_TypeInfo->static_fields,pNVar2);
      pNVar2 = Nekki_Utils_DetailedLog_TypeInfo->static_fields->CBDMFFMCJBK;
      if (pNVar2 != (Nekki_Utils_DetailedLog_o *)0x0) {
        Nekki_Utils_DetailedLog__GIENGNEGHPJ(pNVar2,method_00);
        goto LAB_0362f0c0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0362f0c0:
  return Nekki_Utils_DetailedLog_TypeInfo->static_fields->CBDMFFMCJBK;
}

