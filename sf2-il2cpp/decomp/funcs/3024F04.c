// KJFPGDFNFCL$$ONCFEIGIBGB @ RVA 0x3024F04

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_string__o *
KJFPGDFNFCL__ONCFEIGIBGB(NJPBHDMCLIN_o *AHEFOIOKDOK,int32_t GCIBBBDPBNK,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  int32_t local_24;
  
  if ((DAT_04565c81 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4562);
    DAT_04565c81 = 1;
  }
  switch(GCIBBBDPBNK) {
  case 1:
    goto joined_r0x03125044;
  case 2:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).FEONJHEFIIC;
    }
    break;
  case 3:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).AKMMPGCDEGB;
    }
    break;
  case 4:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).OFNOOFAEIPH;
    }
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = GCIBBBDPBNK;
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
    UnityEngine_Debug__LogErrorFormat(StringLiteral_4562,args,(MethodInfo *)0x0);
joined_r0x03125044:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).FAPKAFBALDE;
    }
    break;
  case 6:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).EBDPNMBDCII;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

