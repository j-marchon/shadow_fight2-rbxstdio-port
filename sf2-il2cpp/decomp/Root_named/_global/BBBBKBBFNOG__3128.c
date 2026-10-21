// TypeDefIndex 3128
// Namespace: 
// public static class BBBBKBBFNOG
// Fields:
//   private static List<BBBBKBBFNOG.BENGKNHAMMA> IPLLKLOKOFL; // 0x0
//   private static ObscuredLong HEINPMAGCOD; // 0x8
//   private static float AHCKJLKAKMN; // 0x28
//   private static long CLGHDPOCECK; // 0x30
//   public static Action<long> GIBFOOLLACF; // 0x38

// ===== public static void GIENGNEGHPJ()  [RVA 0x34D0D74]
// BBBBKBBFNOG$$GIENGNEGHPJ @ RVA 0x34D0D74

void BBBBKBBFNOG__GIENGNEGHPJ(MethodInfo *method)

{
  BBBBKBBFNOG_c *method_00;
  System_Action_bool__o *pSVar1;
  
  if ((DAT_045686b1 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_BBBBKBBFNOG_PDDBOJJODKK__);
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_045686b1 = 1;
  }
  method_00 = BBBBKBBFNOG_TypeInfo;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BBBBKBBFNOG_c *)thunk_FUN_01ba7564();
  }
  BBBBKBBFNOG__NDNPGAKJLHM((MethodInfo *)method_00);
  pSVar1 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  Nekki_SF2_Core_ApplicationController__remove_OnPause(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  Nekki_SF2_Core_ApplicationController__add_OnPause(pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== public static long BJOIGEMGMAF()  [RVA 0x34D0ED0]
// BBBBKBBFNOG$$BJOIGEMGMAF @ RVA 0x34D0ED0

int64_t BBBBKBBFNOG__BJOIGEMGMAF(MethodInfo *method)

{
  int64_t iVar1;
  BBBBKBBFNOG_StaticFields *pBVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  if ((DAT_045686b2 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_045686b2 = 1;
  }
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  local_40.fields.fakeValueActive = (pBVar2->HEINPMAGCOD).fields.fakeValueActive;
  local_40.fields.inited = (pBVar2->HEINPMAGCOD).fields.inited;
  local_40.fields._26_6_ = *(undefined6 *)&(pBVar2->HEINPMAGCOD).fields.field_0x1a;
  local_40.fields.fakeValue = (pBVar2->HEINPMAGCOD).fields.fakeValue;
  local_40.fields.hiddenValue = (pBVar2->HEINPMAGCOD).fields.hiddenValue;
  local_40.fields.currentCryptoKey = (pBVar2->HEINPMAGCOD).fields.currentCryptoKey;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_40,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public static void NDNPGAKJLHM()  [RVA 0x34D0E38]
// BBBBKBBFNOG$$NDNPGAKJLHM @ RVA 0x34D0E38

void BBBBKBBFNOG__NDNPGAKJLHM(MethodInfo *method)

{
  BBBBKBBFNOG_c *pBVar1;
  BBBBKBBFNOG_StaticFields *pBVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  bool_conflict bStack_28;
  bool_conflict bStack_27;
  undefined6 uStack_26;
  
  if ((DAT_045686b3 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_045686b3 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,0,(MethodInfo *)0x0);
  iStack_38 = local_60.fields.hiddenValue;
  local_40 = local_60.fields.currentCryptoKey;
  bStack_28 = local_60.fields.fakeValueActive;
  bStack_27 = local_60.fields.inited;
  uStack_26 = local_60.fields._26_6_;
  iStack_30 = local_60.fields.fakeValue;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar1 = BBBBKBBFNOG_TypeInfo;
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  (pBVar2->HEINPMAGCOD).fields.fakeValueActive = bStack_28;
  (pBVar2->HEINPMAGCOD).fields.inited = bStack_27;
  *(undefined6 *)&(pBVar2->HEINPMAGCOD).fields.field_0x1a = uStack_26;
  (pBVar2->HEINPMAGCOD).fields.fakeValue = iStack_30;
  (pBVar2->HEINPMAGCOD).fields.hiddenValue = iStack_38;
  (pBVar2->HEINPMAGCOD).fields.currentCryptoKey = local_40;
  pBVar2 = pBVar1->static_fields;
  pBVar2->GIBFOOLLACF = (System_Action_long__o *)0x0;
  pBVar2->AHCKJLKAKMN = 0.0;
  pBVar2->CLGHDPOCECK = 0;
  thunk_FUN_01c20e04(&pBVar2->GIBFOOLLACF,0);
  return;
}


// ===== private static string EJCGFFJOGHF(DNELIPCHKLK KOILJHHCIEE)  [RVA 0x34D0F44]
// BBBBKBBFNOG$$EJCGFFJOGHF @ RVA 0x34D0F44

System_String_o * BBBBKBBFNOG__EJCGFFJOGHF(DNELIPCHKLK_o *KOILJHHCIEE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *value;
  
  if ((DAT_045686b4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6633);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6634);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6635);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6636);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045686b4 = 1;
  }
  if (KOILJHHCIEE != (DNELIPCHKLK_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(KOILJHHCIEE->klass->vtable)._3_ToString.methodPtr)
                       (KOILJHHCIEE,(KOILJHHCIEE->klass->vtable)._3_ToString.method);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6633,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6634,(MethodInfo *)0x0)
    ;
    value = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      bVar1 = System_String__Contains(pSVar2,value,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6635,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6636,
                   (MethodInfo *)0x0);
        pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        return pSVar2;
      }
      return (KOILJHHCIEE->fields).GDPFBDIJNHA;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool NJPEPHGMIMP()  [RVA 0x34D10B4]
// BBBBKBBFNOG$$NJPEPHGMIMP @ RVA 0x34D10B4

bool BBBBKBBFNOG__NJPEPHGMIMP(MethodInfo *method)

{
  int64_t iVar1;
  BBBBKBBFNOG_StaticFields *pBVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
  if ((DAT_045686b5 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_045686b5 = 1;
  }
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  local_40.fields.fakeValueActive = (pBVar2->HEINPMAGCOD).fields.fakeValueActive;
  local_40.fields.inited = (pBVar2->HEINPMAGCOD).fields.inited;
  local_40.fields._26_6_ = *(undefined6 *)&(pBVar2->HEINPMAGCOD).fields.field_0x1a;
  local_40.fields.fakeValue = (pBVar2->HEINPMAGCOD).fields.fakeValue;
  local_40.fields.hiddenValue = (pBVar2->HEINPMAGCOD).fields.hiddenValue;
  local_40.fields.currentCryptoKey = (pBVar2->HEINPMAGCOD).fields.currentCryptoKey;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_40,(MethodInfo *)0x0);
  return 0 < iVar1;
}


// ===== private static void PDDBOJJODKK(bool FHBJKENCMHP)  [RVA 0x34D1130]
// BBBBKBBFNOG$$PDDBOJJODKK @ RVA 0x34D1130

void BBBBKBBFNOG__PDDBOJJODKK(bool FHBJKENCMHP,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045686b6 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_045686b6 = 1;
    method = extraout_x1;
  }
  if (!FHBJKENCMHP) {
    if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(BBBBKBBFNOG_TypeInfo,method);
    }
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
              (&BBBBKBBFNOG_TypeInfo->static_fields->HEINPMAGCOD,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public static void BBCMEABEICF(bool FIJLCCEJANF, IGPDCHBJAPD PNPKEKHEMCD)  [RVA 0x34D11A4]
// BBBBKBBFNOG$$BBCMEABEICF @ RVA 0x34D11A4

void BBBBKBBFNOG__BBCMEABEICF(bool FIJLCCEJANF,IGPDCHBJAPD_o *PNPKEKHEMCD,MethodInfo *method)

{
  System_String_o *AJBDHHOLPMM;
  BBBBKBBFNOG_c *pBVar1;
  int64_t CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  BBBBKBBFNOG_StaticFields *pBVar2;
  IGPDCHBJAPD_JMPAGIGEFME_o *pIVar3;
  long lVar4;
  float fVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  int64_t local_50;
  int64_t iStack_48;
  int64_t iStack_40;
  bool_conflict bStack_38;
  bool_conflict bStack_37;
  undefined6 uStack_36;
  
  if ((DAT_045686b7 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&System_Convert_TypeInfo);
    DAT_045686b7 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,0,(MethodInfo *)0x0);
  iStack_48 = local_70.fields.hiddenValue;
  local_50 = local_70.fields.currentCryptoKey;
  bStack_38 = local_70.fields.fakeValueActive;
  bStack_37 = local_70.fields.inited;
  uStack_36 = local_70.fields._26_6_;
  iStack_40 = local_70.fields.fakeValue;
  method_00 = extraout_x1;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  (pBVar2->HEINPMAGCOD).fields.fakeValueActive = bStack_38;
  (pBVar2->HEINPMAGCOD).fields.inited = bStack_37;
  *(undefined6 *)&(pBVar2->HEINPMAGCOD).fields.field_0x1a = uStack_36;
  (pBVar2->HEINPMAGCOD).fields.fakeValue = iStack_40;
  (pBVar2->HEINPMAGCOD).fields.hiddenValue = iStack_48;
  (pBVar2->HEINPMAGCOD).fields.currentCryptoKey = local_50;
  if (PNPKEKHEMCD == (IGPDCHBJAPD_o *)0x0) {
LAB_035d1330:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  AJBDHHOLPMM = BBBBKBBFNOG__EJCGFFJOGHF((PNPKEKHEMCD->fields).DBIAAJNKHLH,method_00);
  fVar5 = BBBBKBBFNOG__CCHJODGDDAI(AJBDHHOLPMM,method_01);
  pBVar1 = BBBBKBBFNOG_TypeInfo;
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  pBVar2->AHCKJLKAKMN = fVar5;
  pIVar3 = (PNPKEKHEMCD->fields).GIIFANGGEHM;
  if (pIVar3 == (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0) goto LAB_035d1330;
  pBVar2->CLGHDPOCECK = (pIVar3->fields).DCDLMCEEOCC;
  if (FIJLCCEJANF) {
    if ((pBVar1->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
      fVar5 = pBVar2->AHCKJLKAKMN;
      pBVar1 = BBBBKBBFNOG_TypeInfo;
    }
    if (1.0 < fVar5) {
      if ((pBVar1->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
        fVar5 = pBVar2->AHCKJLKAKMN;
      }
      lVar4 = pBVar2->CLGHDPOCECK;
      if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CJNHFNHJHPE = System_Convert__ToInt64((fVar5 + -1.0) * (float)lVar4,(MethodInfo *)0x0);
      goto LAB_035d12e0;
    }
  }
  CJNHFNHJHPE = 0;
LAB_035d12e0:
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_70,CJNHFNHJHPE,(MethodInfo *)0x0);
  iStack_48 = local_70.fields.hiddenValue;
  local_50 = local_70.fields.currentCryptoKey;
  bStack_38 = local_70.fields.fakeValueActive;
  bStack_37 = local_70.fields.inited;
  uStack_36 = local_70.fields._26_6_;
  iStack_40 = local_70.fields.fakeValue;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  (pBVar2->HEINPMAGCOD).fields.fakeValueActive = bStack_38;
  (pBVar2->HEINPMAGCOD).fields.inited = bStack_37;
  *(undefined6 *)&(pBVar2->HEINPMAGCOD).fields.field_0x1a = uStack_36;
  (pBVar2->HEINPMAGCOD).fields.fakeValue = iStack_40;
  (pBVar2->HEINPMAGCOD).fields.hiddenValue = iStack_48;
  (pBVar2->HEINPMAGCOD).fields.currentCryptoKey = local_50;
  return;
}


// ===== public static string ACHEEICHHHJ()  [RVA 0x34D14CC]
// BBBBKBBFNOG$$ACHEEICHHHJ @ RVA 0x34D14CC

System_String_o * BBBBKBBFNOG__ACHEEICHHHJ(MethodInfo *method)

{
  int64_t iVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str1;
  System_String_o *str2;
  float fVar5;
  long local_38;
  
  if ((DAT_045686b8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6637);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6638);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6639);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6640);
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_Convert_TypeInfo);
    DAT_045686b8 = 1;
  }
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar5 = BBBBKBBFNOG_TypeInfo->static_fields->AHCKJLKAKMN;
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Convert_TypeInfo);
  }
  iVar1 = System_Convert__ToInt64((fVar5 + -1.0) * 10000.0,(MethodInfo *)0x0);
  local_38 = iVar1 / 100;
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6637,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6638,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  str1 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6639,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6640,(MethodInfo *)0x0);
  str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat(pSVar4,str1,str2,(MethodInfo *)0x0);
  return pSVar4;
}


// ===== public static string ECKMKOOCIKA()  [RVA 0x34D16BC]
// BBBBKBBFNOG$$ECKMKOOCIKA @ RVA 0x34D16BC

/* WARNING: Type propagation algorithm not settling */

System_String_o * BBBBKBBFNOG__ECKMKOOCIKA(MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Roster_o *pAVar6;
  System_RuntimeFieldHandle_Fields *pSVar7;
  System_String_o *pSVar8;
  System_RuntimeFieldHandle_Fields *pSVar9;
  
  if ((DAT_045686b9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6641);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6642);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6643);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6644);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6645);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6646);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6647);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6648);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6649);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6650);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6651);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6652);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045686b9 = 1;
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
  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar6 != (Roster_o *)0x0) {
    pSVar8 = (pAVar6->fields).FAAJGHKHEBI;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6641,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6642,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if (pSVar8 != (System_String_o *)0x0) {
      iVar2 = System_String__IndexOf(pSVar8,pSVar5,(MethodInfo *)0x0);
      pSVar5 = System_String__Substring(pSVar8,iVar2 + 1,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6643,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6644,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      if (bVar1) {
        pSVar7 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6645;
        pSVar9 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6646;
      }
      else {
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6647,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6648,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar5,pSVar8,(MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar7 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6649;
        pSVar9 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6650;
        if (!bVar1) {
          pSVar7 = (System_RuntimeFieldHandle_Fields *)
                   &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6651;
          pSVar9 = (System_RuntimeFieldHandle_Fields *)
                   &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6652;
        }
      }
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,(System_RuntimeFieldHandle_o)pSVar7->value,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,(System_RuntimeFieldHandle_o)pSVar9->value,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void HNIHOIAMDPC(List<XmlNode> EBLEDKMJMJN)  [RVA 0x34D19F0]
// BBBBKBBFNOG$$HNIHOIAMDPC @ RVA 0x34D19F0

void BBBBKBBFNOG__HNIHOIAMDPC
               (System_Collections_Generic_List_XmlNode__o *EBLEDKMJMJN,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  BBBBKBBFNOG_BENGKNHAMMA_o item;
  BBBBKBBFNOG_BENGKNHAMMA_o *pBVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *pSVar8;
  BBBBKBBFNOG_BENGKNHAMMA_array *pBVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_String_o *local_80;
  undefined4 local_78;
  float local_74;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045686ba & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_9253/*"Multiplier"*/);
    FUN_01bab630(&StringLiteral_15308/*"Zone"*/);
    FUN_01bab630(&StringLiteral_12067/*"Show"*/);
    DAT_045686ba = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_80 = (System_String_o *)0x0;
  local_78 = 0;
  local_74 = 0.0;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BBBBKBBFNOG_TypeInfo,method);
  }
  pSVar8 = BBBBKBBFNOG_TypeInfo->static_fields->IPLLKLOKOFL;
  if (pSVar8 == (System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  length = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
  }
  if (EBLEDKMJMJN != (System_Collections_Generic_List_XmlNode__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)EBLEDKMJMJN,
               Method_System_Collections_Generic_List<XmlNode>_GetEnumerator__);
    local_70.fields._index = local_98.fields._index;
    local_70.fields._version = local_98.fields._version;
    local_70.fields._list = local_98.fields._list;
    local_70.fields._current = local_98.fields._current;
    while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<XmlNode>_MoveNext__)
          , pIVar4 = local_70.fields._current, bVar5) {
      if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar8 = BBBBKBBFNOG_TypeInfo->static_fields->IPLLKLOKOFL;
      local_80 = (System_String_o *)0x0;
      local_78 = 0;
      local_74 = 0.0;
      if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (*pIVar4->klass->vtable[0x10].methodPtr)(pIVar4,pIVar4->klass->vtable[0x10].method);
      if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_15308/*"Zone"*/,(MethodInfo *)0x0);
      local_80 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
      thunk_FUN_01c20e04(&local_80);
      pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (*pIVar4->klass->vtable[0x10].methodPtr)(pIVar4,pIVar4->klass->vtable[0x10].method);
      if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_12067/*"Show"*/,(MethodInfo *)0x0);
      bVar5 = EIABCPKDEBD__FMBMNDIGLIG(pSVar7,false,(MethodInfo *)0x0);
      local_78 = CONCAT31(local_78._1_3_,bVar5);
      pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (*pIVar4->klass->vtable[0x10].methodPtr)(pIVar4,pIVar4->klass->vtable[0x10].method);
      if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_9253/*"Multiplier"*/,(MethodInfo *)0x0);
      local_74 = EIABCPKDEBD__GICIEKCGOHA(pSVar7,1.0,(MethodInfo *)0x0);
      lVar3 = Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_Add__;
      if (pSVar8 == (System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      item.fields._8_4_ = local_78;
      item.fields.IMAHKPGAIAB = local_80;
      item.fields.CJOICFODKMF = local_74;
      pBVar9 = (pSVar8->fields)._items;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (pBVar9 == (BBBBKBBFNOG_BENGKNHAMMA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (pSVar8->fields)._size;
      if (uVar1 < (uint)pBVar9->max_length) {
        (pSVar8->fields)._size = uVar1 + 1;
        pBVar9->m_Items[(int)uVar1].fields.IMAHKPGAIAB = local_80;
        pBVar2 = pBVar9->m_Items + (int)uVar1;
        (pBVar2->fields).BFCCEGGDJEF = (bool_conflict)(char)local_78;
        *(int3 *)&(pBVar2->fields).field_0x9 = (int3)((uint)local_78 >> 8);
        (pBVar2->fields).CJOICFODKMF = local_74;
        thunk_FUN_01c20e04(pBVar9->m_Items + (int)uVar1,0);
      }
      else {
        System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>__AddWithResize
                  (pSVar8,item,
                   *(MethodInfo_2768408 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<XmlNode>_Dispose__);
  }
  return;
}


// ===== public static void ELIKPNGDIII()  [RVA 0x34D1D80]
// BBBBKBBFNOG$$ELIKPNGDIII @ RVA 0x34D1D80

void BBBBKBBFNOG__ELIKPNGDIII(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  FPPKHNNABAD_o *__this;
  PKHMIGFEJCL_o *AAJBIMFNMBB;
  
  if ((DAT_045686bb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_83);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6653);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6654);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6655);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6656);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6657);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_045686bb = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6653,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6654,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    __this = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName(pNVar2,pSVar5,(MethodInfo *)0x0);
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      if (__this != (FPPKHNNABAD_o *)0x0) {
        AAJBIMFNMBB = (pNVar2->fields).QuestParameters;
        bVar1 = FPPKHNNABAD__DGCODECJJCC(__this,AAJBIMFNMBB,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6655,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6656,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
          FPPKHNNABAD__IKDPMKOIDMP(__this,AAJBIMFNMBB,false,(MethodInfo *)0x0);
          return;
        }
      }
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6657,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_83,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x34D1FE0]
// BBBBKBBFNOG$$.cctor @ RVA 0x34D1FE0

void BBBBKBBFNOG___cctor(MethodInfo *method)

{
  BBBBKBBFNOG_c *pBVar1;
  System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *__this;
  BBBBKBBFNOG_StaticFields *pBVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70 [2];
  
  if ((DAT_045686bc & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_TypeInfo);
    DAT_045686bc = 1;
  }
  __this = (System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_TypeInfo);
  System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>___ctor
            (__this,Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>__ctor__);
  BBBBKBBFNOG_TypeInfo->static_fields->IPLLKLOKOFL = __this;
  thunk_FUN_01c20e04(BBBBKBBFNOG_TypeInfo->static_fields,__this);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(local_70,0,(MethodInfo *)0x0);
  pBVar1 = BBBBKBBFNOG_TypeInfo;
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  (pBVar2->HEINPMAGCOD).fields.fakeValueActive = local_70[0].fields.fakeValueActive;
  (pBVar2->HEINPMAGCOD).fields.inited = local_70[0].fields.inited;
  *(undefined6 *)&(pBVar2->HEINPMAGCOD).fields.field_0x1a = local_70[0].fields._26_6_;
  (pBVar2->HEINPMAGCOD).fields.fakeValue = local_70[0].fields.fakeValue;
  (pBVar2->HEINPMAGCOD).fields.hiddenValue = local_70[0].fields.hiddenValue;
  (pBVar2->HEINPMAGCOD).fields.currentCryptoKey = local_70[0].fields.currentCryptoKey;
  pBVar2 = pBVar1->static_fields;
  pBVar2->AHCKJLKAKMN = 0.0;
  pBVar2->CLGHDPOCECK = 0;
  return;
}


// ===== private static float CCHJODGDDAI(string AJBDHHOLPMM)  [RVA 0x34D1334]
// BBBBKBBFNOG$$CCHJODGDDAI @ RVA 0x34D1334

float BBBBKBBFNOG__CCHJODGDDAI(System_String_o *AJBDHHOLPMM,MethodInfo *method)

{
  ulong uVar1;
  bool bVar2;
  System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *__this;
  MethodInfo *extraout_x1;
  float fVar3;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  ulong uStack_58;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  ulong local_38;
  
  if ((DAT_045686bd & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_GetEnumerator__);
    DAT_045686bd = 1;
    method = extraout_x1;
  }
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38 = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BBBBKBBFNOG_TypeInfo,method);
  }
  __this = BBBBKBBFNOG_TypeInfo->static_fields->IPLLKLOKOFL;
  if (__this == (System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>__GetEnumerator
            (&local_70,__this,
             Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_GetEnumerator__);
  local_50.fields._index = local_70.fields._index;
  local_50.fields._version = local_70.fields._version;
  local_50.fields._list = local_70.fields._list;
  local_38 = uStack_58;
  local_50.fields._current = local_70.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>_MoveNext__
                      );
    uVar1 = local_38;
    if (!bVar2) {
      fVar3 = 0.0;
      goto LAB_035d1434;
    }
  } while (((local_38 & 1) == 0) ||
          (bVar2 = System_String__op_Inequality
                             (AJBDHHOLPMM,(System_String_o *)local_50.fields._current,
                              (MethodInfo *)0x0), bVar2));
  fVar3 = (float)(uVar1 >> 0x20);
LAB_035d1434:
  System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>__Dispose
            (&local_50,
             Method_System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>_Dispose__);
  return fVar3;
}


// ===== public static long MFABNNHHJMB()  [RVA 0x34D20B8]
// BBBBKBBFNOG$$MFABNNHHJMB @ RVA 0x34D20B8

int64_t BBBBKBBFNOG__MFABNNHHJMB(MethodInfo *method)

{
  System_String_array *values;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  int64_t iVar4;
  BBBBKBBFNOG_c *method_00;
  BBBBKBBFNOG_StaticFields *pBVar5;
  System_Action_long__o *pSVar6;
  float __this;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  int64_t local_60;
  int64_t iStack_58;
  int64_t iStack_50;
  undefined8 uStack_48;
  
  if ((DAT_045686be & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6658);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6659);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6660);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6661);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6662);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6663);
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_045686be = 1;
  }
  iStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  iStack_50 = 0;
  local_80.fields.hiddenValue = 0;
  local_80.fields.currentCryptoKey = 0;
  local_80.fields.fakeValueActive = false;
  local_80.fields.inited = false;
  local_80.fields._26_6_ = 0;
  local_80.fields.fakeValue = 0;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6658,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6659,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar3;
      thunk_FUN_01c20e04();
      if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pBVar5 = BBBBKBBFNOG_TypeInfo->static_fields;
      local_80.fields.fakeValueActive = (pBVar5->HEINPMAGCOD).fields.fakeValueActive;
      local_80.fields.inited = (pBVar5->HEINPMAGCOD).fields.inited;
      local_80.fields._26_6_ = *(undefined6 *)&(pBVar5->HEINPMAGCOD).fields.field_0x1a;
      local_80.fields.fakeValue = (pBVar5->HEINPMAGCOD).fields.fakeValue;
      local_80.fields.hiddenValue = (pBVar5->HEINPMAGCOD).fields.hiddenValue;
      local_80.fields.currentCryptoKey = (pBVar5->HEINPMAGCOD).fields.currentCryptoKey;
      pSVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString(&local_80,(MethodInfo *)0x0)
      ;
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar3;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar3);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6660,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6661,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar3;
          __this = (float)thunk_FUN_01c20e04(values->m_Items + 2,pSVar3);
          pSVar3 = System_Single__ToString
                             (__this,(MethodInfo *)&BBBBKBBFNOG_TypeInfo->static_fields->AHCKJLKAKMN
                             );
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar3;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar3);
            pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar1,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6662,
                       (MethodInfo *)0x0);
            pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar2,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6663,
                       (MethodInfo *)0x0);
            pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar3;
              thunk_FUN_01c20e04(values->m_Items + 4,pSVar3);
              pSVar3 = System_Int64__ToString
                                 ((int64_t)&BBBBKBBFNOG_TypeInfo->static_fields->CLGHDPOCECK,
                                  (MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar3;
                thunk_FUN_01c20e04();
                pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
                pBVar5 = BBBBKBBFNOG_TypeInfo->static_fields;
                uStack_48._0_1_ = (pBVar5->HEINPMAGCOD).fields.fakeValueActive;
                uStack_48._1_1_ = (pBVar5->HEINPMAGCOD).fields.inited;
                uStack_48._2_6_ = *(undefined6 *)&(pBVar5->HEINPMAGCOD).fields.field_0x1a;
                iStack_50 = (pBVar5->HEINPMAGCOD).fields.fakeValue;
                iStack_58 = (pBVar5->HEINPMAGCOD).fields.hiddenValue;
                local_60 = (pBVar5->HEINPMAGCOD).fields.currentCryptoKey;
                pSVar6 = pBVar5->GIBFOOLLACF;
                if (pSVar6 != (System_Action_long__o *)0x0) {
                  local_a0.fields.currentCryptoKey = local_60;
                  local_a0.fields.hiddenValue = iStack_58;
                  local_a0.fields.fakeValue = iStack_50;
                  local_a0.fields._24_8_ = uStack_48;
                  iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                    (&local_a0,(MethodInfo *)0x0);
                  (*(code *)(pSVar6->fields).super.super.invoke_impl)
                            ((pSVar6->fields).super.super.method_code,iVar4,
                             (pSVar6->fields).super.super.method);
                }
                method_00 = BBBBKBBFNOG_TypeInfo;
                if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
                  method_00 = (BBBBKBBFNOG_c *)thunk_FUN_01ba7564();
                }
                BBBBKBBFNOG__NDNPGAKJLHM((MethodInfo *)method_00);
                local_c0.fields.hiddenValue = iStack_58;
                local_c0.fields.currentCryptoKey = local_60;
                local_c0.fields.fakeValueActive = uStack_48._0_1_;
                local_c0.fields.inited = uStack_48._1_1_;
                local_c0.fields._26_6_ = uStack_48._2_6_;
                local_c0.fields.fakeValue = iStack_50;
                iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                  (&local_c0,(MethodInfo *)0x0);
                return iVar4;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

