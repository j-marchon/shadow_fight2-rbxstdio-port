// CLFCKIFNGHA$$HIPBEBHBDLE @ RVA 0x34555C4

bool CLFCKIFNGHA__HIPBEBHBDLE(IAGNPGHOAIC_o *IEKGHPACLPF,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *JLNPKGGFFDD;
  System_Object_array *BFPCMHPBAGL;
  long lVar3;
  undefined8 uVar4;
  System_String_o *pSVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = IEKGHPACLPF;
  if ((DAT_045682c8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6476);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6477);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    auVar6 = FUN_01bab630(&UnityMainThreadDispatcher_TypeInfo);
    DAT_045682c8 = 1;
  }
  if (IEKGHPACLPF != (IAGNPGHOAIC_o *)0x0) {
    bVar2 = IAGNPGHOAIC__PBACHEOJBGG(IEKGHPACLPF,(MethodInfo *)0x0);
    if (!bVar2) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6476,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6477,
                 (MethodInfo *)0x0);
      JLNPKGGFFDD = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      auVar6 = FUN_01bab718(object___TypeInfo,1);
      BFPCMHPBAGL = auVar6._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar6._8_8_;
      auVar6 = auVar1 << 0x40;
      if (BFPCMHPBAGL == (System_Object_array *)0x0) goto LAB_03555730;
      pSVar5 = (IEKGHPACLPF->fields).OMJHOKDPLKI;
      if ((pSVar5 != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pSVar5,(((BFPCMHPBAGL->obj).klass)->_1).element_class),
         lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)BFPCMHPBAGL->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      BFPCMHPBAGL->m_Items[0] = (Il2CppObject *)pSVar5;
      thunk_FUN_01c20e04(BFPCMHPBAGL->m_Items,pSVar5);
      if ((UnityMainThreadDispatcher_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityMainThreadDispatcher__LogErrorFormatThreadSafe(JLNPKGGFFDD,BFPCMHPBAGL,(MethodInfo *)0x0)
      ;
    }
    return bVar2;
  }
LAB_03555730:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}

