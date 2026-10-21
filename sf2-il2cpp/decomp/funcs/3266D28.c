// BDGDJDGHMJI$$LLJPNLBOHOO @ RVA 0x3266D28

System_String_o * BDGDJDGHMJI__LLJPNLBOHOO(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  EEGDOGKBLNG_o *pEVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 03366d0c with catch @ 03366d28
                       catch() { ... } // from try @ 03366d20 with catch @ 03366d28 */
  if ((DAT_045671ce & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5640);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5641);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045671ce = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
    (pEVar1->fields).NCMLGNEFKBF = 0;
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5640,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5641,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

