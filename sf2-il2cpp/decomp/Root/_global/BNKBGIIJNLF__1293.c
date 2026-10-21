// TypeDefIndex 1293
// Namespace: 
// public class BNKBGIIJNLF
// Fields:
//   private HBNENINHPGF <GDNLFJIBAAI>k__BackingField; // 0x10
//   private ObscuredInt <PKGCKALOMOF>k__BackingField; // 0x18

// ===== public void .ctor(HBNENINHPGF IJONCLJPNDO, int JCIDLNABHMN)  [RVA 0x3153F9C]
// BNKBGIIJNLF$$.ctor @ RVA 0x3153F9C

void BNKBGIIJNLF___ctor(BNKBGIIJNLF_o *__this,HBNENINHPGF_o *IJONCLJPNDO,int32_t JCIDLNABHMN,
                       MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._GDNLFJIBAAI_k__BackingField = IJONCLJPNDO;
  thunk_FUN_01c20e04(&__this->fields,IJONCLJPNDO);
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(JCIDLNABHMN,(MethodInfo *)0x0);
  (__this->fields)._PKGCKALOMOF_k__BackingField.fields = CVar1;
  return;
}


// ===== public ObscuredInt LDJLMEFOMLG()  [RVA 0x3153FE4]
// BNKBGIIJNLF$$LDJLMEFOMLG @ RVA 0x3153FE4

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
BNKBGIIJNLF__LDJLMEFOMLG(BNKBGIIJNLF_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._PKGCKALOMOF_k__BackingField.fields;
}


// ===== public void PICGGLNNJFA(ObscuredInt CJNHFNHJHPE)  [RVA 0x3153FF0]
// BNKBGIIJNLF$$PICGGLNNJFA @ RVA 0x3153FF0

void BNKBGIIJNLF__PICGGLNNJFA
               (BNKBGIIJNLF_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields)._PKGCKALOMOF_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._PKGCKALOMOF_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._PKGCKALOMOF_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._PKGCKALOMOF_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
  return;
}


// ===== public HBNENINHPGF BIBCEJEJJJN()  [RVA 0x3153FF8]
// BNKBGIIJNLF$$BIBCEJEJJJN @ RVA 0x3153FF8

HBNENINHPGF_o * BNKBGIIJNLF__BIBCEJEJJJN(BNKBGIIJNLF_o *__this,MethodInfo *method)

{
  return (__this->fields)._GDNLFJIBAAI_k__BackingField;
}


// ===== private void HBLNDPNDOMF(HBNENINHPGF CJNHFNHJHPE)  [RVA 0x3154000]
// BNKBGIIJNLF$$HBLNDPNDOMF @ RVA 0x3154000

void BNKBGIIJNLF__HBLNDPNDOMF(BNKBGIIJNLF_o *__this,HBNENINHPGF_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GDNLFJIBAAI_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

