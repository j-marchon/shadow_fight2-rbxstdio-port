// BDGDJDGHMJI$$PNEPEGFGDBE @ RVA 0x3262A0C

void BDGDJDGHMJI__PNEPEGFGDBE(KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = IDCGLBOIAFJ;
  if ((DAT_045671b9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5484);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5485);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5486);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5487);
    FUN_01bab630(&byte___TypeInfo);
    auVar7 = FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    DAT_045671b9 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar3 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if (bVar3) {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5484,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5485,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,pSVar4,(MethodInfo *)0x0);
      auVar7 = FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      pNVar6 = auVar7._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = auVar7._8_8_;
      auVar7 = auVar1 << 0x40;
      if (pNVar6 == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_03362bd0;
      if ((int)pNVar6->max_length != 0) {
        pNVar6->m_Items[0] = 6;
        Nekki_Utils_DetailedLog__Log(pSVar5,pNVar6,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5486,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5487,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,pSVar4,(MethodInfo *)0x0);
      auVar7 = FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      pNVar6 = auVar7._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar7._8_8_;
      auVar7 = auVar2 << 0x40;
      if (pNVar6 == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_03362bd0;
      if ((int)pNVar6->max_length != 0) {
        pNVar6->m_Items[0] = 6;
        Nekki_Utils_DetailedLog__Error(pSVar5,pNVar6,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03362bd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
}

