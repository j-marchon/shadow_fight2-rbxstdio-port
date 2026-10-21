// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionBattleType  (obfuscated ACPDNPJECMD)
// TypeDefIndex 281
// Namespace: 
// public class ConditionBattleType : ConditionAnimation
// Fields:
//   private COALAGILPBO LKHEEKKLPCB; // 0x28

// ===== public COALAGILPBO LJPNEKAIEFH()  [RVA 0x32346C0]
// ConditionBattleType$$LJPNEKAIEFH @ RVA 0x32346C0

int32_t ConditionBattleType__LJPNEKAIEFH(ConditionBattleType_o *__this,MethodInfo *method)

{
  return (__this->fields).LKHEEKKLPCB;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x32346C8]
// ConditionBattleType$$.ctor @ RVA 0x32346C8

void ConditionBattleType___ctor(ConditionBattleType_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar2;
  
  if ((DAT_04567010 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<COALAGILPBO>__);
    FUN_01bab630(&StringLiteral_3838/*"Can't parse BattleType in "*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_04567010 = 1;
  }
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,0x16,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                        (LBJNDMNEJJB,0,Method_EIABCPKDEBD_CKHGJBKDIID<COALAGILPBO>__);
      (__this->fields).LKHEEKKLPCB = iVar1;
      if (iVar1 != 0) {
        return;
      }
                    /* try { // try from 03334788 to 03434853 has its CatchHandler @ 03334788
                       catch() { ... } // from try @ 03334788 with catch @ 03334788
                       catch() { ... } // from try @ 03334954 with catch @ 03334788
                       catch() { ... } // from try @ 03334a0c with catch @ 03334788
                       catch() { ... } // from try @ 03334a14 with catch @ 03334788
                       catch() { ... } // from try @ 03334adc with catch @ 03334788 */
      pSVar2 = (System_String_o *)
               (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
      pSVar2 = System_String__Concat(StringLiteral_3838/*"Can't parse BattleType in "*/,pSVar2,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x32347E8]
// ConditionBattleType$$EPBENPDCBFE @ RVA 0x32347E8

bool ConditionBattleType__EPBENPDCBFE(ConditionBattleType_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    return ((AHEFOIOKDOK->fields).COALAGILPBO == (__this->fields).LKHEEKKLPCB) !=
           ((__this->fields).super.GBBHFPBFOPI != false);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

