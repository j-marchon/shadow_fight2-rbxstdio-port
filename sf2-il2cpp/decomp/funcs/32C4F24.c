// BOFEMGGNODC$$FGNINNOOCCL @ RVA 0x32C4F24

void BOFEMGGNODC__FGNINNOOCCL(BOFEMGGNODC_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  Il2CppObject *pIVar1;
  System_String_o *message;
  char *pcVar2;
  System_Action_PKHMIGFEJCL__o *pSVar3;
  
  if ((DAT_04567523 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_10644);
    FUN_01bab630(&StringLiteral_375);
    DAT_04567523 = 1;
  }
  if ((__this->fields).EPPJLCHLIDH != 0) {
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (NDPMLPGANCI_o *)0x0) goto LAB_033c5060;
    NDPMLPGANCI__FNNPPGPMCFE(__this_00,false,true,0,(MethodInfo *)0x0);
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (((pIVar1 != (Il2CppObject *)0x0) && (pIVar1[9].klass != (Il2CppClass *)0x0)) &&
     (pcVar2 = ((pIVar1[9].klass)->_1).namespaze, pcVar2 != (char *)0x0)) {
    if (pcVar2[0x11] != '\0') {
      message = System_String__Concat
                          (StringLiteral_10644,(__this->fields).LEMICKEFMOJ,StringLiteral_375,
                           (MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).BHHLJDLBINB;
    if (pSVar3 != (System_Action_PKHMIGFEJCL__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033c505c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,(__this->fields).IJOKKFKPBEP,
                 (pSVar3->fields).super.super.method);
      return;
    }
  }
LAB_033c5060:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

