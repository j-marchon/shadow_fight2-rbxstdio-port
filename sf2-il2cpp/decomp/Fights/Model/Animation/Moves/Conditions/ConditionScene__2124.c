// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionScene  (obfuscated LFDEBALJBHC)
// TypeDefIndex 2124
// Namespace: 
// public class ConditionScene : ConditionAnimation
// Fields:
//   private DNKALCKOJKC OCJFODFLMPL; // 0x28

// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x32CE03C]
// ConditionScene$$EPBENPDCBFE @ RVA 0x32CE03C

bool ConditionScene__EPBENPDCBFE(ConditionScene_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    return ((AHEFOIOKDOK->fields).HLPLAKCBINK == (__this->fields).OCJFODFLMPL) !=
           ((__this->fields).super.GBBHFPBFOPI != false);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private DNKALCKOJKC IHLKNJDGOMK(string KGLJICLJHEL)  [RVA 0x32CE070]
// ConditionScene$$IHLKNJDGOMK @ RVA 0x32CE070

int32_t ConditionScene__IHLKNJDGOMK
                  (ConditionScene_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  
                    /* try { // try from 033ce078 to 034ce1ab has its CatchHandler @ 033ce078
                       catch() { ... } // from try @ 033ce078 with catch @ 033ce078
                       catch() { ... } // from try @ 033ce1b4 with catch @ 033ce078
                       catch() { ... } // from try @ 033ce22c with catch @ 033ce078
                       catch() { ... } // from try @ 033ce26c with catch @ 033ce078 */
  if ((DAT_04567536 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12023/*"ShopHelm"*/);
    FUN_01bab630(&StringLiteral_12001/*"ShopArmor"*/);
    FUN_01bab630(&StringLiteral_12022/*"ShopFree"*/);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_12028/*"ShopMagic"*/);
    FUN_01bab630(&StringLiteral_10491/*"Profile"*/);
    FUN_01bab630(&StringLiteral_12053/*"ShopWeapon"*/);
    FUN_01bab630(&StringLiteral_12029/*"ShopMissile"*/);
    FUN_01bab630(&StringLiteral_12042/*"ShopRuby"*/);
    FUN_01bab630(&StringLiteral_12041/*"ShopRaidItemPack"*/);
    DAT_04567536 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(KGLJICLJHEL,(MethodInfo *)0x0);
  if (uVar2 < 0x8ce13ca6) {
    if (uVar2 < 0x2c6b1c98) {
      if (uVar2 == 0x14752a48) {
                    /* try { // try from 033ce278 to 034ce27f has its CatchHandler @ 033ce280 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ce264 with catch @ 033ce280
                       catch(type#2 @ 00000000) { ... } // from try @ 033ce278 with catch @ 033ce280
                        */
        bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12028/*"ShopMagic"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 5;
        }
      }
      else if ((uVar2 == 0x2c6b1c97) &&
              (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12022/*"ShopFree"*/,(MethodInfo *)0x0)
              , bVar1)) {
        return 7;
      }
    }
    else if (uVar2 == 0x8ce13ca5) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12053/*"ShopWeapon"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 2;
      }
    }
    else if (uVar2 == 0x34dbdd85) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12023/*"ShopHelm"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 3;
      }
    }
    else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ce1ac with catch @ 033ce210
                        */
      if ((uVar2 == 0x57fc3f87) &&
         (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12041/*"ShopRaidItemPack"*/,(MethodInfo *)0x0),
         bVar1)) {
        return 8;
      }
    }
  }
  else if (uVar2 < 0xcd17328f) {
    if (uVar2 == 0xbfb47077) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12029/*"ShopMissile"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 4;
      }
    }
    else {
                    /* try { // try from 033ce1ac to 034ce1b3 has its CatchHandler @ 033ce210 */
                    /* try { // try from 033ce1b4 to 034ce227 has its CatchHandler @ 033ce078 */
      if ((uVar2 == 0xcd17328e) &&
         (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_10491/*"Profile"*/,(MethodInfo *)0x0),
         bVar1)) {
        return 9;
      }
    }
  }
  else {
                    /* try { // try from 033ce228 to 034ce22b has its CatchHandler @ 033ce254 */
                    /* try { // try from 033ce22c to 034ce263 has its CatchHandler @ 033ce078 */
    if (uVar2 == 0xcd184169) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 10;
      }
    }
    else if (uVar2 == 0xf8ea2b99) {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12042/*"ShopRuby"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 6;
      }
    }
    else {
                    /* catch() { ... } // from try @ 033ce228 with catch @ 033ce254 */
                    /* try { // try from 033ce264 to 034ce26b has its CatchHandler @ 033ce280 */
      if ((uVar2 == 0xfea4ae60) &&
         (bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12001/*"ShopArmor"*/,(MethodInfo *)0x0),
         bVar1)) {
        return 1;
      }
    }
  }
  return 0;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x32CE35C]
// ConditionScene$$.ctor @ RVA 0x32CE35C

void ConditionScene___ctor(ConditionScene_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  ConditionScene_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04567537 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567537 = 1;
  }
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,0x12,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      __this_01 = (ConditionScene_o *)
                  EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      iVar1 = ConditionScene__IHLKNJDGOMK(__this_01,(System_String_o *)__this_01,method_00);
      (__this->fields).OCJFODFLMPL = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

