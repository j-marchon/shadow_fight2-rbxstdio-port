// TypeDefIndex 1909
// Namespace: 
// public class JGICAMMODIC : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x325CA34]
// JGICAMMODIC$$DLKKPFHKIPB @ RVA 0x325CA34

System_Collections_Generic_IEnumerable_string__o *
JGICAMMODIC__DLKKPFHKIPB(JGICAMMODIC_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04567192 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5091);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5092);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567192 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5091,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5092,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string AJJLBBCJAAL(string[] BFPCMHPBAGL)  [RVA 0x325CBA4]
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


// ===== public bool ECKDICODLME()  [RVA 0x325CDE0]
// JGICAMMODIC$$ECKDICODLME @ RVA 0x325CDE0

bool JGICAMMODIC__ECKDICODLME(JGICAMMODIC_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public void .ctor()  [RVA 0x325CDE8]
// JGICAMMODIC$$.ctor @ RVA 0x325CDE8

void JGICAMMODIC___ctor(JGICAMMODIC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x325CDF0]
// JGICAMMODIC$$IGMDDJFPIJL @ RVA 0x325CDF0

System_String_o * JGICAMMODIC__IGMDDJFPIJL(JGICAMMODIC_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04567194 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_59);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5095);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567194 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5095,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_59,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x325CEA0]
// JGICAMMODIC$$KCBILPIAPHN @ RVA 0x325CEA0

int32_t JGICAMMODIC__KCBILPIAPHN(JGICAMMODIC_o *__this,MethodInfo *method)

{
  return 1;
}

