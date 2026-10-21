// ECENNHNBAME$$NLGCBCPOCID @ RVA 0x301A260

void ECENNHNBAME__NLGCBCPOCID(ECENNHNBAME_o *__this,System_String_o *AAIHDEKMIJG,MethodInfo *method)

{
  System_Byte_array *IMMNELPBGIF;
  System_Object_array *args;
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_04565bf5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_6387);
    DAT_04565bf5 = 1;
  }
  IMMNELPBGIF = CMEBCBKGFFL__JKGGKELPNKJ(AAIHDEKMIJG,(MethodInfo *)0x0);
  if ((IMMNELPBGIF != (System_Byte_array *)0x0) && (IMMNELPBGIF->max_length != 0)) {
    ECENNHNBAME__PLEKHOPFKNM(__this,IMMNELPBGIF,method);
    return;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((AAIHDEKMIJG != (System_String_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(AAIHDEKMIJG,(((args->obj).klass)->_1).element_class), lVar1 == 0))
  {
    uVar2 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar2,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)AAIHDEKMIJG;
    thunk_FUN_01c20e04(args->m_Items,AAIHDEKMIJG);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_6387,args,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

