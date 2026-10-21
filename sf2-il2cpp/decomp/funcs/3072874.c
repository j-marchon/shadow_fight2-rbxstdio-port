// GDINNHKFKMB$$ODCFKCPIGJJ @ RVA 0x3072874

bool GDINNHKFKMB__ODCFKCPIGJJ(GDINNHKFKMB_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  int32_t local_24;
  
  if ((DAT_04565f88 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4562);
    DAT_04565f88 = 1;
  }
  iVar1 = (__this->fields).super.LOAFPIOGJAF;
  if (iVar1 == 3) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_031729c4;
    cVar5 = (AHEFOIOKDOK->fields).JEFJKAKPOEP;
  }
  else if (iVar1 == 2) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_031729c4;
    cVar5 = (AHEFOIOKDOK->fields).AKMEMGPGKNH;
  }
  else {
    if (iVar1 != 1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = (__this->fields).super.LOAFPIOGJAF;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) goto LAB_031729c4;
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items,pIVar2);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_4562,args,(MethodInfo *)0x0);
    }
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_031729c4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    cVar5 = (AHEFOIOKDOK->fields).MKGLNHHGPGL;
  }
  return cVar5 != '\0';
}

