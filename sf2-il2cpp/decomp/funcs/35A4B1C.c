// Nekki.Utils.RaidBetaLogger$$LNIBGNOBNJE @ RVA 0x35A4B1C

void Nekki_Utils_RaidBetaLogger__LNIBGNOBNJE
               (Nekki_Utils_RaidBetaLogger_o *__this,System_Byte_array *IMMNELPBGIF,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *str1;
  
  if ((DAT_04568df3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1474);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1475);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568df3 = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = UnityEngine_Application__get_persistentDataPath((MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1474,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1475,(MethodInfo *)0x0);
  str1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  System_IO_File__WriteAllBytes(pSVar1,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}

