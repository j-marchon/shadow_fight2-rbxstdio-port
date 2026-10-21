// FKDLCJJOGIP$$EHCGDODIIGF @ RVA 0x35088F8

void FKDLCJJOGIP__EHCGDODIIGF(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *DIHAKADKIKM;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  NDPMLPGANCI_o *__this_00;
  FKDLCJJOGIP_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar1;
  
  if ((DAT_045688b6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3987);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3988);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    DAT_045688b6 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3987,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3988,(MethodInfo *)0x0);
  DIHAKADKIKM = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    method_01 = (MethodInfo *)0x0;
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Error(DIHAKADKIKM,BBBLOLJAMJP,(MethodInfo *)0x0);
    FKDLCJJOGIP__JJAAFACCDCP(__this,false,method_01);
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__PHFCKPKDMBK(__this_00,false,true,(MethodInfo *)0x0);
      (__this->fields)._MEAPCEHFFHD_k__BackingField = false;
      (__this->fields)._OHFODMIBJME_k__BackingField = false;
      FKDLCJJOGIP__OPFEMEHHPDI(__this_01,method_00);
      pSVar1 = (__this->fields).JFCAFEOAKBH;
      if (pSVar1 != (System_Action_o *)0x0) {
                    /* try { // try from 03608a40 to 03708a47 has its CatchHandler @ 03608b74 */
                    /* WARNING: Could not recover jumptable at 0x03608a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar1->fields).super.super.invoke_impl)
                  ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

