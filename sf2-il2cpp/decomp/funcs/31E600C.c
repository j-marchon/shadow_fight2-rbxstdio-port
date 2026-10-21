// PNGKLCHKPEO$$AKHHLNDNHGF @ RVA 0x31E600C

CNDPAJOLKFN_o *
PNGKLCHKPEO__AKHHLNDNHGF(PNGKLCHKPEO_o *__this,IEFEBEDLHNN_o *AHDGNOJPPIB,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  CNDPAJOLKFN_o *pCVar4;
  undefined8 uVar5;
  int32_t local_24;
  
  if ((DAT_04566d5f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&PNGKLCHKPEO_JOFIFGCDGBE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5432);
    DAT_04566d5f = 1;
  }
  iVar1 = (__this->fields).JNLOFJLAOFM;
  if (iVar1 == 2) {
    if (AHDGNOJPPIB == (IEFEBEDLHNN_o *)0x0) goto LAB_032e6140;
    pCVar4 = (AHDGNOJPPIB->fields).BJKKHONDAKP;
  }
  else {
    if (iVar1 != 1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = (__this->fields).JNLOFJLAOFM;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(PNGKLCHKPEO_JOFIFGCDGBE_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) goto LAB_032e6140;
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
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
      UnityEngine_Debug__LogErrorFormat(StringLiteral_5432,args,(MethodInfo *)0x0);
    }
    if (AHDGNOJPPIB == (IEFEBEDLHNN_o *)0x0) {
LAB_032e6140:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pCVar4 = (AHDGNOJPPIB->fields).CNMHHKAMGPI;
  }
  return pCVar4;
}

