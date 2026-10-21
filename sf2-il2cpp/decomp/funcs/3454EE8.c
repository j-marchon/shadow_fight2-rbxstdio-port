// CLFCKIFNGHA$$HIPBEBHBDLE @ RVA 0x3454EE8

bool CLFCKIFNGHA__HIPBEBHBDLE(System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  bool bVar1;
  IAGNPGHOAIC_o *IEKGHPACLPF;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *JLNPKGGFFDD;
  System_Object_array *BFPCMHPBAGL;
  long lVar2;
  undefined8 uVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  
  if ((DAT_045682cb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6478);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6479);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityMainThreadDispatcher_TypeInfo);
    DAT_045682cb = 1;
    method = extraout_x1;
  }
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  IEKGHPACLPF = CLFCKIFNGHA__GJJHPEFOHON(AFKICLAFDKC,method);
  if (IEKGHPACLPF != (IAGNPGHOAIC_o *)0x0) {
    method_00 = extraout_x1_01;
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_02;
    }
    bVar1 = CLFCKIFNGHA__HIPBEBHBDLE(IEKGHPACLPF,method_00);
    return bVar1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6478,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6479,(MethodInfo *)0x0);
  JLNPKGGFFDD = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  BFPCMHPBAGL = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (BFPCMHPBAGL == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((AFKICLAFDKC != (System_String_o *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(AFKICLAFDKC,(((BFPCMHPBAGL->obj).klass)->_1).element_class),
     lVar2 == 0)) {
    uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar3,0);
  }
  if ((int)BFPCMHPBAGL->max_length != 0) {
    BFPCMHPBAGL->m_Items[0] = (Il2CppObject *)AFKICLAFDKC;
    thunk_FUN_01c20e04(BFPCMHPBAGL->m_Items,AFKICLAFDKC);
    if ((UnityMainThreadDispatcher_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityMainThreadDispatcher__LogErrorFormatThreadSafe(JLNPKGGFFDD,BFPCMHPBAGL,(MethodInfo *)0x0);
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

