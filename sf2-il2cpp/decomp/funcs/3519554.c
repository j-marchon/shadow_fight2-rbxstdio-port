// PLIIGOCLJDL$$OBMGPDJIAHN @ RVA 0x3519554

void PLIIGOCLJDL__OBMGPDJIAHN(PLIIGOCLJDL_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  JCFJFJCKLKG_o *DKMMBMBMJBO;
  PLIIGOCLJDL_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Action_JCFJFJCKLKG__o *pSVar1;
  System_Nullable_int__Fields local_28;
  
  if ((DAT_0456895e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&StringLiteral_10892);
    FUN_01bab630(&StringLiteral_10896);
    DAT_0456895e = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    DKMMBMBMJBO = (JCFJFJCKLKG_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<JCFJFJCKLKG>__);
    if (DKMMBMBMJBO == (JCFJFJCKLKG_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10896,(MethodInfo *)0x0);
      local_28.hasValue = false;
      local_28._1_3_ = 0;
      local_28.value = 0;
      method_00 = Method_System_Nullable<int>__ctor__;
      System_Nullable<int>___ctor
                ((System_Nullable_int__o)&local_28,7000,
                 (MethodInfo_27F7F6C *)Method_System_Nullable<int>__ctor__);
      PLIIGOCLJDL__GBPMMOFJJLJ(__this,(System_Nullable_int__o)local_28,method_00);
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      if (__this_00 == (PLIIGOCLJDL_o *)0x0) goto LAB_03619698;
      PLIIGOCLJDL__FCKCCJBGGEH(__this_00,DKMMBMBMJBO,2,in_x3);
    }
    pSVar1 = (__this->fields).HOGHPJFEPOM;
    if (pSVar1 != (System_Action_JCFJFJCKLKG__o *)0x0) {
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,DKMMBMBMJBO,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
LAB_03619698:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

