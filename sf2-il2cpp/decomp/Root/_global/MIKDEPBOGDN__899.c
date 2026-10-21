// TypeDefIndex 899
// Namespace: 
// public class MIKDEPBOGDN : IALJKCECCLB
// Fields:
//   private string JBNGADJBDHB; // 0x40

// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3096750]
// MIKDEPBOGDN$$HNIHOIAMDPC @ RVA 0x3096750

void MIKDEPBOGDN__HNIHOIAMDPC
               (MIKDEPBOGDN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  PICIKPNGDBE_o *__this_00;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045660db & 1) == 0) {
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045660db = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.DKGMKMJDMPC;
  if ((__this_00 != (PICIKPNGDBE_o *)0x0) &&
     (PICIKPNGDBE__HNIHOIAMDPC
                (__this_00,AHDGNOJPPIB,(ILGLOCBJFEG_o *)__this,
                 (__this->fields).super.super.super._MEFGNAIILBJ_k__BackingField,(MethodInfo *)0x0),
     AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).JBNGADJBDHB;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(OLKKAIFGGAK BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x3096818]
// MIKDEPBOGDN$$EPBENPDCBFE @ RVA 0x3096818

bool MIKDEPBOGDN__EPBENPDCBFE
               (MIKDEPBOGDN_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  OLKKAIFGGAK_o *__this_00;
  System_String_o *pSVar3;
  PICIKPNGDBE_o *__this_01;
  
  if ((DAT_045660dc & 1) == 0) {
    FUN_01bab630(&StringLiteral_8775/*"MagicBullet"*/);
    FUN_01bab630(&StringLiteral_10807/*"RaidChargeBullet"*/);
    DAT_045660dc = 1;
  }
  __this_00 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return false;
  }
  pSVar3 = (__this->fields).JBNGADJBDHB;
  if (pSVar3 == (System_String_o *)0x0) goto LAB_0319690c;
  bVar1 = System_String__Equals(pSVar3,StringLiteral_8775/*"MagicBullet"*/,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (OLKKAIFGGAK_o *)0x0) goto LAB_0319690c;
    iVar2 = OLKKAIFGGAK__BAJGPELJMFG(__this_00,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = (__this->fields).JBNGADJBDHB;
    if (pSVar3 == (System_String_o *)0x0) goto LAB_0319690c;
    bVar1 = System_String__Equals(pSVar3,StringLiteral_10807/*"RaidChargeBullet"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    if (__this_00 == (OLKKAIFGGAK_o *)0x0) goto LAB_0319690c;
    iVar2 = OLKKAIFGGAK__POIDJCKLINH(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).super.DKGMKMJDMPC;
  if (__this_01 != (PICIKPNGDBE_o *)0x0) {
    PICIKPNGDBE__CHKGAHCDFJF(__this_01,(MethodInfo *)0x0);
    bVar1 = IALJKCECCLB__KPIJNMIFOGC((IALJKCECCLB_o *)__this,(float)iVar2,(MethodInfo *)0x0);
    return bVar1;
  }
LAB_0319690c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3096910]
// MIKDEPBOGDN$$.ctor @ RVA 0x3096910

void MIKDEPBOGDN___ctor(MIKDEPBOGDN_o *__this,MethodInfo *method)

{
  IALJKCECCLB___ctor((IALJKCECCLB_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,10,(MethodInfo *)0x0);
  return;
}

