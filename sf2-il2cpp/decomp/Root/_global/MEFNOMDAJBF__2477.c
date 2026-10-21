// TypeDefIndex 2477
// Namespace: 
// public static class MEFNOMDAJBF
// Fields:
//   public const string NJIEPMJMJEA = "vibration";
//   private static MJAIOOLPAMI <HDOIGBAGNNK>k__BackingField; // 0x0
//   private static GCAKLDNBADP <DBJOBPJPHIL>k__BackingField; // 0x4
//   private static GCAKLDNBADP <LCJLHGAGFEF>k__BackingField; // 0x14
//   private static GCAKLDNBADP <PPNPLFEPMNM>k__BackingField; // 0x24

// ===== public static void ALLJGKDACGI(GCAKLDNBADP CJNHFNHJHPE)  [RVA 0x33720FC]
// MEFNOMDAJBF$$ALLJGKDACGI @ RVA 0x33720FC

void MEFNOMDAJBF__ALLJGKDACGI(GCAKLDNBADP_o CJNHFNHJHPE,MethodInfo *method)

{
  MEFNOMDAJBF_StaticFields *pMVar1;
  
  if ((DAT_04567b2a & 1) == 0) {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
    DAT_04567b2a = 1;
  }
  pMVar1 = MEFNOMDAJBF_TypeInfo->static_fields;
  (pMVar1->_PPNPLFEPMNM_k__BackingField).fields.LFJGFLNMBMC = (float)(int)CJNHFNHJHPE.fields._0_8_;
  (pMVar1->_PPNPLFEPMNM_k__BackingField).fields.GPCGAHADKAC =
       (float)(int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (pMVar1->_PPNPLFEPMNM_k__BackingField).fields.FJMNKKECPPO = (float)(int)CJNHFNHJHPE.fields._8_8_;
  (pMVar1->_PPNPLFEPMNM_k__BackingField).fields.LBKAKBJBNCG =
       (int)((ulong)CJNHFNHJHPE.fields._8_8_ >> 0x20);
  return;
}


// ===== public static GCAKLDNBADP LGMMNFPBJFB()  [RVA 0x3372158]
// MEFNOMDAJBF$$LGMMNFPBJFB @ RVA 0x3372158

GCAKLDNBADP_o MEFNOMDAJBF__LGMMNFPBJFB(MethodInfo *method)

{
  if ((DAT_04567b2b & 1) == 0) {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
    DAT_04567b2b = 1;
  }
  return (GCAKLDNBADP_o)(MEFNOMDAJBF_TypeInfo->static_fields->_LCJLHGAGFEF_k__BackingField).fields;
}


// ===== private static DPDCBEAOJMO GHIABNENNKG(string BPEDBGGKBLO)  [RVA 0x33721A4]
// MEFNOMDAJBF$$GHIABNENNKG @ RVA 0x33721A4

/* WARNING: Removing unreachable block (ram,0x03472510) */

int32_t MEFNOMDAJBF__GHIABNENNKG(System_String_o *BPEDBGGKBLO,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppType *handle;
  bool bVar3;
  System_Type_o *enumType;
  System_Array_o *__this;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  int32_t *piVar7;
  System_String_o *b;
  undefined8 *puVar8;
  System_Object_array *args;
  undefined8 uVar9;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int32_t iVar14;
  int iVar15;
  System_Enum_o local_58;
  int32_t local_48;
  
  if ((DAT_04567b2c & 1) == 0) {
    FUN_01bab630(&DPDCBEAOJMO_var);
    FUN_01bab630(&DPDCBEAOJMO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_7836/*"Invalid pattern name: {0}\nusing default value – Simple"*/);
    DAT_04567b2c = 1;
    method = extraout_x1;
  }
  handle = DPDCBEAOJMO_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo,method);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  __this = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this != (System_Array_o *)0x0) {
    pSVar4 = System_Array__GetEnumerator(__this,(MethodInfo *)0x0);
    if (pSVar4 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar10 = pSVar4->klass;
      uVar1._0_1_ = (pSVar10->_2).rank;
      uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
                    /* try { // try from 034722d4 to 035723d3 has its CatchHandler @ 034722d4
                       catch() { ... } // from try @ 034722d4 with catch @ 034722d4
                       catch() { ... } // from try @ 03472444 with catch @ 034722d4
                       catch() { ... } // from try @ 0347257c with catch @ 034722d4
                       catch() { ... } // from try @ 034725c0 with catch @ 034722d4
                       catch() { ... } // from try @ 034725fc with catch @ 034722d4
                       catch() { ... } // from try @ 0347262c with catch @ 034722d4 */
      if (uVar12 != 0) {
        piVar7 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar5 = pSVar10->vtable + *piVar7;
            goto LAB_03472314;
          }
          uVar12 = uVar12 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar12 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03472314:
      uVar12 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar12 & 1) == 0) {
        iVar14 = 0;
        iVar15 = 5;
        goto LAB_034723e8;
      }
      pSVar10 = pSVar4->klass;
      uVar2._0_1_ = (pSVar10->_2).rank;
      uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar7 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar5 = pSVar10->vtable + (*piVar7 + 1);
            goto LAB_03472374;
          }
          uVar12 = uVar12 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar12 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03472374:
      plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(Il2CppClass **)(*plVar6 + 0x40) != (DPDCBEAOJMO_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      piVar7 = (int32_t *)thunk_FUN_01bda96c();
      local_58.klass = (System_Enum_c *)DPDCBEAOJMO_TypeInfo;
      iVar14 = *piVar7;
      local_58.monitor = (void *)0xffffffffffffffff;
      local_48 = iVar14;
      b = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(BPEDBGGKBLO,b,(MethodInfo *)0x0);
    } while (!bVar3);
                    /* try { // try from 034723d4 to 035723db has its CatchHandler @ 034725d0 */
    iVar15 = 4;
LAB_034723e8:
    plVar6 = (long *)thunk_FUN_01bda71c(pSVar4,System_IDisposable_TypeInfo);
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 03472440 to 03572443 has its CatchHandler @ 034725d4 */
                    /* try { // try from 03472444 to 03572543 has its CatchHandler @ 034722d4 */
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03472448;
          }
                    /* try { // try from 03472420 to 03572427 has its CatchHandler @ 034725c8 */
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03472448:
      (*(code *)*puVar8)(plVar6,puVar8[1]);
    }
    if ((iVar15 == 5) || (iVar15 == 0)) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args == (System_Object_array *)0x0) goto LAB_03472508;
      if ((BPEDBGGKBLO != (System_String_o *)0x0) &&
         (lVar11 = thunk_FUN_01bda71c(BPEDBGGKBLO,(((args->obj).klass)->_1).element_class),
         lVar11 == 0)) {
        uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar9,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)BPEDBGGKBLO;
      thunk_FUN_01c20e04(args->m_Items,BPEDBGGKBLO);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_7836/*"Invalid pattern name: {0}\nusing default value – Simple"*/,args,(MethodInfo *)0x0);
      iVar14 = 0;
    }
    return iVar14;
  }
LAB_03472508:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void BNKMHEJNHFO(GCAKLDNBADP CJNHFNHJHPE)  [RVA 0x33725F0]
// MEFNOMDAJBF$$BNKMHEJNHFO @ RVA 0x33725F0

void MEFNOMDAJBF__BNKMHEJNHFO(GCAKLDNBADP_o CJNHFNHJHPE,MethodInfo *method)

{
  MEFNOMDAJBF_StaticFields *pMVar1;
  
                    /* try { // try from 034725f8 to 035725fb has its CatchHandler @ 0347261c */
                    /* try { // try from 034725fc to 03572623 has its CatchHandler @ 034722d4 */
  if ((DAT_04567b2d & 1) == 0) {
                    /* catch() { ... } // from try @ 034725f8 with catch @ 0347261c */
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
                    /* try { // try from 03472624 to 0357262b has its CatchHandler @ 03472640 */
    DAT_04567b2d = 1;
  }
                    /* try { // try from 0347262c to 03572637 has its CatchHandler @ 034722d4 */
  pMVar1 = MEFNOMDAJBF_TypeInfo->static_fields;
                    /* try { // try from 03472638 to 0357263f has its CatchHandler @ 03472640 */
  (pMVar1->_LCJLHGAGFEF_k__BackingField).fields.LFJGFLNMBMC = (float)(int)CJNHFNHJHPE.fields._0_8_;
  (pMVar1->_LCJLHGAGFEF_k__BackingField).fields.GPCGAHADKAC =
       (float)(int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (pMVar1->_LCJLHGAGFEF_k__BackingField).fields.FJMNKKECPPO = (float)(int)CJNHFNHJHPE.fields._8_8_;
  (pMVar1->_LCJLHGAGFEF_k__BackingField).fields.LBKAKBJBNCG =
       (int)((ulong)CJNHFNHJHPE.fields._8_8_ >> 0x20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03472624 with catch @ 03472640
                       catch(type#2 @ 00000000) { ... } // from try @ 03472638 with catch @ 03472640
                        */
  return;
}


// ===== public static GCAKLDNBADP CBGANHMNCNJ()  [RVA 0x337264C]
// MEFNOMDAJBF$$CBGANHMNCNJ @ RVA 0x337264C

GCAKLDNBADP_o MEFNOMDAJBF__CBGANHMNCNJ(MethodInfo *method)

{
  if ((DAT_04567b2e & 1) == 0) {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
    DAT_04567b2e = 1;
  }
  return (GCAKLDNBADP_o)(MEFNOMDAJBF_TypeInfo->static_fields->_PPNPLFEPMNM_k__BackingField).fields;
}


// ===== public static void ADNJKCLFCFH(XmlElement EMICHNICCIB)  [RVA 0x3372698]
// MEFNOMDAJBF$$ADNJKCLFCFH @ RVA 0x3372698

void MEFNOMDAJBF__ADNJKCLFCFH(System_Xml_XmlElement_o *EMICHNICCIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  GCAKLDNBADP_Fields GVar2;
  
  if ((DAT_04567b2f & 1) == 0) {
    FUN_01bab630(&StringLiteral_4891/*"CritHit"*/);
    FUN_01bab630(&StringLiteral_8796/*"MainMenuPreview"*/);
    FUN_01bab630(&StringLiteral_11175/*"RegularHit"*/);
    DAT_04567b2f = 1;
  }
  if (EMICHNICCIB != (System_Xml_XmlElement_o *)0x0) {
    auVar1 = (*(EMICHNICCIB->klass->vtable)._51_get_Item.methodPtr)
                       (EMICHNICCIB,StringLiteral_11175/*"RegularHit"*/,
                        (EMICHNICCIB->klass->vtable)._51_get_Item.method);
    GVar2 = (GCAKLDNBADP_Fields)MEFNOMDAJBF__NDAHBJOBBFF(auVar1._0_8_,auVar1._8_8_);
    if (DAT_04567bc0 == '\0') {
      FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
      DAT_04567bc0 = '\x01';
    }
    (MEFNOMDAJBF_TypeInfo->static_fields->_DBJOBPJPHIL_k__BackingField).fields = GVar2;
    auVar1 = (*(EMICHNICCIB->klass->vtable)._51_get_Item.methodPtr)
                       (EMICHNICCIB,StringLiteral_4891/*"CritHit"*/,
                        (EMICHNICCIB->klass->vtable)._51_get_Item.method);
    GVar2 = (GCAKLDNBADP_Fields)MEFNOMDAJBF__NDAHBJOBBFF(auVar1._0_8_,auVar1._8_8_);
    if (DAT_04567bc1 == '\0') {
      FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
      DAT_04567bc1 = '\x01';
    }
    (MEFNOMDAJBF_TypeInfo->static_fields->_LCJLHGAGFEF_k__BackingField).fields = GVar2;
    auVar1 = (*(EMICHNICCIB->klass->vtable)._51_get_Item.methodPtr)
                       (EMICHNICCIB,StringLiteral_8796/*"MainMenuPreview"*/,
                        (EMICHNICCIB->klass->vtable)._51_get_Item.method);
    GVar2 = (GCAKLDNBADP_Fields)MEFNOMDAJBF__NDAHBJOBBFF(auVar1._0_8_,auVar1._8_8_);
    if (DAT_04567bc2 == '\0') {
      FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
      DAT_04567bc2 = '\x01';
    }
    (MEFNOMDAJBF_TypeInfo->static_fields->_PPNPLFEPMNM_k__BackingField).fields = GVar2;
  }
  return;
}


// ===== public static float JBBGLBPOKOI()  [RVA 0x33729C0]
// MEFNOMDAJBF$$JBBGLBPOKOI @ RVA 0x33729C0

float MEFNOMDAJBF__JBBGLBPOKOI(MethodInfo *method)

{
  float fVar1;
  
  if (DAT_04566d68 == '\0') {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
    DAT_04566d68 = '\x01';
  }
  fVar1 = (float)NEON_ucvtf((uint)MEFNOMDAJBF_TypeInfo->static_fields->_HDOIGBAGNNK_k__BackingField)
  ;
  return fVar1 * 0.33333334;
}


// ===== public static void DMAFBOAFFGH(GCAKLDNBADP CJNHFNHJHPE)  [RVA 0x3372A10]
// MEFNOMDAJBF$$DMAFBOAFFGH @ RVA 0x3372A10

void MEFNOMDAJBF__DMAFBOAFFGH(GCAKLDNBADP_o CJNHFNHJHPE,MethodInfo *method)

{
  MEFNOMDAJBF_StaticFields *pMVar1;
  
  if ((DAT_04567b30 & 1) == 0) {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
    DAT_04567b30 = 1;
  }
  pMVar1 = MEFNOMDAJBF_TypeInfo->static_fields;
  (pMVar1->_DBJOBPJPHIL_k__BackingField).fields.LFJGFLNMBMC = (float)(int)CJNHFNHJHPE.fields._0_8_;
  (pMVar1->_DBJOBPJPHIL_k__BackingField).fields.GPCGAHADKAC =
       (float)(int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (pMVar1->_DBJOBPJPHIL_k__BackingField).fields.FJMNKKECPPO = (float)(int)CJNHFNHJHPE.fields._8_8_;
  (pMVar1->_DBJOBPJPHIL_k__BackingField).fields.LBKAKBJBNCG =
       (int)((ulong)CJNHFNHJHPE.fields._8_8_ >> 0x20);
  return;
}


// ===== public static void PILLOJFMGBH(MJAIOOLPAMI HGPGMCGOOLL)  [RVA 0x3372A6C]
// MEFNOMDAJBF$$PILLOJFMGBH @ RVA 0x3372A6C

void MEFNOMDAJBF__PILLOJFMGBH(uint8_t HGPGMCGOOLL,MethodInfo *method)

{
  if (DAT_04566d69 == '\0') {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
    DAT_04566d69 = '\x01';
  }
  MEFNOMDAJBF_TypeInfo->static_fields->_HDOIGBAGNNK_k__BackingField = HGPGMCGOOLL;
  return;
}


// ===== public static MJAIOOLPAMI LLJLCLHCDDO()  [RVA 0x3372AB8]
// MEFNOMDAJBF$$LLJLCLHCDDO @ RVA 0x3372AB8

uint8_t MEFNOMDAJBF__LLJLCLHCDDO(MethodInfo *method)

{
  if ((DAT_04567b31 & 1) == 0) {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
    DAT_04567b31 = 1;
  }
  return MEFNOMDAJBF_TypeInfo->static_fields->_HDOIGBAGNNK_k__BackingField;
}


// ===== public static GCAKLDNBADP NFOKDIBINNH()  [RVA 0x3372B00]
// MEFNOMDAJBF$$NFOKDIBINNH @ RVA 0x3372B00

GCAKLDNBADP_o MEFNOMDAJBF__NFOKDIBINNH(MethodInfo *method)

{
  if ((DAT_04567b32 & 1) == 0) {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
    DAT_04567b32 = 1;
  }
  return (GCAKLDNBADP_o)(MEFNOMDAJBF_TypeInfo->static_fields->_DBJOBPJPHIL_k__BackingField).fields;
}


// ===== public static void HOEAAIJMFEC(MJAIOOLPAMI CJNHFNHJHPE)  [RVA 0x3372B4C]
// MEFNOMDAJBF$$HOEAAIJMFEC @ RVA 0x3372B4C

void MEFNOMDAJBF__HOEAAIJMFEC(uint8_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04567b33 & 1) == 0) {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
    DAT_04567b33 = 1;
  }
  MEFNOMDAJBF_TypeInfo->static_fields->_HDOIGBAGNNK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private static GCAKLDNBADP NDAHBJOBBFF(XmlElement AHDGNOJPPIB)  [RVA 0x3372818]
// MEFNOMDAJBF$$NDAHBJOBBFF @ RVA 0x3372818

GCAKLDNBADP_o MEFNOMDAJBF__NDAHBJOBBFF(System_Xml_XmlElement_o *AHDGNOJPPIB,MethodInfo *method)

{
  GCAKLDNBADP_Fields GVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int32_t iVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *BPEDBGGKBLO;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  float LFJGFLNMBMC;
  float GPCGAHADKAC;
  float FJMNKKECPPO;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  GCAKLDNBADP_o __this;
  undefined8 local_40;
  undefined8 uStack_38;
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = AHDGNOJPPIB;
  if ((DAT_04567b34 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12136/*"Simple"*/);
    FUN_01bab630(&StringLiteral_21508/*"time"*/);
    FUN_01bab630(&StringLiteral_16407/*"amplitude"*/);
    FUN_01bab630(&StringLiteral_18353/*"frequency"*/);
    auVar6 = FUN_01bab630(&StringLiteral_20173/*"pattern"*/);
    DAT_04567b34 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlElement_o *)0x0) {
    auVar7 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar7._8_8_;
    auVar6 = auVar8 << 0x40;
    if (auVar7._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (auVar7._0_8_,StringLiteral_21508/*"time"*/,(MethodInfo *)0x0);
      LFJGFLNMBMC = EIABCPKDEBD__GICIEKCGOHA(pSVar5,1.0,(MethodInfo *)0x0);
      auVar8 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar8._8_8_;
      auVar6 = auVar7 << 0x40;
      if (auVar8._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (auVar8._0_8_,StringLiteral_16407/*"amplitude"*/,(MethodInfo *)0x0);
        GPCGAHADKAC = EIABCPKDEBD__GICIEKCGOHA(pSVar5,1.0,(MethodInfo *)0x0);
                    /* try { // try from 03472908 to 03572b97 has its CatchHandler @ 03472908
                       catch() { ... } // from try @ 03472908 with catch @ 03472908
                       catch() { ... } // from try @ 03472dcc with catch @ 03472908
                       catch() { ... } // from try @ 03472ec0 with catch @ 03472908
                       catch() { ... } // from try @ 03472ec8 with catch @ 03472908
                       catch() { ... } // from try @ 03472f98 with catch @ 03472908 */
        auVar8 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = auVar8._8_8_;
        auVar6 = auVar2 << 0x40;
        if (auVar8._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (auVar8._0_8_,StringLiteral_18353/*"frequency"*/,(MethodInfo *)0x0);
          FJMNKKECPPO = EIABCPKDEBD__GICIEKCGOHA(pSVar5,500.0,(MethodInfo *)0x0);
          auVar8 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = auVar8._8_8_;
          auVar6 = auVar3 << 0x40;
          if (auVar8._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (auVar8._0_8_,StringLiteral_20173/*"pattern"*/,(MethodInfo *)0x0);
            BPEDBGGKBLO = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_12136/*"Simple"*/,(MethodInfo *)0x0);
            iVar4 = MEFNOMDAJBF__GHIABNENNKG(BPEDBGGKBLO,method_00);
            local_40 = 0;
            uStack_38 = 0;
            __this.fields.FJMNKKECPPO = (float)iVar4;
            __this.fields._0_8_ = &local_40;
            __this.fields.LBKAKBJBNCG = 0;
            GCAKLDNBADP___ctor(__this,LFJGFLNMBMC,FJMNKKECPPO,GPCGAHADKAC,0,in_x3);
            GVar1.FJMNKKECPPO = (float)(undefined4)uStack_38;
            GVar1.LBKAKBJBNCG = uStack_38._4_4_;
            GVar1.LFJGFLNMBMC = (float)(undefined4)local_40;
            GVar1.GPCGAHADKAC = (float)local_40._4_4_;
            return (GCAKLDNBADP_o)GVar1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar6._0_8_,auVar6._8_8_);
}

