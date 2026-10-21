// TypeDefIndex 3478
// Namespace: 
// public class HAPEALJCNFG : IEJKLPPLHMO
// Fields:

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x356F190]
// HAPEALJCNFG$$DLKKPFHKIPB @ RVA 0x356F190

System_Collections_Generic_IEnumerable_string__o *
HAPEALJCNFG__DLKKPFHKIPB(HAPEALJCNFG_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 0366f194 to 0376f19b has its CatchHandler @ 03672a5c */
                    /* try { // try from 0366f1ac to 0376f1b3 has its CatchHandler @ 03672a58 */
                    /* try { // try from 0366f1b4 to 0376f1c7 has its CatchHandler @ 03672a54 */
                    /* try { // try from 0366f1c8 to 0376f1d3 has its CatchHandler @ 03672a50 */
  if ((DAT_04568c50 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5347);
                    /* try { // try from 0366f1e4 to 0376f1eb has its CatchHandler @ 03672a18 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5348);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0366f1fc to 0376f203 has its CatchHandler @ 03672a14 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 0366f210 to 0376f217 has its CatchHandler @ 03672a10 */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568c50 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0366f228 to 0376f22f has its CatchHandler @ 03672a0c */
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
                    /* try { // try from 0366f230 to 0376f243 has its CatchHandler @ 03672a08 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f244 to 0376f24f has its CatchHandler @ 03672a04 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5347,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f260 to 0376f267 has its CatchHandler @ 036729e8 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5348,(MethodInfo *)0x0);
                    /* try { // try from 0366f278 to 0376f27f has its CatchHandler @ 036729e4 */
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 0366f28c to 0376f293 has its CatchHandler @ 036729e0 */
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
                    /* try { // try from 0366f2a4 to 0376f2ab has its CatchHandler @ 036729dc */
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 0366f2ac to 0376f2bf has its CatchHandler @ 036729d8 */
      if (uVar1 < (uint)pSVar3->max_length) {
                    /* try { // try from 0366f2c0 to 0376f2cb has its CatchHandler @ 036729d4 */
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
                    /* try { // try from 0366f2dc to 0376f2e3 has its CatchHandler @ 036729b4 */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
                    /* try { // try from 0366f2f4 to 0376f2fb has its CatchHandler @ 036729b0 */
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x356F300]
// HAPEALJCNFG$$AJJLBBCJAAL @ RVA 0x356F300

System_String_o *
HAPEALJCNFG__AJJLBBCJAAL(HAPEALJCNFG_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  bool JLDFMLOJDCO;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  GCPFDLNAFDF_o *pGVar6;
  VirtualInvokeData *pVVar7;
  Il2CppObject *value;
  MethodInfo *method_00;
  il2cpp_array_size_t iVar8;
  GCPFDLNAFDF_c *pGVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_String_o *pSVar12;
  
                    /* try { // try from 0366f308 to 0376f30f has its CatchHandler @ 036729ac */
                    /* try { // try from 0366f320 to 0376f327 has its CatchHandler @ 036729a8 */
  if ((DAT_04568c51 & 1) == 0) {
                    /* try { // try from 0366f328 to 0376f33b has its CatchHandler @ 036729a4 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5349);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5350);
                    /* try { // try from 0366f33c to 0376f347 has its CatchHandler @ 036729a0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5351);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5352);
                    /* try { // try from 0366f358 to 0376f35f has its CatchHandler @ 03672980 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5353);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5354);
                    /* try { // try from 0366f370 to 0376f377 has its CatchHandler @ 0367297c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5355);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5356);
                    /* try { // try from 0366f384 to 0376f38b has its CatchHandler @ 03672978 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5357);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5358);
                    /* try { // try from 0366f39c to 0376f3a3 has its CatchHandler @ 03672974 */
                    /* try { // try from 0366f3a4 to 0376f3b7 has its CatchHandler @ 03672970 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5359);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5360);
                    /* try { // try from 0366f3b8 to 0376f3c3 has its CatchHandler @ 0367296c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5361);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5362);
                    /* try { // try from 0366f3d4 to 0376f3db has its CatchHandler @ 0367294c */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MovesCompiler_TypeInfo);
                    /* try { // try from 0366f3ec to 0376f3f3 has its CatchHandler @ 03672948 */
    FUN_01bab630(&GCPFDLNAFDF_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* try { // try from 0366f400 to 0376f407 has its CatchHandler @ 03672944 */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
                    /* try { // try from 0366f418 to 0376f41f has its CatchHandler @ 03672940 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366f420 to 0376f433 has its CatchHandler @ 0367293c */
    DAT_04568c51 = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    iVar8 = OPAEPDIIOEB->max_length;
    if (iVar8 == 0) {
                    /* try { // try from 0366f450 to 0376f457 has its CatchHandler @ 03672930 */
      pSVar5 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
      return pSVar5;
    }
                    /* try { // try from 0366f434 to 0376f43f has its CatchHandler @ 03672938 */
    if ((int)iVar8 < 2) {
      JLDFMLOJDCO = true;
    }
    else {
                    /* try { // try from 0366f468 to 0376f46f has its CatchHandler @ 0367292c */
      pSVar12 = OPAEPDIIOEB->m_Items[1];
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f47c to 0376f483 has its CatchHandler @ 03672928 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5349,
                 (MethodInfo *)0x0);
                    /* try { // try from 0366f494 to 0376f49b has its CatchHandler @ 03672924 */
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f49c to 0376f4af has its CatchHandler @ 03672920 */
                    /* try { // try from 0366f4b0 to 0376f4bb has its CatchHandler @ 0367291c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5350,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      JLDFMLOJDCO = System_String__op_Equality(pSVar12,pSVar5,(MethodInfo *)0x0);
      iVar8 = OPAEPDIIOEB->max_length;
    }
    if ((int)iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 0366f4e0 to 0376f4e3 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366f4e4 to 0376f4e7 has its CatchHandler @ 03672ad4 */
                    /* try { // try from 0366f4ec to 0376f4f7 has its CatchHandler @ 03672cf0 */
    pSVar12 = OPAEPDIIOEB->m_Items[0];
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5351,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0366f510 to 0376f51b has its CatchHandler @ 03672e18 */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5352,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0366f52c to 0376f53b has its CatchHandler @ 0367326c */
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
                    /* try { // try from 0366f548 to 0376f54f has its CatchHandler @ 036730e0 */
    bVar2 = System_String__op_Equality(pSVar12,pSVar5,(MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 0366f560 to 0376f567 has its CatchHandler @ 036730dc */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = NLPJLHOEAOE__DJKIDNICADB((MethodInfo *)0x0);
    }
    else {
                    /* try { // try from 0366f574 to 0376f57b has its CatchHandler @ 036730d8 */
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f58c to 0376f593 has its CatchHandler @ 036730d4 */
                    /* try { // try from 0366f594 to 0376f5a3 has its CatchHandler @ 036730d0 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5353,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f5b4 to 0376f5bb has its CatchHandler @ 036730cc */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5354,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0366f5cc to 0376f5d3 has its CatchHandler @ 036730c8 */
      method_00 = (MethodInfo *)0x0;
      bVar2 = System_String__op_Equality(pSVar12,pSVar5,(MethodInfo *)0x0);
      if (bVar2) {
                    /* try { // try from 0366f5e0 to 0376f5e7 has its CatchHandler @ 036730c4 */
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0366f5f8 to 0376f5ff has its CatchHandler @ 036730c0 */
        pGVar6 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
                    /* try { // try from 0366f600 to 0376f62b has its CatchHandler @ 036731bc */
        if (pGVar6 == (GCPFDLNAFDF_o *)0x0) goto LAB_0366f8fc;
        pGVar9 = pGVar6->klass;
        uVar1._0_1_ = (pGVar9->_2).rank;
        uVar1._1_1_ = (pGVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pGVar9->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 0366f62c to 0376f653 has its CatchHandler @ 036732fc */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)GCPFDLNAFDF_TypeInfo) {
              pVVar7 = pGVar9->vtable + *piVar11;
              goto LAB_0366f7b4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        method_00 = (MethodInfo *)0x0;
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pGVar6);
LAB_0366f7b4:
                    /* try { // try from 0366f7bc to 0376f7c3 has its CatchHandler @ 0367309c */
        pSVar5 = (System_String_o *)(*pVVar7->methodPtr)(pGVar6,pVVar7->method);
      }
      else {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f660 to 0376f667 has its CatchHandler @ 036730bc */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5355,
                   (MethodInfo *)0x0);
                    /* try { // try from 0366f678 to 0376f67f has its CatchHandler @ 036730b8 */
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f68c to 0376f693 has its CatchHandler @ 036730b4 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5356,
                   (MethodInfo *)0x0);
                    /* try { // try from 0366f6a4 to 0376f6ab has its CatchHandler @ 036730b0 */
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0366f6ac to 0376f6bb has its CatchHandler @ 036730ac */
        bVar2 = System_String__op_Equality(pSVar12,pSVar5,(MethodInfo *)0x0);
        if (bVar2) {
          if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366f6d0 to 0376f6d7 has its CatchHandler @ 03672cec */
            thunk_FUN_01ba7564();
          }
          value = (Il2CppObject *)IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
        }
        else {
                    /* try { // try from 0366f6e8 to 0376f6ef has its CatchHandler @ 03672ce8 */
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f6fc to 0376f703 has its CatchHandler @ 03672ce4 */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5357,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f714 to 0376f71b has its CatchHandler @ 03672ce0 */
                    /* try { // try from 0366f71c to 0376f72b has its CatchHandler @ 03672cdc */
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5358,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0366f744 to 0376f747 has its CatchHandler @ 03673328 */
          bVar2 = System_String__op_Equality(pSVar12,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0366f748 to 0376f76b has its CatchHandler @ 03673268 */
          if (!bVar2) {
                    /* try { // try from 0366f7d8 to 0376f7e3 has its CatchHandler @ 03673094 */
            pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f7f4 to 0376f7fb has its CatchHandler @ 03672cd8 */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar3,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5359,
                       (MethodInfo *)0x0);
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f80c to 0376f813 has its CatchHandler @ 03672cd4 */
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5360,
                       (MethodInfo *)0x0);
                    /* try { // try from 0366f820 to 0376f827 has its CatchHandler @ 03672cd0 */
            pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0366f838 to 0376f83f has its CatchHandler @ 03672ccc */
            method_00 = (MethodInfo *)0x0;
            bVar2 = System_String__op_Equality(pSVar12,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0366f840 to 0376f84f has its CatchHandler @ 03672cc8 */
            if (bVar2) {
              pSVar5 = AAPGCAPGBLG__OKJPFHIIJAD((MethodInfo *)0x0);
            }
            else {
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f868 to 0376f86b has its CatchHandler @ 03673328 */
                    /* try { // try from 0366f86c to 0376f88f has its CatchHandler @ 03673264 */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5361,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5362,
                         (MethodInfo *)0x0);
                    /* try { // try from 0366f8a0 to 0376f8a7 has its CatchHandler @ 03672cc4 */
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              method_00 = (MethodInfo *)0x0;
              bVar2 = System_String__op_Equality(pSVar12,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0366f8b8 to 0376f8bf has its CatchHandler @ 03672cc0 */
              if (!bVar2) {
                    /* try { // try from 0366f8e4 to 0376f8eb has its CatchHandler @ 03672cb8 */
                    /* try { // try from 0366f8ec to 0376f8ff has its CatchHandler @ 03672cb4 */
                pSVar5 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
                return pSVar5;
              }
                    /* try { // try from 0366f8cc to 0376f8d3 has its CatchHandler @ 03672cbc */
              if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar5 = MovesCompiler__CMDOHLDFLLF((MethodInfo *)0x0);
            }
            goto LAB_0366f7c0;
          }
          if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          value = IFAMAAGNCBJ__GPBMELHDADN<object>
                            (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
        }
                    /* try { // try from 0366f778 to 0376f77f has its CatchHandler @ 036730a8 */
        if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366f790 to 0376f797 has its CatchHandler @ 036730a4 */
          thunk_FUN_01ba7564(Newtonsoft_Json_JsonConvert_TypeInfo);
        }
        method_00 = (MethodInfo *)0x0;
        pSVar5 = Newtonsoft_Json_JsonConvert__SerializeObject(value,1,(MethodInfo *)0x0);
                    /* try { // try from 0366f7a4 to 0376f7ab has its CatchHandler @ 036730a0 */
      }
    }
LAB_0366f7c0:
                    /* try { // try from 0366f7c4 to 0376f7d3 has its CatchHandler @ 03673098 */
    pSVar5 = HAPEALJCNFG__EFJMBDMGIBF(pSVar5,JLDFMLOJDCO,method_00);
    return pSVar5;
  }
LAB_0366f8fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x356FA08]
// HAPEALJCNFG$$KCBILPIAPHN @ RVA 0x356FA08

int32_t HAPEALJCNFG__KCBILPIAPHN(HAPEALJCNFG_o *__this,MethodInfo *method)

{
                    /* try { // try from 0366fa0c to 0376fa13 has its CatchHandler @ 03673068 */
  return 0;
}


// ===== public bool ECKDICODLME()  [RVA 0x356FA10]
// HAPEALJCNFG$$ECKDICODLME @ RVA 0x356FA10

bool HAPEALJCNFG__ECKDICODLME(HAPEALJCNFG_o *__this,MethodInfo *method)

{
                    /* try { // try from 0366fa14 to 0376fa23 has its CatchHandler @ 03673064 */
  return true;
}


// ===== internal static string EFJMBDMGIBF(string FDLJCNLNCOC, bool JLDFMLOJDCO)  [RVA 0x356F904]
// HAPEALJCNFG$$EFJMBDMGIBF @ RVA 0x356F904

System_String_o *
HAPEALJCNFG__EFJMBDMGIBF(System_String_o *FDLJCNLNCOC,bool JLDFMLOJDCO,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 0366f908 to 0376f90f has its CatchHandler @ 03672cb0 */
                    /* try { // try from 0366f920 to 0376f927 has its CatchHandler @ 03673084 */
  if ((DAT_04568c52 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5363);
                    /* try { // try from 0366f9c8 to 0376f9cf has its CatchHandler @ 03673074 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5364);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0366f9e0 to 0376f9e7 has its CatchHandler @ 03673070 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04568c52 = 1;
  }
  if (!JLDFMLOJDCO) {
                    /* try { // try from 0366f9f4 to 0376f9fb has its CatchHandler @ 0367306c */
    return FDLJCNLNCOC;
  }
                    /* try { // try from 0366f934 to 0376f93b has its CatchHandler @ 03673090 */
                    /* try { // try from 0366f94c to 0376f953 has its CatchHandler @ 0367308c */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0366f960 to 0376f967 has its CatchHandler @ 03673088 */
  UnityEngine_Debug__Log((Il2CppObject *)FDLJCNLNCOC,(MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366f978 to 0376f97f has its CatchHandler @ 03673080 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5363,(MethodInfo *)0x0);
                    /* try { // try from 0366f980 to 0376f993 has its CatchHandler @ 0367307c */
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5364,(MethodInfo *)0x0);
                    /* try { // try from 0366f9a0 to 0376f9a3 has its CatchHandler @ 03673078 */
                    /* try { // try from 0366f9b4 to 0376f9bb has its CatchHandler @ 03673260 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x356FA18]
// HAPEALJCNFG$$IGMDDJFPIJL @ RVA 0x356FA18

System_String_o * HAPEALJCNFG__IGMDDJFPIJL(HAPEALJCNFG_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
                    /* try { // try from 0366fa3c to 0376fa77 has its CatchHandler @ 03673220 */
  if ((DAT_04568c53 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5365);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy704___field_1);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568c53 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0366fa8c to 0376fa97 has its CatchHandler @ 03673060 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5365,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x2c0);
                    /* try { // try from 0366fa9c to 0376faa3 has its CatchHandler @ 0367305c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy704___field_1,(MethodInfo *)0x0);
                    /* try { // try from 0366fac0 to 0376fac7 has its CatchHandler @ 03672cac */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x356FAC8]
// HAPEALJCNFG$$.ctor @ RVA 0x356FAC8

void HAPEALJCNFG___ctor(HAPEALJCNFG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

