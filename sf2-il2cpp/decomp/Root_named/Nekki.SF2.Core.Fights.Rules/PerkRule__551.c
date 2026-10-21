// Original name: Nekki.SF2.Core.Fights.Rules.PerkRule  (obfuscated LNMCGOLABEK)
// TypeDefIndex 551
// Namespace: 
// public class PerkRule : InFightRule
// Fields:
//   private PerkInfoItem LENFGEAJDMN; // 0x70

// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x35A889C]
// PerkRule$$.ctor @ RVA 0x35A889C

void PerkRule___ctor(PerkRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  PerkInfoItem_o **ppHVar1;
  
  InFightRule___ctor((InFightRule_o *)__this,0x18,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,
                     (MethodInfo *)0x0);
  ppHVar1 = &(__this->fields).LENFGEAJDMN;
  *ppHVar1 = (PerkInfoItem_o *)0x0;
  thunk_FUN_01c20e04(ppHVar1,0);
                    /* WARNING: Could not recover jumptable at 0x036a88e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x35A88EC]
// PerkRule$$HNIHOIAMDPC @ RVA 0x35A88EC

void PerkRule__HNIHOIAMDPC
               (PerkRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *KGLJICLJHEL;
  FOKJBDHLIMG_o *__this_01;
  PerkInfoItem_o *pHVar1;
  System_Xml_XmlNode_o *GHKNNCLBPEO;
  System_Xml_XmlNode_o *KDMPIDEEPMP;
  PerkInfoItem_o **ppHVar2;
  
  if ((DAT_04568e2b & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_11030/*"RatingEvaluation"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568e2b = 1;
  }
  Rule__GAJGEHFDCJE((Rule_o *)__this,AHDGNOJPPIB,method);
  Rule__FEEFOMDIENJ((Rule_o *)__this,AHDGNOJPPIB,method);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GameUtils_TypeInfo);
      }
      __this_01 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
      if (__this_01 != (FOKJBDHLIMG_o *)0x0) {
        pHVar1 = FOKJBDHLIMG__JMMDGEOBMOC(__this_01,KGLJICLJHEL,(MethodInfo *)0x0);
        ppHVar2 = &(__this->fields).LENFGEAJDMN;
        *ppHVar2 = pHVar1;
        thunk_FUN_01c20e04(ppHVar2,pHVar1);
        pHVar1 = *ppHVar2;
        if (pHVar1 != (PerkInfoItem_o *)0x0) {
          GHKNNCLBPEO = (System_Xml_XmlNode_o *)
                        (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                  (AHDGNOJPPIB,StringLiteral_11876/*"Set"*/,
                                   (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          KDMPIDEEPMP = (System_Xml_XmlNode_o *)
                        (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                  (AHDGNOJPPIB,StringLiteral_11030/*"RatingEvaluation"*/,
                                   (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          pHVar1 = PerkInfoItem__FAOBHLCDKJI(pHVar1,GHKNNCLBPEO,KDMPIDEEPMP,(MethodInfo *)0x0);
          *ppHVar2 = pHVar1;
          thunk_FUN_01c20e04(ppHVar2,pHVar1);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PerkInfoItem LNGFDKLLGCL()  [RVA 0x35A8AB0]
// PerkRule$$LNGFDKLLGCL @ RVA 0x35A8AB0

PerkInfoItem_o * PerkRule__LNGFDKLLGCL(PerkRule_o *__this,MethodInfo *method)

{
  return (__this->fields).LENFGEAJDMN;
}


// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x35A8AB8]
// PerkRule$$GOGPCNMIJOB @ RVA 0x35A8AB8

InFightRule_o * PerkRule__GOGPCNMIJOB(PerkRule_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  PerkRule_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04568e2c & 1) == 0) {
    FUN_01bab630(&PerkRule_TypeInfo);
    DAT_04568e2c = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (PerkRule_o *)thunk_FUN_01bda818(PerkRule_TypeInfo,method);
    PerkRule___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (PerkRule_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
                    /* try { // try from 036a8b30 to 037a8c27 has its CatchHandler @ 036a8b30
                       catch() { ... } // from try @ 036a8b30 with catch @ 036a8b30
                       catch() { ... } // from try @ 036a8c4c with catch @ 036a8b30
                       catch() { ... } // from try @ 036a8c98 with catch @ 036a8b30
                       catch() { ... } // from try @ 036a8cc0 with catch @ 036a8b30
                       catch() { ... } // from try @ 036a8d00 with catch @ 036a8b30 */
      return (InFightRule_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

