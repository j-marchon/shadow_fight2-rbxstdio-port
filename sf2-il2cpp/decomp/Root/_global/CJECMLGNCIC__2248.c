// TypeDefIndex 2248
// Namespace: 
// public class CJECMLGNCIC : HJNEOLCKEMD
// Fields:
//   private ObscuredInt <PGFADODBAKD>k__BackingField; // 0x60
//   private string <IAAGFGNCLHB>k__BackingField; // 0x70

// ===== public string HKGAHCHCJDL()  [RVA 0x32FC6DC]
// CJECMLGNCIC$$HKGAHCHCJDL @ RVA 0x32FC6DC

System_String_o * CJECMLGNCIC__HKGAHCHCJDL(CJECMLGNCIC_o *__this,MethodInfo *method)

{
  return (__this->fields)._IAAGFGNCLHB_k__BackingField;
}


// ===== protected void MHMOBNCJCGB(string CJNHFNHJHPE)  [RVA 0x32FC6E4]
// CJECMLGNCIC$$MHMOBNCJCGB @ RVA 0x32FC6E4

void CJECMLGNCIC__MHMOBNCJCGB(CJECMLGNCIC_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IAAGFGNCLHB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(CJECMLGNCIC IBKIPBJJCPG)  [RVA 0x32FC6EC]
// CJECMLGNCIC$$.ctor @ RVA 0x32FC6EC

void CJECMLGNCIC___ctor(CJECMLGNCIC_o *__this,CJECMLGNCIC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined2 uVar3;
  int32_t iVar4;
  int32_t iVar5;
  System_String_o **ppSVar6;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (CJECMLGNCIC_o *)0x0) {
    bVar1 = (IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.fakeValueActive;
    bVar2 = (IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.inited;
    uVar3 = *(undefined2 *)&(IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.field_0xe;
    iVar4 = (IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.currentCryptoKey;
    iVar5 = (IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.hiddenValue;
    (__this->fields)._PGFADODBAKD_k__BackingField.fields.fakeValue =
         (IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.fakeValue;
    (__this->fields)._PGFADODBAKD_k__BackingField.fields.fakeValueActive = bVar1;
    (__this->fields)._PGFADODBAKD_k__BackingField.fields.inited = bVar2;
    *(undefined2 *)&(__this->fields)._PGFADODBAKD_k__BackingField.fields.field_0xe = uVar3;
    (__this->fields)._PGFADODBAKD_k__BackingField.fields.currentCryptoKey = iVar4;
    (__this->fields)._PGFADODBAKD_k__BackingField.fields.hiddenValue = iVar5;
    ppSVar6 = &(__this->fields)._IAAGFGNCLHB_k__BackingField;
    *ppSVar6 = (IBKIPBJJCPG->fields)._IAAGFGNCLHB_k__BackingField;
    thunk_FUN_01c20e04(ppSVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x32FC72C]
// CJECMLGNCIC$$HNIHOIAMDPC @ RVA 0x32FC72C

void CJECMLGNCIC__HNIHOIAMDPC
               (CJECMLGNCIC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  
  if ((DAT_045676eb & 1) == 0) {
    FUN_01bab630(&StringLiteral_3606/*"Button"*/);
    FUN_01bab630(&StringLiteral_6584/*"Frames"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045676eb = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x14,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_6584/*"Frames"*/,(MethodInfo *)0x0);
      CJNHFNHJHPE = EIABCPKDEBD__EHJNCGCICMP(pSVar2,0,(MethodInfo *)0x0);
      CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        (CJNHFNHJHPE,(MethodInfo *)0x0);
      (__this->fields)._PGFADODBAKD_k__BackingField.fields = CVar5;
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_3606/*"Button"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields)._IAAGFGNCLHB_k__BackingField;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x32FC838]
// CJECMLGNCIC$$RandomizeObscuredVars @ RVA 0x32FC838

void CJECMLGNCIC__RandomizeObscuredVars(CJECMLGNCIC_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  undefined8 local_20;
  undefined8 uStack_18;
  
  HJNEOLCKEMD__RandomizeObscuredVars((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  uStack_18._0_4_ = (__this->fields)._PGFADODBAKD_k__BackingField.fields.fakeValue;
  uStack_18._4_1_ = (__this->fields)._PGFADODBAKD_k__BackingField.fields.fakeValueActive;
  uStack_18._5_1_ = (__this->fields)._PGFADODBAKD_k__BackingField.fields.inited;
  uStack_18._6_2_ = *(undefined2 *)&(__this->fields)._PGFADODBAKD_k__BackingField.fields.field_0xe;
  local_20._0_4_ = (__this->fields)._PGFADODBAKD_k__BackingField.fields.currentCryptoKey;
  local_20._4_4_ = (__this->fields)._PGFADODBAKD_k__BackingField.fields.hiddenValue;
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &local_20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== protected void JDGGENKGKFK(ObscuredInt CJNHFNHJHPE)  [RVA 0x32FC86C]
// CJECMLGNCIC$$JDGGENKGKFK @ RVA 0x32FC86C

void CJECMLGNCIC__JDGGENKGKFK
               (CJECMLGNCIC_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields)._PGFADODBAKD_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._PGFADODBAKD_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._PGFADODBAKD_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._PGFADODBAKD_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._PGFADODBAKD_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._PGFADODBAKD_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
  return;
}


// ===== public ObscuredInt HJILHPJPKII()  [RVA 0x32FC874]
// CJECMLGNCIC$$HJILHPJPKII @ RVA 0x32FC874

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
CJECMLGNCIC__HJILHPJPKII(CJECMLGNCIC_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._PGFADODBAKD_k__BackingField.fields;
}


// ===== public void .ctor()  [RVA 0x32FC880]
// CJECMLGNCIC$$.ctor @ RVA 0x32FC880

void CJECMLGNCIC___ctor(CJECMLGNCIC_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}

