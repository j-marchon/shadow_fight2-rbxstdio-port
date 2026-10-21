// TypeDefIndex 1315
// Namespace: 
// public class LKPNOBFEAKD
// Fields:
//   public string JIJLBFGKNJK; // 0x10
//   public string BGHFADDGPAD; // 0x18
//   public string JMCKAHCGMDD; // 0x20
//   public string BNGDONJEHMH; // 0x28
//   public string GNCBIPJFEGB; // 0x30
//   public string HMKKKKOPIJH; // 0x38
//   public string BDJGFOGHDKK; // 0x40
//   public string KMNDDMGAHID; // 0x48
//   public string EAEAFBCHFML; // 0x50
//   public LKPNOBFEAKD.BGHDHAPCGCP OADCIDFJCOE; // 0x58
//   public LKPNOBFEAKD.CCEDNJMAAIN DPLMPLDJKKB; // 0x5C
//   public float JAICMIMBIOA; // 0x60
//   public int KAFNDKOPMDH; // 0x64
//   public bool ODIDKGCHDKL; // 0x68
//   public NGJHCIGFLFD KPFGHBEKJIM; // 0x70
//   public PJNPKJMMNDI JJIJILBBGMJ; // 0x78

// ===== public void ODPPMDEEHEA(string KGLJICLJHEL)  [RVA 0x31594BC]
// LKPNOBFEAKD$$ODPPMDEEHEA @ RVA 0x31594BC

void LKPNOBFEAKD__ODPPMDEEHEA(LKPNOBFEAKD_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_0456685a & 1) == 0) {
    FUN_01bab630(&StringLiteral_11431/*"Round"*/);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    DAT_0456685a = 1;
  }
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_11431/*"Round"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields).OADCIDFJCOE = 0;
      return;
    }
    iVar2 = 2;
  }
  (__this->fields).OADCIDFJCOE = iVar2;
  return;
}


// ===== public void MLJDPILPJDE(XmlNode AHDGNOJPPIB)  [RVA 0x315955C]
// LKPNOBFEAKD$$MLJDPILPJDE @ RVA 0x315955C

void LKPNOBFEAKD__MLJDPILPJDE
               (LKPNOBFEAKD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  NGJHCIGFLFD_o *__this_00;
  
  __this_00 = (__this->fields).KPFGHBEKJIM;
  if (__this_00 != (NGJHCIGFLFD_o *)0x0) {
    (__this_00->fields).BGHFADDGPAD = 2;
    NGJHCIGFLFD__NDDOJNBEGNE(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ENMHDGDKLJD()  [RVA 0x3159580]
// LKPNOBFEAKD$$ENMHDGDKLJD @ RVA 0x3159580

void LKPNOBFEAKD__ENMHDGDKLJD(LKPNOBFEAKD_o *__this,MethodInfo *method)

{
  NGJHCIGFLFD_o *pNVar1;
  
  pNVar1 = (__this->fields).KPFGHBEKJIM;
  if (pNVar1 != (NGJHCIGFLFD_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03259598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._5_ENMHDGDKLJD.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._5_ENMHDGDKLJD.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool BNNIDPDMOIL(IFBJEEAJGEO AHEFOIOKDOK)  [RVA 0x31595A0]
// LKPNOBFEAKD$$BNNIDPDMOIL @ RVA 0x31595A0

bool LKPNOBFEAKD__BNNIDPDMOIL(LKPNOBFEAKD_o *__this,IFBJEEAJGEO_o *AHEFOIOKDOK,MethodInfo *method)

{
  undefined1 uVar1;
  NGJHCIGFLFD_o *pNVar2;
  
  pNVar2 = (__this->fields).KPFGHBEKJIM;
  if (pNVar2 != (NGJHCIGFLFD_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032595b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(pNVar2->klass->vtable)._6_EPBENPDCBFE.methodPtr)
                      (pNVar2,AHEFOIOKDOK,(pNVar2->klass->vtable)._6_EPBENPDCBFE.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CJDAFEOKEMC()  [RVA 0x31595C0]
// LKPNOBFEAKD$$CJDAFEOKEMC @ RVA 0x31595C0

void LKPNOBFEAKD__CJDAFEOKEMC(LKPNOBFEAKD_o *__this,MethodInfo *method)

{
  (__this->fields).KAFNDKOPMDH = 0;
  return;
}


// ===== public bool GJECEIMLADG(DNELIPCHKLK DBIAAJNKHLH)  [RVA 0x31595C8]
// LKPNOBFEAKD$$GJECEIMLADG @ RVA 0x31595C8

bool LKPNOBFEAKD__GJECEIMLADG(LKPNOBFEAKD_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  bool bVar1;
  PJNPKJMMNDI_o *__this_00;
  
  __this_00 = (__this->fields).JJIJILBBGMJ;
  if (__this_00 != (PJNPKJMMNDI_o *)0x0) {
    bVar1 = PJNPKJMMNDI__JOLFKDDINGF(__this_00,DBIAAJNKHLH,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x31595E4]
// LKPNOBFEAKD$$.ctor @ RVA 0x31595E4

void LKPNOBFEAKD___ctor(LKPNOBFEAKD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  NGJHCIGFLFD_o *pNVar2;
  NGJHCIGFLFD_o **ppNVar3;
  PJNPKJMMNDI_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  PJNPKJMMNDI_o **ppPVar7;
  float fVar8;
  
  if ((DAT_0456685b & 1) == 0) {
    FUN_01bab630(&NGJHCIGFLFD_TypeInfo);
    FUN_01bab630(&PJNPKJMMNDI_TypeInfo);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_2968/*"Animation"*/);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_8881/*"MaxDifficulty"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_9064/*"MinDifficulty"*/);
    FUN_01bab630(&StringLiteral_4838/*"CounterSpan"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_6313/*"Fight2"*/);
    FUN_01bab630(&StringLiteral_9866/*"OnFightEnd"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_6359/*"FightType"*/);
    DAT_0456685b = 1;
  }
  pNVar2 = (NGJHCIGFLFD_o *)thunk_FUN_01bda818(NGJHCIGFLFD_TypeInfo);
  NGJHCIGFLFD___ctor(pNVar2,(MethodInfo *)0x0);
  ppNVar3 = &(__this->fields).KPFGHBEKJIM;
  *ppNVar3 = pNVar2;
  thunk_FUN_01c20e04(ppNVar3,pNVar2);
  __this_00 = (PJNPKJMMNDI_o *)thunk_FUN_01bda818(PJNPKJMMNDI_TypeInfo);
  PJNPKJMMNDI___ctor(__this_00,(MethodInfo *)0x0);
  ppPVar7 = &(__this->fields).JJIJILBBGMJ;
  *ppPVar7 = __this_00;
  thunk_FUN_01c20e04(ppPVar7,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).JIJLBFGKNJK = pSVar6;
      thunk_FUN_01c20e04();
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
        (__this->fields).JAICMIMBIOA = fVar8;
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_2968/*"Animation"*/,(MethodInfo *)0x0);
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          (__this->fields).BNGDONJEHMH = pSVar6;
          thunk_FUN_01c20e04();
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_14870/*"Weapon"*/,(MethodInfo *)0x0);
            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            (__this->fields).GNCBIPJFEGB = pSVar6;
            thunk_FUN_01c20e04();
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
              pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              (__this->fields).HMKKKKOPIJH = pSVar6;
              thunk_FUN_01c20e04();
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar4,StringLiteral_6313/*"Fight2"*/,(MethodInfo *)0x0);
                pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                (__this->fields).BDJGFOGHDKK = pSVar6;
                thunk_FUN_01c20e04();
                pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar4,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
                  pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                  (__this->fields).BGHFADDGPAD = pSVar6;
                  thunk_FUN_01c20e04();
                    /* try { // try from 03259920 to 03359a9f has its CatchHandler @ 03259920
                       catch() { ... } // from try @ 03259920 with catch @ 03259920
                       catch() { ... } // from try @ 03259bbc with catch @ 03259920
                       catch() { ... } // from try @ 03259be8 with catch @ 03259920
                       catch() { ... } // from try @ 03259c8c with catch @ 03259920
                       catch() { ... } // from try @ 03259cd8 with catch @ 03259920
                       catch() { ... } // from try @ 03259d1c with catch @ 03259920 */
                  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar4,StringLiteral_6359/*"FightType"*/,(MethodInfo *)0x0);
                    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    (__this->fields).JMCKAHCGMDD = pSVar6;
                    thunk_FUN_01c20e04();
                    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar4,StringLiteral_8881/*"MaxDifficulty"*/,(MethodInfo *)0x0);
                      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                      (__this->fields).KMNDDMGAHID = pSVar6;
                      thunk_FUN_01c20e04();
                      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar4,StringLiteral_9064/*"MinDifficulty"*/,(MethodInfo *)0x0);
                        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                        (__this->fields).EAEAFBCHFML = pSVar6;
                        thunk_FUN_01c20e04();
                        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar4,StringLiteral_9866/*"OnFightEnd"*/,(MethodInfo *)0x0);
                          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar5,false,(MethodInfo *)0x0);
                          (__this->fields).KAFNDKOPMDH = 0;
                          (__this->fields).ODIDKGCHDKL = bVar1;
                          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                             (AHDGNOJPPIB,
                                              (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                             );
                          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar4,StringLiteral_4838/*"CounterSpan"*/,(MethodInfo *)0x0);
                            method_00 = (MethodInfo *)0x0;
                            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM
                                               (pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                            LKPNOBFEAKD__ODPPMDEEHEA(__this,pSVar6,method_00);
                            LKPNOBFEAKD__EOCKLMCDLEK(__this,AHDGNOJPPIB,method_00);
                            pNVar2 = (__this->fields).KPFGHBEKJIM;
                            if (pNVar2 != (NGJHCIGFLFD_o *)0x0) {
                              (pNVar2->fields).BGHFADDGPAD = 2;
                    /* try { // try from 03259aa0 to 03359aa7 has its CatchHandler @ 03259cc4 */
                              CounterConditionsParser__KEKELCCGNCE
                                        (AHDGNOJPPIB,pNVar2,*ppPVar7,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EOCKLMCDLEK(XmlNode AHDGNOJPPIB)  [RVA 0x3159ABC]
// LKPNOBFEAKD$$EOCKLMCDLEK @ RVA 0x3159ABC

void LKPNOBFEAKD__EOCKLMCDLEK
               (LKPNOBFEAKD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *a;
  int32_t iVar4;
  
                    /* try { // try from 03259ac0 to 03359acb has its CatchHandler @ 03259cbc */
  if ((DAT_0456685c & 1) == 0) {
                    /* try { // try from 03259ad8 to 03359ae3 has its CatchHandler @ 03259ca8 */
    FUN_01bab630(&StringLiteral_10933/*"RaidMode"*/);
                    /* try { // try from 03259aec to 03359af3 has its CatchHandler @ 03259ca4 */
    FUN_01bab630(&StringLiteral_5622/*"EclipseMode"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
                    /* try { // try from 03259b04 to 03359b07 has its CatchHandler @ 03259ca0 */
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_0456685c = 1;
  }
                    /* try { // try from 03259b14 to 03359b1b has its CatchHandler @ 03259cac */
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 03259b30 to 03359b37 has its CatchHandler @ 03259bd4 */
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_10933/*"RaidMode"*/,(MethodInfo *)0x0);
                    /* try { // try from 03259b48 to 03359b57 has its CatchHandler @ 03259bd0 */
    bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
    if (bVar1) {
      iVar4 = 2;
    }
    else {
                    /* try { // try from 03259b60 to 03359b6b has its CatchHandler @ 03259bc8 */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03259bec;
                    /* try { // try from 03259b70 to 03359b77 has its CatchHandler @ 03259bcc */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5622/*"EclipseMode"*/,(MethodInfo *)0x0);
                    /* try { // try from 03259b84 to 03359b8b has its CatchHandler @ 03259bc4 */
      a = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03259b9c to 03359ba3 has its CatchHandler @ 03259cc0 */
      bVar1 = System_String__op_Equality(a,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields).DPLMPLDJKKB = 0;
        return;
      }
                    /* try { // try from 03259bb8 to 03359bbb has its CatchHandler @ 03259bc0 */
                    /* try { // try from 03259bbc to 03359be3 has its CatchHandler @ 03259920 */
                    /* catch() { ... } // from try @ 03259bb8 with catch @ 03259bc0 */
                    /* catch() { ... } // from try @ 03259b84 with catch @ 03259bc4 */
                    /* catch() { ... } // from try @ 03259b60 with catch @ 03259bc8 */
      bVar1 = System_String__op_Equality(a,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03259b70 with catch @ 03259bcc */
      if (bVar1) {
                    /* catch() { ... } // from try @ 03259b48 with catch @ 03259bd0 */
        iVar4 = 1;
                    /* catch() { ... } // from try @ 03259b30 with catch @ 03259bd4 */
      }
      else {
        iVar4 = 3;
      }
    }
    (__this->fields).DPLMPLDJKKB = iVar4;
                    /* try { // try from 03259be4 to 03359be7 has its CatchHandler @ 03259c90 */
                    /* try { // try from 03259be8 to 03359c5b has its CatchHandler @ 03259920 */
    return;
  }
LAB_03259bec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

