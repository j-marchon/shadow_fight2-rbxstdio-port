// TypeDefIndex 2437
// Namespace: 
// public class FCIFBMHDLFG : QuestAction
// Fields:
//   private string OCDHIIJDKIN; // 0x68
//   private string MNAGPACHBAI; // 0x70
//   private string FHCHDOILFGE; // 0x78

// ===== public void .ctor()  [RVA 0x3343D58]
// FCIFBMHDLFG$$.ctor @ RVA 0x3343D58

void FCIFBMHDLFG___ctor(FCIFBMHDLFG_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3343D60]
// FCIFBMHDLFG$$HNIHOIAMDPC @ RVA 0x3343D60

void FCIFBMHDLFG__HNIHOIAMDPC
               (FCIFBMHDLFG_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_045679b3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5372/*"Difficulty"*/);
    FUN_01bab630(&StringLiteral_12423/*"Store"*/);
    FUN_01bab630(&StringLiteral_11345/*"Result"*/);
    DAT_045679b3 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_5372/*"Difficulty"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).OCDHIIJDKIN = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_11345/*"Result"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this->fields).MNAGPACHBAI = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_12423/*"Store"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
          ppSVar4 = &(__this->fields).FHCHDOILFGE;
          *ppSVar4 = pSVar3;
          thunk_FUN_01c20e04(ppSVar4,pSVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3343EA0]
// FCIFBMHDLFG$$MAHFCKJGBPP @ RVA 0x3343EA0

void FCIFBMHDLFG__MAHFCKJGBPP(FCIFBMHDLFG_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  QuestCondition_o *__this_00;
  PKHMIGFEJCL_o **ppPVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar2;
  
  if ((DAT_045679b4 & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&QuestCondition_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_690/*"#TODO: QuestActionSendStrangerStats StatisticsWrapperSF"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045679b4 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (QuestCondition_o *)thunk_FUN_01bda818(QuestCondition_TypeInfo);
  QuestCondition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (QuestCondition_o *)0x0) {
    ppPVar1 = &(__this_00->fields).AAJBIMFNMBB;
    *ppPVar1 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar1,AAJBIMFNMBB);
    pEVar2 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar2,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).OCDHIIJDKIN,pEVar2,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pEVar2 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar2,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).MNAGPACHBAI,pEVar2,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pEVar2 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(pEVar2,(MethodInfo *)0x0);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_00,(__this->fields).FHCHDOILFGE,pEVar2,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_690/*"#TODO: QuestActionSendStrangerStats StatisticsWrapperSF"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

