// Original name: Nekki.SF2.Core.Fights.Model.Components.Nodes.ModelNode  (obfuscated IEFEBEDLHNN)
// TypeDefIndex 866
// Namespace: 
// public class ModelNode
// Fields:
//   private static Vector3f LGIKFIENPIG; // 0x0
//   private ModelNode GAFCPEOANDD; // 0x10
//   private ObscuredVector3 OGPJAABGEHE; // 0x18
//   protected Vector3f CNMHHKAMGPI; // 0x38
//   protected Vector3f BJKKHONDAKP; // 0x40
//   private string NPFMOEOIEKM; // 0x48
//   private ModelNode.BBCGIKEGPCI JBNGADJBDHB; // 0x50
//   private int FLDBGCIKMKA; // 0x54
//   private ObscuredFloat <MGNABGCCFCJ>k__BackingField; // 0x58
//   private ObscuredFloat DNPEHJEILDN; // 0x6C
//   private float <EICKLJKAEAI>k__BackingField; // 0x80
//   private float DDMMFMCNPON; // 0x84
//   private ObscuredBool DOMBDCPDKMD; // 0x88
//   private ObscuredBool <GBHELIILHOM>k__BackingField; // 0x94
//   private bool MCAILHLELHB; // 0xA0
//   private bool <FFLODIDGPIO>k__BackingField; // 0xA1
//   private bool NPICHBKFEBF; // 0xA2
//   private bool BEGOLMJFLCG; // 0xA3
//   private bool LAIDIGOPNLB; // 0xA4
//   private bool MCKFLABMNAK; // 0xA5
//   private bool <FEONDPFFLFJ>k__BackingField; // 0xA6
//   private bool ENFFPGHABFD; // 0xA7
//   private bool EKMNMODEKKP; // 0xA8
//   private bool FJHAMMNKBPN; // 0xA9
//   private bool EMNCOJMFLLK; // 0xAA
//   private ObscuredBool FOPNIADHENP; // 0xAC
//   protected ObscuredBool MKNHLACCLLP; // 0xB8

// ===== public void .ctor(string KGLJICLJHEL, Vector3f PAHIALNFELL)  [RVA 0x308B318]
// ModelNode$$.ctor @ RVA 0x308B318

/* WARNING: Type propagation algorithm not settling */

void ModelNode___ctor(ModelNode_o *__this,System_String_o *KGLJICLJHEL,
                       Vector3f_o *PAHIALNFELL,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  Vector3f_o *pCVar2;
  Vector3f_o **ppCVar3;
  System_String_o **ppSVar4;
  MethodInfo *method_00;
  UnityEngine_Vector3_o CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar5;
  undefined1 local_c8 [40];
  float local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_70;
  
  if ((DAT_04566055 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_04566055 = 1;
  }
  pCVar2 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).CNMHHKAMGPI;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  pCVar2 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).BJKKHONDAKP;
  *ppCVar3 = pCVar2;
  thunk_FUN_01c20e04(ppCVar3,pCVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = Vector3f__ALBJPLAPOBO(PAHIALNFELL,(MethodInfo *)0x0);
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *)&local_90,CJNHFNHJHPE,
             (MethodInfo *)0x0);
  local_70.hiddenValue.fields.y = local_90.hiddenValue.fields.y;
  local_70.hiddenValue.fields.z = local_90.hiddenValue.fields.z;
  local_70.currentCryptoKey = local_90.currentCryptoKey;
  local_70.hiddenValue.fields.x = local_90.hiddenValue.fields.x;
  local_70.fakeValue.fields.z = local_90.fakeValue.fields.z;
  local_70.fakeValueActive = local_90.fakeValueActive;
  local_70.inited = local_90.inited;
  local_70._30_2_ = local_90._30_2_;
  pCVar2 = (__this->fields).CNMHHKAMGPI;
  pCVar1 = &(__this->fields).OGPJAABGEHE;
  *(undefined8 *)&(__this->fields).OGPJAABGEHE.fields.fakeValue.fields.z = local_90._24_8_;
  (pCVar1->fields).fakeValue.fields.x = local_90.fakeValue.fields.x;
  (pCVar1->fields).fakeValue.fields.y = local_90.fakeValue.fields.y;
  pCVar1 = &(__this->fields).OGPJAABGEHE;
  (pCVar1->fields).hiddenValue.fields.y = local_90.hiddenValue.fields.y;
  (pCVar1->fields).hiddenValue.fields.z = local_90.hiddenValue.fields.z;
  (__this->fields).OGPJAABGEHE.fields.currentCryptoKey = local_90.currentCryptoKey;
  (__this->fields).OGPJAABGEHE.fields.hiddenValue.fields.x = local_90.hiddenValue.fields.x;
  if (pCVar2 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(pCVar2,PAHIALNFELL,(MethodInfo *)0x0);
    if (*ppCVar3 != (Vector3f_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      Vector3f__FOOHBJNHOKK(*ppCVar3,PAHIALNFELL,(MethodInfo *)0x0);
      ppSVar4 = &(__this->fields).NPFMOEOIEKM;
      *ppSVar4 = KGLJICLJHEL;
      thunk_FUN_01c20e04(ppSVar4,KGLJICLJHEL);
      (__this->fields).FLDBGCIKMKA = 0;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,0.0,
                 (MethodInfo *)0x0);
      local_a0 = local_90.fakeValue.fields.x;
      local_c8._32_4_ = local_90.hiddenValue.fields.y;
      local_c8._36_4_ = local_90.hiddenValue.fields.z;
      local_c8._24_4_ = local_90.currentCryptoKey;
      local_c8._28_4_ = local_90.hiddenValue.fields.x;
      *(float *)&(__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValueActive =
           local_90.fakeValue.fields.x;
      (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValueOldByte4 =
           (CodeStage_AntiCheat_Common_ACTkByte4_o)local_90.hiddenValue.fields.y;
      (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValue =
           (float)local_90.hiddenValue.fields.z;
      (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.currentCryptoKey =
           local_90.currentCryptoKey;
      (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValue =
           local_90.hiddenValue.fields.x;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_c8,0.0,(MethodInfo *)0x0
                );
      local_90.fakeValue.fields.x = (float)local_c8._16_4_;
      local_90.hiddenValue.fields.y = local_c8._8_4_;
      local_90.hiddenValue.fields.z = local_c8._12_4_;
      local_90.currentCryptoKey = local_c8._0_4_;
      local_90.hiddenValue.fields.x = local_c8._4_4_;
      (__this->fields).DNPEHJEILDN.fields.fakeValueActive = (bool_conflict)local_c8[0x10];
      (__this->fields).DNPEHJEILDN.fields.inited = (bool_conflict)local_c8[0x11];
      *(undefined2 *)&(__this->fields).DNPEHJEILDN.fields.field_0x12 = local_c8._18_2_;
      (__this->fields).DNPEHJEILDN.fields.hiddenValueOldByte4 =
           (CodeStage_AntiCheat_Common_ACTkByte4_o)local_c8._8_4_;
      (__this->fields).DNPEHJEILDN.fields.fakeValue = (float)local_c8._12_4_;
      (__this->fields).DNPEHJEILDN.fields.currentCryptoKey = local_c8._0_4_;
      (__this->fields).DNPEHJEILDN.fields.hiddenValue = local_c8._4_4_;
      (__this->fields).DDMMFMCNPON = 0.0;
      (__this->fields).GAFCPEOANDD = (ModelNode_o *)0x0;
      thunk_FUN_01c20e04(&__this->fields,0);
      CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
      (__this->fields)._GBHELIILHOM_k__BackingField.fields = CVar5;
      (__this->fields).MCAILHLELHB = true;
      (__this->fields)._FFLODIDGPIO_k__BackingField = false;
      (__this->fields).NPICHBKFEBF = false;
      (__this->fields).BEGOLMJFLCG = false;
      (__this->fields)._FEONDPFFLFJ_k__BackingField = false;
      (__this->fields).ENFFPGHABFD = false;
      (__this->fields).EKMNMODEKKP = false;
      CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
      (__this->fields).MKNHLACCLLP.fields = CVar5;
      ModelNode__GNLPNKGBAFL(__this,0,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EJCIECKGPFD(float CJNHFNHJHPE)  [RVA 0x308B5A4]
// ModelNode$$EJCIECKGPFD @ RVA 0x308B5A4

void ModelNode__EJCIECKGPFD(ModelNode_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).DDMMFMCNPON = CJNHFNHJHPE;
  return;
}


// ===== public void FCIDNFODLFB(bool CJNHFNHJHPE)  [RVA 0x308B5AC]
// ModelNode$$FCIDNFODLFB @ RVA 0x308B5AC

void ModelNode__FCIDNFODLFB(ModelNode_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
  (__this->fields).FOPNIADHENP.fields = CVar1;
  return;
}


// ===== public void GAMGKJCEMAJ(bool CJNHFNHJHPE)  [RVA 0x308B5D0]
// ModelNode$$GAMGKJCEMAJ @ RVA 0x308B5D0

void ModelNode__GAMGKJCEMAJ(ModelNode_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  
  (__this->fields).MCAILHLELHB = CJNHFNHJHPE;
  if (CJNHFNHJHPE) {
    bVar1 = true;
                    /* try { // try from 0318b5e8 to 0328b947 has its CatchHandler @ 0318b5e8
                       catch() { ... } // from try @ 0318b5e8 with catch @ 0318b5e8
                       catch() { ... } // from try @ 0318b988 with catch @ 0318b5e8
                       catch() { ... } // from try @ 0318bab4 with catch @ 0318b5e8
                       catch() { ... } // from try @ 0318bd68 with catch @ 0318b5e8 */
  }
  else {
    bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).DOMBDCPDKMD.fields,(MethodInfo *)0x0);
    bVar1 = !bVar1;
  }
  (__this->fields).MCKFLABMNAK = bVar1;
  return;
}


// ===== public bool DBPGHLOEKMI()  [RVA 0x308B610]
// ModelNode$$DBPGHLOEKMI @ RVA 0x308B610

bool ModelNode__DBPGHLOEKMI(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields)._FFLODIDGPIO_k__BackingField;
}


// ===== public void AMAPHJNBHLH(bool CJNHFNHJHPE)  [RVA 0x308B618]
// ModelNode$$AMAPHJNBHLH @ RVA 0x308B618

void ModelNode__AMAPHJNBHLH(ModelNode_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EKMNMODEKKP = CJNHFNHJHPE;
  return;
}


// ===== public bool MOIGCKFNCPF()  [RVA 0x308B624]
// ModelNode$$MOIGCKFNCPF @ RVA 0x308B624

bool ModelNode__MOIGCKFNCPF(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).MCAILHLELHB;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x308B62C]
// ModelNode$$RandomizeObscuredVars @ RVA 0x308B62C

void ModelNode__RandomizeObscuredVars(ModelNode_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o __this_03;
  undefined8 local_50;
  undefined4 local_48;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04566056 & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_04566056 = 1;
    method = extraout_x1;
  }
  local_48 = 0;
  local_50 = 0;
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo,method);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__GPJJDLBJOAL
            (&(__this->fields).OGPJAABGEHE,(MethodInfo *)0x0);
  local_40.fakeValueActive = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValueActive;
  local_40.inited = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.inited;
  local_40._18_2_ = *(undefined2 *)&(__this->fields)._MGNABGCCFCJ_k__BackingField.fields.field_0x12;
  local_40.hiddenValueOldByte4.fields =
       (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValueOldByte4.fields;
  local_40.fakeValue = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValue;
  local_40.currentCryptoKey = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.currentCryptoKey;
  local_40.hiddenValue = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValue;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__GPJJDLBJOAL
            (&(__this->fields).DNPEHJEILDN,(MethodInfo *)0x0);
  __this_00.fields.fakeValue = false;
  __this_00.fields.inited = false;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields._11_1_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).DOMBDCPDKMD;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_00,in_x2);
  local_50._0_1_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.currentCryptoKey;
  local_50._1_3_ = *(undefined3 *)&(__this->fields)._GBHELIILHOM_k__BackingField.fields.field_0x1;
  local_50._4_4_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.hiddenValue;
  local_48._0_1_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.fakeValue;
  local_48._1_1_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.inited;
  local_48._2_1_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.fakeValueActive;
  local_48._3_1_ = (__this->fields)._GBHELIILHOM_k__BackingField.fields.field_0xb;
  __this_01.fields.fakeValue = false;
  __this_01.fields.inited = false;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields._11_1_ = 0;
  __this_01.fields._0_8_ = &local_50;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_01,in_x2);
  __this_02.fields.fakeValue = false;
  __this_02.fields.inited = false;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields._11_1_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).FOPNIADHENP;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_02,in_x2);
  __this_03.fields.fakeValue = false;
  __this_03.fields.inited = false;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields._11_1_ = 0;
  __this_03.fields._0_8_ = &(__this->fields).MKNHLACCLLP;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__GPJJDLBJOAL(__this_03,in_x2);
  return;
}


// ===== public void ABGNKEBJOAK(int CJNHFNHJHPE)  [RVA 0x308B700]
// ModelNode$$ABGNKEBJOAK @ RVA 0x308B700

void ModelNode__ABGNKEBJOAK(ModelNode_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FLDBGCIKMKA = CJNHFNHJHPE;
  return;
}


// ===== public void KGBKLEOMMJL(bool CJNHFNHJHPE)  [RVA 0x308B708]
// ModelNode$$KGBKLEOMMJL @ RVA 0x308B708

void ModelNode__KGBKLEOMMJL(ModelNode_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
  (__this->fields).MKNHLACCLLP.fields = CVar1;
  return;
}


// ===== public void .ctor(string KGLJICLJHEL)  [RVA 0x308B72C]
// ModelNode$$.ctor @ RVA 0x308B72C

void ModelNode___ctor(ModelNode_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Vector3f_o *__this_00;
  MethodInfo *in_x3;
  
  if ((DAT_04566057 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04566057 = 1;
  }
  __this_00 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(__this_00,(MethodInfo *)0x0);
  ModelNode___ctor(__this,KGLJICLJHEL,__this_00,in_x3);
  return;
}


// ===== public void IOMDKAABKDL(bool CJNHFNHJHPE)  [RVA 0x308B798]
// ModelNode$$IOMDKAABKDL @ RVA 0x308B798

void ModelNode__IOMDKAABKDL(ModelNode_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).ENFFPGHABFD = CJNHFNHJHPE;
  return;
}


// ===== public void HAEEOENJNBK(ObscuredBool CJNHFNHJHPE)  [RVA 0x308B7A4]
// ModelNode$$HAEEOENJNBK @ RVA 0x308B7A4

void ModelNode__HAEEOENJNBK
               (ModelNode_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = CJNHFNHJHPE.fields._8_4_;
  uVar1 = CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.currentCryptoKey = (char)uVar1;
  *(int3 *)&(__this->fields)._GBHELIILHOM_k__BackingField.fields.field_0x1 =
       (int3)((ulong)uVar1 >> 8);
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.hiddenValue = (int)((ulong)uVar1 >> 0x20);
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.fakeValue = (bool_conflict)(char)uVar2;
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.inited =
       (bool_conflict)(char)((uint)uVar2 >> 8);
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((uint)uVar2 >> 0x10);
  (__this->fields)._GBHELIILHOM_k__BackingField.fields.field_0xb = (char)((uint)uVar2 >> 0x18);
  return;
}


// ===== public void PEBLEKIANBF(Vector3f CJNHFNHJHPE)  [RVA 0x308B7B0]
// ModelNode$$PEBLEKIANBF @ RVA 0x308B7B0

/* WARNING: Type propagation algorithm not settling */

void ModelNode__PEBLEKIANBF(ModelNode_o *__this,Vector3f_o *CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  UnityEngine_Vector3_o CJNHFNHJHPE_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_80 [2];
  
  if ((DAT_04566058 & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_04566058 = 1;
  }
  CJNHFNHJHPE_00 = Vector3f__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *)local_80,CJNHFNHJHPE_00,
             (MethodInfo *)0x0);
  pCVar1 = &(__this->fields).OGPJAABGEHE;
  *(undefined8 *)&(__this->fields).OGPJAABGEHE.fields.fakeValue.fields.z = local_80[0]._24_8_;
  (pCVar1->fields).fakeValue.fields.x = local_80[0].fakeValue.fields.x;
  (pCVar1->fields).fakeValue.fields.y = local_80[0].fakeValue.fields.y;
  pCVar1 = &(__this->fields).OGPJAABGEHE;
  (pCVar1->fields).hiddenValue.fields.y = local_80[0].hiddenValue.fields.y;
  (pCVar1->fields).hiddenValue.fields.z = local_80[0].hiddenValue.fields.z;
  (__this->fields).OGPJAABGEHE.fields.currentCryptoKey = local_80[0].currentCryptoKey;
  (__this->fields).OGPJAABGEHE.fields.hiddenValue.fields.x = local_80[0].hiddenValue.fields.x;
  return;
}


// ===== public int IFPJOBMHPNP()  [RVA 0x308B864]
// ModelNode$$IFPJOBMHPNP @ RVA 0x308B864

int32_t ModelNode__IFPJOBMHPNP(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).FLDBGCIKMKA;
}


// ===== public bool FAPJKJFGEEK()  [RVA 0x308B86C]
// ModelNode$$FAPJKJFGEEK @ RVA 0x308B86C

bool ModelNode__FAPJKJFGEEK(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).BEGOLMJFLCG;
}


// ===== public override string ToString()  [RVA 0x308B874]
// ModelNode$$ToString @ RVA 0x308B874

System_String_o * ModelNode__ToString(ModelNode_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566059 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9175/*"ModelNode(name = [{0}] c_pos= [{1}])"*/);
    DAT_04566059 = 1;
  }
  pSVar1 = System_String__Format
                     (StringLiteral_9175/*"ModelNode(name = [{0}] c_pos= [{1}])"*/,(Il2CppObject *)(__this->fields).NPFMOEOIEKM,
                      (Il2CppObject *)(__this->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x308B8C4]
// ModelNode$$KCHJCGEMCGE @ RVA 0x308B8C4

System_String_o * ModelNode__KCHJCGEMCGE(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}


// ===== public void GJCKOEMLFJP(bool CJNHFNHJHPE)  [RVA 0x308B8CC]
// ModelNode$$GJCKOEMLFJP @ RVA 0x308B8CC

void ModelNode__GJCKOEMLFJP(ModelNode_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  
  (__this->fields).BEGOLMJFLCG = CJNHFNHJHPE;
  if (CJNHFNHJHPE) {
    bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).DOMBDCPDKMD.fields,(MethodInfo *)0x0);
  }
  else {
    bVar1 = false;
  }
  (__this->fields).LAIDIGOPNLB = bVar1;
  (__this->fields).NPICHBKFEBF = bVar1;
  return;
}


// ===== public float HMKKAKBJGEK()  [RVA 0x308B90C]
// ModelNode$$HMKKAKBJGEK @ RVA 0x308B90C

float ModelNode__HMKKAKBJGEK(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).DDMMFMCNPON;
}


// ===== public bool JJEGBPHBBNO()  [RVA 0x308B914]
// ModelNode$$JJEGBPHBBNO @ RVA 0x308B914

bool ModelNode__JJEGBPHBBNO(ModelNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).MKNHLACCLLP.fields,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public Vector3f HNECJAPAFKA()  [RVA 0x308B928]
// ModelNode$$HNECJAPAFKA @ RVA 0x308B928

Vector3f_o * ModelNode__HNECJAPAFKA(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).CNMHHKAMGPI;
}


// ===== protected void GNLPNKGBAFL(ModelNode.BBCGIKEGPCI CJNHFNHJHPE)  [RVA 0x308B528]
// ModelNode$$GNLPNKGBAFL @ RVA 0x308B528

void ModelNode__GNLPNKGBAFL(ModelNode_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CJNHFNHJHPE_00;
  
  (__this->fields).JBNGADJBDHB = CJNHFNHJHPE;
  CJNHFNHJHPE_00 =
       (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
       CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                 (CJNHFNHJHPE == 0,(MethodInfo *)0x0);
  bVar1 = (__this->fields).BEGOLMJFLCG;
  (__this->fields).DOMBDCPDKMD.fields = CJNHFNHJHPE_00;
  if (bVar1 == false) {
    bVar2 = false;
  }
  else {
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)CJNHFNHJHPE_00,
                       (MethodInfo *)0x0);
  }
  (__this->fields).LAIDIGOPNLB = bVar2;
  if ((__this->fields).MCAILHLELHB == false) {
    bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                       (__this->fields).DOMBDCPDKMD.fields,(MethodInfo *)0x0);
    bVar2 = !bVar2;
  }
  else {
    bVar2 = true;
  }
  (__this->fields).MCKFLABMNAK = bVar2;
  return;
}


// ===== public bool APGEDNDCGJD()  [RVA 0x308B930]
// ModelNode$$APGEDNDCGJD @ RVA 0x308B930

bool ModelNode__APGEDNDCGJD(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).FJHAMMNKBPN;
}


// ===== public NodeRenderer KOIFGOMDJGJ(Transform NCKFIGCBCPO)  [RVA 0x308B938]
// ModelNode$$KOIFGOMDJGJ @ RVA 0x308B938

Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *
ModelNode__KOIFGOMDJGJ
          (ModelNode_o *__this,UnityEngine_Transform_o *NCKFIGCBCPO,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  System_String_o *name;
  
                    /* try { // try from 0318b948 to 0328b94f has its CatchHandler @ 0318ba7c */
                    /* try { // try from 0318b950 to 0328b973 has its CatchHandler @ 0318ba84 */
  if ((DAT_0456605a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<NodeRenderer>__);
                    /* try { // try from 0318b974 to 0328b987 has its CatchHandler @ 0318ba80 */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    DAT_0456605a = 1;
  }
  name = (__this->fields).NPFMOEOIEKM;
                    /* try { // try from 0318b988 to 0328ba9b has its CatchHandler @ 0318b5e8 */
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,name,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            (__this_00,Method_UnityEngine_GameObject_AddComponent<NodeRenderer>__),
     __this_01 != (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *)0x0)) {
    Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__set_Node(__this_01,__this,(MethodInfo *)0x0);
    __this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_02,NCKFIGCBCPO,false,(MethodInfo *)0x0);
      return __this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool CDPBKGIECFG()  [RVA 0x308BA00]
// ModelNode$$CDPBKGIECFG @ RVA 0x308BA00

bool ModelNode__CDPBKGIECFG(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).EKMNMODEKKP;
}


// ===== public bool CHNDBECEDAL()  [RVA 0x308BA08]
// ModelNode$$CHNDBECEDAL @ RVA 0x308BA08

bool ModelNode__CHNDBECEDAL(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields)._FEONDPFFLFJ_k__BackingField;
}


// ===== public bool GJFFKAHCNEG()  [RVA 0x308BA10]
// ModelNode$$GJFFKAHCNEG @ RVA 0x308BA10

bool ModelNode__GJFFKAHCNEG(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).ENFFPGHABFD;
}


// ===== public bool CJPPKMGLIPP()  [RVA 0x308BA18]
// ModelNode$$CJPPKMGLIPP @ RVA 0x308BA18

bool ModelNode__CJPPKMGLIPP(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).EMNCOJMFLLK;
}


// ===== private static void .cctor()  [RVA 0x308BA20]
// ModelNode$$.cctor @ RVA 0x308BA20

void ModelNode___cctor(MethodInfo *method)

{
  Vector3f_o *__this;
  
  if ((DAT_0456605b & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    FUN_01bab630(&ModelNode_TypeInfo);
    DAT_0456605b = 1;
  }
  __this = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(__this,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318b948 with catch @ 0318ba7c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318b974 with catch @ 0318ba80
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0318b950 with catch @ 0318ba84
                        */
  ModelNode_TypeInfo->static_fields->LGIKFIENPIG = __this;
  thunk_FUN_01c20e04(ModelNode_TypeInfo->static_fields,__this);
  return;
}


// ===== public void JAGDAPELDEG(bool CJNHFNHJHPE)  [RVA 0x308BA9C]
// ModelNode$$JAGDAPELDEG @ RVA 0x308BA9C

void ModelNode__JAGDAPELDEG(ModelNode_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 0318ba9c to 0328bab3 has its CatchHandler @ 0318bd60 */
  (__this->fields).EMNCOJMFLLK = CJNHFNHJHPE;
  return;
}


// ===== public void IPLOAGNCEHJ(float ONAOBFPPMAL)  [RVA 0x308BAA8]
// ModelNode$$IPLOAGNCEHJ @ RVA 0x308BAA8

void ModelNode__IPLOAGNCEHJ(ModelNode_o *__this,float ONAOBFPPMAL,MethodInfo *method)

{
  Vector3f_o *pCVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0318bab4 to 0328bd4f has its CatchHandler @ 0318b5e8 */
  if ((DAT_0456605c & 1) == 0) {
    FUN_01bab630(&ModelNode_TypeInfo);
    DAT_0456605c = 1;
    method = extraout_x1;
  }
  if ((ModelNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ModelNode_TypeInfo,method);
  }
  pCVar1 = ModelNode_TypeInfo->static_fields->LGIKFIENPIG;
  if (pCVar1 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(pCVar1,(__this->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
    pCVar1 = ModelNode_TypeInfo->static_fields->LGIKFIENPIG;
    if (pCVar1 != (Vector3f_o *)0x0) {
      Vector3f__LOPALOLIHBH(pCVar1,(__this->fields).BJKKHONDAKP,(MethodInfo *)0x0);
      if ((__this->fields).LAIDIGOPNLB != false) {
        if ((ModelNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pCVar1 = ModelNode_TypeInfo->static_fields->LGIKFIENPIG;
        if (pCVar1 == (Vector3f_o *)0x0) goto LAB_0318bbec;
        Vector3f__PGLILPKGILI(pCVar1,1.0 - (__this->fields).DDMMFMCNPON,(MethodInfo *)0x0);
      }
      if ((ModelNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar1 = ModelNode_TypeInfo->static_fields->LGIKFIENPIG;
      if (pCVar1 != (Vector3f_o *)0x0) {
        Vector3f__LFENGGKOJDO(pCVar1,(__this->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
        pCVar1 = ModelNode_TypeInfo->static_fields->LGIKFIENPIG;
        if (pCVar1 != (Vector3f_o *)0x0) {
          (pCVar1->fields).super.JOLEIODMLFL = (pCVar1->fields).super.JOLEIODMLFL + ONAOBFPPMAL;
          pCVar1 = (__this->fields).BJKKHONDAKP;
          if (pCVar1 != (Vector3f_o *)0x0) {
            Vector3f__FOOHBJNHOKK(pCVar1,(__this->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
            pCVar1 = (__this->fields).CNMHHKAMGPI;
            if (pCVar1 != (Vector3f_o *)0x0) {
              Vector3f__FOOHBJNHOKK
                        (pCVar1,ModelNode_TypeInfo->static_fields->LGIKFIENPIG,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0318bbec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CEGCIALCCPO(bool CJNHFNHJHPE)  [RVA 0x308BBF0]
// ModelNode$$CEGCIALCCPO @ RVA 0x308BBF0

void ModelNode__CEGCIALCCPO(ModelNode_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
  (__this->fields).DOMBDCPDKMD.fields = CVar1;
  return;
}


// ===== public void NCIPEFNDJEH()  [RVA 0x308BC14]
// ModelNode$$NCIPEFNDJEH @ RVA 0x308BC14

void ModelNode__NCIPEFNDJEH(ModelNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).DOMBDCPDKMD.fields,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).LAIDIGOPNLB = (__this->fields).NPICHBKFEBF;
  }
  return;
}


// ===== public void BLMAMHAOOHN(float CJNHFNHJHPE)  [RVA 0x308BC40]
// ModelNode$$BLMAMHAOOHN @ RVA 0x308BC40

void ModelNode__BLMAMHAOOHN(ModelNode_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._EICKLJKAEAI_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void FGKNGBKIKFG(float PMNEDONNDLF)  [RVA 0x308BC48]
// ModelNode$$FGKNGBKIKFG @ RVA 0x308BC48

void ModelNode__FGKNGBKIKFG(ModelNode_o *__this,float PMNEDONNDLF,MethodInfo *method)

{
  Vector3f_o *__this_00;
  Vector3f_o *pCVar1;
  
  pCVar1 = Vector3f__MPOCFELGHDK
                     ((__this->fields).CNMHHKAMGPI,(__this->fields).BJKKHONDAKP,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BJKKHONDAKP;
  pCVar1 = Vector3f__MPOCFELGHDK((__this->fields).CNMHHKAMGPI,pCVar1,(MethodInfo *)0x0);
  if (__this_00 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(__this_00,pCVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JEFPAOALDGF(ModelNode CJNHFNHJHPE)  [RVA 0x308BC98]
// ModelNode$$JEFPAOALDGF @ RVA 0x308BC98

void ModelNode__JEFPAOALDGF(ModelNode_o *__this,ModelNode_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GAFCPEOANDD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void DGLJCGNHLIG()  [RVA 0x308BCA0]
// ModelNode$$DGLJCGNHLIG @ RVA 0x308BCA0

void ModelNode__DGLJCGNHLIG(ModelNode_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CJNHFNHJHPE;
  bool bVar2;
  Vector3f_o *pCVar3;
  MethodInfo *method_00;
  Vector3f_o *pCVar4;
  float CJNHFNHJHPE_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  pCVar4 = (__this->fields).CNMHHKAMGPI;
  pCVar3 = ModelNode__CHKLOKBPFNB(__this,method);
  if (pCVar4 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(pCVar4,pCVar3,(MethodInfo *)0x0);
    pCVar4 = (__this->fields).BJKKHONDAKP;
    pCVar3 = ModelNode__CHKLOKBPFNB(__this,method_00);
    if (pCVar4 != (Vector3f_o *)0x0) {
      Vector3f__FOOHBJNHOKK(pCVar4,pCVar3,(MethodInfo *)0x0);
      bVar1 = (__this->fields)._FFLODIDGPIO_k__BackingField;
      (__this->fields).BEGOLMJFLCG = bVar1;
      if (bVar1 == false) {
        bVar2 = false;
      }
      else {
        bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                           (__this->fields).DOMBDCPDKMD.fields,(MethodInfo *)0x0);
      }
      local_70.hiddenValueOldByte4.fields =
           (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValueOldByte4.fields;
      local_70.fakeValue = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValue;
      local_70.currentCryptoKey =
           (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.currentCryptoKey;
      local_70.hiddenValue = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValue;
      local_70.fakeValueActive =
           (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValueActive;
      local_70.inited = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.inited;
      local_70._18_2_ =
           *(undefined2 *)&(__this->fields)._MGNABGCCFCJ_k__BackingField.fields.field_0x12;
      (__this->fields).LAIDIGOPNLB = bVar2;
      (__this->fields).NPICHBKFEBF = bVar2;
      (__this->fields).DDMMFMCNPON = (__this->fields)._EICKLJKAEAI_k__BackingField;
      CJNHFNHJHPE_00 =
           CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                     ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                      (MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_58,CJNHFNHJHPE_00,
                 (MethodInfo *)0x0);
                    /* try { // try from 0318bd50 to 0328bd5f has its CatchHandler @ 0318bd60 */
      local_40.fakeValueActive = local_58.fakeValueActive;
      local_40.inited = local_58.inited;
      local_40._18_2_ = local_58._18_2_;
      local_40.hiddenValueOldByte4.fields = local_58.hiddenValueOldByte4.fields;
      local_40.fakeValue = local_58.fakeValue;
      local_40.currentCryptoKey = local_58.currentCryptoKey;
      local_40.hiddenValue = local_58.hiddenValue;
                    /* catch() { ... } // from try @ 0318ba9c with catch @ 0318bd60
                       catch() { ... } // from try @ 0318bd50 with catch @ 0318bd60 */
                    /* try { // try from 0318bd64 to 0328bd67 has its CatchHandler @ 0318bd70 */
      CJNHFNHJHPE = (__this->fields)._GBHELIILHOM_k__BackingField.fields;
                    /* try { // try from 0318bd68 to 0328bd73 has its CatchHandler @ 0318b5e8 */
      (__this->fields).DNPEHJEILDN.fields.fakeValueActive = local_58.fakeValueActive;
      (__this->fields).DNPEHJEILDN.fields.inited = local_58.inited;
      *(undefined2 *)&(__this->fields).DNPEHJEILDN.fields.field_0x12 = local_58._18_2_;
      (__this->fields).DNPEHJEILDN.fields.hiddenValueOldByte4 =
           (CodeStage_AntiCheat_Common_ACTkByte4_o)local_58.hiddenValueOldByte4.fields;
      (__this->fields).DNPEHJEILDN.fields.fakeValue = local_58.fakeValue;
      (__this->fields).DNPEHJEILDN.fields.currentCryptoKey = local_58.currentCryptoKey;
      (__this->fields).DNPEHJEILDN.fields.hiddenValue = local_58.hiddenValue;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0318bd64 with catch @ 0318bd70
                        */
      bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)CJNHFNHJHPE,
                         (MethodInfo *)0x0);
      (__this->fields).MCAILHLELHB = bVar2;
      if (bVar2) {
        bVar2 = true;
      }
      else {
        bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                           (__this->fields).DOMBDCPDKMD.fields,(MethodInfo *)0x0);
        bVar2 = !bVar2;
      }
      (__this->fields).MCKFLABMNAK = bVar2;
      (__this->fields).ENFFPGHABFD = (__this->fields)._FEONDPFFLFJ_k__BackingField;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KIAOELALKBL(ModelNode PFKGKBNBGED)  [RVA 0x308BE7C]
// ModelNode$$KIAOELALKBL @ RVA 0x308BE7C

/* WARNING: Type propagation algorithm not settling */

void ModelNode__KIAOELALKBL(ModelNode_o *__this,ModelNode_o *PFKGKBNBGED,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  float fVar6;
  float fVar7;
  bool_conflict bVar8;
  undefined2 uVar9;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar10;
  bool_conflict bVar11;
  undefined1 uVar12;
  uint8_t uVar13;
  undefined3 uVar14;
  bool_conflict bVar15;
  bool_conflict bVar16;
  bool_conflict bVar17;
  bool_conflict bVar18;
  bool_conflict bVar19;
  Vector3f_o *pCVar20;
  System_String_o **ppSVar21;
  undefined8 uVar22;
  
  if (PFKGKBNBGED != (ModelNode_o *)0x0) {
    pCVar1 = &(PFKGKBNBGED->fields).OGPJAABGEHE;
    iVar3 = (pCVar1->fields).hiddenValue.fields.z;
    iVar4 = (PFKGKBNBGED->fields).OGPJAABGEHE.fields.currentCryptoKey;
    iVar5 = (PFKGKBNBGED->fields).OGPJAABGEHE.fields.hiddenValue.fields.x;
    pCVar2 = &(PFKGKBNBGED->fields).OGPJAABGEHE;
    uVar22 = *(undefined8 *)&(PFKGKBNBGED->fields).OGPJAABGEHE.fields.fakeValue.fields.z;
    fVar6 = (pCVar2->fields).fakeValue.fields.x;
    fVar7 = (pCVar2->fields).fakeValue.fields.y;
    pCVar20 = (__this->fields).CNMHHKAMGPI;
    pCVar2 = &(__this->fields).OGPJAABGEHE;
    (pCVar2->fields).hiddenValue.fields.y = (pCVar1->fields).hiddenValue.fields.y;
    (pCVar2->fields).hiddenValue.fields.z = iVar3;
    (__this->fields).OGPJAABGEHE.fields.currentCryptoKey = iVar4;
    (__this->fields).OGPJAABGEHE.fields.hiddenValue.fields.x = iVar5;
    pCVar1 = &(__this->fields).OGPJAABGEHE;
    *(undefined8 *)&(__this->fields).OGPJAABGEHE.fields.fakeValue.fields.z = uVar22;
    (pCVar1->fields).fakeValue.fields.x = fVar6;
    (pCVar1->fields).fakeValue.fields.y = fVar7;
    if (pCVar20 != (Vector3f_o *)0x0) {
      Vector3f__FOOHBJNHOKK(pCVar20,(PFKGKBNBGED->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
      pCVar20 = (__this->fields).BJKKHONDAKP;
      if (pCVar20 != (Vector3f_o *)0x0) {
        Vector3f__FOOHBJNHOKK(pCVar20,(PFKGKBNBGED->fields).BJKKHONDAKP,(MethodInfo *)0x0);
        (__this->fields).GAFCPEOANDD = (PFKGKBNBGED->fields).GAFCPEOANDD;
        thunk_FUN_01c20e04();
        ppSVar21 = &(__this->fields).NPFMOEOIEKM;
        *ppSVar21 = (PFKGKBNBGED->fields).NPFMOEOIEKM;
        thunk_FUN_01c20e04(ppSVar21);
        iVar3 = (PFKGKBNBGED->fields).FLDBGCIKMKA;
        (__this->fields).JBNGADJBDHB = (PFKGKBNBGED->fields).JBNGADJBDHB;
        (__this->fields).FLDBGCIKMKA = iVar3;
        bVar8 = (PFKGKBNBGED->fields)._MGNABGCCFCJ_k__BackingField.fields.inited;
        uVar9 = *(undefined2 *)&(PFKGKBNBGED->fields)._MGNABGCCFCJ_k__BackingField.fields.field_0x12
        ;
        CVar10.fields =
             (PFKGKBNBGED->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValueOldByte4.fields;
        fVar6 = (PFKGKBNBGED->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValue;
        iVar3 = (PFKGKBNBGED->fields)._MGNABGCCFCJ_k__BackingField.fields.currentCryptoKey;
        iVar4 = (PFKGKBNBGED->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValue;
        (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValueActive =
             (PFKGKBNBGED->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValueActive;
        (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.inited = bVar8;
        *(undefined2 *)&(__this->fields)._MGNABGCCFCJ_k__BackingField.fields.field_0x12 = uVar9;
        (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValueOldByte4 =
             (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar10.fields;
        (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValue = fVar6;
        (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.currentCryptoKey = iVar3;
        (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValue = iVar4;
        bVar8 = (PFKGKBNBGED->fields).DNPEHJEILDN.fields.inited;
        uVar9 = *(undefined2 *)&(PFKGKBNBGED->fields).DNPEHJEILDN.fields.field_0x12;
        CVar10.fields = (PFKGKBNBGED->fields).DNPEHJEILDN.fields.hiddenValueOldByte4.fields;
        fVar6 = (PFKGKBNBGED->fields).DNPEHJEILDN.fields.fakeValue;
        iVar3 = (PFKGKBNBGED->fields).DNPEHJEILDN.fields.currentCryptoKey;
        iVar4 = (PFKGKBNBGED->fields).DNPEHJEILDN.fields.hiddenValue;
        (__this->fields).DNPEHJEILDN.fields.fakeValueActive =
             (PFKGKBNBGED->fields).DNPEHJEILDN.fields.fakeValueActive;
        (__this->fields).DNPEHJEILDN.fields.inited = bVar8;
        *(undefined2 *)&(__this->fields).DNPEHJEILDN.fields.field_0x12 = uVar9;
        (__this->fields).DNPEHJEILDN.fields.hiddenValueOldByte4 =
             (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar10.fields;
        (__this->fields).DNPEHJEILDN.fields.fakeValue = fVar6;
        (__this->fields).DNPEHJEILDN.fields.currentCryptoKey = iVar3;
        (__this->fields).DNPEHJEILDN.fields.hiddenValue = iVar4;
        fVar6 = (PFKGKBNBGED->fields).DDMMFMCNPON;
        (__this->fields)._EICKLJKAEAI_k__BackingField =
             (PFKGKBNBGED->fields)._EICKLJKAEAI_k__BackingField;
        (__this->fields).DDMMFMCNPON = fVar6;
        bVar8 = (PFKGKBNBGED->fields).DOMBDCPDKMD.fields.inited;
        bVar11 = (PFKGKBNBGED->fields).DOMBDCPDKMD.fields.fakeValueActive;
        uVar12 = (PFKGKBNBGED->fields).DOMBDCPDKMD.fields.field_0xb;
        uVar13 = (PFKGKBNBGED->fields).DOMBDCPDKMD.fields.currentCryptoKey;
        uVar14 = *(undefined3 *)&(PFKGKBNBGED->fields).DOMBDCPDKMD.fields.field_0x1;
        iVar3 = (PFKGKBNBGED->fields).DOMBDCPDKMD.fields.hiddenValue;
        (__this->fields).DOMBDCPDKMD.fields.fakeValue =
             (PFKGKBNBGED->fields).DOMBDCPDKMD.fields.fakeValue;
        (__this->fields).DOMBDCPDKMD.fields.inited = bVar8;
        (__this->fields).DOMBDCPDKMD.fields.fakeValueActive = bVar11;
        (__this->fields).DOMBDCPDKMD.fields.field_0xb = uVar12;
        (__this->fields).DOMBDCPDKMD.fields.currentCryptoKey = uVar13;
        *(undefined3 *)&(__this->fields).DOMBDCPDKMD.fields.field_0x1 = uVar14;
        (__this->fields).DOMBDCPDKMD.fields.hiddenValue = iVar3;
        uVar14 = *(undefined3 *)&(PFKGKBNBGED->fields)._GBHELIILHOM_k__BackingField.fields.field_0x1
        ;
        iVar3 = (PFKGKBNBGED->fields)._GBHELIILHOM_k__BackingField.fields.hiddenValue;
        bVar8 = (PFKGKBNBGED->fields)._GBHELIILHOM_k__BackingField.fields.fakeValue;
        bVar11 = (PFKGKBNBGED->fields)._GBHELIILHOM_k__BackingField.fields.inited;
        bVar15 = (PFKGKBNBGED->fields)._GBHELIILHOM_k__BackingField.fields.fakeValueActive;
        uVar12 = (PFKGKBNBGED->fields)._GBHELIILHOM_k__BackingField.fields.field_0xb;
        (__this->fields)._GBHELIILHOM_k__BackingField.fields.currentCryptoKey =
             (PFKGKBNBGED->fields)._GBHELIILHOM_k__BackingField.fields.currentCryptoKey;
        *(undefined3 *)&(__this->fields)._GBHELIILHOM_k__BackingField.fields.field_0x1 = uVar14;
        (__this->fields)._GBHELIILHOM_k__BackingField.fields.hiddenValue = iVar3;
        (__this->fields)._GBHELIILHOM_k__BackingField.fields.fakeValue = bVar8;
        (__this->fields)._GBHELIILHOM_k__BackingField.fields.inited = bVar11;
        (__this->fields)._GBHELIILHOM_k__BackingField.fields.fakeValueActive = bVar15;
        (__this->fields)._GBHELIILHOM_k__BackingField.fields.field_0xb = uVar12;
        bVar8 = (PFKGKBNBGED->fields)._FFLODIDGPIO_k__BackingField;
        bVar11 = (PFKGKBNBGED->fields).NPICHBKFEBF;
        bVar15 = (PFKGKBNBGED->fields).BEGOLMJFLCG;
        bVar16 = (PFKGKBNBGED->fields).LAIDIGOPNLB;
        bVar17 = (PFKGKBNBGED->fields).MCKFLABMNAK;
        bVar18 = (PFKGKBNBGED->fields)._FEONDPFFLFJ_k__BackingField;
        bVar19 = (PFKGKBNBGED->fields).ENFFPGHABFD;
        (__this->fields).MCAILHLELHB = (PFKGKBNBGED->fields).MCAILHLELHB;
        (__this->fields)._FFLODIDGPIO_k__BackingField = bVar8;
        (__this->fields).NPICHBKFEBF = bVar11;
        (__this->fields).BEGOLMJFLCG = bVar15;
        (__this->fields).LAIDIGOPNLB = bVar16;
        (__this->fields).MCKFLABMNAK = bVar17;
        (__this->fields)._FEONDPFFLFJ_k__BackingField = bVar18;
        (__this->fields).ENFFPGHABFD = bVar19;
        (__this->fields).EKMNMODEKKP = (PFKGKBNBGED->fields).EKMNMODEKKP;
        (__this->fields).EMNCOJMFLLK = (PFKGKBNBGED->fields).EMNCOJMFLLK;
        bVar8 = (PFKGKBNBGED->fields).FOPNIADHENP.fields.inited;
        bVar11 = (PFKGKBNBGED->fields).FOPNIADHENP.fields.fakeValueActive;
        uVar12 = (PFKGKBNBGED->fields).FOPNIADHENP.fields.field_0xb;
        uVar13 = (PFKGKBNBGED->fields).FOPNIADHENP.fields.currentCryptoKey;
        uVar14 = *(undefined3 *)&(PFKGKBNBGED->fields).FOPNIADHENP.fields.field_0x1;
        iVar3 = (PFKGKBNBGED->fields).FOPNIADHENP.fields.hiddenValue;
        (__this->fields).FOPNIADHENP.fields.fakeValue =
             (PFKGKBNBGED->fields).FOPNIADHENP.fields.fakeValue;
        (__this->fields).FOPNIADHENP.fields.inited = bVar8;
        (__this->fields).FOPNIADHENP.fields.fakeValueActive = bVar11;
        (__this->fields).FOPNIADHENP.fields.field_0xb = uVar12;
        (__this->fields).FOPNIADHENP.fields.currentCryptoKey = uVar13;
        *(undefined3 *)&(__this->fields).FOPNIADHENP.fields.field_0x1 = uVar14;
        (__this->fields).FOPNIADHENP.fields.hiddenValue = iVar3;
        bVar8 = (PFKGKBNBGED->fields).MKNHLACCLLP.fields.inited;
        bVar11 = (PFKGKBNBGED->fields).MKNHLACCLLP.fields.fakeValueActive;
        uVar12 = (PFKGKBNBGED->fields).MKNHLACCLLP.fields.field_0xb;
        uVar13 = (PFKGKBNBGED->fields).MKNHLACCLLP.fields.currentCryptoKey;
        uVar14 = *(undefined3 *)&(PFKGKBNBGED->fields).MKNHLACCLLP.fields.field_0x1;
        iVar3 = (PFKGKBNBGED->fields).MKNHLACCLLP.fields.hiddenValue;
        (__this->fields).MKNHLACCLLP.fields.fakeValue =
             (PFKGKBNBGED->fields).MKNHLACCLLP.fields.fakeValue;
        (__this->fields).MKNHLACCLLP.fields.inited = bVar8;
        (__this->fields).MKNHLACCLLP.fields.fakeValueActive = bVar11;
        (__this->fields).MKNHLACCLLP.fields.field_0xb = uVar12;
        (__this->fields).MKNHLACCLLP.fields.currentCryptoKey = uVar13;
        *(undefined3 *)&(__this->fields).MKNHLACCLLP.fields.field_0x1 = uVar14;
        (__this->fields).MKNHLACCLLP.fields.hiddenValue = iVar3;
        (__this->fields).FJHAMMNKBPN = (PFKGKBNBGED->fields).FJHAMMNKBPN;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ModelNode KDAFLKAKDJL()  [RVA 0x308BF88]
// ModelNode$$KDAFLKAKDJL @ RVA 0x308BF88

ModelNode_o * ModelNode__KDAFLKAKDJL(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).GAFCPEOANDD;
}


// ===== public float AOBNHNAGDGD()  [RVA 0x308BF90]
// ModelNode$$AOBNHNAGDGD @ RVA 0x308BF90

float ModelNode__AOBNHNAGDGD(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields)._EICKLJKAEAI_k__BackingField;
}


// ===== public void .ctor(ModelNode PFKGKBNBGED)  [RVA 0x308BF98]
// ModelNode$$.ctor @ RVA 0x308BF98

void ModelNode___ctor(ModelNode_o *__this,ModelNode_o *PFKGKBNBGED,MethodInfo *method)

{
  Vector3f_o *pCVar1;
  Vector3f_o **ppCVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((DAT_0456605d & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_0456605d = 1;
  }
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).CNMHHKAMGPI;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).BJKKHONDAKP;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (PFKGKBNBGED != (ModelNode_o *)0x0) {
    (__this->fields).NPFMOEOIEKM = (PFKGKBNBGED->fields).NPFMOEOIEKM;
    thunk_FUN_01c20e04();
    (__this->fields).FLDBGCIKMKA = 0;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,0.0,(MethodInfo *)0x0)
    ;
    local_50.fakeValueActive = local_68.fakeValueActive;
    local_50.inited = local_68.inited;
    local_50._18_2_ = local_68._18_2_;
    local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
    local_50.fakeValue = local_68.fakeValue;
    local_50.currentCryptoKey = local_68.currentCryptoKey;
    local_50.hiddenValue = local_68.hiddenValue;
    (__this->fields).DNPEHJEILDN.fields.fakeValueActive = local_68.fakeValueActive;
    (__this->fields).DNPEHJEILDN.fields.inited = local_68.inited;
    *(undefined2 *)&(__this->fields).DNPEHJEILDN.fields.field_0x12 = local_68._18_2_;
    (__this->fields).DNPEHJEILDN.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
    (__this->fields).DNPEHJEILDN.fields.fakeValue = local_68.fakeValue;
    (__this->fields).DNPEHJEILDN.fields.currentCryptoKey = local_68.currentCryptoKey;
    (__this->fields).DNPEHJEILDN.fields.hiddenValue = local_68.hiddenValue;
    (__this->fields).DDMMFMCNPON = 0.0;
    (__this->fields).GAFCPEOANDD = (ModelNode_o *)0x0;
    thunk_FUN_01c20e04(&__this->fields,0);
    (__this->fields).ENFFPGHABFD = false;
    (__this->fields).EKMNMODEKKP = false;
    (__this->fields).MCAILHLELHB = true;
    (__this->fields).NPICHBKFEBF = false;
    (__this->fields).BEGOLMJFLCG = false;
    CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
    (__this->fields).MKNHLACCLLP.fields = CVar3;
    ModelNode__KIAOELALKBL(__this,PFKGKBNBGED,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ModelNode.BBCGIKEGPCI NHGGBEACKBD()  [RVA 0x308C0C8]
// ModelNode$$NHGGBEACKBD @ RVA 0x308C0C8

int32_t ModelNode__NHGGBEACKBD(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).JBNGADJBDHB;
}


// ===== public float NODBECJPBDC()  [RVA 0x308C0D0]
// ModelNode$$NODBECJPBDC @ RVA 0x308C0D0

float ModelNode__NODBECJPBDC(ModelNode_o *__this,MethodInfo *method)

{
  float fVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_30;
  
  local_30.fakeValueActive = (__this->fields).DNPEHJEILDN.fields.fakeValueActive;
  local_30.inited = (__this->fields).DNPEHJEILDN.fields.inited;
  local_30._18_2_ = *(undefined2 *)&(__this->fields).DNPEHJEILDN.fields.field_0x12;
  local_30.hiddenValueOldByte4.fields =
       (__this->fields).DNPEHJEILDN.fields.hiddenValueOldByte4.fields;
  local_30.fakeValue = (__this->fields).DNPEHJEILDN.fields.fakeValue;
  local_30.currentCryptoKey = (__this->fields).DNPEHJEILDN.fields.currentCryptoKey;
  local_30.hiddenValue = (__this->fields).DNPEHJEILDN.fields.hiddenValue;
  fVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_30,
                     (MethodInfo *)0x0);
  return fVar1;
}


// ===== public void ECOCPLNEJHE(bool CJNHFNHJHPE)  [RVA 0x308C100]
// ModelNode$$ECOCPLNEJHE @ RVA 0x308C100

void ModelNode__ECOCPLNEJHE(ModelNode_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FEONDPFFLFJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool MDMJDMOAAJC()  [RVA 0x308C10C]
// ModelNode$$MDMJDMOAAJC @ RVA 0x308C10C

bool ModelNode__MDMJDMOAAJC(ModelNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).FOPNIADHENP.fields,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void LCOGNIMMOFL(Vector3f CJNHFNHJHPE)  [RVA 0x308C120]
// ModelNode$$LCOGNIMMOFL @ RVA 0x308C120

void ModelNode__LCOGNIMMOFL(ModelNode_o *__this,Vector3f_o *CJNHFNHJHPE,MethodInfo *method)

{
  Vector3f_o *__this_00;
  
  __this_00 = (__this->fields).BJKKHONDAKP;
  if (__this_00 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector3f BMENFNNGAME()  [RVA 0x308C13C]
// ModelNode$$BMENFNNGAME @ RVA 0x308C13C

Vector3f_o * ModelNode__BMENFNNGAME(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).BJKKHONDAKP;
}


// ===== public Vector3f CHKLOKBPFNB()  [RVA 0x308BDC0]
// ModelNode$$CHKLOKBPFNB @ RVA 0x308BDC0

/* WARNING: Type propagation algorithm not settling */

Vector3f_o * ModelNode__CHKLOKBPFNB(ModelNode_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *pCVar1;
  Vector3f_o *pCVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_Fields local_40;
  
  if ((DAT_0456605e & 1) == 0) {
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo);
    DAT_0456605e = 1;
    method = extraout_x1;
  }
  pCVar1 = &(__this->fields).OGPJAABGEHE;
  local_40._24_8_ = *(undefined8 *)&(__this->fields).OGPJAABGEHE.fields.fakeValue.fields.z;
  local_40.fakeValue.fields.x = (pCVar1->fields).fakeValue.fields.x;
  local_40.fakeValue.fields.y = (pCVar1->fields).fakeValue.fields.y;
  pCVar1 = &(__this->fields).OGPJAABGEHE;
  local_40.hiddenValue.fields.y = (pCVar1->fields).hiddenValue.fields.y;
  local_40.hiddenValue.fields.z = (pCVar1->fields).hiddenValue.fields.z;
  local_40.currentCryptoKey = (__this->fields).OGPJAABGEHE.fields.currentCryptoKey;
  local_40.hiddenValue.fields.x = (__this->fields).OGPJAABGEHE.fields.hiddenValue.fields.x;
  if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_TypeInfo,method);
  }
  local_60.hiddenValue.fields.y = local_40.hiddenValue.fields.y;
  local_60.hiddenValue.fields.z = local_40.hiddenValue.fields.z;
  local_60.currentCryptoKey = local_40.currentCryptoKey;
  local_60.hiddenValue.fields.x = local_40.hiddenValue.fields.x;
  local_60.fakeValue.fields.z = local_40.fakeValue.fields.z;
  local_60.fakeValueActive = local_40.fakeValueActive;
  local_60.inited = local_40.inited;
  local_60._30_2_ = local_40._30_2_;
  local_60.fakeValue.fields.x = local_40.fakeValue.fields.x;
  local_60.fakeValue.fields.y = local_40.fakeValue.fields.y;
  PHCOHKNFGLE = CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredVector3_o *)&local_60,
                           (MethodInfo *)0x0);
  pCVar2 = Vector3f__ALBJPLAPOBO(PHCOHKNFGLE,(MethodInfo *)0x0);
  return pCVar2;
}


// ===== public void HBFDJOAMHNA(bool CJNHFNHJHPE)  [RVA 0x308C144]
// ModelNode$$HBFDJOAMHNA @ RVA 0x308C144

void ModelNode__HBFDJOAMHNA(ModelNode_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FJHAMMNKBPN = CJNHFNHJHPE;
  return;
}


// ===== public void BCEAICNLDID(float CJNHFNHJHPE)  [RVA 0x308BE40]
// ModelNode$$BCEAICNLDID @ RVA 0x308BE40

void ModelNode__BCEAICNLDID(ModelNode_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_48 [2];
  
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_48,CJNHFNHJHPE,
             (MethodInfo *)0x0);
  (__this->fields).DNPEHJEILDN.fields.fakeValueActive = local_48[0].fakeValueActive;
  (__this->fields).DNPEHJEILDN.fields.inited = local_48[0].inited;
  *(undefined2 *)&(__this->fields).DNPEHJEILDN.fields.field_0x12 = local_48[0]._18_2_;
  (__this->fields).DNPEHJEILDN.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_48[0].hiddenValueOldByte4.fields;
  (__this->fields).DNPEHJEILDN.fields.fakeValue = local_48[0].fakeValue;
  (__this->fields).DNPEHJEILDN.fields.currentCryptoKey = local_48[0].currentCryptoKey;
  (__this->fields).DNPEHJEILDN.fields.hiddenValue = local_48[0].hiddenValue;
  return;
}


// ===== public ObscuredBool FILIEENGFJL()  [RVA 0x308C150]
// ModelNode$$FILIEENGFJL @ RVA 0x308C150

CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o
ModelNode__FILIEENGFJL(ModelNode_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
         (__this->fields)._GBHELIILHOM_k__BackingField.fields;
}


// ===== public bool MHMICOGFMGK()  [RVA 0x308C160]
// ModelNode$$MHMICOGFMGK @ RVA 0x308C160

bool ModelNode__MHMICOGFMGK(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).MCKFLABMNAK;
}


// ===== public bool GEJMNCILEGJ()  [RVA 0x308C168]
// ModelNode$$GEJMNCILEGJ @ RVA 0x308C168

bool ModelNode__GEJMNCILEGJ(ModelNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).DOMBDCPDKMD.fields,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public bool NDBKBPEHEON()  [RVA 0x308C17C]
// ModelNode$$NDBKBPEHEON @ RVA 0x308C17C

bool ModelNode__NDBKBPEHEON(ModelNode_o *__this,MethodInfo *method)

{
  return (__this->fields).LAIDIGOPNLB;
}


// ===== public void BBBCJJHDNMF(bool CJNHFNHJHPE)  [RVA 0x308C184]
// ModelNode$$BBBCJJHDNMF @ RVA 0x308C184

void ModelNode__BBBCJJHDNMF(ModelNode_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FFLODIDGPIO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void AGOEHONIGBH(Vector3f CJNHFNHJHPE)  [RVA 0x308C190]
// ModelNode$$AGOEHONIGBH @ RVA 0x308C190

void ModelNode__AGOEHONIGBH(ModelNode_o *__this,Vector3f_o *CJNHFNHJHPE,MethodInfo *method)

{
  Vector3f_o *__this_00;
  
  __this_00 = (__this->fields).CNMHHKAMGPI;
  if (__this_00 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AGEHJACCCLF(ObscuredFloat CJNHFNHJHPE)  [RVA 0x308C1AC]
// ModelNode$$AGEHJACCCLF @ RVA 0x308C1AC

void ModelNode__AGEHJACCCLF
               (ModelNode_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *CJNHFNHJHPE
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
  (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValueActive =
       (CJNHFNHJHPE->fields).fakeValueActive;
  (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.inited = bVar1;
  *(undefined2 *)&(__this->fields)._MGNABGCCFCJ_k__BackingField.fields.field_0x12 = uVar2;
  (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
  (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValue = fVar4;
  (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.currentCryptoKey = iVar5;
  (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValue = iVar6;
  return;
}


// ===== public ObscuredFloat JEJAPFPECPK()  [RVA 0x308C1C0]
// ModelNode$$JEJAPFPECPK @ RVA 0x308C1C0

void ModelNode__JEJAPFPECPK
               (CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *__return_storage_ptr__,
               ModelNode_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  
  bVar1 = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.inited;
  uVar2 = *(undefined2 *)&(__this->fields)._MGNABGCCFCJ_k__BackingField.fields.field_0x12;
  CVar3.fields = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValueOldByte4.fields;
  fVar4 = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValue;
  iVar5 = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.currentCryptoKey;
  iVar6 = (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.hiddenValue;
  (__return_storage_ptr__->fields).fakeValueActive =
       (__this->fields)._MGNABGCCFCJ_k__BackingField.fields.fakeValueActive;
  (__return_storage_ptr__->fields).inited = bVar1;
  *(undefined2 *)&(__return_storage_ptr__->fields).field_0x12 = uVar2;
  (__return_storage_ptr__->fields).hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
  (__return_storage_ptr__->fields).fakeValue = fVar4;
  (__return_storage_ptr__->fields).currentCryptoKey = iVar5;
  (__return_storage_ptr__->fields).hiddenValue = iVar6;
  return;
}


// ===== public void JKBONAAMFIL()  [RVA 0x308C1D4]
// ModelNode$$JKBONAAMFIL @ RVA 0x308C1D4

void ModelNode__JKBONAAMFIL(ModelNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).DOMBDCPDKMD.fields,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).LAIDIGOPNLB = false;
  }
  return;
}


// ===== public void CFAAJCOBAEE()  [RVA 0x308C1FC]
// ModelNode$$CFAAJCOBAEE @ RVA 0x308C1FC

void ModelNode__CFAAJCOBAEE(ModelNode_o *__this,MethodInfo *method)

{
  Vector3f_o *__this_00;
  
  __this_00 = (__this->fields).BJKKHONDAKP;
  if (__this_00 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(__this_00,(__this->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

