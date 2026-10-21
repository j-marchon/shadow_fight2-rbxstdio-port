// TypeDefIndex 1687
// Namespace: 
// public class HPDALAFKDOA : IEJKLPPLHMO
// Fields:

// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x31CF620]
// HPDALAFKDOA$$KCBILPIAPHN @ RVA 0x31CF620

int32_t HPDALAFKDOA__KCBILPIAPHN(HPDALAFKDOA_o *__this,MethodInfo *method)

{
  return 0;
}


// ===== public void .ctor()  [RVA 0x31CF628]
// HPDALAFKDOA$$.ctor @ RVA 0x31CF628

void HPDALAFKDOA___ctor(HPDALAFKDOA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x31CF630]
// HPDALAFKDOA$$DLKKPFHKIPB @ RVA 0x31CF630

System_Collections_Generic_IEnumerable_string__o *
HPDALAFKDOA__DLKKPFHKIPB(HPDALAFKDOA_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566c98 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6436);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6437);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566c98 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6436,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6437,(MethodInfo *)0x0);
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
                    /* try { // try from 032cf784 to 033cf837 has its CatchHandler @ 032cf784
                       catch() { ... } // from try @ 032cf784 with catch @ 032cf784
                       catch() { ... } // from try @ 032cf87c with catch @ 032cf784
                       catch() { ... } // from try @ 032cf8ac with catch @ 032cf784
                       catch() { ... } // from try @ 032cf8e0 with catch @ 032cf784
                       catch() { ... } // from try @ 032cf910 with catch @ 032cf784 */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x31CF7A0]
// HPDALAFKDOA$$AJJLBBCJAAL @ RVA 0x31CF7A0

/* WARNING: Type propagation algorithm not settling */

System_String_o *
HPDALAFKDOA__AJJLBBCJAAL(HPDALAFKDOA_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_RuntimeFieldHandle_Fields *pSVar8;
  
  if ((DAT_04566c99 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6438);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6439);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6440);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6441);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6442);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6443);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6444);
                    /* try { // try from 032cf838 to 033cf83f has its CatchHandler @ 032cf8c4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6445);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6446);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6447);
                    /* try { // try from 032cf85c to 033cf85f has its CatchHandler @ 032cf8c0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6448);
                    /* try { // try from 032cf86c to 033cf87b has its CatchHandler @ 032cf8b0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6449);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6450);
                    /* try { // try from 032cf87c to 033cf89f has its CatchHandler @ 032cf784 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6451);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
                    /* try { // try from 032cf8a0 to 033cf8a3 has its CatchHandler @ 032cf8bc */
                    /* try { // try from 032cf8a4 to 033cf8a7 has its CatchHandler @ 032cf8b8 */
                    /* try { // try from 032cf8a8 to 033cf8ab has its CatchHandler @ 032cf8b4 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 032cf8ac to 033cf8db has its CatchHandler @ 032cf784 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cf86c with catch @ 032cf8b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cf8a8 with catch @ 032cf8b4
                        */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cf8a4 with catch @ 032cf8b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cf8a0 with catch @ 032cf8bc
                        */
    DAT_04566c99 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cf85c with catch @ 032cf8c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cf838 with catch @ 032cf8c4
                        */
  pSVar3 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,(MethodInfo *)0x0);
                    /* try { // try from 032cf8dc to 033cf8df has its CatchHandler @ 032cf900 */
                    /* try { // try from 032cf8e0 to 033cf907 has its CatchHandler @ 032cf784 */
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6438,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 032cf8dc with catch @ 032cf900 */
                    /* try { // try from 032cf908 to 033cf90f has its CatchHandler @ 032cf924 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6439,(MethodInfo *)0x0);
                    /* try { // try from 032cf910 to 033cf91b has its CatchHandler @ 032cf784 */
                    /* try { // try from 032cf91c to 033cf923 has its CatchHandler @ 032cf924 */
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032cf908 with catch @ 032cf924
                       catch(type#2 @ 00000000) { ... } // from try @ 032cf91c with catch @ 032cf924
                        */
                    /* try { // try from 032cf928 to 033cf9db has its CatchHandler @ 032cf928
                       catch() { ... } // from try @ 032cf928 with catch @ 032cf928
                       catch() { ... } // from try @ 032cfa20 with catch @ 032cf928
                       catch() { ... } // from try @ 032cfa50 with catch @ 032cf928
                       catch() { ... } // from try @ 032cfa84 with catch @ 032cf928
                       catch() { ... } // from try @ 032cfab4 with catch @ 032cf928 */
    bVar1 = System_String__EndsWith(pSVar3,pSVar6,5,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6440,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6441,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(pSVar3,pSVar6,(MethodInfo *)0x0);
    }
                    /* try { // try from 032cf9dc to 033cf9e3 has its CatchHandler @ 032cfa68 */
    pSVar7 = AJAMDCEKAFE__LFCNNAGLPHO(1,OPAEPDIIOEB,(MethodInfo *)0x0);
    pSVar6 = StringLiteral_1/*""*/;
    if (pSVar7 != (System_String_o *)0x0) {
      pSVar6 = pSVar7;
    }
                    /* try { // try from 032cfa00 to 033cfa03 has its CatchHandler @ 032cfa64 */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 032cfa10 to 033cfa1f has its CatchHandler @ 032cfa54 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6442,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 032cfa20 to 033cfa43 has its CatchHandler @ 032cf928 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6443,(MethodInfo *)0x0)
    ;
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 032cfa44 to 033cfa47 has its CatchHandler @ 032cfa60 */
                    /* try { // try from 032cfa48 to 033cfa4b has its CatchHandler @ 032cfa5c */
                    /* try { // try from 032cfa4c to 033cfa4f has its CatchHandler @ 032cfa58 */
    bVar1 = System_String__op_Equality(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 032cfa50 to 033cfa7f has its CatchHandler @ 032cf928 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cfa10 with catch @ 032cfa54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cfa4c with catch @ 032cfa58
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cfa48 with catch @ 032cfa5c
                        */
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cfa44 with catch @ 032cfa60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cfa00 with catch @ 032cfa64
                        */
      thunk_FUN_01ba7564(SF2Paths_TypeInfo);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032cf9dc with catch @ 032cfa68
                        */
    pSVar6 = SF2Paths__CPIACIDINLI((MethodInfo *)0x0);
                    /* try { // try from 032cfa80 to 033cfa83 has its CatchHandler @ 032cfaa4 */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 032cfa84 to 033cfaab has its CatchHandler @ 032cf928 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6444,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 032cfa80 with catch @ 032cfaa4 */
                    /* try { // try from 032cfaac to 033cfab3 has its CatchHandler @ 032cfac8 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6445,(MethodInfo *)0x0)
    ;
                    /* try { // try from 032cfab4 to 033cfabf has its CatchHandler @ 032cf928 */
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 032cfac0 to 033cfac7 has its CatchHandler @ 032cfac8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032cfaac with catch @ 032cfac8
                       catch(type#2 @ 00000000) { ... } // from try @ 032cfac0 with catch @ 032cfac8
                        */
    pSVar3 = System_String__Concat(pSVar6,pSVar7,pSVar3,(MethodInfo *)0x0);
    bVar2 = NEHNBJKKABI__HALDCNGHJCO(pSVar3,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar6 = NEHNBJKKABI__EPMKDIAJEOI(pSVar3,(MethodInfo *)0x0);
      if (pSVar6 == (System_String_o *)0x0) goto LAB_032cfc5c;
      if (0 < (pSVar6->fields)._stringLength) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        NLPJLHOEAOE__IPFBEDIBGIJ(pSVar6,(bool)(~bVar1 & 1),true,(MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6448,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6449,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        return pSVar3;
      }
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6450,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar8 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6451;
    }
    else {
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6446,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar8 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6447;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar8->value,(MethodInfo *)0x0
              );
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(pSVar6,pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
LAB_032cfc5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string IGMDDJFPIJL()  [RVA 0x31CFC60]
// HPDALAFKDOA$$IGMDDJFPIJL @ RVA 0x31CFC60

System_String_o * HPDALAFKDOA__IGMDDJFPIJL(HPDALAFKDOA_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566c9a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_78);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6452);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566c9a = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6452,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_78,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool ECKDICODLME()  [RVA 0x31CFD10]
// HPDALAFKDOA$$ECKDICODLME @ RVA 0x31CFD10

bool HPDALAFKDOA__ECKDICODLME(HPDALAFKDOA_o *__this,MethodInfo *method)

{
  return true;
}

