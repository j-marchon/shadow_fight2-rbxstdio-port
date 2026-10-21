// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionBullets  (obfuscated HEGNACFOHEB)
// TypeDefIndex 1389
// Namespace: 
// public class ConditionBullets : ConditionAnimation
// Fields:
//   private JGPHHOLNCCB JBNGADJBDHB; // 0x28
//   private int GNBCPIBKFPA; // 0x2C
//   private int IIIKGINABJD; // 0x30

// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3173EB0]
// ConditionBullets$$EPBENPDCBFE @ RVA 0x3173EB0

bool ConditionBullets__EPBENPDCBFE(ConditionBullets_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  
  if ((DAT_04566948 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_12438/*"Strange type condition bullet"*/);
    DAT_04566948 = 1;
  }
  iVar1 = (__this->fields).JBNGADJBDHB;
  if (iVar1 == 1) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_03273f80:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03273f80 to 03373f8b has its CatchHandler @ 03273e40 */
      FUN_01bab8c8();
    }
    iVar3 = (AHEFOIOKDOK->fields).DJCGMAELDCG;
  }
  else if (iVar1 == 0) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03273f80;
    iVar3 = (AHEFOIOKDOK->fields).EOAEIECDCLC;
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_12438/*"Strange type condition bullet"*/,(MethodInfo *)0x0);
    iVar3 = 0;
  }
  if (iVar3 < (__this->fields).GNBCPIBKFPA) {
    bVar2 = false;
  }
  else {
    bVar2 = iVar3 <= (__this->fields).IIIKGINABJD;
  }
                    /* try { // try from 03273f68 to 03373f77 has its CatchHandler @ 03273f78 */
                    /* catch() { ... } // from try @ 03273e90 with catch @ 03273f78
                       catch() { ... } // from try @ 03273f68 with catch @ 03273f78 */
                    /* try { // try from 03273f7c to 03373f7f has its CatchHandler @ 03273f88 */
  return (bool)(bVar2 ^ (__this->fields).super.GBBHFPBFOPI != false);
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3173F84]
// ConditionBullets$$.ctor @ RVA 0x3173F84

void ConditionBullets___ctor(ConditionBullets_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  MGNDHCBAPEN_int__int__o *pMVar3;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03273f7c with catch @ 03273f88
                        */
  if ((DAT_04566949 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_8775/*"MagicBullet"*/);
    FUN_01bab630(&StringLiteral_5582/*"ERROR: Unknown bulletType"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_10807/*"RaidChargeBullet"*/);
    DAT_04566949 = 1;
  }
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,0xe,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,StringLiteral_8775/*"MagicBullet"*/,(MethodInfo *)0x0);
      if (bVar2) {
        (__this->fields).JBNGADJBDHB = 0;
      }
      else {
        bVar2 = System_String__op_Equality(a,StringLiteral_10807/*"RaidChargeBullet"*/,(MethodInfo *)0x0);
        if (bVar2) {
          (__this->fields).JBNGADJBDHB = 1;
        }
        else {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_5582/*"ERROR: Unknown bulletType"*/,(MethodInfo *)0x0);
        }
      }
      pMVar3 = GIAMPEGMNHE__GGPIBJJKMPK(AHDGNOJPPIB,0,0x7fffffff,(MethodInfo *)0x0);
      if (pMVar3 != (MGNDHCBAPEN_int__int__o *)0x0) {
        iVar1 = (pMVar3->fields).DOKHHBGJICA;
        (__this->fields).GNBCPIBKFPA = (pMVar3->fields).PHPELPFMOII;
        (__this->fields).IIIKGINABJD = iVar1;
        if ((uint)(__this->fields).JBNGADJBDHB < 2) {
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                             (GameUtils_TypeInfo->static_fields->OCCMHDBJPJM).fields,
                             (MethodInfo *)0x0);
          if (bVar2) {
            (__this->fields).GNBCPIBKFPA = 0;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

