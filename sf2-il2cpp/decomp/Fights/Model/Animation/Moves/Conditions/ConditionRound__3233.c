// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionRound  (obfuscated NECMEJDCLHM)
// TypeDefIndex 3233
// Namespace: 
// public class ConditionRound : ConditionAnimation
// Fields:
//   private string IIHMOBEGOGI; // 0x28

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x35065CC]
// ConditionRound$$.ctor @ RVA 0x35065CC

void ConditionRound___ctor(ConditionRound_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456889f & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456889f = 1;
  }
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,1,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).IIHMOBEGOGI;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3506678]
// ConditionRound$$EPBENPDCBFE @ RVA 0x3506678

bool ConditionRound__EPBENPDCBFE(ConditionRound_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  
  if ((DAT_045688a0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12372/*"StartStance"*/);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_5749/*"EndStance"*/);
    FUN_01bab630(&StringLiteral_13946/*"TryOn"*/);
    DAT_045688a0 = 1;
  }
  if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar3 = (AHEFOIOKDOK->fields).LGKFKNGIPDM;
  if (iVar3 == 1) {
    bVar1 = System_String__op_Equality
                      ((__this->fields).IIHMOBEGOGI,StringLiteral_12372/*"StartStance"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      iVar3 = (AHEFOIOKDOK->fields).LGKFKNGIPDM;
      goto LAB_036066fc;
    }
  }
  else {
LAB_036066fc:
    if (iVar3 == 2) {
      bVar1 = System_String__op_Equality
                        ((__this->fields).IIHMOBEGOGI,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
      if (bVar1) goto LAB_03606770;
      iVar3 = (AHEFOIOKDOK->fields).LGKFKNGIPDM;
    }
    if (iVar3 == 3) {
      bVar1 = System_String__op_Equality
                        ((__this->fields).IIHMOBEGOGI,StringLiteral_5749/*"EndStance"*/,(MethodInfo *)0x0);
      if (bVar1) goto LAB_03606770;
      iVar3 = (AHEFOIOKDOK->fields).LGKFKNGIPDM;
    }
    if ((iVar3 != 7) ||
       (bVar1 = System_String__op_Equality
                          ((__this->fields).IIHMOBEGOGI,StringLiteral_13946/*"TryOn"*/,(MethodInfo *)0x0),
       !bVar1)) {
      bVar2 = 0;
      goto LAB_0360677c;
    }
  }
LAB_03606770:
  bVar2 = 1;
LAB_0360677c:
  return (bool)(bVar2 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

