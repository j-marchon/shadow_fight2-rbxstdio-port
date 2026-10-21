// TypeDefIndex 2008
// Namespace: 
// public class LJGNFBFLOCD : IEJKLPPLHMO
// Fields:

// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3295E84]
// LJGNFBFLOCD$$AJJLBBCJAAL @ RVA 0x3295E84

System_String_o *
LJGNFBFLOCD__AJJLBBCJAAL(LJGNFBFLOCD_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  LPGLKMNHELJ_o *__this_00;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *str1;
  MethodInfo *method_00;
  System_String_o *pSVar3;
  
  if ((DAT_04567368 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6172);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6173);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6174);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6175);
    FUN_01bab630(&byte___TypeInfo);
    __this = (LJGNFBFLOCD_o *)FUN_01bab630(&LPGLKMNHELJ_TypeInfo);
    DAT_04567368 = 1;
  }
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  if (OPAEPDIIOEB->max_length == 0) {
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6172,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6173,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    str1 = LJGNFBFLOCD__IGMDDJFPIJL((LJGNFBFLOCD_o *)pSVar3,method_00);
    pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
    return pSVar3;
  }
  if ((int)OPAEPDIIOEB->max_length != 0) {
    pSVar3 = OPAEPDIIOEB->m_Items[0];
    __this_00 = (LPGLKMNHELJ_o *)thunk_FUN_01bda818(LPGLKMNHELJ_TypeInfo);
    LPGLKMNHELJ___ctor(__this_00,pSVar3,true,false,(MethodInfo *)0x0);
    DialogsOpener__IPLAAIJEPOM(__this_00,(MethodInfo *)0x0);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6174,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6175,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void .ctor()  [RVA 0x32960D8]
// LJGNFBFLOCD$$.ctor @ RVA 0x32960D8

void LJGNFBFLOCD___ctor(LJGNFBFLOCD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool ECKDICODLME()  [RVA 0x32960E0]
// LJGNFBFLOCD$$ECKDICODLME @ RVA 0x32960E0

bool LJGNFBFLOCD__ECKDICODLME(LJGNFBFLOCD_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x32960E8]
// LJGNFBFLOCD$$DLKKPFHKIPB @ RVA 0x32960E8

System_Collections_Generic_IEnumerable_string__o *
LJGNFBFLOCD__DLKKPFHKIPB(LJGNFBFLOCD_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04567369 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6176);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6177);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 0339616c to 03496207 has its CatchHandler @ 0339616c
                       catch() { ... } // from try @ 0339616c with catch @ 0339616c
                       catch() { ... } // from try @ 0339624c with catch @ 0339616c
                       catch() { ... } // from try @ 03396300 with catch @ 0339616c
                       catch() { ... } // from try @ 0339630c with catch @ 0339616c
                       catch() { ... } // from try @ 033963b0 with catch @ 0339616c */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567369 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6176,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6177,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 03396208 to 03496213 has its CatchHandler @ 0339631c */
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
                    /* try { // try from 03396220 to 03496223 has its CatchHandler @ 03396318 */
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* try { // try from 0339623c to 0349624b has its CatchHandler @ 0339630c */
                    /* try { // try from 0339624c to 034962fb has its CatchHandler @ 0339616c */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x3296258]
// LJGNFBFLOCD$$KCBILPIAPHN @ RVA 0x3296258

int32_t LJGNFBFLOCD__KCBILPIAPHN(LJGNFBFLOCD_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x3296028]
// LJGNFBFLOCD$$IGMDDJFPIJL @ RVA 0x3296028

System_String_o * LJGNFBFLOCD__IGMDDJFPIJL(LJGNFBFLOCD_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_0456736a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6178);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6179);
    FUN_01bab630(&byte___TypeInfo);
    DAT_0456736a = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6178,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6179,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

