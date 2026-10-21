// BDGDJDGHMJI$$EINFELGOJPL @ RVA 0x3264B3C

/* WARNING: Type propagation algorithm not settling */

System_String_o * BDGDJDGHMJI__EINFELGOJPL(System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  LJNJDFEAIOH_o *__this;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *x;
  System_RuntimeFieldHandle_Fields *pSVar3;
  System_RuntimeFieldHandle_Fields *pSVar4;
  
  if ((DAT_045671c1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5568);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5569);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5570);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5571);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671c1 = 1;
    method = extraout_x1;
  }
  if (DAT_045660f3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo,method);
    DAT_045660f3 = '\x01';
  }
  x = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar4 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5569;
    pSVar3 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5568;
  }
  else {
    if ((x == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) ||
       (__this = (x->fields).Controller, __this == (LJNJDFEAIOH_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LJNJDFEAIOH__BIFIGDCAHGN(__this,(MethodInfo *)0x0);
    pSVar4 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5571;
    pSVar3 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5570;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,(System_RuntimeFieldHandle_o)pSVar3->value,
             (MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,(System_RuntimeFieldHandle_o)pSVar4->value,
             (MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar2;
}

