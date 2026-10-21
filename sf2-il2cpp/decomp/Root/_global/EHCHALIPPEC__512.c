// TypeDefIndex 512
// Namespace: 
// public class EHCHALIPPEC : NKPJLEMPIKD
// Fields:
//   private int <FNMNJKAOMGH>k__BackingField; // 0x30

// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x358F630]
// EHCHALIPPEC$$HNIHOIAMDPC @ RVA 0x358F630

void EHCHALIPPEC__HNIHOIAMDPC
               (EHCHALIPPEC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_04568d68 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d68 = 1;
  }
  NKPJLEMPIKD__HNIHOIAMDPC((NKPJLEMPIKD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      iVar1 = HDBNGIBFEBA__GMINMDIFAIE((HDBNGIBFEBA_o *)__this,KGLJICLJHEL,(MethodInfo *)0x0);
      (__this->fields)._FNMNJKAOMGH_k__BackingField = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void PFCOLJPKPHE(int CJNHFNHJHPE)  [RVA 0x358F6E4]
// EHCHALIPPEC$$PFCOLJPKPHE @ RVA 0x358F6E4

void EHCHALIPPEC__PFCOLJPKPHE(EHCHALIPPEC_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FNMNJKAOMGH_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x358F6EC]
// EHCHALIPPEC$$.ctor @ RVA 0x358F6EC

void EHCHALIPPEC___ctor(EHCHALIPPEC_o *__this,MethodInfo *method)

{
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(EHCHALIPPEC IBKIPBJJCPG)  [RVA 0x358F6F4]
// EHCHALIPPEC$$.ctor @ RVA 0x358F6F4

void EHCHALIPPEC___ctor(EHCHALIPPEC_o *__this,EHCHALIPPEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(NKPJLEMPIKD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (EHCHALIPPEC_o *)0x0) {
    (__this->fields)._FNMNJKAOMGH_k__BackingField =
         (IBKIPBJJCPG->fields)._FNMNJKAOMGH_k__BackingField;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int PDEDOGADOIO()  [RVA 0x358F728]
// EHCHALIPPEC$$PDEDOGADOIO @ RVA 0x358F728

int32_t EHCHALIPPEC__PDEDOGADOIO(EHCHALIPPEC_o *__this,MethodInfo *method)

{
  return (__this->fields)._FNMNJKAOMGH_k__BackingField;
}


// ===== public override bool EPBENPDCBFE(NKPJLEMPIKD.GBBCKIANDCN PHCGJGCHKCM)  [RVA 0x358F730]
// EHCHALIPPEC$$EPBENPDCBFE @ RVA 0x358F730

bool EHCHALIPPEC__EPBENPDCBFE
               (EHCHALIPPEC_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  OLKKAIFGGAK_o *pOVar4;
  
  bVar2 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  if (bVar2) {
    if ((PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) ||
       (pOVar4 = (PHCGJGCHKCM->fields).EMCFCMFGPME, pOVar4 == (OLKKAIFGGAK_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pOVar4->fields).LGKFKNGIPDM.fields,(MethodInfo *)0x0);
    iVar1 = (__this->fields)._FNMNJKAOMGH_k__BackingField;
    bVar2 = iVar1 == 0 || iVar1 == iVar3;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

