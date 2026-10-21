// TypeDefIndex 2
// Namespace: 
// public class GCBHGPMLFBA : HJNEOLCKEMD
// Fields:
//   private ObscuredFloat <APGGCIMBEBJ>k__BackingField; // 0x60

// ===== public void .ctor(GCBHGPMLFBA IBKIPBJJCPG)  [RVA 0x2FED974]
// GCBHGPMLFBA$$.ctor @ RVA 0x2FED974

void GCBHGPMLFBA___ctor(GCBHGPMLFBA_o *__this,GCBHGPMLFBA_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (GCBHGPMLFBA_o *)0x0) {
    bVar1 = (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.inited;
    uVar2 = *(undefined2 *)&(IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.field_0x12;
    CVar3.fields = (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValueOldByte4.
                   fields;
    fVar4 = (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValue;
    iVar5 = (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.currentCryptoKey;
    iVar6 = (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValue;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValueActive =
         (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValueActive;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.inited = bVar1;
    *(undefined2 *)&(__this->fields)._APGGCIMBEBJ_k__BackingField.fields.field_0x12 = uVar2;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValue = fVar4;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.currentCryptoKey = iVar5;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValue = iVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x2FED9B0]
// GCBHGPMLFBA$$.ctor @ RVA 0x2FED9B0

void GCBHGPMLFBA___ctor(GCBHGPMLFBA_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x2FED9B8]
// GCBHGPMLFBA$$RandomizeObscuredVars @ RVA 0x2FED9B8

void GCBHGPMLFBA__RandomizeObscuredVars(GCBHGPMLFBA_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  HJNEOLCKEMD__RandomizeObscuredVars((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  local_30.fakeValueActive = (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValueActive;
  local_30.inited = (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields)._APGGCIMBEBJ_k__BackingField.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,(MethodInfo *)0x0);
  return;
}


// ===== public ObscuredFloat CGMBKAHLACJ()  [RVA 0x2FED9F4]
// GCBHGPMLFBA$$CGMBKAHLACJ @ RVA 0x2FED9F4

void GCBHGPMLFBA__CGMBKAHLACJ
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *__return_storage_ptr__,
               GCBHGPMLFBA_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  
  bVar1 = (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.inited;
  uVar2 = *(undefined2 *)&(__this->fields)._APGGCIMBEBJ_k__BackingField.fields.field_0x12;
  CVar3.fields = (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValueOldByte4.fields;
  fVar4 = (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValue;
  iVar5 = (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.currentCryptoKey;
  iVar6 = (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValue;
  (__return_storage_ptr__->fields).fakeValueActive =
       (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValueActive;
  (__return_storage_ptr__->fields).inited = bVar1;
  *(undefined2 *)&(__return_storage_ptr__->fields).field_0x12 = uVar2;
  (__return_storage_ptr__->fields).hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
  (__return_storage_ptr__->fields).fakeValue = fVar4;
  (__return_storage_ptr__->fields).currentCryptoKey = iVar5;
  (__return_storage_ptr__->fields).hiddenValue = iVar6;
  return;
}


// ===== protected void DGLLHBOCLKP(ObscuredFloat CJNHFNHJHPE)  [RVA 0x2FEDA08]
// GCBHGPMLFBA$$DGLLHBOCLKP @ RVA 0x2FEDA08

void GCBHGPMLFBA__DGLLHBOCLKP
               (GCBHGPMLFBA_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *CJNHFNHJHPE
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
  (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValueActive =
       (CJNHFNHJHPE->fields).fakeValueActive;
  (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.inited = bVar1;
  *(undefined2 *)&(__this->fields)._APGGCIMBEBJ_k__BackingField.fields.field_0x12 = uVar2;
  (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
  (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValue = fVar4;
  (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.currentCryptoKey = iVar5;
  (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValue = iVar6;
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x2FEDA1C]
// GCBHGPMLFBA$$HNIHOIAMDPC @ RVA 0x2FEDA1C

void GCBHGPMLFBA__HNIHOIAMDPC
               (GCBHGPMLFBA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_38;
  
  if ((DAT_04565a43 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5069/*"DamagePart"*/);
    DAT_04565a43 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0xf,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_5069/*"DamagePart"*/,(MethodInfo *)0x0);
      CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_38,CJNHFNHJHPE,
                 (MethodInfo *)0x0);
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValueActive =
           local_38.fakeValueActive;
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.inited = local_38.inited;
      *(undefined2 *)&(__this->fields)._APGGCIMBEBJ_k__BackingField.fields.field_0x12 =
           local_38._18_2_;
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValueOldByte4 =
           (CodeStage_AntiCheat_Common_ACTkByte4_o)local_38.hiddenValueOldByte4.fields;
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValue = local_38.fakeValue;
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.currentCryptoKey =
           local_38.currentCryptoKey;
      (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValue = local_38.hiddenValue;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

