// Original name: Nekki.SF2.Core.Quests.Actions.QuestActionAttachFile  (obfuscated IHGCMCMFNDO)
// TypeDefIndex 2197
// Namespace: 
// public class QuestActionAttachFile : QuestAction
// Fields:
//   private string DAIOCIKMNFD; // 0x68

// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x32E675C]
// QuestActionAttachFile$$HNIHOIAMDPC @ RVA 0x32E675C

void QuestActionAttachFile__HNIHOIAMDPC
               (QuestActionAttachFile_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567610 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6381/*"File"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567610 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_6381/*"File"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).DAIOCIKMNFD;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x32E6808]
// QuestActionAttachFile$$MAHFCKJGBPP @ RVA 0x32E6808

void QuestActionAttachFile__MAHFCKJGBPP(QuestActionAttachFile_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  NLPJLHOEAOE_o *__this_00;
  
  if ((DAT_04567611 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10647/*"QuestActionAttachFile::RunAction skipped to attach empty file"*/);
    FUN_01bab630(&StringLiteral_10646/*"QuestActionAttachFile::RunAction"*/);
    DAT_04567611 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DAIOCIKMNFD,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log(StringLiteral_10647/*"QuestActionAttachFile::RunAction skipped to attach empty file"*/,(MethodInfo *)0x0);
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    NLPJLHOEAOE__KFOBDALBBMM
              (__this_00,(__this->fields).DAIOCIKMNFD,StringLiteral_10646/*"QuestActionAttachFile::RunAction"*/,(MethodInfo *)0x0);
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x32E6900]
// QuestActionAttachFile$$.ctor @ RVA 0x32E6900

void QuestActionAttachFile___ctor(QuestActionAttachFile_o *__this,MethodInfo *method)

{
  if ((DAT_04567612 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567612 = 1;
  }
  (__this->fields).DAIOCIKMNFD = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

