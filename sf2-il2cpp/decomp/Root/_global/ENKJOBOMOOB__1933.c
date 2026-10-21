// TypeDefIndex 1933
// Namespace: 
// public class ENKJOBOMOOB : IEJKLPPLHMO
// Fields:

// ===== public bool ECKDICODLME()  [RVA 0x326D240]
// ENKJOBOMOOB$$ECKDICODLME @ RVA 0x326D240

bool ENKJOBOMOOB__ECKDICODLME(ENKJOBOMOOB_o *__this,MethodInfo *method)

{
  return false;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x326D248]
// ENKJOBOMOOB$$IGMDDJFPIJL @ RVA 0x326D248

System_String_o * ENKJOBOMOOB__IGMDDJFPIJL(ENKJOBOMOOB_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 0336d26c to 0346d277 has its CatchHandler @ 0336ce60 */
  if ((DAT_045671f4 & 1) == 0) {
                    /* try { // try from 0336d278 to 0346d27f has its CatchHandler @ 0336d280 */
                    /* catch() { ... } // from try @ 0336d204 with catch @ 0336d280
                       catch() { ... } // from try @ 0336d278 with catch @ 0336d280 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_60);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5096);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045671f4 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5096,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_60,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x326D2F8]
// ENKJOBOMOOB$$DLKKPFHKIPB @ RVA 0x326D2F8

System_Collections_Generic_IEnumerable_string__o *
ENKJOBOMOOB__DLKKPFHKIPB(ENKJOBOMOOB_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_045671f5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5097);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5098);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045671f5 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5097,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5098,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x326D468]
// ENKJOBOMOOB$$.ctor @ RVA 0x326D468

void ENKJOBOMOOB___ctor(ENKJOBOMOOB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x326D470]
// ENKJOBOMOOB$$AJJLBBCJAAL @ RVA 0x326D470

System_String_o *
ENKJOBOMOOB__AJJLBBCJAAL(ENKJOBOMOOB_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  System_Nullable_int__o SVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str1;
  System_String_o *str2;
  SFButton_StaticFields *pSVar5;
  int32_t local_44;
  
  if ((DAT_045671f6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5099);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5100);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5101);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5102);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&SFButton_TypeInfo);
    DAT_045671f6 = 1;
  }
  local_44 = 0;
  SVar1 = AJAMDCEKAFE__NANCFCIGNEE(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  if (((ulong)SVar1.fields & 0xff) == 0) {
    pSVar5 = SFButton_TypeInfo->static_fields;
    local_44 = pSVar5->ClickInvokeFramesOffset;
  }
  else {
    local_44 = SVar1.fields.value;
    pSVar5 = SFButton_TypeInfo->static_fields;
  }
  pSVar5->ClickInvokeFramesOffset = local_44;
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5099,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5100,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0336d5c0 to 0346d7a7 has its CatchHandler @ 0336d5c0
                       catch() { ... } // from try @ 0336d5c0 with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336dbb4 with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336dc20 with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336dd34 with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336dd74 with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336dd8c with catch @ 0336d5c0
                       catch() { ... } // from try @ 0336de88 with catch @ 0336d5c0 */
  str1 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5101,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5102,(MethodInfo *)0x0);
  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat(pSVar4,str1,str2,(MethodInfo *)0x0);
  return pSVar4;
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x326D640]
// ENKJOBOMOOB$$KCBILPIAPHN @ RVA 0x326D640

int32_t ENKJOBOMOOB__KCBILPIAPHN(ENKJOBOMOOB_o *__this,MethodInfo *method)

{
  return 1;
}

