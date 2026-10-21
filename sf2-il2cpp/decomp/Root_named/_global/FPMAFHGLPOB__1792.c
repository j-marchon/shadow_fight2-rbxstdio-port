// TypeDefIndex 1792
// Namespace: 
// public static class FPMAFHGLPOB
// Fields:

// ===== public static void NJBOADBAJAJ(JSONObject JHMENEKPIBO, string KGLJICLJHEL)  [RVA 0x320A1A4]
// FPMAFHGLPOB$$NJBOADBAJAJ @ RVA 0x320A1A4

void FPMAFHGLPOB__NJBOADBAJAJ
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *KGLJICLJHEL,MethodInfo *method
               )

{
  ushort uVar1;
  GCPFDLNAFDF_o *pGVar2;
  VirtualInvokeData *pVVar3;
  DADDKDFBPIJ_T__o *__this;
  Il2CppObject *pIVar4;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar5;
  SimpleJSON_JSONNode_o *pSVar6;
  GCPFDLNAFDF_c *pGVar7;
  ulong uVar8;
  int32_t *piVar9;
  float n;
  
  if ((DAT_04566e71 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3331);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3332);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DADDKDFBPIJ<FJIFBJMMKHG>_COMOKILJDGJ__);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566e71 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar2 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar2 != (GCPFDLNAFDF_o *)0x0) {
    pGVar7 = pGVar2->klass;
    uVar1._0_1_ = (pGVar7->_2).rank;
    uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pGVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar3 = pGVar7->vtable + (*piVar9 + 4);
          goto LAB_0330a2a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pGVar2,HFHIKPAKJFG_TypeInfo,4);
LAB_0330a2a8:
    __this = (DADDKDFBPIJ_T__o *)(*pVVar3->methodPtr)(pGVar2,pVVar3->method);
    if (__this != (DADDKDFBPIJ_T__o *)0x0) {
      pIVar4 = DADDKDFBPIJ<object>__COMOKILJDGJ
                         (__this,KGLJICLJHEL,Method_DADDKDFBPIJ<FJIFBJMMKHG>_COMOKILJDGJ__);
      if (pIVar4 == (Il2CppObject *)0x0) {
        n = 0.0;
      }
      else {
        n = PCOEHCPGBBG__OFFODGKLGOP((System_String_o *)pIVar4[5].klass,0.0,(MethodInfo *)0x0);
      }
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3331,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3332,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      pSVar6 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
      if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0330a3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,pSVar5,pSVar6,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void EMMHBGJLDGE(JSONObject JHMENEKPIBO, ModelParameters OKBIKHHKOEN)  [RVA 0x320A3AC]
// FPMAFHGLPOB$$EMMHBGJLDGE @ RVA 0x320A3AC

void FPMAFHGLPOB__EMMHBGJLDGE
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,ModelParameters_o *OKBIKHHKOEN,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *in_x3;
  
  if ((DAT_04566e72 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3333);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3334);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3335);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3336);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3337);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3338);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3339);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3340);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3341);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3342);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566e72 = 1;
  }
  if (OKBIKHHKOEN != (ModelParameters_o *)0x0) {
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3333,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3334,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    FPMAFHGLPOB__GMIEADCFLNI(JHMENEKPIBO,pSVar3,(OKBIKHHKOEN->fields).PNAAPNFPCPI,in_x3);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3335,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3336,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    FPMAFHGLPOB__GMIEADCFLNI(JHMENEKPIBO,pSVar3,(OKBIKHHKOEN->fields).PEMECEBIJDM,in_x3);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3337,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3338,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    FPMAFHGLPOB__GMIEADCFLNI(JHMENEKPIBO,pSVar3,(OKBIKHHKOEN->fields).IIDEPPHFJPA,in_x3);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3339,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3340,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    FPMAFHGLPOB__GMIEADCFLNI(JHMENEKPIBO,pSVar3,(OKBIKHHKOEN->fields).NBHGHLIPCAP,in_x3);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3341,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3342,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    FPMAFHGLPOB__GMIEADCFLNI(JHMENEKPIBO,pSVar3,(OKBIKHHKOEN->fields).AIDDHEHFBEG,in_x3);
    return;
  }
  return;
}


// ===== public static void JMBBKNACCMB(JSONObject JHMENEKPIBO, MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x320A93C]
// FPMAFHGLPOB$$JMBBKNACCMB @ RVA 0x320A93C

void FPMAFHGLPOB__JMBBKNACCMB
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *key;
  Il2CppObject *pIVar5;
  float *pfVar6;
  SimpleJSON_JSONNode_o *pSVar7;
  
  if ((DAT_04566e73 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3343);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3344);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3345);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3346);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3347);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3348);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
                    /* try { // try from 0330a9f0 to 0340a9f7 has its CatchHandler @ 0330ab0c */
    FUN_01bab630(&float_TypeInfo);
    DAT_04566e73 = 1;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0330aa14 to 0340aa23 has its CatchHandler @ 0330aafc */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3343,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3344,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
                    /* try { // try from 0330aa64 to 0340aa87 has its CatchHandler @ 0330aaf8 */
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                       (Il2CppObject *)pSVar4,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (!bVar1) {
      return;
    }
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0330aa88 to 0340aae3 has its CatchHandler @ 0330a8c8 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3345,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3346,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0330aae4 to 0340aae7 has its CatchHandler @ 0330ab04 */
                    /* try { // try from 0330aae8 to 0340aaeb has its CatchHandler @ 0330ab00 */
                    /* try { // try from 0330aaec to 0340aaf3 has its CatchHandler @ 0330ab08 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3347,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0330aaf4 to 0340ab23 has its CatchHandler @ 0330a8c8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330aa64 with catch @ 0330aaf8
                        */
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330aa14 with catch @ 0330aafc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330aae8 with catch @ 0330ab00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330aae4 with catch @ 0330ab04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330aaec with catch @ 0330ab08
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330a9f0 with catch @ 0330ab0c
                        */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3348,(MethodInfo *)0x0)
    ;
    key = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0330ab24 to 0340ab27 has its CatchHandler @ 0330ab50 */
                    /* try { // try from 0330ab28 to 0340ab5f has its CatchHandler @ 0330a8c8 */
    pIVar5 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        (Il2CppObject *)key,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
                    /* catch() { ... } // from try @ 0330ab24 with catch @ 0330ab50 */
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    if (pIVar5 != (Il2CppObject *)0x0) {
                    /* try { // try from 0330ab60 to 0340ab67 has its CatchHandler @ 0330ab7c */
                    /* try { // try from 0330ab68 to 0340ab73 has its CatchHandler @ 0330a8c8 */
                    /* try { // try from 0330ab74 to 0340ab7b has its CatchHandler @ 0330ab7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0330ab60 with catch @ 0330ab7c
                       catch(type#2 @ 00000000) { ... } // from try @ 0330ab74 with catch @ 0330ab7c
                        */
                    /* try { // try from 0330ab80 to 0340ac13 has its CatchHandler @ 0330ab80
                       catch() { ... } // from try @ 0330ab80 with catch @ 0330ab80
                       catch() { ... } // from try @ 0330ac2c with catch @ 0330ab80
                       catch() { ... } // from try @ 0330ac74 with catch @ 0330ab80
                       catch() { ... } // from try @ 0330aca4 with catch @ 0330ab80 */
      if ((pIVar5->klass->_1).element_class != (float_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pIVar5);
      }
      pfVar6 = (float *)thunk_FUN_01bda96c();
      pSVar7 = SimpleJSON_JSONNode__op_Implicit(*pfVar6,(MethodInfo *)0x0);
      if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0330abbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,pSVar4,pSVar7,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void OJPDBFFOABF(JSONObject JHMENEKPIBO, string IKKKILCDMMB = "b_id")  [RVA 0x320ABDC]
// FPMAFHGLPOB$$OJPDBFFOABF @ RVA 0x320ABDC

void FPMAFHGLPOB__OJPDBFFOABF
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *IKKKILCDMMB,MethodInfo *method
               )

{
  System_String_o *s;
  SimpleJSON_JSONNode_o *pSVar1;
  
  if ((DAT_04566e74 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
                    /* try { // try from 0330ac14 to 0340ac1b has its CatchHandler @ 0330ac58 */
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566e74 = 1;
  }
                    /* try { // try from 0330ac24 to 0340ac2b has its CatchHandler @ 0330ac54 */
                    /* try { // try from 0330ac2c to 0340ac6f has its CatchHandler @ 0330ab80 */
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  s = UnityEngine_Application__get_identifier((MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330ac24 with catch @ 0330ac54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330ac14 with catch @ 0330ac58
                        */
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar1 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
                    /* try { // try from 0330ac70 to 0340ac73 has its CatchHandler @ 0330ac94 */
                    /* try { // try from 0330ac74 to 0340ac9b has its CatchHandler @ 0330ab80 */
                    /* WARNING: Could not recover jumptable at 0x0330ac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(JHMENEKPIBO->klass->vtable)._20_Add.methodPtr)
              (JHMENEKPIBO,IKKKILCDMMB,pSVar1,(JHMENEKPIBO->klass->vtable)._20_Add.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0330ac70 with catch @ 0330ac94 */
  FUN_01bab8c8();
}


// ===== public static void GBDIINGAOFC(JSONObject JHMENEKPIBO, MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x320AC98]
// FPMAFHGLPOB$$GBDIINGAOFC @ RVA 0x320AC98

void FPMAFHGLPOB__GBDIINGAOFC
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int32_t n;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  IGPDCHBJAPD_o *__this;
  int64_t iVar7;
  SimpleJSON_JSONNode_o *pSVar8;
  Il2CppObject *pIVar9;
  char *pcVar10;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_String_o *pSVar11;
  MethodInfo *method_00;
  GOJLGHMMDBO_o *pGVar12;
  GOJLGHMMDBO_o *pGVar13;
  ModelParameters_o *OKBIKHHKOEN;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  IJBEKFLAPNK_o *ALGPKPJKBHO;
  IJBEKFLAPNK_o *ALGPKPJKBHO_00;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 0330ac9c to 0340aca3 has its CatchHandler @ 0330acb8 */
                    /* try { // try from 0330aca4 to 0340acaf has its CatchHandler @ 0330ab80 */
                    /* try { // try from 0330acb0 to 0340acb7 has its CatchHandler @ 0330acb8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0330ac9c with catch @ 0330acb8
                       catch(type#2 @ 00000000) { ... } // from try @ 0330acb0 with catch @ 0330acb8
                        */
  if ((DAT_04566e75 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3349);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3350);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3351);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3352);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3353);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3354);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3355);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3356);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3357);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3358);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3359);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3360);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3361);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3362);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3363);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3364);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3365);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3366);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3367);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3368);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3369);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3370);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3371);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3372);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&IGPDCHBJAPD_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566e75 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3349,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3350,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_0330b648;
  bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                     (Il2CppObject *)pSVar6,
                     Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
  if (!bVar3) {
    return;
  }
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3351,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3352,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  __this = (IGPDCHBJAPD_o *)
           System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      (Il2CppObject *)pSVar6,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (__this == (IGPDCHBJAPD_o *)0x0) {
    return;
  }
  bVar2 = (IGPDCHBJAPD_TypeInfo->_2).naturalAligment;
  if ((__this->klass->_2).naturalAligment < bVar2) {
    return;
  }
                    /* try { // try from 0330afb4 to 0340b053 has its CatchHandler @ 0330afb4
                       catch() { ... } // from try @ 0330afb4 with catch @ 0330afb4
                       catch() { ... } // from try @ 0330b088 with catch @ 0330afb4
                       catch() { ... } // from try @ 0330b0b4 with catch @ 0330afb4
                       catch() { ... } // from try @ 0330b0dc with catch @ 0330afb4
                       catch() { ... } // from try @ 0330b110 with catch @ 0330afb4 */
  if ((__this->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)IGPDCHBJAPD_TypeInfo) {
    return;
  }
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3353,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3354,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  iVar7 = IGPDCHBJAPD__JJODNBPMEMO(__this,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
                    /* try { // try from 0330b054 to 0340b05b has its CatchHandler @ 0330b0c8 */
  pSVar8 = SimpleJSON_JSONNode__op_Implicit(iVar7,(MethodInfo *)0x0);
  if (JHMENEKPIBO == (SimpleJSON_JSONObject_o *)0x0) goto LAB_0330b648;
                    /* try { // try from 0330b068 to 0340b073 has its CatchHandler @ 0330b0c0 */
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,pSVar6,pSVar8,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                    /* try { // try from 0330b07c to 0340b087 has its CatchHandler @ 0330b0c4 */
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0330b088 to 0340b0ab has its CatchHandler @ 0330afb4 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3355,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0330b0ac to 0340b0af has its CatchHandler @ 0330b0bc */
                    /* try { // try from 0330b0b0 to 0340b0b3 has its CatchHandler @ 0330b0b8 */
                    /* try { // try from 0330b0b4 to 0340b0d7 has its CatchHandler @ 0330afb4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330b0b0 with catch @ 0330b0b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330b0ac with catch @ 0330b0bc
                        */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3356,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330b068 with catch @ 0330b0c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330b07c with catch @ 0330b0c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330b054 with catch @ 0330b0c8
                        */
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0330b0d8 to 0340b0db has its CatchHandler @ 0330b100 */
                    /* try { // try from 0330b0dc to 0340b107 has its CatchHandler @ 0330afb4 */
  iVar7 = IGPDCHBJAPD__LLJDKMPMMHH(__this,(MethodInfo *)0x0);
  pSVar8 = SimpleJSON_JSONNode__op_Implicit(iVar7,(MethodInfo *)0x0);
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,pSVar6,pSVar8,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                    /* catch() { ... } // from try @ 0330b0d8 with catch @ 0330b100 */
                    /* try { // try from 0330b108 to 0340b10f has its CatchHandler @ 0330b124 */
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0330b110 to 0340b11b has its CatchHandler @ 0330afb4 */
                    /* try { // try from 0330b11c to 0340b123 has its CatchHandler @ 0330b124 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3357,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0330b108 with catch @ 0330b124
                       catch(type#2 @ 00000000) { ... } // from try @ 0330b11c with catch @ 0330b124
                        */
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3358,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                     (Il2CppObject *)pSVar6,
                     Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
  if (bVar3) {
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3359,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3360,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pIVar9 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        (Il2CppObject *)pSVar6,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar9 == (Il2CppObject *)0x0) goto LAB_0330b648;
    if ((pIVar9->klass->_1).element_class != (bool_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    pcVar10 = (char *)thunk_FUN_01bda96c();
    if (*pcVar10 == '\0') goto LAB_0330b20c;
    n = -1;
  }
  else {
LAB_0330b20c:
    bVar3 = IGPDCHBJAPD__DONKDCJLBPN(__this,(MethodInfo *)0x0);
    if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Convert_TypeInfo);
    }
    n = System_Convert__ToInt32(bVar3,(MethodInfo *)0x0);
  }
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3361,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3362,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar8 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
  method_00 = (JHMENEKPIBO->klass->vtable)._8_set_Item.method;
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)(JHMENEKPIBO,pSVar6,pSVar8);
  pGVar12 = (__this->fields).NOKHDHCKCPH;
  if ((pGVar12 != (GOJLGHMMDBO_o *)0x0) &&
     (pGVar13 = (__this->fields).MDIINGJCKNH, pGVar13 != (GOJLGHMMDBO_o *)0x0)) {
    ALGPKPJKBHO = (pGVar12->fields).GCJEKKJNOPH;
    ALGPKPJKBHO_00 = (pGVar13->fields).GCJEKKJNOPH;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3363,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3364,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    FPMAFHGLPOB__NEFAGJPGDAC(JHMENEKPIBO,pSVar6,ALGPKPJKBHO_00,method_00);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3365,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3366,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    FPMAFHGLPOB__NEFAGJPGDAC(JHMENEKPIBO,pSVar6,ALGPKPJKBHO,method_00);
    pGVar12 = (__this->fields).NOKHDHCKCPH;
    pGVar13 = (__this->fields).MDIINGJCKNH;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3367,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3368,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    FPMAFHGLPOB__FDCDCBONKBI(JHMENEKPIBO,pSVar6,pGVar12,method_00);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3369,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3370,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    FPMAFHGLPOB__FDCDCBONKBI(JHMENEKPIBO,pSVar6,pGVar13,method_00);
    bVar3 = IGPDCHBJAPD__DONKDCJLBPN(__this,(MethodInfo *)0x0);
    lVar1 = 0x68;
    if (!bVar3) {
      lVar1 = 0x70;
    }
    OKBIKHHKOEN = *(ModelParameters_o **)((long)&__this->klass + lVar1);
    if (OKBIKHHKOEN != (ModelParameters_o *)0x0) {
      FPMAFHGLPOB__EMMHBGJLDGE(JHMENEKPIBO,OKBIKHHKOEN,(MethodInfo *)pGVar13);
      CNDPGGAFHEA = (OKBIKHHKOEN->fields).PNAAPNFPCPI;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE__GMJMEKENPAP(CNDPGGAFHEA,true,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_0330b648;
      pSVar6 = string_TypeInfo->static_fields->Empty;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                          );
        pIVar9 = local_70.fields._current;
        if (!bVar3) goto LAB_0330b584;
        if ((PerkInfoItem_o *)local_70.fields._current == (PerkInfoItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (((PerkInfoItem_Fields *)((long)local_70.fields._current + 0x10))->OCABLLPNEGL != 0);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = GameUtils__DODJBGHCIHD((PerkInfoItem_o *)pIVar9,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar6 = ((PerkInfoItem_Fields *)((long)pIVar9 + 0x10))->AKBDHOEGNNG;
      }
LAB_0330b584:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__)
      ;
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3371,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3372,
                 (MethodInfo *)0x0);
      pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      pSVar8 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,pSVar11,pSVar8,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    }
    return;
  }
LAB_0330b648:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void FDCDCBONKBI(JSONObject JHMENEKPIBO, string ALHDMEKMLPH, GOJLGHMMDBO NOKHDHCKCPH)  [RVA 0x320BA8C]
// FPMAFHGLPOB$$FDCDCBONKBI @ RVA 0x320BA8C

void FPMAFHGLPOB__FDCDCBONKBI
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *ALHDMEKMLPH,
               GOJLGHMMDBO_o *NOKHDHCKCPH,MethodInfo *method)

{
  int32_t n;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  SimpleJSON_JSONNode_o *pSVar4;
  System_String_o *s;
  
  if ((DAT_04566e76 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3373);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3374);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3375);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3376);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3377);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3378);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3379);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3380);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3381);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3382);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566e76 = 1;
  }
  if (NOKHDHCKCPH == (GOJLGHMMDBO_o *)0x0) {
    return;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3373,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3374,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(ALHDMEKMLPH,pSVar3,(MethodInfo *)0x0);
  n = (NOKHDHCKCPH->fields).KODJDFKIJFJ;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar3,pSVar4,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3375,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3376,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(ALHDMEKMLPH,pSVar3,(MethodInfo *)0x0);
    pSVar4 = SimpleJSON_JSONNode__op_Implicit((NOKHDHCKCPH->fields).GNGEACPLJAG,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar3,pSVar4,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3377,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3378,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(ALHDMEKMLPH,pSVar3,(MethodInfo *)0x0);
    pSVar4 = SimpleJSON_JSONNode__op_Implicit((NOKHDHCKCPH->fields).PJIABIIHIFD,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar3,pSVar4,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3379,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3380,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(ALHDMEKMLPH,pSVar3,(MethodInfo *)0x0);
    pSVar4 = SimpleJSON_JSONNode__op_Implicit((NOKHDHCKCPH->fields).OODAOEGNBGP,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar3,pSVar4,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3381,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3382,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(ALHDMEKMLPH,pSVar3,(MethodInfo *)0x0);
    s = GOJLGHMMDBO__ALJPINHKMFK(NOKHDHCKCPH,(MethodInfo *)0x0);
    pSVar4 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0330be7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar3,pSVar4,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void KKKBEBDBBEJ(JSONObject JHMENEKPIBO)  [RVA 0x320BEA0]
// FPMAFHGLPOB$$KKKBEBDBBEJ @ RVA 0x320BEA0

void FPMAFHGLPOB__KKKBEBDBBEJ(SimpleJSON_JSONObject_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  int32_t n;
  SimpleJSON_JSONArray_o *__this;
  System_Collections_Generic_List_HBNENINHPGF__o *__this_00;
  Roster_o *__this_01;
  SimpleJSON_JSONObject_o *__this_02;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  SimpleJSON_JSONNode_o *pSVar5;
  MethodInfo *extraout_x1;
  GameUtils_HLAKGGFFNAO_o *pMVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566e77 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3383);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3384);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3385);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3386);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3387);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3388);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_get_Current__);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e77 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo,method);
  SimpleJSON_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar6 = GameUtils_TypeInfo->static_fields->BHAAICEFMBC;
  if (pMVar6 != (GameUtils_HLAKGGFFNAO_o *)0x0) {
    __this_00 = (pMVar6->fields).DIELINNGEBJ;
    if (__this_00 != (System_Collections_Generic_List_HBNENINHPGF__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__
                          );
        if (!bVar1) break;
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = local_80.fields._current[1].monitor;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_01 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        n = Roster__FCPIAEEKGEL(__this_01,pSVar7,(MethodInfo *)0x0);
        __this_02 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
        SimpleJSON_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3383,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3384,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
        if (__this_02 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,pSVar4,pSVar5,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3385,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3386,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,pSVar7,pSVar5,(__this_02->klass->vtable)._8_set_Item.method);
        if (__this == (SimpleJSON_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this->klass->vtable)._21_Add.methodPtr)
                  (__this,__this_02,(__this->klass->vtable)._21_Add.method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__)
      ;
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3387,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3388,
                 (MethodInfo *)0x0);
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
        (*(JHMENEKPIBO->klass->vtable)._20_Add.methodPtr)
                  (JHMENEKPIBO,pSVar7,__this,(JHMENEKPIBO->klass->vtable)._20_Add.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DCNODJBLLAD(JSONObject JHMENEKPIBO, MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x320C384]
// FPMAFHGLPOB$$DCNODJBLLAD @ RVA 0x320C384

void FPMAFHGLPOB__DCNODJBLLAD
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  SimpleJSON_JSONNode_o *pSVar7;
  Il2CppClass *pIVar8;
  
  if ((DAT_04566e78 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3389);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3390);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3391);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3392);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3393);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3394);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3395);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3396);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3397);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3398);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3399);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3400);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3401);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3402);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3403);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3404);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&PerkInfoItem_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566e78 = 1;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3389,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3390,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_0330c964;
  bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                     (Il2CppObject *)pSVar5,
                     Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
  if (bVar2) {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3391,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3392,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pIVar6 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        (Il2CppObject *)pSVar5,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar6 != (Il2CppObject *)0x0) {
      bVar1 = (PerkInfoItem_TypeInfo->_2).naturalAligment;
      if (((pIVar6->klass->_2).naturalAligment < bVar1) ||
         ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)PerkInfoItem_TypeInfo
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pIVar6);
      }
    }
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3393,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3394,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) goto LAB_0330c964;
    pIVar8 = pIVar6[4].klass;
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = SimpleJSON_JSONNode__op_Implicit((System_String_o *)pIVar8,(MethodInfo *)0x0);
    if (JHMENEKPIBO == (SimpleJSON_JSONObject_o *)0x0) goto LAB_0330c964;
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar5,pSVar7,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3395,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3396,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar7 = SimpleJSON_JSONNode__op_Implicit(*(int32_t *)&pIVar6[7].monitor,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar5,pSVar7,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3397,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3398,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                     (Il2CppObject *)pSVar5,
                     Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
  if (!bVar2) {
    return;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3399,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3400,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  pIVar6 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                     ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                      (Il2CppObject *)pSVar5,
                      Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (pIVar6 != (Il2CppObject *)0x0) {
    bVar1 = (PerkInfoItem_TypeInfo->_2).naturalAligment;
    if (((pIVar6->klass->_2).naturalAligment < bVar1) ||
       ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)PerkInfoItem_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pIVar6);
    }
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3401,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3402,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar8 = pIVar6[4].klass;
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = SimpleJSON_JSONNode__op_Implicit((System_String_o *)pIVar8,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,pSVar5,pSVar7,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3403,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3404,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pSVar7 = SimpleJSON_JSONNode__op_Implicit(*(int32_t *)&pIVar6[7].monitor,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0330c94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,pSVar5,pSVar7,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      return;
    }
  }
LAB_0330c964:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void GMIEADCFLNI(JSONObject JHMENEKPIBO, string ALHDMEKMLPH, HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x320A6AC]
// FPMAFHGLPOB$$GMIEADCFLNI @ RVA 0x320A6AC

void FPMAFHGLPOB__GMIEADCFLNI
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *ALHDMEKMLPH,
               HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  SimpleJSON_JSONNode_o *pSVar4;
  MethodInfo *method_00;
  System_String_o *s;
  
  if ((DAT_04566e79 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3405);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3406);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3407);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3408);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3409);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3410);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566e79 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3405,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3406,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(ALHDMEKMLPH,pSVar3,(MethodInfo *)0x0);
  s = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar3,pSVar4,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3407,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3408,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(ALHDMEKMLPH,pSVar3,(MethodInfo *)0x0);
    pSVar4 = SimpleJSON_JSONNode__op_Implicit
                       ((IKKAMAMLIKA->fields)._HCHGENFJLHA_k__BackingField,(MethodInfo *)0x0);
    method_00 = (JHMENEKPIBO->klass->vtable)._8_set_Item.method;
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)(JHMENEKPIBO,pSVar3,pSVar4);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3409,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0330a8c8 to 0340a9ef has its CatchHandler @ 0330a8c8
                       catch() { ... } // from try @ 0330a8c8 with catch @ 0330a8c8
                       catch() { ... } // from try @ 0330aa88 with catch @ 0330a8c8
                       catch() { ... } // from try @ 0330aaf4 with catch @ 0330a8c8
                       catch() { ... } // from try @ 0330ab28 with catch @ 0330a8c8
                       catch() { ... } // from try @ 0330ab68 with catch @ 0330a8c8 */
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3410,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(ALHDMEKMLPH,pSVar3,(MethodInfo *)0x0);
    FPMAFHGLPOB__JJPJJDHOFLE(IKKAMAMLIKA,JHMENEKPIBO,pSVar3,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void IMHAICBKNEM(JSONObject JHMENEKPIBO, int JLAFGLDIFOC)  [RVA 0x320C9F0]
// FPMAFHGLPOB$$IMHAICBKNEM @ RVA 0x320C9F0

void FPMAFHGLPOB__IMHAICBKNEM
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Roster_o *__this_00;
  System_Collections_Generic_List_PAMEPBLOLPB__o *__this_01;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  SimpleJSON_JSONObject_o *__this_02;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  SimpleJSON_JSONNode_o *pSVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar13;
  void *pvVar12;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_d8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566e7a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3411);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3412);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3413);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3414);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3415);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3416);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3417);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3418);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3419);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3420);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3421);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3422);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>_set_Item__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_FPMAFHGLPOB_HFKLFMIFOOB>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_FPMAFHGLPOB_HFKLFMIFOOB>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_FPMAFHGLPOB_HFKLFMIFOOB>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_get_Current__);
    FUN_01bab630(&FPMAFHGLPOB_HFKLFMIFOOB_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_FPMAFHGLPOB_HFKLFMIFOOB>_get_Value__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e7a = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_b0.fields._getEnumeratorRetType = 0;
  local_b0.fields._36_4_ = 0;
  local_b0.fields._version = 0;
  local_b0.fields._index = 0;
  local_b0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b0.fields._current.fields.key = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,
             Method_System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>__ctor__);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((__this_00 != (Roster_o *)0x0) &&
     (__this_01 = Roster__JPKICKOCNEK(__this_00,JLAFGLDIFOC,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_PAMEPBLOLPB__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_d8,
               (System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<PAMEPBLOLPB>_GetEnumerator__);
    local_80.fields._index = local_d8.fields._version;
    local_80.fields._version = local_d8.fields._index;
    local_80.fields._list = (System_Collections_Generic_List_T__o *)local_d8.fields._dictionary;
    local_80.fields._current = local_d8.fields._current.fields.key;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_MoveNext__);
      pIVar1 = local_80.fields._current;
      if (!bVar2) break;
      if ((PAMEPBLOLPB_o *)local_80.fields._current == (PAMEPBLOLPB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar3 = (Il2CppClass *)
               PAMEPBLOLPB__FIPBJBNLJLB((PAMEPBLOLPB_o *)local_80.fields._current,(MethodInfo *)0x0)
      ;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        (__this,(Il2CppObject *)pIVar3,
                         Method_System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>_ContainsKey__
                        );
      if (bVar2) {
        pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (__this,(Il2CppObject *)pIVar3,
                            Method_System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>_get_Item__
                           );
        if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar10._0_4_ = *(int32_t *)&pIVar1[2].klass;
        uVar10._4_4_ = *(int32_t *)((long)&pIVar1[2].klass + 4);
        pIVar3 = pIVar4[2].klass;
        uVar11 = NEON_rev64(uVar10,4);
        pIVar4[1].monitor =
             (void *)CONCAT44((int)((ulong)uVar11 >> 0x20) + (int)((ulong)pIVar4[1].monitor >> 0x20)
                              ,(int)uVar11 + (int)pIVar4[1].monitor);
        uVar9 = *(int32_t *)&pIVar1[3].monitor;
        uVar13 = *(int32_t *)((long)&pIVar1[3].monitor + 4);
        pIVar4[2].klass =
             (Il2CppClass *)CONCAT44(uVar13 + (int)((ulong)pIVar3 >> 0x20),uVar9 + (int)pIVar3);
      }
      else {
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(FPMAFHGLPOB_HFKLFMIFOOB_TypeInfo);
        System_Object___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar4[1].klass = pIVar3;
        thunk_FUN_01c20e04(pIVar4 + 1,pIVar3);
        uVar11._0_4_ = *(int32_t *)&pIVar1[2].klass;
        uVar11._4_4_ = *(int32_t *)((long)&pIVar1[2].klass + 4);
        pvVar12 = (void *)NEON_rev64(uVar11,4);
        pIVar4[1].monitor = pvVar12;
        pIVar4[2].klass =
             *(Il2CppClass **)&((PAMEPBLOLPB_Fields *)((long)pIVar1 + 0x10))->EMDEPINBPMF;
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this,(Il2CppObject *)pIVar3,pIVar4,
                   Method_System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>_set_Item__
                  );
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_Dispose__);
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                (&local_d8,__this,
                 Method_System_Collections_Generic_Dictionary<string,_FPMAFHGLPOB_HFKLFMIFOOB>_GetEnumerator__
                );
      local_b0.fields._version = local_d8.fields._version;
      local_b0.fields._index = local_d8.fields._index;
      local_b0.fields._dictionary = local_d8.fields._dictionary;
      local_b0.fields._current.fields.value = local_d8.fields._current.fields.value;
      local_b0.fields._current.fields.key = local_d8.fields._current.fields.key;
      local_b0.fields._getEnumeratorRetType = local_d8.fields._getEnumeratorRetType;
      local_b0.fields._36_4_ = local_d8.fields._36_4_;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                          (&local_b0,
                           Method_System_Collections_Generic_Dictionary_Enumerator<string,_FPMAFHGLPOB_HFKLFMIFOOB>_MoveNext__
                          );
        pIVar1 = local_b0.fields._current.fields.value;
        if (!bVar2) {
          System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                    (&local_b0,
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_FPMAFHGLPOB_HFKLFMIFOOB>_Dispose__
                    );
          return;
        }
        __this_02 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
        SimpleJSON_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3411,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3412,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        if (pIVar1 == (Il2CppObject *)0x0) break;
        pIVar3 = pIVar1[1].klass;
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar8 = SimpleJSON_JSONNode__op_Implicit((System_String_o *)pIVar3,(MethodInfo *)0x0);
        if (__this_02 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,pSVar7,pSVar8,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3413,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3414,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        pSVar8 = SimpleJSON_JSONNode__op_Implicit(*(int32_t *)&pIVar1[1].monitor,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,pSVar7,pSVar8,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3415,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3416,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        pSVar8 = SimpleJSON_JSONNode__op_Implicit
                           (*(int32_t *)((long)&pIVar1[1].monitor + 4),(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,pSVar7,pSVar8,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3417,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3418,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        pSVar8 = SimpleJSON_JSONNode__op_Implicit(*(int32_t *)&pIVar1[2].klass,(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,pSVar7,pSVar8,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3419,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3420,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        pSVar8 = SimpleJSON_JSONNode__op_Implicit
                           (*(int32_t *)((long)&pIVar1[2].klass + 4),(MethodInfo *)0x0);
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,pSVar7,pSVar8,(__this_02->klass->vtable)._8_set_Item.method);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3421,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3422,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        if (JHMENEKPIBO == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(pSVar7,pSVar7);
        }
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,pSVar7,__this_02,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void JJPJJDHOFLE(HOOAAGABMBL ANMFBABEMFD, JSONObject JHMENEKPIBO, string PNOCDIDLLLM)  [RVA 0x320C978]
// FPMAFHGLPOB$$JJPJJDHOFLE @ RVA 0x320C978

void FPMAFHGLPOB__JJPJJDHOFLE
               (HOOAAGABMBL_o *ANMFBABEMFD,SimpleJSON_JSONObject_o *JHMENEKPIBO,
               System_String_o *PNOCDIDLLLM,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *EGBBHPHAHAC;
  
  if ((DAT_04566e7b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e7b = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EGBBHPHAHAC = NLPJLHOEAOE__GMJMEKENPAP(ANMFBABEMFD,true,(MethodInfo *)0x0);
  FPMAFHGLPOB__JJPJJDHOFLE(EGBBHPHAHAC,JHMENEKPIBO,PNOCDIDLLLM,method);
  return;
}


// ===== public static void EGKNJFGNMIK(JSONObject JHMENEKPIBO)  [RVA 0x320D7C0]
// FPMAFHGLPOB$$EGKNJFGNMIK @ RVA 0x320D7C0

void FPMAFHGLPOB__EGKNJFGNMIK(SimpleJSON_JSONObject_o *JHMENEKPIBO,MethodInfo *method)

{
  code cVar1;
  Il2CppObject *IKKAMAMLIKA;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  ulong uVar6;
  MethodInfo *__this;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  HOOAAGABMBL_o *pHVar7;
  MethodInfo *method_00;
  Roster_o *pAVar8;
  GGHCLMEFIGO_o *pGVar9;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566e7c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3423);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3424);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3425);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3426);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3427);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3428);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e7c = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3423,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3424,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
    uVar6 = (*(JHMENEKPIBO->klass->vtable)._26_HasKey.methodPtr)
                      (JHMENEKPIBO,pSVar5,(JHMENEKPIBO->klass->vtable)._26_HasKey.method);
    if ((uVar6 & 1) == 0) {
      __this = (MethodInfo *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
      SimpleJSON_JSONArray___ctor((SimpleJSON_JSONArray_o *)__this,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3427,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3428,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      method_00 = __this;
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,pSVar5,__this,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    }
    else {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3425,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3426,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      method_00 = (JHMENEKPIBO->klass->vtable)._7_get_Item.method;
      __this = (MethodInfo *)
               (*(JHMENEKPIBO->klass->vtable)._7_get_Item.methodPtr)(JHMENEKPIBO,pSVar5);
      if (__this != (MethodInfo *)0x0) {
        cVar1 = (code)(SimpleJSON_JSONArray_TypeInfo->_2).naturalAligment;
        if (((byte)__this->methodPointer[0x130] < (byte)cVar1) ||
           (*(SimpleJSON_JSONArray_c **)
             (*(long *)(__this->methodPointer + 200) + (ulong)(byte)cVar1 * 8 + -8) !=
            SimpleJSON_JSONArray_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this);
        }
      }
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar8 != (Roster_o *)0x0) &&
        (pGVar9 = (pAVar8->fields).OIDPLCLELEN, pGVar9 != (GGHCLMEFIGO_o *)0x0)) &&
       (__this_00 = (pGVar9->fields).DPOPJKJLDEE,
       __this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                          );
        IKKAMAMLIKA = local_48.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
          return;
        }
        if ((IGFGDDANEPE_o *)local_48.fields._current == (IGFGDDANEPE_o *)0x0) break;
        pHVar7 = ((IGFGDDANEPE_Fields *)((long)local_48.fields._current + 0x10))->PCBECBEFJOI;
        if (pHVar7 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar6 = (*(pHVar7->klass->vtable)._5_EFLKILFFJKH.methodPtr)
                          (pHVar7,(pHVar7->klass->vtable)._5_EFLKILFFJKH.method);
        if (((uVar6 & 1) == 0) &&
           (((IGFGDDANEPE_Fields *)((long)IKKAMAMLIKA + 0x10))->OFIKEBGDMBE != false)) {
          FPMAFHGLPOB__FDGMBGNOIPC
                    ((SimpleJSON_JSONArray_o *)__this,(IGFGDDANEPE_o *)IKKAMAMLIKA,method_00);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void EIDEBMKLLMO(JSONObject JHMENEKPIBO, FightList FBFPLEFCDOK)  [RVA 0x320DEE8]
// FPMAFHGLPOB$$EIDEBMKLLMO @ RVA 0x320DEE8

void FPMAFHGLPOB__EIDEBMKLLMO
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,FightList_o *FBFPLEFCDOK,MethodInfo *method)

{
  int32_t n;
  OLKPEJMEBPJ_o *__this;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  OOMHDDBCBJP_o *pOVar3;
  
  if ((DAT_04566e7d & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3429);
                    /* try { // try from 0330df1c to 0340df27 has its CatchHandler @ 0330df6c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3430);
                    /* try { // try from 0330df28 to 0340df57 has its CatchHandler @ 0330dde8 */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566e7d = 1;
  }
                    /* try { // try from 0330df58 to 0340df5f has its CatchHandler @ 0330df7c */
                    /* try { // try from 0330df60 to 0340df63 has its CatchHandler @ 0330df74 */
                    /* try { // try from 0330df64 to 0340df67 has its CatchHandler @ 0330df70 */
  n = 0;
  if (FBFPLEFCDOK != (FightList_o *)0x0) {
                    /* try { // try from 0330df68 to 0340df93 has its CatchHandler @ 0330dde8 */
    pOVar3 = (FBFPLEFCDOK->fields).IFJLLGPGMHM;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330df1c with catch @ 0330df6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330df64 with catch @ 0330df70
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330df60 with catch @ 0330df74
                        */
    if ((pOVar3 == (OOMHDDBCBJP_o *)0x0) ||
       (__this = (pOVar3->fields).LFJPDELEIHG, __this == (OLKPEJMEBPJ_o *)0x0)) {
      n = 0;
    }
    else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330ded0 with catch @ 0330df78
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330df58 with catch @ 0330df7c
                        */
      n = OLKPEJMEBPJ__LIIDJOLDBBF(__this,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 0330df94 to 0340df97 has its CatchHandler @ 0330dfb8 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0330df98 to 0340dfbf has its CatchHandler @ 0330dde8 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3429,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0330df94 with catch @ 0330dfb8 */
                    /* try { // try from 0330dfc0 to 0340dfc7 has its CatchHandler @ 0330dfdc */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3430,(MethodInfo *)0x0);
                    /* try { // try from 0330dfc8 to 0340dfd3 has its CatchHandler @ 0330dde8 */
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
                    /* try { // try from 0330dfd4 to 0340dfdb has its CatchHandler @ 0330dfdc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0330dfc0 with catch @ 0330dfdc
                       catch(type#2 @ 00000000) { ... } // from try @ 0330dfd4 with catch @ 0330dfdc
                        */
                    /* try { // try from 0330dfe0 to 0340e07f has its CatchHandler @ 0330dfe0
                       catch() { ... } // from try @ 0330dfe0 with catch @ 0330dfe0
                       catch() { ... } // from try @ 0330e0bc with catch @ 0330dfe0
                       catch() { ... } // from try @ 0330e134 with catch @ 0330dfe0
                       catch() { ... } // from try @ 0330e160 with catch @ 0330dfe0
                       catch() { ... } // from try @ 0330e190 with catch @ 0330dfe0 */
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar2 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0330e020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar1,pSVar2,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void JJPJJDHOFLE(List<PerkInfoItem> EGBBHPHAHAC, JSONObject JHMENEKPIBO, string PNOCDIDLLLM)  [RVA 0x320D318]
// FPMAFHGLPOB$$JJPJJDHOFLE @ RVA 0x320D318

void FPMAFHGLPOB__JJPJJDHOFLE
               (System_Collections_Generic_List_HEFOANCOHDC__o *EGBBHPHAHAC,
               SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *PNOCDIDLLLM,MethodInfo *method)

{
  Il2CppObject *__this;
  bool bVar1;
  SimpleJSON_JSONArray_o *__this_00;
  SimpleJSON_JSONObject_o *__this_01;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  SimpleJSON_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566e7e & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3431);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3432);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3433);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3434);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3435);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3436);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_get_Count__);
    DAT_04566e7e = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (EGBBHPHAHAC != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    if ((EGBBHPHAHAC->fields)._size < 1) {
      __this_00 = (SimpleJSON_JSONArray_o *)0x0;
    }
    else {
      __this_00 = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
      SimpleJSON_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)EGBBHPHAHAC,
                 Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__
                               ), __this = local_80.fields._current, bVar1) {
        __this_01 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
        SimpleJSON_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3431,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3432,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        if ((PerkInfoItem_o *)__this == (PerkInfoItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = ((PerkInfoItem_Fields *)((long)__this + 0x10))->JIJLBFGKNJK;
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        if (__this_01 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                  (__this_01,pSVar4,pSVar5,(__this_01->klass->vtable)._8_set_Item.method);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3433,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3434,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3435,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3436,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        pSVar6 = PerkInfoItem__EOBFJAOLIMH((PerkInfoItem_o *)__this,pSVar6,(MethodInfo *)0x0);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                  (__this_01,pSVar4,pSVar5,(__this_01->klass->vtable)._8_set_Item.method);
        if (__this_00 == (SimpleJSON_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_00->klass->vtable)._21_Add.methodPtr)
                  (__this_00,__this_01,(__this_00->klass->vtable)._21_Add.method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__)
      ;
    }
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = SimpleJSON_JSONNode__op_Inequality
                      ((SimpleJSON_JSONNode_o *)__this_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (JHMENEKPIBO == (SimpleJSON_JSONObject_o *)0x0) goto LAB_0330d6e4;
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,PNOCDIDLLLM,__this_00,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    }
    return;
  }
LAB_0330d6e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void FCMOFAKFNLJ(JSONObject JHMENEKPIBO, MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x320E028]
// FPMAFHGLPOB$$FCMOFAKFNLJ @ RVA 0x320E028

void FPMAFHGLPOB__FCMOFAKFNLJ
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int64_t iVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  int64_t *piVar7;
  System_String_o *pSVar8;
  char *pcVar9;
  SimpleJSON_JSONNode_o *pSVar10;
  int64_t iVar11;
  
  if ((DAT_04566e7f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3437);
                    /* try { // try from 0330e080 to 0340e087 has its CatchHandler @ 0330e144 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3438);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3439);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3440);
                    /* try { // try from 0330e09c to 0340e0a7 has its CatchHandler @ 0330e140 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3441);
                    /* try { // try from 0330e0ac to 0340e0bb has its CatchHandler @ 0330e13c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3442);
                    /* try { // try from 0330e0bc to 0340e12f has its CatchHandler @ 0330dfe0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3443);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3444);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3445);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3446);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3447);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3448);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3449);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3450);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3451);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3452);
                    /* try { // try from 0330e130 to 0340e133 has its CatchHandler @ 0330e138 */
                    /* try { // try from 0330e134 to 0340e15b has its CatchHandler @ 0330dfe0 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3453);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330e130 with catch @ 0330e138
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330e0ac with catch @ 0330e13c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330e09c with catch @ 0330e140
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3454);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330e080 with catch @ 0330e144
                        */
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0330e15c to 0340e15f has its CatchHandler @ 0330e180 */
                    /* try { // try from 0330e160 to 0340e187 has its CatchHandler @ 0330dfe0 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&long_TypeInfo);
                    /* catch() { ... } // from try @ 0330e15c with catch @ 0330e180 */
                    /* try { // try from 0330e188 to 0340e18f has its CatchHandler @ 0330e1a4 */
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
                    /* try { // try from 0330e190 to 0340e19b has its CatchHandler @ 0330dfe0 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 0330e19c to 0340e1a3 has its CatchHandler @ 0330e1a4 */
    DAT_04566e7f = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0330e188 with catch @ 0330e1a4
                       catch(type#2 @ 00000000) { ... } // from try @ 0330e19c with catch @ 0330e1a4
                        */
                    /* try { // try from 0330e1a8 to 0340e277 has its CatchHandler @ 0330e1a8
                       catch() { ... } // from try @ 0330e1a8 with catch @ 0330e1a8
                       catch() { ... } // from try @ 0330e2b4 with catch @ 0330e1a8
                       catch() { ... } // from try @ 0330e38c with catch @ 0330e1a8
                       catch() { ... } // from try @ 0330e3bc with catch @ 0330e1a8
                       catch() { ... } // from try @ 0330e3fc with catch @ 0330e1a8 */
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3437,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3438,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                       (Il2CppObject *)pSVar5,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3439,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3440,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pIVar6 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          (Il2CppObject *)pSVar5,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
                    /* try { // try from 0330e278 to 0340e27f has its CatchHandler @ 0330e3a0 */
      if (pIVar6 == (Il2CppObject *)0x0) goto LAB_0330e6ac;
                    /* try { // try from 0330e290 to 0340e29b has its CatchHandler @ 0330e39c */
      if ((pIVar6->klass->_1).element_class != (long_TypeInfo->_1).element_class) goto LAB_0330e6b0;
      piVar7 = (int64_t *)thunk_FUN_01bda96c();
      iVar11 = *piVar7;
    }
    else {
                    /* try { // try from 0330e2a8 to 0340e2b3 has its CatchHandler @ 0330e394 */
      iVar11 = 0;
    }
                    /* try { // try from 0330e2b4 to 0340e383 has its CatchHandler @ 0330e1a8 */
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3441,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3442,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                       (Il2CppObject *)pSVar5,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    pSVar5 = StringLiteral_1/*""*/;
    if (bVar2) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3443,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3444,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0330e384 to 0340e387 has its CatchHandler @ 0330e398 */
      pIVar6 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          (Il2CppObject *)pSVar5,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
                    /* try { // try from 0330e388 to 0340e38b has its CatchHandler @ 0330e390 */
      if (pIVar6 == (Il2CppObject *)0x0) goto LAB_0330e6ac;
                    /* try { // try from 0330e38c to 0340e3b7 has its CatchHandler @ 0330e1a8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330e388 with catch @ 0330e390
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330e2a8 with catch @ 0330e394
                        */
      pSVar5 = (System_String_o *)
               (*pIVar6->klass->vtable[3].methodPtr)(pIVar6,pIVar6->klass->vtable[3].method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330e384 with catch @ 0330e398
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330e290 with catch @ 0330e39c
                        */
    }
                    /* try { // try from 0330e3b8 to 0340e3bb has its CatchHandler @ 0330e3e4 */
                    /* try { // try from 0330e3bc to 0340e3f3 has its CatchHandler @ 0330e1a8 */
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3445,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch() { ... } // from try @ 0330e3b8 with catch @ 0330e3e4 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3446,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0330e3f4 to 0340e3fb has its CatchHandler @ 0330e410 */
                    /* try { // try from 0330e3fc to 0340e407 has its CatchHandler @ 0330e1a8 */
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 0330e408 to 0340e40f has its CatchHandler @ 0330e410 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0330e3f4 with catch @ 0330e410
                       catch(type#2 @ 00000000) { ... } // from try @ 0330e408 with catch @ 0330e410
                        */
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                       (Il2CppObject *)pSVar8,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3447,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3448,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pIVar6 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                          (Il2CppObject *)pSVar8,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar6 == (Il2CppObject *)0x0) goto LAB_0330e6ac;
      if ((pIVar6->klass->_1).element_class != (bool_TypeInfo->_1).element_class) {
LAB_0330e6b0:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      pcVar9 = (char *)thunk_FUN_01bda96c();
      bVar2 = *pcVar9 == '\0';
    }
    else {
      bVar2 = true;
    }
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3449,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3450,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar10 = SimpleJSON_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,pSVar8,pSVar10,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3451,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3452,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      iVar1 = iVar11;
      if (!bVar2) {
        iVar1 = 0;
      }
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar10 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,pSVar5,pSVar10,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3453,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3454,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
      }
      iVar1 = 0;
      if (!bVar2) {
        iVar1 = iVar11;
      }
      pSVar10 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0330e6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,pSVar5,pSVar10,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      return;
    }
  }
LAB_0330e6ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void FDGMBGNOIPC(JSONArray JHMENEKPIBO, IGFGDDANEPE IKKAMAMLIKA)  [RVA 0x320DBBC]
// FPMAFHGLPOB$$FDGMBGNOIPC @ RVA 0x320DBBC

void FPMAFHGLPOB__FDGMBGNOIPC
               (SimpleJSON_JSONArray_o *JHMENEKPIBO,IGFGDDANEPE_o *IKKAMAMLIKA,MethodInfo *method)

{
  int32_t n;
  SimpleJSON_JSONObject_o *__this;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  SimpleJSON_JSONNode_o *pSVar4;
  MethodInfo *method_00;
  HOOAAGABMBL_o *pHVar5;
  System_String_o *s;
  
  if ((DAT_04566e80 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3455);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3456);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3457);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3458);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3459);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3460);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3461);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3462);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    DAT_04566e80 = 1;
  }
  __this = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
  SimpleJSON_JSONObject___ctor(__this,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3455,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3456,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if (IKKAMAMLIKA != (IGFGDDANEPE_o *)0x0) {
    s = (IKKAMAMLIKA->fields).NPFMOEOIEKM;
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    if (__this != (SimpleJSON_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,pSVar3,pSVar4,(__this->klass->vtable)._8_set_Item.method);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3457,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3458,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      n = IGFGDDANEPE__LGIMDOAMCNG(IKKAMAMLIKA,(MethodInfo *)0x0);
      pSVar4 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,pSVar3,pSVar4,(__this->klass->vtable)._8_set_Item.method);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0330dde8 to 0340decf has its CatchHandler @ 0330dde8
                       catch() { ... } // from try @ 0330dde8 with catch @ 0330dde8
                       catch() { ... } // from try @ 0330df28 with catch @ 0330dde8
                       catch() { ... } // from try @ 0330df68 with catch @ 0330dde8
                       catch() { ... } // from try @ 0330df98 with catch @ 0330dde8
                       catch() { ... } // from try @ 0330dfc8 with catch @ 0330dde8 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3459,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3460,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      pHVar5 = (IKKAMAMLIKA->fields).PCBECBEFJOI;
      if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
        pSVar4 = SimpleJSON_JSONNode__op_Implicit
                           ((pHVar5->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0);
        method_00 = (__this->klass->vtable)._8_set_Item.method;
        (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,pSVar3,pSVar4);
        pHVar5 = (IKKAMAMLIKA->fields).PCBECBEFJOI;
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3461,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3462,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        FPMAFHGLPOB__JJPJJDHOFLE(pHVar5,__this,pSVar3,method_00);
        if (JHMENEKPIBO != (SimpleJSON_JSONArray_o *)0x0) {
                    /* try { // try from 0330ded0 to 0340ded7 has its CatchHandler @ 0330df78 */
                    /* WARNING: Could not recover jumptable at 0x0330dee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(JHMENEKPIBO->klass->vtable)._21_Add.methodPtr)
                    (JHMENEKPIBO,__this,(JHMENEKPIBO->klass->vtable)._21_Add.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CCHGPNLCKFI(JSONObject JHMENEKPIBO)  [RVA 0x320E6B4]
// FPMAFHGLPOB$$CCHGPNLCKFI @ RVA 0x320E6B4

void FPMAFHGLPOB__CCHGPNLCKFI(SimpleJSON_JSONObject_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  Roster_o *pAVar4;
  System_String_o *s;
  SimpleJSON_JSONNode_o *pSVar5;
  int64_t iVar6;
  int64_t iVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  int64_t local_48;
  
  if ((DAT_04566e81 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3463);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3464);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3465);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3466);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3467);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3468);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e81 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3463,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3464,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 != (Roster_o *)0x0) {
    local_48 = Roster__IMLCNMCBEEN(pAVar4,(MethodInfo *)0x0);
    s = System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar5 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,pSVar3,pSVar5,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3465,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3466,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar4 != (Roster_o *)0x0) {
        local_70.fields.hiddenValue = (pAVar4->fields).MBINFANFLMC.fields.hiddenValue;
        local_70.fields.currentCryptoKey = (pAVar4->fields).MBINFANFLMC.fields.currentCryptoKey;
        local_70.fields.fakeValueActive = (pAVar4->fields).MBINFANFLMC.fields.fakeValueActive;
        local_70.fields.inited = (pAVar4->fields).MBINFANFLMC.fields.inited;
        local_70.fields._26_6_ = *(undefined6 *)&(pAVar4->fields).MBINFANFLMC.fields.field_0x1a;
        local_70.fields.fakeValue = (pAVar4->fields).MBINFANFLMC.fields.fakeValue;
        iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_70,(MethodInfo *)0x0);
        pSVar5 = SimpleJSON_JSONNode__op_Implicit(iVar6,(MethodInfo *)0x0);
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,pSVar3,pSVar5,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3467,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3468,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar4 != (Roster_o *)0x0) {
          iVar6 = Roster__HEHFNBKGJLP(pAVar4,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar4 != (Roster_o *)0x0) {
            local_90.fields.hiddenValue = (pAVar4->fields).MBINFANFLMC.fields.hiddenValue;
            local_90.fields.currentCryptoKey = (pAVar4->fields).MBINFANFLMC.fields.currentCryptoKey;
            local_90.fields.fakeValueActive = (pAVar4->fields).MBINFANFLMC.fields.fakeValueActive;
            local_90.fields.inited = (pAVar4->fields).MBINFANFLMC.fields.inited;
            local_90.fields._26_6_ = *(undefined6 *)&(pAVar4->fields).MBINFANFLMC.fields.field_0x1a;
            local_90.fields.fakeValue = (pAVar4->fields).MBINFANFLMC.fields.fakeValue;
            iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                              (&local_90,(MethodInfo *)0x0);
            pSVar5 = SimpleJSON_JSONNode__op_Implicit(iVar6 - iVar7,(MethodInfo *)0x0);
            (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                      (JHMENEKPIBO,pSVar3,pSVar5,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void MKLGBANKNHL(JSONObject JHMENEKPIBO, MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x320EA74]
// FPMAFHGLPOB$$MKLGBANKNHL @ RVA 0x320EA74

/* WARNING: Type propagation algorithm not settling */

void FPMAFHGLPOB__MKLGBANKNHL
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  long n;
  int64_t n_00;
  System_RuntimeFieldHandle_Fields *pSVar1;
  byte bVar2;
  bool_conflict bVar3;
  int64_t n_01;
  bool bVar4;
  bool bVar5;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  Il2CppObject *pIVar9;
  int *piVar10;
  char *pcVar11;
  System_String_o *pSVar12;
  SimpleJSON_JSONNode_o *pSVar13;
  MethodInfo *in_x5;
  System_RuntimeFieldHandle_Fields *pSVar14;
  int ACCIHBHMFPN;
  int64_t iVar15;
  System_String_o *pSVar16;
  int64_t local_70;
  int64_t iStack_68;
  
  if ((DAT_04566e82 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3469);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3470);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3471);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3472);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3473);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3474);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3475);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3476);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3477);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3478);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3479);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3480);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3481);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3482);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3483);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3484);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3485);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3486);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3487);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3488);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3489);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3490);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3491);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3492);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3493);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3494);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3495);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3496);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3497);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3498);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3499);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3500);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3501);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3502);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3503);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3504);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3505);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3506);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3507);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3508);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3509);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3510);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3511);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3512);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3513);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3514);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3515);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3516);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NFNBHPOJFNJ_DDPHDDCKAGO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&HOOAAGABMBL_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566e82 = 1;
  }
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3469,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3470,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  if (BFPCMHPBAGL == (MDNLIFLBFNO_o *)0x0) goto LAB_0330f930;
  bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                     (Il2CppObject *)pSVar8,
                     Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
  if (!bVar4) {
    return;
  }
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3471,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3472,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  IKKAMAMLIKA = (HOOAAGABMBL_o *)
                System_Collections_Generic_Dictionary<object,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                           (Il2CppObject *)pSVar8,
                           Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  bVar2 = (HOOAAGABMBL_TypeInfo->_2).naturalAligment;
  if ((IKKAMAMLIKA->klass->_2).naturalAligment < bVar2) {
    return;
  }
  if ((IKKAMAMLIKA->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)HOOAAGABMBL_TypeInfo) {
    return;
  }
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3473,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3474,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                     (Il2CppObject *)pSVar8,
                     Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
  if (bVar4) {
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3475,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3476,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pIVar9 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        (Il2CppObject *)pSVar8,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar9 == (Il2CppObject *)0x0) goto LAB_0330f930;
    if ((pIVar9->klass->_1).element_class != (NFNBHPOJFNJ_DDPHDDCKAGO_TypeInfo->_1).element_class)
    goto LAB_0330f934;
    piVar10 = (int *)thunk_FUN_01bda96c();
    ACCIHBHMFPN = *piVar10;
  }
  else {
    ACCIHBHMFPN = 0;
  }
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3477,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3478,(MethodInfo *)0x0);
  pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                     (Il2CppObject *)pSVar8,
                     Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
  if (bVar4) {
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3479,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3480,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pIVar9 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        (Il2CppObject *)pSVar8,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if (pIVar9 == (Il2CppObject *)0x0) goto LAB_0330f930;
    if ((pIVar9->klass->_1).element_class != (bool_TypeInfo->_1).element_class) {
LAB_0330f934:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    pcVar11 = (char *)thunk_FUN_01bda96c();
    bVar4 = *pcVar11 != '\0';
  }
  else {
    bVar4 = false;
  }
  local_70 = 0;
  iStack_68 = 0;
  FPMAFHGLPOB__OMGLKPMBAPF(IKKAMAMLIKA,ACCIHBHMFPN,bVar4,&iStack_68,&local_70,in_x5);
  pSVar8 = StringLiteral_1/*""*/;
  pSVar16 = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
  n = local_70 + iStack_68;
  n_00 = 0;
  if (ACCIHBHMFPN != 0) {
    n_00 = local_70;
  }
  n_01 = 0;
  if (ACCIHBHMFPN != 0) {
    n = 0;
    n_01 = iStack_68;
  }
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3481,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3482,(MethodInfo *)0x0);
  pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  bVar5 = System_String__op_Equality(pSVar16,pSVar12,(MethodInfo *)0x0);
  if (bVar5) {
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3483,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar14 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3484;
LAB_0330f230:
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar14->value,
               (MethodInfo *)0x0);
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  }
  else {
    pSVar12 = (IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField;
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3485,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3486,(MethodInfo *)0x0)
    ;
    pSVar16 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar5 = System_String__op_Equality(pSVar12,pSVar16,(MethodInfo *)0x0);
    if (bVar5) {
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3487,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3488;
      goto LAB_0330f230;
    }
    if (bVar4) {
      iVar15 = (IKKAMAMLIKA->fields)._LAOFJOMPFDL_k__BackingField;
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar15 = GameUtils__HCDHCLBPBHN(iVar15,(MethodInfo *)0x0);
      bVar3 = (IKKAMAMLIKA->fields)._GEAFGKNGAGG_k__BackingField;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      if (-1 < iVar15) {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3489,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3490,
                   (MethodInfo *)0x0);
        pSVar16 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat(pSVar8,pSVar16,(MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      }
      if (bVar3 != false) goto LAB_0330f318;
LAB_0330f360:
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3493,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3494;
    }
    else {
      bVar3 = (IKKAMAMLIKA->fields)._GEAFGKNGAGG_k__BackingField;
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      if (bVar3 == false) goto LAB_0330f360;
LAB_0330f318:
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3491,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3492;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar14->value,
               (MethodInfo *)0x0);
    pSVar16 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat(pSVar8,pSVar16,(MethodInfo *)0x0);
  }
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3495,(MethodInfo *)0x0);
  pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar7,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3496,(MethodInfo *)0x0);
  pSVar16 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar13 = SimpleJSON_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar16,pSVar13,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3497,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3498,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 0330f4c4 to 0340f5b3 has its CatchHandler @ 0330f4c4
                       catch() { ... } // from try @ 0330f4c4 with catch @ 0330f4c4
                       catch() { ... } // from try @ 0330f5dc with catch @ 0330f4c4
                       catch() { ... } // from try @ 0330f640 with catch @ 0330f4c4
                       catch() { ... } // from try @ 0330f66c with catch @ 0330f4c4
                       catch() { ... } // from try @ 0330f6ac with catch @ 0330f4c4 */
    pSVar13 = SimpleJSON_JSONNode__op_Implicit
                        ((IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar8,pSVar13,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3499,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3500,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pSVar13 = SimpleJSON_JSONNode__op_Implicit
                        ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar8,pSVar13,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3501,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3502,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0330f5b4 to 0340f5bb has its CatchHandler @ 0330f650 */
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pSVar13 = SimpleJSON_JSONNode__op_Implicit
                        ((IKKAMAMLIKA->fields)._HCHGENFJLHA_k__BackingField,(MethodInfo *)0x0);
                    /* try { // try from 0330f5d4 to 0340f5db has its CatchHandler @ 0330f644 */
                    /* try { // try from 0330f5dc to 0340f637 has its CatchHandler @ 0330f4c4 */
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar8,pSVar13,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3503,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3504,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0330f638 to 0340f63b has its CatchHandler @ 0330f64c */
                    /* try { // try from 0330f63c to 0340f63f has its CatchHandler @ 0330f648 */
                    /* try { // try from 0330f640 to 0340f667 has its CatchHandler @ 0330f4c4 */
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330f5d4 with catch @ 0330f644
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330f63c with catch @ 0330f648
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330f638 with catch @ 0330f64c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330f5b4 with catch @ 0330f650
                        */
    pSVar13 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
                    /* try { // try from 0330f668 to 0340f66b has its CatchHandler @ 0330f694 */
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar8,pSVar13,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                    /* try { // try from 0330f66c to 0340f6a3 has its CatchHandler @ 0330f4c4 */
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3505,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 0330f668 with catch @ 0330f694 */
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0330f6a4 to 0340f6ab has its CatchHandler @ 0330f6c0 */
                    /* try { // try from 0330f6ac to 0340f6b7 has its CatchHandler @ 0330f4c4 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3506,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0330f6b8 to 0340f6bf has its CatchHandler @ 0330f6c0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0330f6a4 with catch @ 0330f6c0
                       catch(type#2 @ 00000000) { ... } // from try @ 0330f6b8 with catch @ 0330f6c0
                        */
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pSVar13 = SimpleJSON_JSONNode__op_Implicit(n_01,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar8,pSVar13,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3507,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3508,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pSVar13 = SimpleJSON_JSONNode__op_Implicit(n_00,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar8,pSVar13,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3509,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3510,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar4 = HOOAAGABMBL__DABHOGHGNBB(IKKAMAMLIKA,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar14 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3513;
    if (!bVar4) {
      pSVar14 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3511;
    }
    pSVar1 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3514;
    if (!bVar4) {
      pSVar1 = (System_RuntimeFieldHandle_Fields *)
               &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3512;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,(System_RuntimeFieldHandle_o)pSVar14->value,
               (MethodInfo *)0x0);
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,(System_RuntimeFieldHandle_o)pSVar1->value,(MethodInfo *)0x0
              );
    pSVar16 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar13 = SimpleJSON_JSONNode__op_Implicit(pSVar16,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar8,pSVar13,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3515,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3516,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    pSVar13 = SimpleJSON_JSONNode__op_Implicit
                        ((IKKAMAMLIKA->fields)._CGBHMINLKLM_k__BackingField,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
              (JHMENEKPIBO,pSVar8,pSVar13,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
    return;
  }
LAB_0330f930:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void OMGLKPMBAPF(HOOAAGABMBL IKKAMAMLIKA, NFNBHPOJFNJ.DDPHDDCKAGO ACCIHBHMFPN, bool OHLGEMOFODG, ref long GNMPBJBGAJI, ref long OIMLLJHAMPD)  [RVA 0x320F938]
// FPMAFHGLPOB$$OMGLKPMBAPF @ RVA 0x320F938

void FPMAFHGLPOB__OMGLKPMBAPF
               (HOOAAGABMBL_o *IKKAMAMLIKA,int32_t ACCIHBHMFPN,bool OHLGEMOFODG,int64_t *GNMPBJBGAJI
               ,int64_t *OIMLLJHAMPD,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *CJNHFNHJHPE;
  long lVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  CJNHFNHJHPE = &local_60;
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (ACCIHBHMFPN == 1) {
    *OIMLLJHAMPD = (IKKAMAMLIKA->fields)._NLEMHOHEEEC_k__BackingField;
    if (!OHLGEMOFODG) {
      lVar1 = HOOAAGABMBL__MNKCHHFDEGH(IKKAMAMLIKA,(MethodInfo *)0x0);
      goto LAB_0330f9b4;
    }
    local_40.fields.hiddenValue =
         (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
    local_40.fields.currentCryptoKey =
         (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
    local_40.fields.fakeValueActive =
         (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
    local_40.fields.inited = (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
    local_40.fields._26_6_ =
         *(undefined6 *)&(IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
    local_40.fields.fakeValue = (IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
    CJNHFNHJHPE = &local_40;
  }
  else {
    *OIMLLJHAMPD = (IKKAMAMLIKA->fields)._LDNHFNABLEK_k__BackingField;
    if (!OHLGEMOFODG) {
      lVar1 = HOOAAGABMBL__ICMFLAFFOFM(IKKAMAMLIKA,(MethodInfo *)0x0);
      goto LAB_0330f9b4;
    }
    local_60.fields.hiddenValue =
         (IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.hiddenValue;
    local_60.fields.currentCryptoKey =
         (IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.currentCryptoKey;
    local_60.fields.fakeValueActive =
         (IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.fakeValueActive;
    local_60.fields.inited = (IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.inited;
    local_60.fields._26_6_ =
         *(undefined6 *)&(IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.field_0x1a;
    local_60.fields.fakeValue = (IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField.fields.fakeValue;
  }
  lVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
LAB_0330f9b4:
  *GNMPBJBGAJI = lVar1 - *OIMLLJHAMPD;
  return;
}


// ===== public static void IDLABKHCAFO(JSONObject JHMENEKPIBO, string IKKKILCDMMB = "perks")  [RVA 0x320F9D4]
// FPMAFHGLPOB$$IDLABKHCAFO @ RVA 0x320F9D4

void FPMAFHGLPOB__IDLABKHCAFO
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *IKKKILCDMMB,MethodInfo *method
               )

{
  Il2CppObject *pIVar1;
  bool bVar2;
  SimpleJSON_JSONArray_o *__this;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_00;
  SimpleJSON_JSONObject_o *__this_01;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  SimpleJSON_JSONNode_o *pSVar6;
  Roster_o *pAVar7;
  NFGLEDADCGL_o *pNVar8;
  System_String_o *s;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566e83 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3517);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3518);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3519);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3520);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_get_Current__);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e83 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
  SimpleJSON_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar7 != (Roster_o *)0x0) &&
     (pNVar8 = (pAVar7->fields).CKJAGLDEMAE, pNVar8 != (NFGLEDADCGL_o *)0x0)) {
    __this_00 = (pNVar8->fields).PEJIOCBFEEE;
    if (__this_00 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__
                               ), pIVar1 = local_80.fields._current, bVar2) {
        __this_01 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
        SimpleJSON_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3517,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3518,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        s = pIVar1[1].monitor;
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar6 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
        if (__this_01 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                  (__this_01,pSVar5,pSVar6,(__this_01->klass->vtable)._8_set_Item.method);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3519,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3520,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        pSVar6 = SimpleJSON_JSONNode__op_Implicit
                           (*(int32_t *)((long)&pIVar1[1].klass + 4),(MethodInfo *)0x0);
        (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                  (__this_01,pSVar5,pSVar6,(__this_01->klass->vtable)._8_set_Item.method);
        if (__this == (SimpleJSON_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this->klass->vtable)._21_Add.methodPtr)
                  (__this,__this_01,(__this->klass->vtable)._21_Add.method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__)
      ;
      if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,IKKKILCDMMB,__this,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void NEFOBANKNIG(JSONObject JHMENEKPIBO)  [RVA 0x320FE04]
// FPMAFHGLPOB$$NEFOBANKNIG @ RVA 0x320FE04

void FPMAFHGLPOB__NEFOBANKNIG(SimpleJSON_JSONObject_o *JHMENEKPIBO,MethodInfo *method)

{
  int iVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  GameUtils_StaticFields *pMVar4;
  int32_t n;
  
  if ((DAT_04566e84 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3521);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3522);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04566e84 = 1;
    method = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
    method = extraout_x1_00;
  }
  pMVar4 = GameUtils_TypeInfo->static_fields;
  iVar1 = pMVar4->KGPNMHJKPKF;
  n = iVar1;
  if (pMVar4->NKPIIAOHOKI != false) {
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
      pMVar4 = GameUtils_TypeInfo->static_fields;
    }
    n = 0;
    if (pMVar4->PGNCICJDLNP != 0) {
      n = iVar1 / pMVar4->PGNCICJDLNP;
    }
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3521,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3522,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar3 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
  if (JHMENEKPIBO == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Could not recover jumptable at 0x0330ff64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,pSVar2,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
  return;
}


// ===== public static void FFPPBALEHKC(JSONObject JHMENEKPIBO)  [RVA 0x320FF6C]
// FPMAFHGLPOB$$FFPPBALEHKC @ RVA 0x320FF6C

void FPMAFHGLPOB__FFPPBALEHKC(SimpleJSON_JSONObject_o *JHMENEKPIBO,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  Roster_o *pAVar4;
  
  if ((DAT_04566e85 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3523);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3524);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e85 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3523,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3524,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 != (Roster_o *)0x0) {
    bVar1 = (pAVar4->fields).IOHEOKOOJFA;
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = SimpleJSON_JSONNode__op_Implicit((uint)bVar1,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033100e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,pSVar2,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void HPMNGGGFGNE(JSONObject JHMENEKPIBO, MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x32100E8]
// FPMAFHGLPOB$$HPMNGGGFGNE @ RVA 0x32100E8

void FPMAFHGLPOB__HPMNGGGFGNE
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *key;
  Il2CppObject *pIVar5;
  float *pfVar6;
  SimpleJSON_JSONNode_o *pSVar7;
  
  if ((DAT_04566e86 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3525);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3526);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3527);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3528);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3529);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3530);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    DAT_04566e86 = 1;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3525,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3526,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                       (Il2CppObject *)pSVar4,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (!bVar1) {
      return;
    }
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3527,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3528,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3529,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3530,(MethodInfo *)0x0)
    ;
    key = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pIVar5 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        (Il2CppObject *)key,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    if (pIVar5 != (Il2CppObject *)0x0) {
      if ((pIVar5->klass->_1).element_class != (float_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pIVar5);
      }
      pfVar6 = (float *)thunk_FUN_01bda96c();
      pSVar7 = SimpleJSON_JSONNode__op_Implicit(*pfVar6,(MethodInfo *)0x0);
      if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03310368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,pSVar4,pSVar7,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void LMDNOPKIPHF(JSONObject JHMENEKPIBO, MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x3210388]
// FPMAFHGLPOB$$LMDNOPKIPHF @ RVA 0x3210388

void FPMAFHGLPOB__LMDNOPKIPHF
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *key;
  Il2CppObject *pIVar5;
  int32_t *piVar6;
  SimpleJSON_JSONNode_o *pSVar7;
  
  if ((DAT_04566e87 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3531);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3532);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3533);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3534);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3535);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3536);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566e87 = 1;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3531,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3532,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                       (Il2CppObject *)pSVar4,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (!bVar1) {
      return;
    }
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3533,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3534,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3535,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3536,(MethodInfo *)0x0)
    ;
    key = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pIVar5 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                        (Il2CppObject *)key,
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    if (pIVar5 != (Il2CppObject *)0x0) {
      if ((pIVar5->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pIVar5);
      }
      piVar6 = (int32_t *)thunk_FUN_01bda96c();
      pSVar7 = SimpleJSON_JSONNode__op_Implicit(*piVar6,(MethodInfo *)0x0);
      if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03310608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,pSVar4,pSVar7,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void POLBDFMPDPH(JSONObject JHMENEKPIBO, MDNLIFLBFNO BFPCMHPBAGL)  [RVA 0x3210628]
// FPMAFHGLPOB$$POLBDFMPDPH @ RVA 0x3210628

void FPMAFHGLPOB__POLBDFMPDPH
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  FightList_o *MHOFCOHFCGL;
  SimpleJSON_JSONNode_o *pSVar6;
  NLPJLHOEAOE_o *__this;
  MethodInfo *method_00;
  DNELIPCHKLK_o *pDVar7;
  System_String_o *pSVar8;
  float n;
  
  if ((DAT_04566e88 & 1) == 0) {
    FUN_01bab630(&FightList_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3537);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3538);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3539);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3540);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3541);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3542);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3543);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3544);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3545);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3546);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3547);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3548);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3549);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3550);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e88 = 1;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3537,(MethodInfo *)0x0);
                    /* try { // try from 03310788 to 0341094f has its CatchHandler @ 03310788
                       catch() { ... } // from try @ 03310788 with catch @ 03310788
                       catch() { ... } // from try @ 03310a3c with catch @ 03310788
                       catch() { ... } // from try @ 03310a80 with catch @ 03310788
                       catch() { ... } // from try @ 03310b2c with catch @ 03310788
                       catch() { ... } // from try @ 03310b70 with catch @ 03310788
                       catch() { ... } // from try @ 03310bb0 with catch @ 03310788 */
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3538,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                       (Il2CppObject *)pSVar5,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3539,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3540,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      MHOFCOHFCGL = (FightList_o *)
                    System_Collections_Generic_Dictionary<object,_object>__get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               BFPCMHPBAGL,(Il2CppObject *)pSVar5,
                               Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                              );
      if (MHOFCOHFCGL != (FightList_o *)0x0) {
        bVar1 = (FightList_TypeInfo->_2).naturalAligment;
        if ((bVar1 <= (MHOFCOHFCGL->klass->_2).naturalAligment) &&
           ((MHOFCOHFCGL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)FightList_TypeInfo)) {
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3541,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3542,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pDVar7 = (MHOFCOHFCGL->fields).KOILJHHCIEE;
          if (pDVar7 != (DNELIPCHKLK_o *)0x0) {
            pSVar8 = (pDVar7->fields).GDPFBDIJNHA;
            if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar6 = SimpleJSON_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
            if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
              (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                        (JHMENEKPIBO,pSVar5,pSVar6,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03310950 to 03410957 has its CatchHandler @ 03310b50 */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3543,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03310970 to 03410977 has its CatchHandler @ 03310b4c */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3544,
                         (MethodInfo *)0x0);
                    /* try { // try from 0331098c to 03410993 has its CatchHandler @ 03310a58 */
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              pDVar7 = (MHOFCOHFCGL->fields).KOILJHHCIEE;
              if (pDVar7 != (DNELIPCHKLK_o *)0x0) {
                    /* try { // try from 0331099c to 034109ab has its CatchHandler @ 03310a60 */
                pSVar6 = SimpleJSON_JSONNode__op_Implicit
                                   ((pDVar7->fields).GJFJPLHCBKJ,(MethodInfo *)0x0);
                    /* try { // try from 033109bc to 034109c3 has its CatchHandler @ 03310a54 */
                (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                          (JHMENEKPIBO,pSVar5,pSVar6,(JHMENEKPIBO->klass->vtable)._8_set_Item.method
                          );
                pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033109cc to 034109d3 has its CatchHandler @ 03310a40 */
                    /* try { // try from 033109d8 to 034109ef has its CatchHandler @ 03310a5c */
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar3,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3545,
                           (MethodInfo *)0x0);
                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033109f8 to 03410a03 has its CatchHandler @ 03310a50 */
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar4,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3546,
                           (MethodInfo *)0x0);
                pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03310a18 to 03410a1f has its CatchHandler @ 03310b48 */
                    /* try { // try from 03310a28 to 03410a2b has its CatchHandler @ 03310a4c */
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03310a30 to 03410a33 has its CatchHandler @ 03310a48 */
                  thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
                }
                    /* try { // try from 03310a38 to 03410a3b has its CatchHandler @ 03310a44 */
                    /* try { // try from 03310a3c to 03410a7b has its CatchHandler @ 03310788 */
                __this = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033109cc with catch @ 03310a40 */
                if (__this != (NLPJLHOEAOE_o *)0x0) {
                    /* catch() { ... } // from try @ 03310a38 with catch @ 03310a44 */
                    /* catch() { ... } // from try @ 03310a30 with catch @ 03310a48 */
                    /* catch() { ... } // from try @ 03310a28 with catch @ 03310a4c */
                  pSVar8 = NLPJLHOEAOE__PGDMIFLKLJE
                                     (__this,(MHOFCOHFCGL->fields).JDNKKGPNHPB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033109f8 with catch @ 03310a50 */
                    /* catch() { ... } // from try @ 033109bc with catch @ 03310a54 */
                  pSVar6 = SimpleJSON_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0331098c with catch @ 03310a58 */
                    /* catch() { ... } // from try @ 033109d8 with catch @ 03310a5c */
                    /* catch() { ... } // from try @ 0331099c with catch @ 03310a60 */
                  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                            (JHMENEKPIBO,pSVar5,pSVar6,
                             (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03310a7c to 03410a7f has its CatchHandler @ 03310b30 */
                    /* try { // try from 03310a80 to 03410b07 has its CatchHandler @ 03310788 */
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar3,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3547,
                             (MethodInfo *)0x0);
                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar4,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3548,
                             (MethodInfo *)0x0);
                  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                  pDVar7 = (MHOFCOHFCGL->fields).KOILJHHCIEE;
                  if (pDVar7 != (DNELIPCHKLK_o *)0x0) {
                    pSVar6 = SimpleJSON_JSONNode__op_Implicit
                                       ((pDVar7->fields).ANOPJEEGOLJ,(MethodInfo *)0x0);
                    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                              (JHMENEKPIBO,pSVar5,pSVar6,
                               (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03310b08 to 03410b1b has its CatchHandler @ 03310bc4 */
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar3,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3549,
                               (MethodInfo *)0x0);
                    /* try { // try from 03310b1c to 03410b1f has its CatchHandler @ 03310b44 */
                    /* try { // try from 03310b20 to 03410b23 has its CatchHandler @ 03310b40 */
                    /* try { // try from 03310b24 to 03410b2b has its CatchHandler @ 03310b3c */
                    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03310b2c to 03410b6b has its CatchHandler @ 03310788 */
                    /* catch() { ... } // from try @ 03310a7c with catch @ 03310b30 */
                    /* catch() { ... } // from try @ 03310b24 with catch @ 03310b3c */
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar4,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3550,
                               (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03310b20 with catch @ 03310b40 */
                    /* catch() { ... } // from try @ 03310b1c with catch @ 03310b44 */
                    /* catch() { ... } // from try @ 03310a18 with catch @ 03310b48 */
                    /* catch() { ... } // from try @ 03310970 with catch @ 03310b4c */
                    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03310950 with catch @ 03310b50 */
                    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03310b6c to 03410b6f has its CatchHandler @ 03310b98 */
                      thunk_FUN_01ba7564(GameUtils_TypeInfo);
                    }
                    /* try { // try from 03310b70 to 03410ba7 has its CatchHandler @ 03310788 */
                    n = GameUtils__HLFLDFDKDFN(MHOFCOHFCGL,(MethodInfo *)0x0);
                    method_00 = (MethodInfo *)SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03310b6c with catch @ 03310b98 */
                    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                              (JHMENEKPIBO,pSVar5,method_00,
                               (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                    /* try { // try from 03310ba8 to 03410baf has its CatchHandler @ 03310bc4 */
                    /* try { // try from 03310bb0 to 03410bbb has its CatchHandler @ 03310788 */
                    FPMAFHGLPOB__EIDEBMKLLMO(JHMENEKPIBO,MHOFCOHFCGL,method_00);
                    return;
                  }
                }
              }
            }
          }
          goto LAB_03310bb8;
        }
      }
    }
    return;
  }
LAB_03310bb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static int GAHNKHLAPGP(IGFGDDANEPE IKKAMAMLIKA)  [RVA 0x3210BBC]
// FPMAFHGLPOB$$GAHNKHLAPGP @ RVA 0x3210BBC

int32_t FPMAFHGLPOB__GAHNKHLAPGP(IGFGDDANEPE_o *IKKAMAMLIKA,MethodInfo *method)

{
  int32_t iVar1;
  HOOAAGABMBL_o *pHVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = IKKAMAMLIKA;
                    /* try { // try from 03310bbc to 03410bc3 has its CatchHandler @ 03310bc4 */
                    /* catch() { ... } // from try @ 03310b08 with catch @ 03310bc4
                       catch() { ... } // from try @ 03310ba8 with catch @ 03310bc4
                       catch() { ... } // from try @ 03310bbc with catch @ 03310bc4 */
  if ((DAT_04566e89 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3551);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3552);
    FUN_01bab630(&byte___TypeInfo);
    auVar3 = FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04566e89 = 1;
  }
  if (IKKAMAMLIKA != (IGFGDDANEPE_o *)0x0) {
    pHVar2 = IGFGDDANEPE__JGBDIHJDIHD(IKKAMAMLIKA,(MethodInfo *)0x0);
    if ((pHVar2 == (HOOAAGABMBL_o *)0x0) &&
       (pHVar2 = (IKKAMAMLIKA->fields).PCBECBEFJOI, pHVar2 == (HOOAAGABMBL_o *)0x0)) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3551,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3552,
                 (MethodInfo *)0x0);
      message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
      iVar1 = 0;
    }
    else {
      iVar1 = (pHVar2->fields)._JDEHPJEIOCI_k__BackingField;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public static void NEFAGJPGDAC(JSONObject JHMENEKPIBO, string BCPAFBNLBDE, IJBEKFLAPNK ALGPKPJKBHO)  [RVA 0x320B6D4]
// FPMAFHGLPOB$$NEFAGJPGDAC @ RVA 0x320B6D4

/* WARNING: Removing unreachable block (ram,0x0330b928) */
/* WARNING: Removing unreachable block (ram,0x0330b9e4) */

void FPMAFHGLPOB__NEFAGJPGDAC
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,System_String_o *BCPAFBNLBDE,
               IJBEKFLAPNK_o *ALGPKPJKBHO,MethodInfo *method)

{
  undefined8 uVar1;
  float n;
  Il2CppObject *pIVar2;
  Il2CppObject *__this;
  bool bVar3;
  SimpleJSON_JSONObject_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  SimpleJSON_JSONObject_o *__this_02;
  SimpleJSON_JSONNode_o *pSVar4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_f8;
  undefined1 local_d0 [24];
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_b8;
  undefined8 local_b0;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a0;
  
  if ((DAT_04566e8a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_get_Current__
                );
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Key__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Dictionary<string,_float>>_get_Value__
                );
    DAT_04566e8a = 1;
  }
  local_a0.fields._getEnumeratorRetType = 0;
  local_a0.fields._36_4_ = 0;
  local_a0.fields._version = 0;
  local_a0.fields._index = 0;
  local_a0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a0.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b0._0_4_ = 0;
  local_b0._4_4_ = 0;
  local_d0._8_4_ = 0;
  local_d0._12_4_ = 0;
  local_d0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d0._16_8_ = (Il2CppObject *)0x0;
  __this_00 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
  SimpleJSON_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if (JHMENEKPIBO == (SimpleJSON_JSONObject_o *)0x0) {
LAB_0330b9f0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,BCPAFBNLBDE,__this_00,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
  if (ALGPKPJKBHO != (IJBEKFLAPNK_o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (ALGPKPJKBHO->fields).AIGFEBEBGCK;
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_0330b9f0;
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_f8,__this_01,
               Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_float>>_GetEnumerator__
              );
    local_a0.fields._version = local_f8.fields._version;
    local_a0.fields._index = local_f8.fields._index;
    local_a0.fields._dictionary = local_f8.fields._dictionary;
    local_a0.fields._current.fields.value = local_f8.fields._current.fields.value;
    local_a0.fields._current.fields.key = local_f8.fields._current.fields.key;
    local_a0.fields._getEnumeratorRetType = local_f8.fields._getEnumeratorRetType;
    local_a0.fields._36_4_ = local_f8.fields._36_4_;
    while (bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_MoveNext__
                             ), __this = local_a0.fields._current.fields.value,
          pIVar2 = local_a0.fields._current.fields.key, bVar3) {
      __this_02 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
      SimpleJSON_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this ==
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
                (&local_f8,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
      local_d0._8_4_ = local_f8.fields._version;
      local_d0._12_4_ = local_f8.fields._index;
      local_d0._0_8_ = local_f8.fields._dictionary;
      local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 local_f8.fields._current.fields.value;
      local_d0._16_8_ = local_f8.fields._current.fields.key;
      local_b0._0_4_ = local_f8.fields._getEnumeratorRetType;
      local_b0._4_4_ = local_f8.fields._36_4_;
      while (bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                local_d0,
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                               ), uVar1 = local_d0._16_8_, bVar3) {
        n = local_b8._0_4_;
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
        if (__this_02 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,uVar1,pSVar4,(__this_02->klass->vtable)._8_set_Item.method);
      }
      System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_d0,
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
      if (__this_00 == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,pIVar2,__this_02,(__this_00->klass->vtable)._8_set_Item.method);
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_a0,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<string,_float>>_Dispose__
              );
  }
  return;
}

