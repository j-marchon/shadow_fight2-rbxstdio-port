// TypeDefIndex 529
// Namespace: 
// public class PBBLIKILADK : QuestAction
// Fields:
//   private bool IEKNIFACPPI; // 0x61

// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3596210]
// PBBLIKILADK$$HNIHOIAMDPC @ RVA 0x3596210

void PBBLIKILADK__HNIHOIAMDPC
               (PBBLIKILADK_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04568da2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_04568da2 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      (__this->fields).super.field_0x51 = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL OKBIKHHKOEN)  [RVA 0x35962A4]
// PBBLIKILADK$$MAHFCKJGBPP @ RVA 0x35962A4

void PBBLIKILADK__MAHFCKJGBPP(PBBLIKILADK_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  int32_t iVar1;
  Roster_o *pAVar2;
  NDPMLPGANCI_o *__this_00;
  long lVar3;
  
  if ((DAT_04568da3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04568da3 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,OKBIKHHKOEN,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (Roster_o *)0x0) {
    Roster__BCBNBDFOIEA(pAVar2,(bool)(__this->fields).super.field_0x51,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar2,false,(MethodInfo *)0x0);
      __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (NDPMLPGANCI_o *)0x0) {
        iVar1 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
        if (iVar1 == 5) {
          lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8) ==
              (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03696418;
          Nekki_SF2_GUI_Map_MapScene__UpdateRaidToggleBtn_EnableAndActive
                    ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                     (MethodInfo *)0x0);
        }
        QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03696418:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x359641C]
// PBBLIKILADK$$.ctor @ RVA 0x359641C

void PBBLIKILADK___ctor(PBBLIKILADK_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0369642c to 03796433 has its CatchHandler @ 03696598 */
  (__this->fields).super.field_0x51 = 0;
  return;
}

