// Original name: Nekki.SF2.Core.Fights.Model.AI.Data.TacticConditionRandom  (obfuscated MPADAHNNFJH)
// TypeDefIndex 2589
// Namespace: 
// public class TacticConditionRandom : TacticConditionBase
// Fields:
//   private ObscuredString JILFPJEKMDL; // 0x20

// ===== public override void HNIHOIAMDPC(XmlNode IIBFFEPEHPF)  [RVA 0x33A4E70]
// TacticConditionRandom$$HNIHOIAMDPC @ RVA 0x33A4E70

void TacticConditionRandom__HNIHOIAMDPC
               (TacticConditionRandom_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **ppCVar2;
  
                    /* catch() { ... } // from try @ 034a4e4c with catch @ 034a4e74 */
  if ((DAT_04567ce5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10204/*"PercentPerFrame"*/);
    DAT_04567ce5 = 1;
  }
  TacticConditionBase__HNIHOIAMDPC((TacticConditionBase_o *)__this,IIBFFEPEHPF,(MethodInfo *)0x0);
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                          (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034a4ed4 to 035a4edf has its CatchHandler @ 034a4a54 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_10204/*"PercentPerFrame"*/,(MethodInfo *)0x0);
                    /* try { // try from 034a4ee0 to 035a4ee7 has its CatchHandler @ 034a4ee8 */
                    /* catch() { ... } // from try @ 034a4d54 with catch @ 034a4ee8
                       catch() { ... } // from try @ 034a4e0c with catch @ 034a4ee8
                       catch() { ... } // from try @ 034a4e5c with catch @ 034a4ee8
                       catch() { ... } // from try @ 034a4ee0 with catch @ 034a4ee8 */
      CJNHFNHJHPE = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      pCVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                         (CJNHFNHJHPE,(MethodInfo *)0x0);
      ppCVar2 = &(__this->fields).JILFPJEKMDL;
      *ppCVar2 = pCVar1;
      thunk_FUN_01c20e04(ppCVar2,pCVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool DGCODECJJCC()  [RVA 0x33A4F10]
// TacticConditionRandom$$DGCODECJJCC @ RVA 0x33A4F10

bool TacticConditionRandom__DGCODECJJCC(TacticConditionRandom_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE;
  Model_o *CHBJNMMEAPG;
  float IPBCCKOHOBD;
  
  if ((DAT_04567ce6 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04567ce6 = 1;
  }
  CHBJNMMEAPG = (__this->fields).super.HMMEFNNMBJK;
  CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                          ((__this->fields).JILFPJEKMDL,(MethodInfo *)0x0);
  IPBCCKOHOBD = TacticConditionBase__EMFEHPCNCDF(CHBJNMMEAPG,CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = LIIFLGALGNK__BCKBIGCEBFL(IPBCCKOHOBD,100.0,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x33A4F9C]
// TacticConditionRandom$$RandomizeObscuredVars @ RVA 0x33A4F9C

void TacticConditionRandom__RandomizeObscuredVars(TacticConditionRandom_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *__this_00;
  
  __this_00 = (__this->fields).JILFPJEKMDL;
  if (__this_00 != (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredString__GPJJDLBJOAL(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33A4FB8]
// TacticConditionRandom$$.ctor @ RVA 0x33A4FB8

void TacticConditionRandom___ctor(TacticConditionRandom_o *__this,MethodInfo *method)

{
  TacticConditionBase___ctor((TacticConditionBase_o *)__this,(MethodInfo *)0x0);
  return;
}

