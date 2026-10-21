// TypeDefIndex 2830
// Namespace: 
// public class KJAKJNJODKL : NKPJLEMPIKD
// Fields:
//   private string <MELJNLOGJOJ>k__BackingField; // 0x30
//   private string <ILIDNOINMBF>k__BackingField; // 0x38
//   private int <AALKLBINCHG>k__BackingField; // 0x40
//   private int <BJHDPDBPMAL>k__BackingField; // 0x44
//   private int <HOKBMPLNBLK>k__BackingField; // 0x48
//   private ObscuredFloat <HKKHAPKFAHP>k__BackingField; // 0x4C
//   private ObscuredFloat <DILGBCPIAOG>k__BackingField; // 0x60

// ===== protected void JMNONAJGCGK(ObscuredFloat CJNHFNHJHPE)  [RVA 0x342B214]
// KJAKJNJODKL$$JMNONAJGCGK @ RVA 0x342B214

void KJAKJNJODKL__JMNONAJGCGK
               (KJAKJNJODKL_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *CJNHFNHJHPE
               ,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  
  bVar1 = (CJNHFNHJHPE->fields).inited;
  uVar2 = *(undefined2 *)&(CJNHFNHJHPE->fields).field_0x12;
  CVar3.fields = (CJNHFNHJHPE->fields).hiddenValueOldByte4.fields;
  fVar4 = (CJNHFNHJHPE->fields).fakeValue;
  iVar5 = (CJNHFNHJHPE->fields).currentCryptoKey;
  iVar6 = (CJNHFNHJHPE->fields).hiddenValue;
  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValueActive =
       (CJNHFNHJHPE->fields).fakeValueActive;
  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.inited = bVar1;
  *(undefined2 *)&(__this->fields)._DILGBCPIAOG_k__BackingField.fields.field_0x12 = uVar2;
  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValue = fVar4;
  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.currentCryptoKey = iVar5;
  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValue = iVar6;
  return;
}


// ===== public ObscuredFloat JHIONGFLMFH()  [RVA 0x342B228]
// KJAKJNJODKL$$JHIONGFLMFH @ RVA 0x342B228

void KJAKJNJODKL__JHIONGFLMFH
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *__return_storage_ptr__,
               KJAKJNJODKL_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  
  bVar1 = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.inited;
  uVar2 = *(undefined2 *)&(__this->fields)._DILGBCPIAOG_k__BackingField.fields.field_0x12;
  CVar3.fields = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValueOldByte4.fields;
  fVar4 = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValue;
  iVar5 = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.currentCryptoKey;
  iVar6 = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValue;
  (__return_storage_ptr__->fields).fakeValueActive =
       (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValueActive;
  (__return_storage_ptr__->fields).inited = bVar1;
  *(undefined2 *)&(__return_storage_ptr__->fields).field_0x12 = uVar2;
  (__return_storage_ptr__->fields).hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
  (__return_storage_ptr__->fields).fakeValue = fVar4;
  (__return_storage_ptr__->fields).currentCryptoKey = iVar5;
  (__return_storage_ptr__->fields).hiddenValue = iVar6;
  return;
}


// ===== public int HMCLOEDMMFE()  [RVA 0x342B23C]
// KJAKJNJODKL$$HMCLOEDMMFE @ RVA 0x342B23C

int32_t KJAKJNJODKL__HMCLOEDMMFE(KJAKJNJODKL_o *__this,MethodInfo *method)

{
  return (__this->fields)._AALKLBINCHG_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x342B244]
// KJAKJNJODKL$$.ctor @ RVA 0x342B244

void KJAKJNJODKL___ctor(KJAKJNJODKL_o *__this,MethodInfo *method)

{
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(KJAKJNJODKL IBKIPBJJCPG)  [RVA 0x342B24C]
// KJAKJNJODKL$$.ctor @ RVA 0x342B24C

void KJAKJNJODKL___ctor(KJAKJNJODKL_o *__this,KJAKJNJODKL_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  undefined2 uVar3;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar4;
  float fVar5;
  int32_t iVar6;
  System_String_o **ppSVar7;
  
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(NKPJLEMPIKD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (KJAKJNJODKL_o *)0x0) {
    (__this->fields)._MELJNLOGJOJ_k__BackingField =
         (IBKIPBJJCPG->fields)._MELJNLOGJOJ_k__BackingField;
    thunk_FUN_01c20e04();
    ppSVar7 = &(__this->fields)._ILIDNOINMBF_k__BackingField;
    *ppSVar7 = (IBKIPBJJCPG->fields)._ILIDNOINMBF_k__BackingField;
    thunk_FUN_01c20e04(ppSVar7);
    iVar1 = (IBKIPBJJCPG->fields)._BJHDPDBPMAL_k__BackingField;
    (__this->fields)._AALKLBINCHG_k__BackingField =
         (IBKIPBJJCPG->fields)._AALKLBINCHG_k__BackingField;
    (__this->fields)._BJHDPDBPMAL_k__BackingField = iVar1;
    (__this->fields)._HOKBMPLNBLK_k__BackingField =
         (IBKIPBJJCPG->fields)._HOKBMPLNBLK_k__BackingField;
    bVar2 = (IBKIPBJJCPG->fields)._HKKHAPKFAHP_k__BackingField.fields.inited;
    uVar3 = *(undefined2 *)&(IBKIPBJJCPG->fields)._HKKHAPKFAHP_k__BackingField.fields.field_0x12;
    CVar4.fields = (IBKIPBJJCPG->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValueOldByte4.
                   fields;
    fVar5 = (IBKIPBJJCPG->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValue;
    iVar1 = (IBKIPBJJCPG->fields)._HKKHAPKFAHP_k__BackingField.fields.currentCryptoKey;
    iVar6 = (IBKIPBJJCPG->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValue;
    (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValueActive =
         (IBKIPBJJCPG->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValueActive;
    (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.inited = bVar2;
    *(undefined2 *)&(__this->fields)._HKKHAPKFAHP_k__BackingField.fields.field_0x12 = uVar3;
    (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar4.fields;
    (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValue = fVar5;
    (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.currentCryptoKey = iVar1;
    (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValue = iVar6;
    bVar2 = (IBKIPBJJCPG->fields)._DILGBCPIAOG_k__BackingField.fields.inited;
    uVar3 = *(undefined2 *)&(IBKIPBJJCPG->fields)._DILGBCPIAOG_k__BackingField.fields.field_0x12;
    CVar4.fields = (IBKIPBJJCPG->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValueOldByte4.
                   fields;
    fVar5 = (IBKIPBJJCPG->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValue;
    iVar1 = (IBKIPBJJCPG->fields)._DILGBCPIAOG_k__BackingField.fields.currentCryptoKey;
    iVar6 = (IBKIPBJJCPG->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValue;
    (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValueActive =
         (IBKIPBJJCPG->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValueActive;
    (__this->fields)._DILGBCPIAOG_k__BackingField.fields.inited = bVar2;
    *(undefined2 *)&(__this->fields)._DILGBCPIAOG_k__BackingField.fields.field_0x12 = uVar3;
    (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar4.fields;
    (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValue = fVar5;
    (__this->fields)._DILGBCPIAOG_k__BackingField.fields.currentCryptoKey = iVar1;
    (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValue = iVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x342B2C8]
// KJAKJNJODKL$$RandomizeObscuredVars @ RVA 0x342B2C8

void KJAKJNJODKL__RandomizeObscuredVars(KJAKJNJODKL_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  NKPJLEMPIKD__RandomizeObscuredVars((NKPJLEMPIKD_o *)__this,(MethodInfo *)0x0);
  local_30.fakeValueActive = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValueActive;
  local_30.inited = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields)._HKKHAPKFAHP_k__BackingField.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,(MethodInfo *)0x0);
  local_30.fakeValueActive = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValueActive;
  local_30.inited = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields)._DILGBCPIAOG_k__BackingField.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,(MethodInfo *)0x0);
  return;
}


// ===== protected void AGNMODGBGNB(int CJNHFNHJHPE)  [RVA 0x342B320]
// KJAKJNJODKL$$AGNMODGBGNB @ RVA 0x342B320

void KJAKJNJODKL__AGNMODGBGNB(KJAKJNJODKL_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BJHDPDBPMAL_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public override bool EPBENPDCBFE(NKPJLEMPIKD.GBBCKIANDCN PHCGJGCHKCM)  [RVA 0x342B328]
// KJAKJNJODKL$$EPBENPDCBFE @ RVA 0x342B328

/* WARNING: Type propagation algorithm not settling */

bool KJAKJNJODKL__EPBENPDCBFE
               (KJAKJNJODKL_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  InfoAnimation_o *__this_00;
  System_String_o *b;
  Il2CppObject *pIVar4;
  char *pcVar5;
  byte *pbVar6;
  float *pfVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  char cVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_e0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  
  if ((DAT_04568137 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&InfoAnimation_TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_5058/*"Damage"*/);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_3508/*"Block"*/);
    FUN_01bab630(&StringLiteral_5266/*"Defense"*/);
    FUN_01bab630(&StringLiteral_11996/*"Shock"*/);
    FUN_01bab630(&StringLiteral_4893/*"Critical"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568137 = 1;
  }
  bVar3 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) {
    return false;
  }
  if (!bVar3) {
    return false;
  }
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              (PHCGJGCHKCM->fields).IGMDDJFPIJL;
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar2) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_01);
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_2968/*"Animation"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar3) {
      __this_00 = (InfoAnimation_o *)
                  System_Collections_Generic_Dictionary<object,_object>__get_Item
                            (__this_01,StringLiteral_2968/*"Animation"*/,
                             Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                            );
      if (__this_00 != (InfoAnimation_o *)0x0) {
        bVar2 = (InfoAnimation_TypeInfo->_2).naturalAligment;
        if (((((Il2CppClass *)__this_00->klass)->_2).naturalAligment < bVar2) ||
           ((((Il2CppClass *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)InfoAnimation_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this_00);
        }
      }
    }
    else {
      __this_00 = (InfoAnimation_o *)0x0;
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_5266/*"Defense"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar3) {
      b = (System_String_o *)
          System_Collections_Generic_Dictionary<object,_object>__get_Item
                    (__this_01,StringLiteral_5266/*"Defense"*/,
                     Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if ((b != (System_String_o *)0x0) &&
         ((Il2CppClass *)b->klass != (Il2CppClass *)string_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(b);
      }
    }
    else {
      b = (System_String_o *)0x0;
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_4893/*"Critical"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_01,StringLiteral_4893/*"Critical"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0352b844;
      if ((pIVar4->klass->_1).element_class != (bool_TypeInfo->_1).element_class) goto LAB_0352b848;
      pcVar5 = (char *)thunk_FUN_01bda96c();
      cVar8 = *pcVar5;
    }
    else {
      cVar8 = '\0';
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_11996/*"Shock"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_01,StringLiteral_11996/*"Shock"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0352b844;
      if ((pIVar4->klass->_1).element_class != (bool_TypeInfo->_1).element_class) goto LAB_0352b848;
      pbVar6 = (byte *)thunk_FUN_01bda96c();
      uVar9 = (uint)*pbVar6;
    }
    else {
      uVar9 = 0;
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_3508/*"Block"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_01,StringLiteral_3508/*"Block"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_0352b844;
      if ((pIVar4->klass->_1).element_class != (bool_TypeInfo->_1).element_class) goto LAB_0352b848;
      pbVar6 = (byte *)thunk_FUN_01bda96c();
      uVar10 = (uint)*pbVar6;
    }
    else {
      uVar10 = 0;
    }
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_01,StringLiteral_5058/*"Damage"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    fVar12 = 0.0;
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_01,StringLiteral_5058/*"Damage"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) {
LAB_0352b844:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pIVar4->klass->_1).element_class != (float_TypeInfo->_1).element_class) {
LAB_0352b848:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      pfVar7 = (float *)thunk_FUN_01bda96c();
      fVar12 = *pfVar7;
    }
    bVar3 = System_String__op_Inequality
                      ((__this->fields)._MELJNLOGJOJ_k__BackingField,StringLiteral_1/*""*/,
                       (MethodInfo *)0x0);
    if (((!bVar3) ||
        (bVar3 = System_String__op_Inequality
                           ((__this->fields)._MELJNLOGJOJ_k__BackingField,b,(MethodInfo *)0x0),
        !bVar3)) &&
       ((bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                           ((__this->fields)._ILIDNOINMBF_k__BackingField,(MethodInfo *)0x0), bVar3
        || ((__this_00 != (InfoAnimation_o *)0x0 &&
            (bVar3 = InfoAnimation__CBJGGDFAACP
                               (__this_00,(__this->fields)._ILIDNOINMBF_k__BackingField,
                                (MethodInfo *)0x0), bVar3)))))) {
      uVar1 = (__this->fields)._BJHDPDBPMAL_k__BackingField;
      if ((((int)uVar1 < 0) || (uVar1 == (cVar8 != '\0'))) &&
         (((uVar1 = (__this->fields)._HOKBMPLNBLK_k__BackingField, (int)uVar1 < 0 ||
           (uVar1 == uVar9)) &&
          ((uVar9 = (__this->fields)._AALKLBINCHG_k__BackingField, (int)uVar9 < 0 ||
           (uVar9 == uVar10)))))) {
        local_80.fakeValueActive =
             (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValueActive;
        local_80.inited = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.inited;
        local_80._18_2_ =
             *(undefined2 *)&(__this->fields)._HKKHAPKFAHP_k__BackingField.fields.field_0x12;
        local_80.hiddenValueOldByte4.fields =
             (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValueOldByte4.fields;
        local_80.fakeValue = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValue;
        local_80.currentCryptoKey =
             (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.currentCryptoKey;
        local_80.hiddenValue = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValue;
        fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,
                            (MethodInfo *)0x0);
        if (-1.0 < fVar11) {
          local_a0.fakeValueActive =
               (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValueActive;
          local_a0.inited = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.inited;
          local_a0._18_2_ =
               *(undefined2 *)&(__this->fields)._HKKHAPKFAHP_k__BackingField.fields.field_0x12;
          local_a0.hiddenValueOldByte4.fields =
               (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValueOldByte4.fields;
          local_a0.fakeValue = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValue;
          local_a0.currentCryptoKey =
               (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.currentCryptoKey;
          local_a0.hiddenValue = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValue;
          fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,
                              (MethodInfo *)0x0);
          if (fVar12 < fVar11) {
            return false;
          }
        }
        local_c0.fakeValueActive =
             (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValueActive;
        local_c0.inited = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.inited;
        local_c0._18_2_ =
             *(undefined2 *)&(__this->fields)._DILGBCPIAOG_k__BackingField.fields.field_0x12;
        local_c0.hiddenValueOldByte4.fields =
             (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValueOldByte4.fields;
        local_c0.fakeValue = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValue;
        local_c0.currentCryptoKey =
             (__this->fields)._DILGBCPIAOG_k__BackingField.fields.currentCryptoKey;
        local_c0.hiddenValue = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValue;
        fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_c0,
                            (MethodInfo *)0x0);
        if (-1.0 < fVar11) {
          local_e0.fakeValueActive =
               (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValueActive;
          local_e0.inited = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.inited;
          local_e0._18_2_ =
               *(undefined2 *)&(__this->fields)._DILGBCPIAOG_k__BackingField.fields.field_0x12;
          local_e0.hiddenValueOldByte4.fields =
               (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValueOldByte4.fields;
          local_e0.fakeValue = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValue;
          local_e0.currentCryptoKey =
               (__this->fields)._DILGBCPIAOG_k__BackingField.fields.currentCryptoKey;
          local_e0.hiddenValue = (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValue;
          fVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_e0,
                              (MethodInfo *)0x0);
          if (fVar11 < fVar12) {
            return false;
          }
        }
        return true;
      }
    }
  }
  return false;
}


// ===== protected void NJLFLEIILAC(ObscuredFloat CJNHFNHJHPE)  [RVA 0x342B84C]
// KJAKJNJODKL$$NJLFLEIILAC @ RVA 0x342B84C

void KJAKJNJODKL__NJLFLEIILAC
               (KJAKJNJODKL_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *CJNHFNHJHPE
               ,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  
  bVar1 = (CJNHFNHJHPE->fields).inited;
  uVar2 = *(undefined2 *)&(CJNHFNHJHPE->fields).field_0x12;
  CVar3.fields = (CJNHFNHJHPE->fields).hiddenValueOldByte4.fields;
  fVar4 = (CJNHFNHJHPE->fields).fakeValue;
  iVar5 = (CJNHFNHJHPE->fields).currentCryptoKey;
  iVar6 = (CJNHFNHJHPE->fields).hiddenValue;
  (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValueActive =
       (CJNHFNHJHPE->fields).fakeValueActive;
  (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.inited = bVar1;
  *(undefined2 *)&(__this->fields)._HKKHAPKFAHP_k__BackingField.fields.field_0x12 = uVar2;
  (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
  (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValue = fVar4;
  (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.currentCryptoKey = iVar5;
  (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValue = iVar6;
  return;
}


// ===== public string JLIMOOOHCPN()  [RVA 0x342B860]
// KJAKJNJODKL$$JLIMOOOHCPN @ RVA 0x342B860

System_String_o * KJAKJNJODKL__JLIMOOOHCPN(KJAKJNJODKL_o *__this,MethodInfo *method)

{
  return (__this->fields)._MELJNLOGJOJ_k__BackingField;
}


// ===== protected void DKPGGGILMJE(string CJNHFNHJHPE)  [RVA 0x342B868]
// KJAKJNJODKL$$DKPGGGILMJE @ RVA 0x342B868

void KJAKJNJODKL__DKPGGGILMJE(KJAKJNJODKL_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._ILIDNOINMBF_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void MNJFOFMNJFF(int CJNHFNHJHPE)  [RVA 0x342B870]
// KJAKJNJODKL$$MNJFOFMNJFF @ RVA 0x342B870

void KJAKJNJODKL__MNJFOFMNJFF(KJAKJNJODKL_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AALKLBINCHG_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public string FABBCMFIGBM()  [RVA 0x342B878]
// KJAKJNJODKL$$FABBCMFIGBM @ RVA 0x342B878

System_String_o * KJAKJNJODKL__FABBCMFIGBM(KJAKJNJODKL_o *__this,MethodInfo *method)

{
  return (__this->fields)._ILIDNOINMBF_k__BackingField;
}


// ===== public int APGEDNDCGJD()  [RVA 0x342B880]
// KJAKJNJODKL$$APGEDNDCGJD @ RVA 0x342B880

int32_t KJAKJNJODKL__APGEDNDCGJD(KJAKJNJODKL_o *__this,MethodInfo *method)

{
  return (__this->fields)._HOKBMPLNBLK_k__BackingField;
}


// ===== public ObscuredFloat GBLEHIFBNPF()  [RVA 0x342B888]
// KJAKJNJODKL$$GBLEHIFBNPF @ RVA 0x342B888

void KJAKJNJODKL__GBLEHIFBNPF
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *__return_storage_ptr__,
               KJAKJNJODKL_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  
  bVar1 = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.inited;
  uVar2 = *(undefined2 *)&(__this->fields)._HKKHAPKFAHP_k__BackingField.fields.field_0x12;
  CVar3.fields = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValueOldByte4.fields;
  fVar4 = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValue;
  iVar5 = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.currentCryptoKey;
  iVar6 = (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValue;
  (__return_storage_ptr__->fields).fakeValueActive =
       (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValueActive;
  (__return_storage_ptr__->fields).inited = bVar1;
  *(undefined2 *)&(__return_storage_ptr__->fields).field_0x12 = uVar2;
  (__return_storage_ptr__->fields).hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
  (__return_storage_ptr__->fields).fakeValue = fVar4;
  (__return_storage_ptr__->fields).currentCryptoKey = iVar5;
  (__return_storage_ptr__->fields).hiddenValue = iVar6;
  return;
}


// ===== protected void HBFDJOAMHNA(int CJNHFNHJHPE)  [RVA 0x342B89C]
// KJAKJNJODKL$$HBFDJOAMHNA @ RVA 0x342B89C

void KJAKJNJODKL__HBFDJOAMHNA(KJAKJNJODKL_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HOKBMPLNBLK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== protected void DNOKGEOFOGO(string CJNHFNHJHPE)  [RVA 0x342B8A4]
// KJAKJNJODKL$$DNOKGEOFOGO @ RVA 0x342B8A4

void KJAKJNJODKL__DNOKGEOFOGO(KJAKJNJODKL_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MELJNLOGJOJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x342B8AC]
// KJAKJNJODKL$$HNIHOIAMDPC @ RVA 0x342B8AC

void KJAKJNJODKL__HNIHOIAMDPC
               (KJAKJNJODKL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  float fVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_38;
  
  if ((DAT_04568138 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_5067/*"DamageMin"*/);
    FUN_01bab630(&StringLiteral_3508/*"Block"*/);
    FUN_01bab630(&StringLiteral_5266/*"Defense"*/);
    FUN_01bab630(&StringLiteral_11996/*"Shock"*/);
    FUN_01bab630(&StringLiteral_4893/*"Critical"*/);
    FUN_01bab630(&StringLiteral_5066/*"DamageMax"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568138 = 1;
  }
  NKPJLEMPIKD__HNIHOIAMDPC((NKPJLEMPIKD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5266/*"Defense"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._MELJNLOGJOJ_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3508/*"Block"*/,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
        (__this->fields)._AALKLBINCHG_k__BackingField = iVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_4893/*"Critical"*/,(MethodInfo *)0x0);
          iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
          (__this->fields)._BJHDPDBPMAL_k__BackingField = iVar1;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_11996/*"Shock"*/,(MethodInfo *)0x0);
            iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
            (__this->fields)._HOKBMPLNBLK_k__BackingField = iVar1;
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
              pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              (__this->fields)._ILIDNOINMBF_k__BackingField = pSVar4;
              thunk_FUN_01c20e04();
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_5067/*"DamageMin"*/,(MethodInfo *)0x0);
                fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,-1.0,(MethodInfo *)0x0);
                CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_38,fVar5,
                           (MethodInfo *)0x0);
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValueActive =
                     local_38.fakeValueActive;
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.inited = local_38.inited;
                *(undefined2 *)&(__this->fields)._HKKHAPKFAHP_k__BackingField.fields.field_0x12 =
                     local_38._18_2_;
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValueOldByte4 =
                     (CodeStage_AntiCheat_Common_ACTkByte4_o)local_38.hiddenValueOldByte4.fields;
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValue = local_38.fakeValue;
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.currentCryptoKey =
                     local_38.currentCryptoKey;
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValue =
                     local_38.hiddenValue;
                pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar2,StringLiteral_5066/*"DamageMax"*/,(MethodInfo *)0x0);
                  fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,-1.0,(MethodInfo *)0x0);
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_38,fVar5,
                             (MethodInfo *)0x0);
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValueActive =
                       local_38.fakeValueActive;
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.inited = local_38.inited;
                  *(undefined2 *)&(__this->fields)._DILGBCPIAOG_k__BackingField.fields.field_0x12 =
                       local_38._18_2_;
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValueOldByte4 =
                       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_38.hiddenValueOldByte4.fields;
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValue =
                       local_38.fakeValue;
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.currentCryptoKey =
                       local_38.currentCryptoKey;
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValue =
                       local_38.hiddenValue;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int NPFFKEGLLHL()  [RVA 0x342BB60]
// KJAKJNJODKL$$NPFFKEGLLHL @ RVA 0x342BB60

int32_t KJAKJNJODKL__NPFFKEGLLHL(KJAKJNJODKL_o *__this,MethodInfo *method)

{
  return (__this->fields)._BJHDPDBPMAL_k__BackingField;
}

