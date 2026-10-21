// TypeDefIndex 3167
// Namespace: 
// public class HOGPIBHKJDL
// Fields:
//   private HGLELMDNMMA <IHKLCENNHPI>k__BackingField; // 0x10
//   private ObscuredInt <PKGCKALOMOF>k__BackingField; // 0x18
//   private ObscuredInt <LJGJEGHMFAM>k__BackingField; // 0x28

// ===== public ObscuredInt PACPBHBADJG()  [RVA 0x34E1620]
// HOGPIBHKJDL$$PACPBHBADJG @ RVA 0x34E1620

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
HOGPIBHKJDL__PACPBHBADJG(HOGPIBHKJDL_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._LJGJEGHMFAM_k__BackingField.fields;
}


// ===== public void PICGGLNNJFA(ObscuredInt CJNHFNHJHPE)  [RVA 0x34E162C]
// HOGPIBHKJDL$$PICGGLNNJFA @ RVA 0x34E162C

void HOGPIBHKJDL__PICGGLNNJFA
               (HOGPIBHKJDL_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
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


// ===== public void LLFBNDPCKNC(ObscuredInt CJNHFNHJHPE)  [RVA 0x34E1634]
// HOGPIBHKJDL$$LLFBNDPCKNC @ RVA 0x34E1634

void HOGPIBHKJDL__LLFBNDPCKNC
               (HOGPIBHKJDL_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields)._LJGJEGHMFAM_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._LJGJEGHMFAM_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._LJGJEGHMFAM_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._LJGJEGHMFAM_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._LJGJEGHMFAM_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._LJGJEGHMFAM_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
  return;
}


// ===== public ObscuredInt LDJLMEFOMLG()  [RVA 0x34E163C]
// HOGPIBHKJDL$$LDJLMEFOMLG @ RVA 0x34E163C

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
HOGPIBHKJDL__LDJLMEFOMLG(HOGPIBHKJDL_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._PKGCKALOMOF_k__BackingField.fields;
}


// ===== public HGLELMDNMMA JGPCHEKKHMJ()  [RVA 0x34E1648]
// HOGPIBHKJDL$$JGPCHEKKHMJ @ RVA 0x34E1648

HGLELMDNMMA_o * HOGPIBHKJDL__JGPCHEKKHMJ(HOGPIBHKJDL_o *__this,MethodInfo *method)

{
  return (__this->fields)._IHKLCENNHPI_k__BackingField;
}


// ===== public void .ctor(HGLELMDNMMA GJFBMHMOMED, int JCIDLNABHMN)  [RVA 0x34E1650]
// HOGPIBHKJDL$$.ctor @ RVA 0x34E1650

void HOGPIBHKJDL___ctor(HOGPIBHKJDL_o *__this,HGLELMDNMMA_o *GJFBMHMOMED,int32_t JCIDLNABHMN,
                       MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._IHKLCENNHPI_k__BackingField = GJFBMHMOMED;
  thunk_FUN_01c20e04(&__this->fields,GJFBMHMOMED);
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(JCIDLNABHMN,(MethodInfo *)0x0);
  (__this->fields)._PKGCKALOMOF_k__BackingField.fields = CVar1;
  return;
}


// ===== private void JCCNPODPLMP(HGLELMDNMMA CJNHFNHJHPE)  [RVA 0x34E1698]
// HOGPIBHKJDL$$JCCNPODPLMP @ RVA 0x34E1698

void HOGPIBHKJDL__JCCNPODPLMP(HOGPIBHKJDL_o *__this,HGLELMDNMMA_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IHKLCENNHPI_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

