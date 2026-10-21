// TypeDefIndex 263
// Namespace: 
// public class BAIOKFJKEGH : BOFEMGGNODC
// Fields:
//   private string DEKCPPOJFEH; // 0x68

// ===== public void .ctor()  [RVA 0x322FCEC]
// BAIOKFJKEGH$$.ctor @ RVA 0x322FCEC

void BAIOKFJKEGH___ctor(BAIOKFJKEGH_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x322FCF4]
// BAIOKFJKEGH$$MAHFCKJGBPP @ RVA 0x322FCF4

void BAIOKFJKEGH__MAHFCKJGBPP(BAIOKFJKEGH_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  FPPKHNNABAD_o *NDBPOFMECGL;
  
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    NDBPOFMECGL = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                            (pNVar1,(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if (NDBPOFMECGL != (FPPKHNNABAD_o *)0x0) {
      pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar1 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_0332fd58;
      Nekki_SF2_Core_Quests_QuestsManager__AddQuestToStack
                (pNVar1,NDBPOFMECGL,true,(MethodInfo *)0x0);
    }
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_0332fd58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x322FD5C]
// BAIOKFJKEGH$$OFPHPMGMCAL @ RVA 0x322FD5C

System_String_o * BAIOKFJKEGH__OFPHPMGMCAL(BAIOKFJKEGH_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x322FD64]
// BAIOKFJKEGH$$HNIHOIAMDPC @ RVA 0x322FD64

void BAIOKFJKEGH__HNIHOIAMDPC
               (BAIOKFJKEGH_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566fcb & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566fcb = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).DEKCPPOJFEH;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

