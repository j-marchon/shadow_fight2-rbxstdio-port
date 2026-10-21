// TypeDefIndex 1532
// Namespace: 
// public class LGICOANJJLI : IEJKLPPLHMO
// Fields:

// ===== public string IGMDDJFPIJL()  [RVA 0x31A4214]
// LGICOANJJLI$$IGMDDJFPIJL @ RVA 0x31A4214

System_String_o * LGICOANJJLI__IGMDDJFPIJL(LGICOANJJLI_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566afa & 1) == 0) {
                    /* try { // try from 032a4244 to 033a43d7 has its CatchHandler @ 032a4244
                       catch() { ... } // from try @ 032a4244 with catch @ 032a4244
                       catch() { ... } // from try @ 032a4414 with catch @ 032a4244
                       catch() { ... } // from try @ 032a471c with catch @ 032a4244
                       catch() { ... } // from try @ 032a4740 with catch @ 032a4244
                       catch() { ... } // from try @ 032a4800 with catch @ 032a4244
                       catch() { ... } // from try @ 032a4870 with catch @ 032a4244
                       catch() { ... } // from try @ 032a48c0 with catch @ 032a4244
                       catch() { ... } // from try @ 032a48e8 with catch @ 032a4244
                       catch() { ... } // from try @ 032a4928 with catch @ 032a4244 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_7);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4720);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566afa = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4720,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0xc0);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy192___field_7,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool ECKDICODLME()  [RVA 0x31A42C4]
// LGICOANJJLI$$ECKDICODLME @ RVA 0x31A42C4

bool LGICOANJJLI__ECKDICODLME(LGICOANJJLI_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x31A42CC]
// LGICOANJJLI$$DLKKPFHKIPB @ RVA 0x31A42CC

System_Collections_Generic_IEnumerable_string__o *
LGICOANJJLI__DLKKPFHKIPB(LGICOANJJLI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar6;
  
  if ((DAT_04566afb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4721);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4722);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4723);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4724);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566afb = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4721,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4722,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 032a43d8 to 033a43df has its CatchHandler @ 032a48cc */
    pSVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
                    /* try { // try from 032a43f4 to 033a43f7 has its CatchHandler @ 032a4830 */
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 032a4410 to 033a4413 has its CatchHandler @ 032a48c8 */
                    /* try { // try from 032a4414 to 033a4573 has its CatchHandler @ 032a4244 */
      if (uVar1 < (uint)pSVar6->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pSVar5;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)pSVar5,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4723,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4724,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pSVar5;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)pSVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x31A4504]
// LGICOANJJLI$$KCBILPIAPHN @ RVA 0x31A4504

int32_t LGICOANJJLI__KCBILPIAPHN(LGICOANJJLI_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x31A450C]
// LGICOANJJLI$$AJJLBBCJAAL @ RVA 0x31A450C

/* WARNING: Type propagation algorithm not settling */

System_String_o *
LGICOANJJLI__AJJLBBCJAAL(LGICOANJJLI_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  System_String_o *pSVar7;
  System_Byte_array *pSVar8;
  System_Byte_array *pSVar9;
  System_String_o *pSVar10;
  CPABHCDGLPI_o *pCVar11;
  Il2CppMethodPointer *ppIVar12;
  LLIHPIMPDLC_o *__this_00;
  CPABHCDGLPI_c *pCVar13;
  System_RuntimeFieldHandle_Fields *pSVar14;
  ulong uVar15;
  int32_t *piVar16;
  
  if ((DAT_04566afc & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4725);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4726);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4727);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4728);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4729);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4730);
                    /* try { // try from 032a4574 to 033a457b has its CatchHandler @ 032a4850 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4731);
                    /* try { // try from 032a4588 to 033a4593 has its CatchHandler @ 032a4838 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4732);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4733);
                    /* try { // try from 032a459c to 033a45a3 has its CatchHandler @ 032a4848 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4734);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4735);
                    /* try { // try from 032a45b8 to 033a45bb has its CatchHandler @ 032a484c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4736);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4737);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4738);
                    /* try { // try from 032a45dc to 033a45e7 has its CatchHandler @ 032a4818 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4739);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4740);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4741);
                    /* try { // try from 032a45f8 to 033a460b has its CatchHandler @ 032a4858 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4742);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4743);
                    /* try { // try from 032a4610 to 033a461b has its CatchHandler @ 032a4814 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4744);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4745);
                    /* try { // try from 032a4628 to 033a462f has its CatchHandler @ 032a481c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4746);
                    /* try { // try from 032a463c to 033a4643 has its CatchHandler @ 032a472c */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CPABHCDGLPI_TypeInfo);
                    /* try { // try from 032a464c to 033a4657 has its CatchHandler @ 032a4728 */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&LLIHPIMPDLC_TypeInfo);
                    /* try { // try from 032a4664 to 033a466b has its CatchHandler @ 032a4724 */
    DAT_04566afc = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if (OPAEPDIIOEB->max_length == 0) {
      pSVar7 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
      return pSVar7;
    }
                    /* try { // try from 032a4684 to 033a468b has its CatchHandler @ 032a4828 */
    pSVar7 = AJAMDCEKAFE__LFCNNAGLPHO(0,OPAEPDIIOEB,method);
                    /* try { // try from 032a469c to 033a46ab has its CatchHandler @ 032a4834 */
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4725,(MethodInfo *)0x0)
    ;
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4726,(MethodInfo *)0x0)
    ;
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
                    /* try { // try from 032a46f8 to 033a4713 has its CatchHandler @ 032a4810 */
    bVar6 = System_String__op_Equality(pSVar7,pSVar10,(MethodInfo *)0x0);
    if (bVar6) {
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 032a4718 to 033a471b has its CatchHandler @ 032a4720 */
                    /* try { // try from 032a471c to 033a473b has its CatchHandler @ 032a4244 */
      pCVar11 = IFAMAAGNCBJ__IDPGLBKEEOP((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032a4718 with catch @ 032a4720 */
      if (pCVar11 != (CPABHCDGLPI_o *)0x0) {
                    /* catch() { ... } // from try @ 032a4664 with catch @ 032a4724 */
                    /* catch() { ... } // from try @ 032a464c with catch @ 032a4728 */
        pCVar13 = pCVar11->klass;
        uVar1._0_1_ = (pCVar13->_2).rank;
        uVar1._1_1_ = (pCVar13->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 032a463c with catch @ 032a472c */
        uVar15 = (ulong)uVar1;
                    /* try { // try from 032a473c to 033a473f has its CatchHandler @ 032a4804 */
        if (uVar15 != 0) {
                    /* try { // try from 032a4740 to 033a47b3 has its CatchHandler @ 032a4244 */
          piVar16 = &((pCVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
              ppIVar12 = &pCVar13->vtable[*piVar16 + 7].methodPtr;
              goto LAB_032a4aac;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        ppIVar12 = (Il2CppMethodPointer *)FUN_01b81914(pCVar11,CPABHCDGLPI_TypeInfo,7);
LAB_032a4aac:
        uVar15 = (**ppIVar12)(pCVar11,(MethodInfo *)ppIVar12[1]);
        if ((uVar15 & 1) == 0) {
          if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pCVar11 = IFAMAAGNCBJ__IDPGLBKEEOP((MethodInfo *)0x0);
          if (pCVar11 == (CPABHCDGLPI_o *)0x0) goto LAB_032a4d64;
          pCVar13 = pCVar11->klass;
          uVar4._0_1_ = (pCVar13->_2).rank;
          uVar4._1_1_ = (pCVar13->_2).minimumAlignment;
          uVar15 = (ulong)uVar4;
          if (uVar15 != 0) {
            piVar16 = &((pCVar13->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                  (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
                ppIVar12 = &pCVar13->vtable[*piVar16 + 1].methodPtr;
                goto LAB_032a4c3c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          ppIVar12 = (Il2CppMethodPointer *)FUN_01b81914(pCVar11,CPABHCDGLPI_TypeInfo,1);
LAB_032a4c3c:
          (**ppIVar12)(pCVar11,0,(MethodInfo *)ppIVar12[1]);
          pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar8,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4733,
                     (MethodInfo *)0x0);
          pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar14 = (System_RuntimeFieldHandle_Fields *)
                    &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4734;
        }
        else {
          pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar8,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4731,
                     (MethodInfo *)0x0);
          pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          pSVar14 = (System_RuntimeFieldHandle_Fields *)
                    &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4732;
        }
LAB_032a4d38:
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,(System_RuntimeFieldHandle_o)pSVar14->value,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
    else {
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4727,
                 (MethodInfo *)0x0);
                    /* try { // try from 032a47b4 to 033a47d3 has its CatchHandler @ 032a493c */
      pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar9,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4728,
                 (MethodInfo *)0x0);
                    /* try { // try from 032a47d4 to 033a47d7 has its CatchHandler @ 032a48c4 */
                    /* try { // try from 032a47d8 to 033a47db has its CatchHandler @ 032a48c0 */
                    /* try { // try from 032a47dc to 033a47df has its CatchHandler @ 032a4844 */
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
                    /* try { // try from 032a47e0 to 033a47e3 has its CatchHandler @ 032a4840 */
                    /* try { // try from 032a47e4 to 033a47e7 has its CatchHandler @ 032a483c */
                    /* try { // try from 032a47e8 to 033a47ef has its CatchHandler @ 032a482c */
      bVar6 = System_String__op_Equality(pSVar7,pSVar10,(MethodInfo *)0x0);
                    /* try { // try from 032a47f0 to 033a47f3 has its CatchHandler @ 032a4824 */
      if (bVar6) {
                    /* try { // try from 032a47f4 to 033a47f7 has its CatchHandler @ 032a4820 */
                    /* try { // try from 032a47f8 to 033a47ff has its CatchHandler @ 032a4854 */
                    /* try { // try from 032a4800 to 033a486b has its CatchHandler @ 032a4244 */
                    /* catch() { ... } // from try @ 032a473c with catch @ 032a4804 */
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 032a46f8 with catch @ 032a4810 */
        pCVar11 = IFAMAAGNCBJ__IDPGLBKEEOP((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032a4610 with catch @ 032a4814 */
        if (pCVar11 != (CPABHCDGLPI_o *)0x0) {
                    /* catch() { ... } // from try @ 032a45dc with catch @ 032a4818 */
                    /* catch() { ... } // from try @ 032a4628 with catch @ 032a481c */
          pCVar13 = pCVar11->klass;
          uVar2._0_1_ = (pCVar13->_2).rank;
          uVar2._1_1_ = (pCVar13->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 032a47f4 with catch @ 032a4820 */
                    /* catch() { ... } // from try @ 032a47f0 with catch @ 032a4824 */
                    /* catch() { ... } // from try @ 032a4684 with catch @ 032a4828 */
          uVar15 = (ulong)uVar2;
                    /* catch() { ... } // from try @ 032a47e8 with catch @ 032a482c */
                    /* catch() { ... } // from try @ 032a43f4 with catch @ 032a4830 */
          if (uVar15 != 0) {
                    /* catch() { ... } // from try @ 032a469c with catch @ 032a4834 */
                    /* catch() { ... } // from try @ 032a4588 with catch @ 032a4838 */
            piVar16 = &((pCVar13->_1).interfaceOffsets)->offset;
            do {
                    /* catch() { ... } // from try @ 032a47e4 with catch @ 032a483c */
                    /* catch() { ... } // from try @ 032a47e0 with catch @ 032a4840 */
                    /* catch() { ... } // from try @ 032a47dc with catch @ 032a4844 */
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                  (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
                ppIVar12 = &pCVar13->vtable[*piVar16 + 7].methodPtr;
                goto LAB_032a4b80;
              }
                    /* catch() { ... } // from try @ 032a459c with catch @ 032a4848 */
              uVar15 = uVar15 - 1;
                    /* catch() { ... } // from try @ 032a45b8 with catch @ 032a484c */
              piVar16 = piVar16 + 4;
                    /* catch() { ... } // from try @ 032a4574 with catch @ 032a4850 */
            } while (uVar15 != 0);
          }
                    /* catch() { ... } // from try @ 032a47f8 with catch @ 032a4854 */
                    /* catch() { ... } // from try @ 032a45f8 with catch @ 032a4858 */
          ppIVar12 = (Il2CppMethodPointer *)FUN_01b81914(pCVar11,CPABHCDGLPI_TypeInfo,7);
LAB_032a4b80:
          uVar15 = (**ppIVar12)(pCVar11,(MethodInfo *)ppIVar12[1]);
          if ((uVar15 & 1) == 0) {
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4735,
                       (MethodInfo *)0x0);
            pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            pSVar14 = (System_RuntimeFieldHandle_Fields *)
                      &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4736;
          }
          else {
            if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pCVar11 = IFAMAAGNCBJ__IDPGLBKEEOP((MethodInfo *)0x0);
            if (pCVar11 == (CPABHCDGLPI_o *)0x0) goto LAB_032a4d64;
            pCVar13 = pCVar11->klass;
            uVar5._0_1_ = (pCVar13->_2).rank;
            uVar5._1_1_ = (pCVar13->_2).minimumAlignment;
            uVar15 = (ulong)uVar5;
            if (uVar15 != 0) {
              piVar16 = &((pCVar13->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                    (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
                  ppIVar12 = &pCVar13->vtable[*piVar16 + 4].methodPtr;
                  goto LAB_032a4cf4;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            ppIVar12 = (Il2CppMethodPointer *)FUN_01b81914(pCVar11,CPABHCDGLPI_TypeInfo,4);
LAB_032a4cf4:
            (**ppIVar12)(pCVar11,(MethodInfo *)ppIVar12[1]);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4737,
                       (MethodInfo *)0x0);
            pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            pSVar14 = (System_RuntimeFieldHandle_Fields *)
                      &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4738;
          }
          goto LAB_032a4d38;
        }
      }
      else {
                    /* try { // try from 032a486c to 033a486f has its CatchHandler @ 032a489c */
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 032a4870 to 033a48ab has its CatchHandler @ 032a4244 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4729,
                   (MethodInfo *)0x0);
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 032a486c with catch @ 032a489c */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4730,
                   (MethodInfo *)0x0);
                    /* try { // try from 032a48ac to 033a48bf has its CatchHandler @ 032a493c */
        pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032a47d8 with catch @ 032a48c0
                       try { // try from 032a48c0 to 033a48e3 has its CatchHandler @ 032a4244 */
                    /* catch() { ... } // from try @ 032a47d4 with catch @ 032a48c4 */
                    /* catch() { ... } // from try @ 032a4410 with catch @ 032a48c8 */
        bVar6 = System_String__op_Equality(pSVar7,pSVar10,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032a43d8 with catch @ 032a48cc */
        if (!bVar6) {
          pSVar7 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
          return pSVar7;
        }
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032a48e4 to 033a48e7 has its CatchHandler @ 032a4910 */
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 032a48e8 to 033a491f has its CatchHandler @ 032a4244 */
        pCVar11 = IFAMAAGNCBJ__IDPGLBKEEOP((MethodInfo *)0x0);
        __this_00 = (LLIHPIMPDLC_o *)thunk_FUN_01bda818(LLIHPIMPDLC_TypeInfo);
                    /* catch() { ... } // from try @ 032a48e4 with catch @ 032a4910 */
        LLIHPIMPDLC___ctor(__this_00,(MethodInfo *)0x0);
        pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 032a4920 to 033a4927 has its CatchHandler @ 032a493c */
                    /* try { // try from 032a4928 to 033a4933 has its CatchHandler @ 032a4244 */
                    /* try { // try from 032a4934 to 033a493b has its CatchHandler @ 032a493c */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar8,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4739,
                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032a47b4 with catch @ 032a493c
                       catch() { ... } // from try @ 032a48ac with catch @ 032a493c
                       catch() { ... } // from try @ 032a4920 with catch @ 032a493c
                       catch() { ... } // from try @ 032a4934 with catch @ 032a493c */
        pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar9,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4740,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
        if (__this_00 != (LLIHPIMPDLC_o *)0x0) {
          (__this_00->fields).JIJLBFGKNJK = pSVar7;
          thunk_FUN_01c20e04();
          pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar8,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4741,
                     (MethodInfo *)0x0);
          pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar9,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4742,
                     (MethodInfo *)0x0);
          pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
          (__this_00->fields).OCPLOFNKMHH = pSVar7;
          thunk_FUN_01c20e04();
          pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar8,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4743,
                     (MethodInfo *)0x0);
          pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar9,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4744,
                     (MethodInfo *)0x0);
          pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
          (__this_00->fields).BPCADJLKKGA = pSVar7;
          thunk_FUN_01c20e04();
          if (pCVar11 != (CPABHCDGLPI_o *)0x0) {
            pCVar13 = pCVar11->klass;
            uVar3._0_1_ = (pCVar13->_2).rank;
            uVar3._1_1_ = (pCVar13->_2).minimumAlignment;
            uVar15 = (ulong)uVar3;
            if (uVar15 != 0) {
              piVar16 = &((pCVar13->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                    (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
                  ppIVar12 = &pCVar13->vtable[*piVar16 + 2].methodPtr;
                  goto LAB_032a4c98;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            ppIVar12 = (Il2CppMethodPointer *)FUN_01b81914(pCVar11,CPABHCDGLPI_TypeInfo,2);
LAB_032a4c98:
            (**ppIVar12)(pCVar11,__this_00,(MethodInfo *)ppIVar12[1]);
            pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar8,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4745,
                       (MethodInfo *)0x0);
            pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            pSVar14 = (System_RuntimeFieldHandle_Fields *)
                      &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4746;
            goto LAB_032a4d38;
          }
        }
      }
    }
  }
LAB_032a4d64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31A4DA0]
// LGICOANJJLI$$.ctor @ RVA 0x31A4DA0

void LGICOANJJLI___ctor(LGICOANJJLI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

