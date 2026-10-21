// AFFHKININGD$$JOLFKDDINGF @ RVA 0x33416C8

bool AFFHKININGD__JOLFKDDINGF(AFFHKININGD_o *__this,IEJGMGHPING_o *PFDEAPMMFAP,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Enum_o local_38;
  int local_28;
  
  if ((DAT_04567993 & 1) == 0) {
    FUN_01bab630(&BKJBECAPBLE_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    __this = (AFFHKININGD_o *)FUN_01bab630(&StringLiteral_6350);
    DAT_04567993 = 1;
  }
  if (PFDEAPMMFAP != (IEJGMGHPING_o *)0x0) {
    local_28 = (PFDEAPMMFAP->fields).BGHFADDGPAD;
    if (local_28 == 2) {
      bVar1 = AFFHKININGD__CJOMAONPHEB(__this,PFDEAPMMFAP,method);
      if (!bVar1) {
        return false;
      }
    }
    else {
      local_38.klass = (System_Enum_c *)BKJBECAPBLE_TypeInfo;
      local_38.monitor = (void *)0xffffffffffffffff;
      pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_6350,pSVar2,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

