// BOFEMGGNODC$$MAHFCKJGBPP @ RVA 0x32C4CB0

void BOFEMGGNODC__MAHFCKJGBPP(BOFEMGGNODC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  NDPMLPGANCI_o *__this_00;
  PKHMIGFEJCL_o **ppPVar4;
  System_Type_o *left;
  System_Type_o *right;
  MethodInfo *method_00;
  char *pcVar5;
  System_String_o *str1;
  
  if ((DAT_04567522 & 1) == 0) {
    FUN_01bab630(&BOFEMGGNODC_var);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_535);
    FUN_01bab630(&StringLiteral_10644);
    FUN_01bab630(&StringLiteral_10645);
    DAT_04567522 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar2 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[9].klass != (Il2CppClass *)0x0)) &&
     (pcVar5 = ((pIVar2[9].klass)->_1).namespaze, pcVar5 != (char *)0x0)) {
    if (pcVar5[0x11] != '\0') {
      str1 = (__this->fields).LEMICKEFMOJ;
      pSVar3 = (System_String_o *)
               (*(__this->klass->vtable)._8_OFPHPMGMCAL.methodPtr)
                         (__this,(__this->klass->vtable)._8_OFPHPMGMCAL.method);
      pSVar3 = System_String__Concat
                         (StringLiteral_10644,str1,StringLiteral_535,pSVar3,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    }
    if ((__this->fields).EPPJLCHLIDH != 0) {
      __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 == (NDPMLPGANCI_o *)0x0) goto LAB_033c4f20;
      NDPMLPGANCI__FNNPPGPMCFE(__this_00,true,(__this->fields).EPPJLCHLIDH == 2,0,(MethodInfo *)0x0)
      ;
    }
    bVar1 = System_String__IsNullOrEmpty((__this->fields).BNCJPLDMJMH,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar3 = (__this->fields).BNCJPLDMJMH;
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNLFHHJGDLI__CJKCKACIIHK(pSVar3,false,1.0,1.0,(MethodInfo *)0x0);
    }
    ppPVar4 = &(__this->fields).IJOKKFKPBEP;
    *ppPVar4 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar4,AAJBIMFNMBB);
    handle = BOFEMGGNODC_var;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    left = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    right = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    bVar1 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10645,(MethodInfo *)0x0);
      BOFEMGGNODC__FGNINNOOCCL(__this,method_00);
      return;
    }
    return;
  }
LAB_033c4f20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

