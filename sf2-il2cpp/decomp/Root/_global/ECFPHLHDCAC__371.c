// TypeDefIndex 371
// Namespace: 
// public class ECFPHLHDCAC : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x3478204]
// ECFPHLHDCAC$$DLKKPFHKIPB @ RVA 0x3478204

System_Collections_Generic_IEnumerable_string__o *
ECFPHLHDCAC__DLKKPFHKIPB(ECFPHLHDCAC_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_0456833a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6031);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6032);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_0456833a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6031,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6032,(MethodInfo *)0x0);
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


// ===== public bool ECKDICODLME()  [RVA 0x3478374]
// ECFPHLHDCAC$$ECKDICODLME @ RVA 0x3478374

bool ECFPHLHDCAC__ECKDICODLME(ECFPHLHDCAC_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x347837C]
// ECFPHLHDCAC$$KCBILPIAPHN @ RVA 0x347837C

int32_t ECFPHLHDCAC__KCBILPIAPHN(ECFPHLHDCAC_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public void .ctor()  [RVA 0x3478384]
// ECFPHLHDCAC$$.ctor @ RVA 0x3478384

void ECFPHLHDCAC___ctor(ECFPHLHDCAC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x347838C]
// ECFPHLHDCAC$$AJJLBBCJAAL @ RVA 0x347838C

System_String_o *
ECFPHLHDCAC__AJJLBBCJAAL(ECFPHLHDCAC_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int32_t iVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_String_o *str1;
  int32_t local_44;
  System_Nullable_int__Fields local_38;
  
  if ((DAT_0456833b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6033);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6034);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_Value__);
    FUN_01bab630(&OLKKAIFGGAK_TypeInfo);
    DAT_0456833b = 1;
  }
  local_44 = 0;
  local_38 = (System_Nullable_int__Fields)AJAMDCEKAFE__NANCFCIGNEE(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  if (((ulong)local_38 & 0xff) == 0) {
    System_Nullable<int>___ctor
              ((System_Nullable_int__o)&local_38,0,Method_System_Nullable<int>__ctor__);
  }
  iVar1 = System_Nullable<int>__get_Value
                    ((System_Nullable_int__o)&local_38,Method_System_Nullable<int>_get_Value__);
  OLKKAIFGGAK_TypeInfo->static_fields->PCECHCGMNBH = iVar1 != 0;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6033,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6034,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  local_44 = System_Nullable<int>__get_Value
                       ((System_Nullable_int__o)&local_38,Method_System_Nullable<int>_get_Value__);
  str1 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(pSVar2,str1,(MethodInfo *)0x0);
  return pSVar2;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x347851C]
// ECFPHLHDCAC$$IGMDDJFPIJL @ RVA 0x347851C

System_String_o * ECFPHLHDCAC__IGMDDJFPIJL(ECFPHLHDCAC_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_0456833c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_73);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6035);
    FUN_01bab630(&byte___TypeInfo);
    DAT_0456833c = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6035,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_73,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

