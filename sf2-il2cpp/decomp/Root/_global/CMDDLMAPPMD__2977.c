// TypeDefIndex 2977
// Namespace: 
// public class CMDDLMAPPMD : NKPJLEMPIKD
// Fields:
//   private ObscuredInt <GOMOBAPCMOM>k__BackingField; // 0x30

// ===== protected void DHFIELCFNJH(ObscuredInt CJNHFNHJHPE)  [RVA 0x34A08B8]
// CMDDLMAPPMD$$DHFIELCFNJH @ RVA 0x34A08B8

void CMDDLMAPPMD__DHFIELCFNJH
               (CMDDLMAPPMD_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._GOMOBAPCMOM_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
  return;
}


// ===== public void .ctor()  [RVA 0x34A08C0]
// CMDDLMAPPMD$$.ctor @ RVA 0x34A08C0

void CMDDLMAPPMD___ctor(CMDDLMAPPMD_o *__this,MethodInfo *method)

{
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public ObscuredInt KEIEOJJOELJ()  [RVA 0x34A08C8]
// CMDDLMAPPMD$$KEIEOJJOELJ @ RVA 0x34A08C8

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
CMDDLMAPPMD__KEIEOJJOELJ(CMDDLMAPPMD_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._GOMOBAPCMOM_k__BackingField.fields;
}


// ===== public override bool EPBENPDCBFE(NKPJLEMPIKD.GBBCKIANDCN PHCGJGCHKCM)  [RVA 0x34A08D4]
// CMDDLMAPPMD$$EPBENPDCBFE @ RVA 0x34A08D4

bool CMDDLMAPPMD__EPBENPDCBFE
               (CMDDLMAPPMD_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  Il2CppObject *value;
  int64_t iVar6;
  long lVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04568497 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&StringLiteral_12409/*"StepFrame"*/);
    DAT_04568497 = 1;
  }
  bVar3 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  bVar4 = false;
  if ((PHCGJGCHKCM != (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) && (bVar3)) {
    if ((PHCGJGCHKCM->fields).IGMDDJFPIJL == (Il2CppObject *)0x0) {
      bVar4 = false;
    }
    else {
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields)._GOMOBAPCMOM_k__BackingField.fields,(MethodInfo *)0x0);
      if ((iVar5 == 0) ||
         (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (PHCGJGCHKCM->fields).IGMDDJFPIJL,
         __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        bVar4 = true;
      }
      else {
        bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment
        ;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this_00);
        }
        bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                          (__this_00,StringLiteral_12409/*"StepFrame"*/,
                           Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__
                          );
        if (bVar4) {
          value = System_Collections_Generic_Dictionary<object,_object>__get_Item
                            (__this_00,StringLiteral_12409/*"StepFrame"*/,
                             Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                            );
          if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(System_Convert_TypeInfo);
          }
          iVar6 = System_Convert__ToInt64(value,(MethodInfo *)0x0);
        }
        else {
          iVar6 = 0;
        }
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields)._GOMOBAPCMOM_k__BackingField.fields,(MethodInfo *)0x0);
        lVar7 = (long)iVar5;
        lVar2 = 0;
        if (lVar7 != 0) {
          lVar2 = iVar6 / lVar7;
        }
        bVar4 = iVar6 == lVar2 * lVar7;
      }
    }
  }
  return bVar4;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x34A0A60]
// CMDDLMAPPMD$$RandomizeObscuredVars @ RVA 0x34A0A60

void CMDDLMAPPMD__RandomizeObscuredVars(CMDDLMAPPMD_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  undefined8 local_20;
  undefined8 uStack_18;
  
  NKPJLEMPIKD__RandomizeObscuredVars((NKPJLEMPIKD_o *)__this,(MethodInfo *)0x0);
  uStack_18._0_4_ = (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValue;
  uStack_18._4_1_ = (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValueActive;
  uStack_18._5_1_ = (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.inited;
  uStack_18._6_2_ = *(undefined2 *)&(__this->fields)._GOMOBAPCMOM_k__BackingField.fields.field_0xe;
  local_20._0_4_ = (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.currentCryptoKey;
  local_20._4_4_ = (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.hiddenValue;
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &local_20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x34A0A94]
// CMDDLMAPPMD$$HNIHOIAMDPC @ RVA 0x34A0A94

void CMDDLMAPPMD__HNIHOIAMDPC
               (CMDDLMAPPMD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  if ((DAT_04568498 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12408/*"Step"*/);
    DAT_04568498 = 1;
  }
  NKPJLEMPIKD__HNIHOIAMDPC((NKPJLEMPIKD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_12408/*"Step"*/,(MethodInfo *)0x0);
      CJNHFNHJHPE = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        (CJNHFNHJHPE,(MethodInfo *)0x0);
      (__this->fields)._GOMOBAPCMOM_k__BackingField.fields = CVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(CMDDLMAPPMD IBKIPBJJCPG)  [RVA 0x34A0B2C]
// CMDDLMAPPMD$$.ctor @ RVA 0x34A0B2C

void CMDDLMAPPMD___ctor(CMDDLMAPPMD_o *__this,CMDDLMAPPMD_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined2 uVar3;
  int32_t iVar4;
  int32_t iVar5;
  
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(NKPJLEMPIKD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (CMDDLMAPPMD_o *)0x0) {
    bVar1 = (IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValueActive;
    bVar2 = (IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.inited;
    uVar3 = *(undefined2 *)&(IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.field_0xe;
    iVar4 = (IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.currentCryptoKey;
    iVar5 = (IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.hiddenValue;
    (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValue =
         (IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValue;
    (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValueActive = bVar1;
    (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.inited = bVar2;
    *(undefined2 *)&(__this->fields)._GOMOBAPCMOM_k__BackingField.fields.field_0xe = uVar3;
    (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.currentCryptoKey = iVar4;
    (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.hiddenValue = iVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

