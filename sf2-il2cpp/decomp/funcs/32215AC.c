// FPPKHNNABAD$$NBHELNKAKNN @ RVA 0x32215AC

void FPPKHNNABAD__NBHELNKAKNN(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *message;
  MethodInfo *extraout_x1;
  char *pcVar3;
  System_Action_FPPKHNNABAD__o *pSVar4;
  
  if ((DAT_04566f37 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_10643);
    FUN_01bab630(&StringLiteral_375);
    DAT_04566f37 = 1;
    method = extraout_x1;
  }
  bVar1 = FPPKHNNABAD__LOAEDHBBCFC(__this,method);
  if (bVar1) {
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__)
    ;
    if (((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[9].klass == (Il2CppClass *)0x0)) ||
       (pcVar3 = ((pIVar2[9].klass)->_1).namespaze, pcVar3 == (char *)0x0)) goto LAB_033216e8;
    if (pcVar3[0x10] != '\0') {
      message = System_String__Concat
                          (StringLiteral_10643,(__this->fields)._COIPKAKHDFP_k__BackingField,
                           StringLiteral_375,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields).BHHLJDLBINB;
    if (pSVar4 == (System_Action_FPPKHNNABAD__o *)0x0) goto LAB_033216e8;
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,__this,(pSVar4->fields).super.super.method);
  }
  pSVar4 = (__this->fields).PGLCKHPHLLG;
  if (pSVar4 != (System_Action_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033216e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,__this,(pSVar4->fields).super.super.method);
    return;
  }
LAB_033216e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

