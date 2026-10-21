// TypeDefIndex 143
// Namespace: 
// public class KPAMLIAJBOE : QuestAction
// Fields:
//   private string LOEKILNCFAJ; // 0x68
//   private string GMEDAKHGMME; // 0x70

// ===== protected override string OFPHPMGMCAL()  [RVA 0x301CEC4]
// KPAMLIAJBOE$$OFPHPMGMCAL @ RVA 0x301CEC4

System_String_o * KPAMLIAJBOE__OFPHPMGMCAL(KPAMLIAJBOE_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565c1c & 1) == 0) {
    FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_04565c1c = 1;
  }
  pSVar1 = System_String__Concat
                     ((__this->fields).GMEDAKHGMME,StringLiteral_167/*" "*/,(__this->fields).LOEKILNCFAJ,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x301CF10]
// KPAMLIAJBOE$$.ctor @ RVA 0x301CF10

void KPAMLIAJBOE___ctor(KPAMLIAJBOE_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x301CF18]
// KPAMLIAJBOE$$MAHFCKJGBPP @ RVA 0x301CF18

void KPAMLIAJBOE__MAHFCKJGBPP(KPAMLIAJBOE_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool MJDICHGKPGE;
  System_String_o *a;
  System_String_o *pSVar1;
  
  if ((DAT_04565c1d & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_19993/*"on"*/);
    DAT_04565c1d = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).GMEDAKHGMME;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar1,(MethodInfo *)0x0);
  a = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,(__this->fields).LOEKILNCFAJ,(MethodInfo *)0x0);
  MJDICHGKPGE = System_String__op_Equality(a,StringLiteral_19993/*"on"*/,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  NLPJLHOEAOE__KFBDPFEFKBE(pSVar1,MJDICHGKPGE,(MethodInfo *)0x0);
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x301D010]
// KPAMLIAJBOE$$HNIHOIAMDPC @ RVA 0x301D010

void KPAMLIAJBOE__HNIHOIAMDPC
               (KPAMLIAJBOE_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04565c1e & 1) == 0) {
    FUN_01bab630(&StringLiteral_8310/*"Label"*/);
    FUN_01bab630(&StringLiteral_19993/*"on"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_13847/*"Toggle"*/);
    DAT_04565c1e = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_13847/*"Toggle"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_19993/*"on"*/,(MethodInfo *)0x0);
      (__this->fields).LOEKILNCFAJ = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_8310/*"Label"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).GMEDAKHGMME;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

