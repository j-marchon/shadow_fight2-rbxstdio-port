// PNGKLCHKPEO$$NHADNNDDNGI @ RVA 0x31E55B0

PNGKLCHKPEO_LGAFLKDKBPL_o *
PNGKLCHKPEO__NHADNNDDNGI(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  MethodInfo *in_x3;
  int32_t local_24;
  
  if ((DAT_04566d5a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5430);
    FUN_01bab630(&StringLiteral_5431);
    DAT_04566d5a = 1;
  }
  if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_032e5794;
  iVar1 = (__this->fields).LOAFPIOGJAF;
  if ((AHEFOIOKDOK->fields).ANOKHPAKKON == false) {
    switch(iVar1) {
    case 0:
    case 1:
      if ((AHEFOIOKDOK->fields).HJPOJOPKEKI != false) goto LAB_032e5668;
      goto LAB_032e5634;
    case 2:
      goto switchD_032e565c_caseD_2;
    case 3:
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_5430,(MethodInfo *)0x0);
    default:
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = (__this->fields).LOAFPIOGJAF;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) {
LAB_032e5794:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar3;
      thunk_FUN_01c20e04(args->m_Items,pIVar3);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_5431,args,(MethodInfo *)0x0);
      pPVar2 = (PNGKLCHKPEO_LGAFLKDKBPL_o *)0x0;
      break;
    case 6:
      lVar4 = 0x48;
      if ((AHEFOIOKDOK->fields).HJPOJOPKEKI != false) {
        lVar4 = 0x50;
      }
      pPVar2 = PNGKLCHKPEO__OKODHBNONJA
                         (__this,AHEFOIOKDOK,
                          *(System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o **)
                           ((long)&__this->klass + lVar4),in_x3);
      return pPVar2;
    }
  }
  else {
    if (iVar1 != 2) {
      pPVar2 = PNGKLCHKPEO__GHNDNCOCIPC(__this,AHEFOIOKDOK,method);
      return pPVar2;
    }
switchD_032e565c_caseD_2:
    if ((AHEFOIOKDOK->fields).HJPOJOPKEKI == false) {
LAB_032e5668:
      return (__this->fields).BEMCNJHEADJ;
    }
LAB_032e5634:
    pPVar2 = (__this->fields).JPJMGEPBOOP;
  }
  return pPVar2;
}

