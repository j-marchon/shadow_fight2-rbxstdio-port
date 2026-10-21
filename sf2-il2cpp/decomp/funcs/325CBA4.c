// JGICAMMODIC$$AJJLBBCJAAL @ RVA 0x325CBA4

System_String_o *
JGICAMMODIC__AJJLBBCJAAL(JGICAMMODIC_o *__this,System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  Il2CppObject *arg0;
  undefined1 local_48 [4];
  System_Nullable_bool__Fields local_44 [2];
  
  if ((DAT_04567193 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5093);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5094);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_04567193 = 1;
  }
  local_44[0] = (System_Nullable_bool__Fields)
                AJAMDCEKAFE__FAEBPLENEGK(0,BFPCMHPBAGL,(MethodInfo *)0x0);
  if (((ushort)local_44[0] & 0xff) == 0) {
    if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04566bb3 == '\0') {
      FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
      DAT_04566bb3 = '\x01';
    }
    if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    System_Nullable<bool>___ctor
              ((System_Nullable_bool__o)SUB82(local_44,0),
               KOKJOMBFNCD_TypeInfo->static_fields->_JAIDNCGGKNI_k__BackingField == false,
               Method_System_Nullable<bool>__ctor__);
  }
  bVar1 = System_Nullable<bool>__get_Value
                    ((System_Nullable_bool__o)SUB82(local_44,0),
                     Method_System_Nullable<bool>_get_Value__);
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KOKJOMBFNCD_TypeInfo);
  }
  if (DAT_0456720b == '\0') {
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    DAT_0456720b = '\x01';
  }
  if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  KOKJOMBFNCD_TypeInfo->static_fields->_JAIDNCGGKNI_k__BackingField = bVar1;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5093,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5094,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  local_48[0] = System_Nullable<bool>__get_Value
                          ((System_Nullable_bool__o)SUB82(local_44,0),
                           Method_System_Nullable<bool>_get_Value__);
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_48);
  pSVar2 = System_String__Format(pSVar2,arg0,(MethodInfo *)0x0);
  return pSVar2;
}

