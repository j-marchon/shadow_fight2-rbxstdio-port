// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Events.EventIntervalStart  (obfuscated PKIOGLDBKOI)
// TypeDefIndex 2860
// Namespace: 
// public class EventIntervalStart : EventAnimation
// Fields:
//   private IntervalAnimation.IMLPLLLPALI PHCPDFIBHGH; // 0x48

// ===== public void .ctor()  [RVA 0x343A9F4]
// EventIntervalStart$$.ctor @ RVA 0x343A9F4

void EventIntervalStart___ctor(EventIntervalStart_o *__this,MethodInfo *method)

{
  EventAnimation___ctor((EventAnimation_o *)__this,0xc,(MethodInfo *)0x0);
  (__this->fields).PHCPDFIBHGH = 0;
  return;
}


// ===== public override bool DGCODECJJCC(ECAIEGNAOAL KDFMDHADHMD)  [RVA 0x343AA14]
// EventIntervalStart$$DGCODECJJCC @ RVA 0x343AA14

bool EventIntervalStart__DGCODECJJCC(EventIntervalStart_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  IntervalAnimation_o *__this_00;
  byte bVar4;
  
  if ((DAT_045681cb & 1) == 0) {
    FUN_01bab630(&Method_KJFPGDFNFCL_AOKIANMEBCH<IntervalAnimation>__);
    DAT_045681cb = 1;
  }
  bVar2 = EventAnimation__DGCODECJJCC((EventAnimation_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if (bVar2) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (IntervalAnimation_o *)
                EventAnimation__AOKIANMEBCH<object>
                          ((KDFMDHADHMD->fields).KOANCCDDBDA,(Il2CppObject *)0x0,
                           Method_KJFPGDFNFCL_AOKIANMEBCH<IntervalAnimation>__);
    if (__this_00 != (IntervalAnimation_o *)0x0) {
      iVar1 = (__this->fields).PHCPDFIBHGH;
      if (((iVar1 == 0) ||
          (iVar3 = IntervalAnimation__NHGGBEACKBD(__this_00,(MethodInfo *)0x0), iVar1 == iVar3)) &&
         ((bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).super.DHKOGAHJNMK,(MethodInfo *)0x0),
          bVar2 || (bVar2 = System_String__op_Equality
                                      ((__this->fields).super.DHKOGAHJNMK,
                                       (__this_00->fields).JIJLBFGKNJK,(MethodInfo *)0x0), bVar2))))
      {
        bVar4 = 1;
      }
      else {
        bVar4 = 0;
      }
      return (bool)(bVar4 ^ (__this->fields).super.GBBHFPBFOPI != false);
    }
  }
  return false;
}


// ===== protected override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x343AAF0]
// EventIntervalStart$$HNIHOIAMDPC @ RVA 0x343AAF0

void EventIntervalStart__HNIHOIAMDPC
               (EventIntervalStart_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  int32_t iVar2;
  
  if ((DAT_045681cc & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508/*"Block"*/);
    FUN_01bab630(&StringLiteral_3160/*"Attack"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_7903/*"Invulnerable"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045681cc = 1;
  }
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,StringLiteral_3160/*"Attack"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 4;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_3508/*"Block"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 5;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_7903/*"Invulnerable"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          (__this->fields).PHCPDFIBHGH = 0;
          return;
        }
        iVar2 = 6;
      }
    }
    (__this->fields).PHCPDFIBHGH = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

