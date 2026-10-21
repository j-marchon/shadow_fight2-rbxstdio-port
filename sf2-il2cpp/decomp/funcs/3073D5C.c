// PELHIDJOBAB$$EECHNLMEMEF @ RVA 0x3073D5C

void PELHIDJOBAB__EECHNLMEMEF
               (Il2CppObject *OHKEKFCKBED,System_String_o *LPKODEJMJBB,
               System_Exception_o *BPKHJMDEHED,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04565f94 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6523);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6524);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565f94 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6523,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6524,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  pSVar1 = System_String__Format
                     (pSVar1,(Il2CppObject *)LPKODEJMJBB,(Il2CppObject *)BPKHJMDEHED,
                      (MethodInfo *)0x0);
  KFJJHMDIFIG__ONCJPMNKDIM(OHKEKFCKBED,pSVar1,(MethodInfo *)0x0);
  return;
}

