// MKFAKELPPAC$$EGELBFAFJND @ RVA 0x331666C

void MKFAKELPPAC__EGELBFAFJND(MKFAKELPPAC_o *__this,int32_t PEGHOODANBE,MethodInfo *method)

{
  bool bVar1;
  MKFAKELPPAC_o *method_00;
  PCEDNFLCPPF_o *pPVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  MethodInfo *pMVar6;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_00;
  MethodInfo *in_x3;
  
  method_00 = __this;
  if ((DAT_045677f9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6587);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6588);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6589);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6590);
    FUN_01bab630(&byte___TypeInfo);
    method_00 = (MKFAKELPPAC_o *)FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045677f9 = 1;
  }
  pPVar2 = PCEDNFLCPPF__AIHNLLGNBLC((MethodInfo *)method_00);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._30_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._30_unknown.method);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6587,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6588,(MethodInfo *)0x0);
  pMVar6 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if (pPVar2 != (PCEDNFLCPPF_o *)0x0) {
    PCEDNFLCPPF__DOABHMPBKND(pPVar2,pSVar3,(System_String_o *)pMVar6,in_x3);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = MGNPHCAAEIO__FLCIPICBNGD(PEGHOODANBE,(MethodInfo *)0x0);
    pPVar2 = PCEDNFLCPPF__AIHNLLGNBLC((MethodInfo *)(ulong)bVar1);
    if (pPVar2 != (PCEDNFLCPPF_o *)0x0) {
      PCEDNFLCPPF__DENNDCDDDLB(pPVar2,PEGHOODANBE,pMVar6);
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      __this_00 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (__this_00 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        Nekki_SF2_GUI_Menu_MainMenu__UpdateBarEnergy(__this_00,(MethodInfo *)0x0);
      }
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6589,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6590,
                 (MethodInfo *)0x0);
      pMVar6 = (MethodInfo *)0x0;
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      MKFAKELPPAC__CEBOEOLNLCK(__this,pSVar3,pMVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

