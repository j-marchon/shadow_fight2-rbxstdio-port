// TypeDefIndex 1441
// Namespace: 
// public class PHLKGOCKIGP : BOFEMGGNODC
// Fields:
//   private static string <AGGOFPAGILE>k__BackingField; // 0x0
//   private string CMGDNCLBHCL; // 0x68

// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3188F64]
// PHLKGOCKIGP$$HNIHOIAMDPC @ RVA 0x3188F64

void PHLKGOCKIGP__HNIHOIAMDPC
               (PHLKGOCKIGP_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045669f8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2730/*"ActionID"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045669f8 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_2730/*"ActionID"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).CMGDNCLBHCL;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x3189010]
// PHLKGOCKIGP$$OFPHPMGMCAL @ RVA 0x3189010

System_String_o * PHLKGOCKIGP__OFPHPMGMCAL(PHLKGOCKIGP_o *__this,MethodInfo *method)

{
  return (__this->fields).CMGDNCLBHCL;
}


// ===== private static void IMOJCEFIDEB(string CJNHFNHJHPE)  [RVA 0x3189018]
// PHLKGOCKIGP$$IMOJCEFIDEB @ RVA 0x3189018

void PHLKGOCKIGP__IMOJCEFIDEB(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_045669f9 & 1) == 0) {
    FUN_01bab630(&PHLKGOCKIGP_TypeInfo);
    DAT_045669f9 = 1;
  }
  PHLKGOCKIGP_TypeInfo->static_fields->_AGGOFPAGILE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(PHLKGOCKIGP_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}


// ===== public void .ctor()  [RVA 0x3189070]
// PHLKGOCKIGP$$.ctor @ RVA 0x3189070

void PHLKGOCKIGP___ctor(PHLKGOCKIGP_o *__this,MethodInfo *method)

{
  if ((DAT_045669fa & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045669fa = 1;
  }
  (__this->fields).CMGDNCLBHCL = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static string GCKLIJMKIIK()  [RVA 0x31890C8]
// PHLKGOCKIGP$$GCKLIJMKIIK @ RVA 0x31890C8

System_String_o * PHLKGOCKIGP__GCKLIJMKIIK(MethodInfo *method)

{
  if ((DAT_045669fb & 1) == 0) {
    FUN_01bab630(&PHLKGOCKIGP_TypeInfo);
    DAT_045669fb = 1;
  }
  return PHLKGOCKIGP_TypeInfo->static_fields->_AGGOFPAGILE_k__BackingField;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3189110]
// PHLKGOCKIGP$$MAHFCKJGBPP @ RVA 0x3189110

void PHLKGOCKIGP__MAHFCKJGBPP(PHLKGOCKIGP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  MethodInfo *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_045669fc & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_045669fc = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).CMGDNCLBHCL;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar1,(MethodInfo *)0x0);
  PHLKGOCKIGP__COOGOEJJHMK(pSVar1,method_00);
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static bool COOGOEJJHMK(string JENJDCENCHA)  [RVA 0x318919C]
// PHLKGOCKIGP$$COOGOEJJHMK @ RVA 0x318919C

bool PHLKGOCKIGP__COOGOEJJHMK(System_String_o *JENJDCENCHA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  
  if (DAT_04566ab2 == '\0') {
    FUN_01bab630(&PHLKGOCKIGP_TypeInfo);
    DAT_04566ab2 = '\x01';
  }
  PHLKGOCKIGP_TypeInfo->static_fields->_AGGOFPAGILE_k__BackingField = JENJDCENCHA;
  thunk_FUN_01c20e04(PHLKGOCKIGP_TypeInfo->static_fields,JENJDCENCHA);
  __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    bVar1 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this,10,(MethodInfo *)0x0);
    if (DAT_04566ab2 == '\0') {
      FUN_01bab630(&PHLKGOCKIGP_TypeInfo);
      DAT_04566ab2 = '\x01';
    }
    PHLKGOCKIGP_TypeInfo->static_fields->_AGGOFPAGILE_k__BackingField = (System_String_o *)0x0;
    thunk_FUN_01c20e04(PHLKGOCKIGP_TypeInfo->static_fields,0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

