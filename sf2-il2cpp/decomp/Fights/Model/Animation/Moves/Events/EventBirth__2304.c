// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Events.EventBirth  (obfuscated AFBIGJEEPII)
// TypeDefIndex 2304
// Namespace: 
// public class EventBirth : EventAnimation
// Fields:
//   private string DEKCPPOJFEH; // 0x48

// ===== public override bool DGCODECJJCC(ECAIEGNAOAL KDFMDHADHMD)  [RVA 0x3312AA4]
// EventBirth$$DGCODECJJCC @ RVA 0x3312AA4

bool EventBirth__DGCODECJJCC(EventBirth_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Model_o *pOVar3;
  
  bVar1 = EventAnimation__DGCODECJJCC((EventAnimation_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if ((bVar1) &&
     (bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0), !bVar2)) {
    if ((KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) ||
       (pOVar3 = (KDFMDHADHMD->fields).HEMGHNOOJPI, pOVar3 == (Model_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      ((__this->fields).DEKCPPOJFEH,(pOVar3->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
    bVar1 = bVar1 != ((__this->fields).super.GBBHFPBFOPI != false);
  }
  return bVar1;
}


// ===== protected override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x3312B1C]
// EventBirth$$HNIHOIAMDPC @ RVA 0x3312B1C

void EventBirth__HNIHOIAMDPC
               (EventBirth_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045677c0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_045677c0 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).DEKCPPOJFEH;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3312BA4]
// EventBirth$$.ctor @ RVA 0x3312BA4

void EventBirth___ctor(EventBirth_o *__this,MethodInfo *method)

{
  if ((DAT_045677c1 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_045677c1 = 1;
  }
  (__this->fields).DEKCPPOJFEH = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  EventAnimation___ctor((EventAnimation_o *)__this,0xf,(MethodInfo *)0x0);
  return;
}

