// TypeDefIndex 1866
// Namespace: 
// public class JLHAELMHHJL : BOFEMGGNODC
// Fields:
//   private string MOMNHMKOKAN; // 0x68
//   private bool ANDGLMBKCKK; // 0x70
//   private LCKCDEKNLOA FNOJIPMNDPJ; // 0x78
//   private LCKCDEKNLOA FNGNIKNIEMM; // 0x80

// ===== public void .ctor()  [RVA 0x324A5E8]
// JLHAELMHHJL$$.ctor @ RVA 0x324A5E8

void JLHAELMHHJL___ctor(JLHAELMHHJL_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045670eb & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    DAT_045670eb = 1;
    method = extraout_x1;
  }
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).FNOJIPMNDPJ;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).FNGNIKNIEMM;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x324A678]
// JLHAELMHHJL$$PKIFMKGDJJN @ RVA 0x324A678

void JLHAELMHHJL__PKIFMKGDJJN(JLHAELMHHJL_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  
  pLVar1 = (__this->fields).FNOJIPMNDPJ;
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).FNGNIKNIEMM;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x324A6A8]
// JLHAELMHHJL$$OFPHPMGMCAL @ RVA 0x324A6A8

System_String_o * JLHAELMHHJL__OFPHPMGMCAL(JLHAELMHHJL_o *__this,MethodInfo *method)

{
  return (__this->fields).MOMNHMKOKAN;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x324A6B0]
// JLHAELMHHJL$$HNIHOIAMDPC @ RVA 0x324A6B0

void JLHAELMHHJL__HNIHOIAMDPC
               (JLHAELMHHJL_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_Xml_XmlNode_o *NPLGCIFGFOK_00;
  System_Xml_XmlNode_o *NPLGCIFGFOK_01;
  System_Action_o *pSVar5;
  LCKCDEKNLOA_o *pLVar6;
  
  if ((DAT_045670ec & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_JLHAELMHHJL_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_5414/*"DisplayLootEffect"*/);
    FUN_01bab630(&StringLiteral_12524/*"Success"*/);
    FUN_01bab630(&StringLiteral_10072/*"PackName"*/);
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045670ec = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_10072/*"PackName"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).MOMNHMKOKAN = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_5414/*"DisplayLootEffect"*/,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
        (__this->fields).ANDGLMBKCKK = bVar1;
        NPLGCIFGFOK_00 =
             (System_Xml_XmlNode_o *)
             (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                       (NPLGCIFGFOK,StringLiteral_12524/*"Success"*/,
                        (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
        NPLGCIFGFOK_01 =
             (System_Xml_XmlNode_o *)
             (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                       (NPLGCIFGFOK,StringLiteral_5840/*"Error"*/,
                        (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
        pLVar6 = (__this->fields).FNOJIPMNDPJ;
        pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        BOFEMGGNODC__KIBBEDPGMBB
                  ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_00,pLVar6,pSVar5,(MethodInfo *)0x0);
        pLVar6 = (__this->fields).FNGNIKNIEMM;
        pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        BOFEMGGNODC__KIBBEDPGMBB
                  ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_01,pLVar6,pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDJAJHFFPKP()  [RVA 0x324A8B4]
// JLHAELMHHJL$$NDJAJHFFPKP @ RVA 0x324A8B4

void JLHAELMHHJL__NDJAJHFFPKP(JLHAELMHHJL_o *__this,MethodInfo *method)

{
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void PHNBAHHFBIE(BKKPAKHJDKB IMMNELPBGIF)  [RVA 0x324A8BC]
// JLHAELMHHJL$$PHNBAHHFBIE @ RVA 0x324A8BC

void JLHAELMHHJL__PHNBAHHFBIE(JLHAELMHHJL_o *__this,BKKPAKHJDKB_o *IMMNELPBGIF,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  ADJEBFOPFFF_o *__this_01;
  MAEAAOFOANA_o *__this_02;
  
  if ((DAT_045670ed & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MAEAAOFOANA_TypeInfo);
    DAT_045670ed = 1;
  }
  if ((IMMNELPBGIF == (BKKPAKHJDKB_o *)0x0) || ((IMMNELPBGIF->fields).HHJIJKJCEOF != 0)) {
    __this_00 = (__this->fields).FNGNIKNIEMM;
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if (__this_01 == (ADJEBFOPFFF_o *)0x0) goto LAB_0334a9a4;
    ADJEBFOPFFF__AEADCLCKCEL(__this_01,(IMMNELPBGIF->fields).EBJBJCPBFLE,false,(MethodInfo *)0x0);
    if ((__this->fields).ANDGLMBKCKK != false) {
      __this_02 = (MAEAAOFOANA_o *)thunk_FUN_01bda818(MAEAAOFOANA_TypeInfo);
      MAEAAOFOANA___ctor(__this_02,(MethodInfo *)0x0);
      if (__this_02 == (MAEAAOFOANA_o *)0x0) goto LAB_0334a9a4;
      (__this_02->fields).EBBNAOLNKGD = (IMMNELPBGIF->fields).EBJBJCPBFLE;
      thunk_FUN_01c20e04();
      JJPNLEPEAFM__EFLNJLIDLEF(__this_02,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).FNOJIPMNDPJ;
  }
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
LAB_0334a9a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x324A9A8]
// JLHAELMHHJL$$MAHFCKJGBPP @ RVA 0x324A9A8

void JLHAELMHHJL__MAHFCKJGBPP(JLHAELMHHJL_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar1;
  ADJEBFOPFFF_o *__this_02;
  System_String_o *LFKENPEPPAL;
  System_Action_BKKPAKHJDKB__o *BPCGDKENMAE;
  
  if ((DAT_045670ee & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_JLHAELMHHJL_PHNBAHHFBIE__);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    DAT_045670ee = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar1 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar1 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar1,AAJBIMFNMBB);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).MOMNHMKOKAN,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
    if (__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      LFKENPEPPAL = (System_String_o *)
                    (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      BPCGDKENMAE = (System_Action_BKKPAKHJDKB__o *)
                    thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (ADJEBFOPFFF_o *)0x0) {
        ADJEBFOPFFF__EFGGOJMGCLK(__this_02,LFKENPEPPAL,BPCGDKENMAE,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

