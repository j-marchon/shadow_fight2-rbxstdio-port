// OCMLPCKBHPN$$BKCFPHNEONL @ RVA 0x327C1CC

void OCMLPCKBHPN__BKCFPHNEONL(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  OCMLPCKBHPN_c *method_00;
  void *pvVar2;
  
  if ((DAT_04567260 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    FUN_01bab630(&StringLiteral_19465);
    DAT_04567260 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    if (*(char *)((long)&pIVar1[1].klass + 2) != '\0') {
      if ((pIVar1[9].klass == (Il2CppClass *)0x0) ||
         (pvVar2 = ((pIVar1[9].klass)->_1).this_arg.data, pvVar2 == (void *)0x0)) goto LAB_0337c2c0;
      if (*(char *)((long)pvVar2 + 0x10) != '\0') {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__Log(StringLiteral_19465,(MethodInfo *)0x0);
      }
    }
    method_00 = OCMLPCKBHPN_TypeInfo;
    if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (OCMLPCKBHPN_c *)thunk_FUN_01ba7564();
    }
    OCMLPCKBHPN__NJAGFHFHEGE((MethodInfo *)method_00);
    return;
  }
LAB_0337c2c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

