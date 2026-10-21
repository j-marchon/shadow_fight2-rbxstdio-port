// PNGKLCHKPEO$$JHBMNNPHEPD @ RVA 0x31E5928

NJPBHDMCLIN_KLLGIFHMMIP_o *
PNGKLCHKPEO__JHBMNNPHEPD(PNGKLCHKPEO_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  int32_t local_24;
  
  if ((DAT_04566d5c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5569);
    DAT_04566d5c = 1;
  }
  switch((__this->fields).LOAFPIOGJAF) {
  case 0:
  case 1:
    goto joined_r0x032e5a60;
  case 2:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).PFFLOCBGFCH;
    }
    break;
  case 3:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).PFDEJKDOAGL;
    }
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (__this->fields).LOAFPIOGJAF;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) break;
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar1;
    thunk_FUN_01c20e04(args->m_Items,pIVar1);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_5569,args,(MethodInfo *)0x0);
joined_r0x032e5a60:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).BEMCNJHEADJ;
    }
    break;
  case 6:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).EBLHLNKKBEO;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

