// TypeDefIndex 508
// Namespace: 
// public class AEBBCOILLIA : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x358E97C]
// AEBBCOILLIA$$DLKKPFHKIPB @ RVA 0x358E97C

System_Collections_Generic_IEnumerable_string__o *
AEBBCOILLIA__DLKKPFHKIPB(AEBBCOILLIA_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 0368e9a0 to 0378ebff has its CatchHandler @ 0368e9a0
                       catch() { ... } // from try @ 0368e9a0 with catch @ 0368e9a0
                       catch() { ... } // from try @ 0368ec2c with catch @ 0368e9a0
                       catch() { ... } // from try @ 0368ec78 with catch @ 0368e9a0
                       catch() { ... } // from try @ 0368eca0 with catch @ 0368e9a0
                       catch() { ... } // from try @ 0368ecfc with catch @ 0368e9a0
                       catch() { ... } // from try @ 0368ed88 with catch @ 0368e9a0
                       catch() { ... } // from try @ 0368edbc with catch @ 0368e9a0
                       catch() { ... } // from try @ 0368ede0 with catch @ 0368e9a0
                       catch() { ... } // from try @ 0368ee20 with catch @ 0368e9a0 */
  if ((DAT_04568d61 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6154);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6155);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568d61 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6154,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6155,(MethodInfo *)0x0);
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


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x358EAEC]
// AEBBCOILLIA$$KCBILPIAPHN @ RVA 0x358EAEC

int32_t AEBBCOILLIA__KCBILPIAPHN(AEBBCOILLIA_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public bool ECKDICODLME()  [RVA 0x358EAF4]
// AEBBCOILLIA$$ECKDICODLME @ RVA 0x358EAF4

bool AEBBCOILLIA__ECKDICODLME(AEBBCOILLIA_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public void .ctor()  [RVA 0x358EAFC]
// AEBBCOILLIA$$.ctor @ RVA 0x358EAFC

void AEBBCOILLIA___ctor(AEBBCOILLIA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x358EB04]
// AEBBCOILLIA$$AJJLBBCJAAL @ RVA 0x358EB04

System_String_o *
AEBBCOILLIA__AJJLBBCJAAL(AEBBCOILLIA_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_Nullable_int__o SVar6;
  int32_t iVar7;
  
  if ((DAT_04568d62 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6156);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6157);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6158);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6159);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6160);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6161);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d62 = 1;
  }
  pSVar2 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
  pSVar3 = StringLiteral_1/*""*/;
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar3 = pSVar2;
  }
  if (pSVar3 != (System_String_o *)0x0) {
    pSVar3 = System_String__ToUpper(pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0368ec00 to 0378ec07 has its CatchHandler @ 0368ec84 */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6156,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0368ec20 to 0378ec2b has its CatchHandler @ 0368ec78 */
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0368ec2c to 0378ec6f has its CatchHandler @ 0368e9a0 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6157,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar3,pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      SVar6 = AJAMDCEKAFE__NANCFCIGNEE(1,OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* try { // try from 0368ec70 to 0378ec73 has its CatchHandler @ 0368ec80 */
      if (((ulong)SVar6.fields & 0xff) == 0) {
                    /* try { // try from 0368ecf4 to 0378ecfb has its CatchHandler @ 0368edc4 */
                    /* try { // try from 0368ecfc to 0378ed7f has its CatchHandler @ 0368e9a0 */
        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar7 = EOAOCPLIKOI_TypeInfo->static_fields->LHKIPKIGEHA;
      }
      else {
                    /* try { // try from 0368ec74 to 0378ec77 has its CatchHandler @ 0368ec7c */
                    /* catch() { ... } // from try @ 0368ec20 with catch @ 0368ec78
                       try { // try from 0368ec78 to 0378ec9b has its CatchHandler @ 0368e9a0 */
                    /* catch() { ... } // from try @ 0368ec74 with catch @ 0368ec7c */
        iVar7 = SVar6.fields.value;
                    /* catch() { ... } // from try @ 0368ec70 with catch @ 0368ec80 */
                    /* catch() { ... } // from try @ 0368ec00 with catch @ 0368ec84 */
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      EOAOCPLIKOI_TypeInfo->static_fields->LHKIPKIGEHA = iVar7;
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6158,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6159,
                 (MethodInfo *)0x0);
                    /* try { // try from 0368ed80 to 0378ed83 has its CatchHandler @ 0368edc0 */
                    /* try { // try from 0368ed84 to 0378ed87 has its CatchHandler @ 0368edbc */
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0368ed88 to 0378eda7 has its CatchHandler @ 0368e9a0 */
                    /* catch() { ... } // from try @ 0368ec9c with catch @ 0368ed98 */
      pSVar2 = System_Int32__ToString
                         ((int)EOAOCPLIKOI_TypeInfo->static_fields + 0x38,(MethodInfo *)0x0);
                    /* try { // try from 0368eda8 to 0378edbb has its CatchHandler @ 0368ee34 */
                    /* catch() { ... } // from try @ 0368ed84 with catch @ 0368edbc
                       try { // try from 0368edbc to 0378eddb has its CatchHandler @ 0368e9a0 */
                    /* catch() { ... } // from try @ 0368ed80 with catch @ 0368edc0 */
      pSVar3 = System_String__Concat(pSVar3,pSVar2,(MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0368ec9c to 0378ec9f has its CatchHandler @ 0368ed98 */
                    /* try { // try from 0368eca0 to 0378ecf3 has its CatchHandler @ 0368e9a0 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6160,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6161,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0368ecf4 with catch @ 0368edc4 */
  FUN_01bab8c8();
}


// ===== public string IGMDDJFPIJL()  [RVA 0x358EDC8]
// AEBBCOILLIA$$IGMDDJFPIJL @ RVA 0x358EDC8

System_String_o * AEBBCOILLIA__IGMDDJFPIJL(AEBBCOILLIA_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 0368eddc to 0378eddf has its CatchHandler @ 0368ee08 */
                    /* try { // try from 0368ede0 to 0378ee17 has its CatchHandler @ 0368e9a0 */
  if ((DAT_04568d63 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6162);
                    /* catch() { ... } // from try @ 0368eddc with catch @ 0368ee08 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6163);
                    /* try { // try from 0368ee18 to 0378ee1f has its CatchHandler @ 0368ee34 */
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0368ee20 to 0378ee2b has its CatchHandler @ 0368e9a0 */
    DAT_04568d63 = 1;
  }
                    /* try { // try from 0368ee2c to 0378ee33 has its CatchHandler @ 0368ee34 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0368eda8 with catch @ 0368ee34
                       catch() { ... } // from try @ 0368ee18 with catch @ 0368ee34
                       catch() { ... } // from try @ 0368ee2c with catch @ 0368ee34 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6162,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6163,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

