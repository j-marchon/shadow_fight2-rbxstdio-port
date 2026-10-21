// Original name: Nekki.SF2.Core.Utils.InitSettings  (obfuscated DBIINAFCKME)
// TypeDefIndex 1616
// Namespace: 
// public class InitSettings : CIOBNDOOGIM
// Fields:
//   private XmlNode DMLGJFCNNJF; // 0x18
//   private string MIGGLEOLMPE; // 0x20
//   private string KFACILDAOFB; // 0x28
//   private string FONAMAFAAGN; // 0x30
//   private string MDJHHDCLEJA; // 0x38
//   private string GIENMHHFCNE; // 0x40
//   private int NFLCPBJPAML; // 0x48
//   private bool LKBMEDFBJDE; // 0x4C
//   private bool APFBMPHNOIA; // 0x4D
//   private bool HOPPHJGFHEB; // 0x4E
//   private bool PJMLKOOPHJN; // 0x4F
//   private Nullable<OMOGNOHGLGJ> KIBLKFIDJIK; // 0x50
//   private IKDJCPOJFNM ABPFGPIHPEA; // 0x58
//   private string MEMLDPNJDBK; // 0x60
//   private int GLNNPKDAIPI; // 0x68
//   private long ELFHKFNFIPL; // 0x70

// ===== protected override void GDCHAJOJGBH()  [RVA 0x31BA9A8]
// InitSettings$$GDCHAJOJGBH @ RVA 0x31BA9A8

void InitSettings__GDCHAJOJGBH(InitSettings_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlDocument_o *EKEMDOEAFHP;
  System_String_o *CCKJFMILHLC;
  
  if ((DAT_04566bd8 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566bd8 = 1;
  }
  CIOBNDOOGIM__GDCHAJOJGBH((CIOBNDOOGIM_o *)__this,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).DMLGJFCNNJF;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    EKEMDOEAFHP = (System_Xml_XmlDocument_o *)
                  (*(pSVar1->klass->vtable)._17_get_OwnerDocument.methodPtr)
                            (pSVar1,(pSVar1->klass->vtable)._17_get_OwnerDocument.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    CCKJFMILHLC = NLPJLHOEAOE__EEPEGMMLEMA((MethodInfo *)0x0);
    GIAMPEGMNHE__LFKDDMKHGEA(EKEMDOEAFHP,CCKJFMILHLC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MLDEHFFGJDP(string KGLJICLJHEL, string CJNHFNHJHPE)  [RVA 0x31BAA3C]
// InitSettings$$MLDEHFFGJDP @ RVA 0x31BAA3C

void InitSettings__MLDEHFFGJDP
               (InitSettings_o *__this,System_String_o *KGLJICLJHEL,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
  if ((DAT_04566bd9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566bd9 = 1;
  }
  pSVar2 = (__this->fields).DMLGJFCNNJF;
  pSVar1 = StringLiteral_1/*""*/;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    pSVar1 = CJNHFNHJHPE;
  }
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = (__this->fields).DMLGJFCNNJF;
    }
    else {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar3,KGLJICLJHEL,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).DMLGJFCNNJF;
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        if (((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
            (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
            pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) ||
           (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,KGLJICLJHEL,(MethodInfo *)0x0),
           pSVar4 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_032baae4;
        goto LAB_032bab00;
      }
    }
    pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(pSVar2,KGLJICLJHEL,(MethodInfo *)0x0);
    if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
LAB_032bab00:
      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                (pSVar4,pSVar1,(pSVar4->klass->vtable)._10_set_Value.method);
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_032baae4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ECGONLPHHHB()  [RVA 0x31BAB2C]
// InitSettings$$ECGONLPHHHB @ RVA 0x31BAB2C

bool InitSettings__ECGONLPHHHB(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).PJMLKOOPHJN;
}


// ===== public void GGPGBMMEIDN(bool CJNHFNHJHPE)  [RVA 0x31BAB34]
// InitSettings$$GGPGBMMEIDN @ RVA 0x31BAB34

void InitSettings__GGPGBMMEIDN(InitSettings_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields).LKBMEDFBJDE != CJNHFNHJHPE) {
    (__this->fields).LKBMEDFBJDE = CJNHFNHJHPE;
  }
  return;
}


// ===== public bool PHHLJIANPHM()  [RVA 0x31BAB4C]
// InitSettings$$PHHLJIANPHM @ RVA 0x31BAB4C

bool InitSettings__PHHLJIANPHM(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).LKBMEDFBJDE;
}


// ===== public void BNINMLDPBFB(string CJNHFNHJHPE)  [RVA 0x31BAB54]
// InitSettings$$BNINMLDPBFB @ RVA 0x31BAB54

void InitSettings__BNINMLDPBFB(InitSettings_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  
  ppSVar2 = &(__this->fields).KFACILDAOFB;
  bVar1 = System_String__op_Equality(*ppSVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  *ppSVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar2,CJNHFNHJHPE);
  return;
}


// ===== public void PMADIGCJBBL(string CJNHFNHJHPE)  [RVA 0x31BAB98]
// InitSettings$$PMADIGCJBBL @ RVA 0x31BAB98

void InitSettings__PMADIGCJBBL(InitSettings_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  
  ppSVar2 = &(__this->fields).FONAMAFAAGN;
  bVar1 = System_String__op_Equality(*ppSVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  *ppSVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar2,CJNHFNHJHPE);
  return;
}


// ===== public string ODMKGAFGIFN()  [RVA 0x31BABDC]
// InitSettings$$ODMKGAFGIFN @ RVA 0x31BABDC

System_String_o * InitSettings__ODMKGAFGIFN(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).FONAMAFAAGN;
}


// ===== public int FHAIJGFALGD()  [RVA 0x31BABE4]
// InitSettings$$FHAIJGFALGD @ RVA 0x31BABE4

int32_t InitSettings__FHAIJGFALGD(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).GLNNPKDAIPI;
}


// ===== public string PLIMHAKLPPC()  [RVA 0x31BABEC]
// InitSettings$$PLIMHAKLPPC @ RVA 0x31BABEC

System_String_o * InitSettings__PLIMHAKLPPC(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).MDJHHDCLEJA;
}


// ===== public void HOLCLLCPNBD(string CJNHFNHJHPE)  [RVA 0x31BABF4]
// InitSettings$$HOLCLLCPNBD @ RVA 0x31BABF4

void InitSettings__HOLCLLCPNBD(InitSettings_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  
  ppSVar2 = &(__this->fields).GIENMHHFCNE;
  bVar1 = System_String__op_Equality(*ppSVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  *ppSVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar2,CJNHFNHJHPE);
  return;
}


// ===== public bool DHHKNFOBCBC()  [RVA 0x31BAC38]
// InitSettings$$DHHKNFOBCBC @ RVA 0x31BAC38

bool InitSettings__DHHKNFOBCBC(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).HOPPHJGFHEB;
}


// ===== public string PLDFCGJLJJH()  [RVA 0x31BAC40]
// InitSettings$$PLDFCGJLJJH @ RVA 0x31BAC40

System_String_o * InitSettings__PLDFCGJLJJH(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).MEMLDPNJDBK;
}


// ===== public int DOAKLJOKLMN()  [RVA 0x31BAC48]
// InitSettings$$DOAKLJOKLMN @ RVA 0x31BAC48

int32_t InitSettings__DOAKLJOKLMN(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).NFLCPBJPAML;
}


// ===== public void FJGLCEAEBLH(string CJNHFNHJHPE)  [RVA 0x31BAC50]
// InitSettings$$FJGLCEAEBLH @ RVA 0x31BAC50

void InitSettings__FJGLCEAEBLH(InitSettings_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  
  ppSVar2 = &(__this->fields).MDJHHDCLEJA;
  bVar1 = System_String__op_Equality(*ppSVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  *ppSVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar2,CJNHFNHJHPE);
  return;
}


// ===== public void PALLHJOCPHN(bool CJNHFNHJHPE)  [RVA 0x31BAC94]
// InitSettings$$PALLHJOCPHN @ RVA 0x31BAC94

void InitSettings__PALLHJOCPHN(InitSettings_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields).PJMLKOOPHJN != CJNHFNHJHPE) {
    (__this->fields).PJMLKOOPHJN = CJNHFNHJHPE;
  }
  return;
}


// ===== public void LCLOIIOOOMB(int CJNHFNHJHPE)  [RVA 0x31BACAC]
// InitSettings$$LCLOIIOOOMB @ RVA 0x31BACAC

void InitSettings__LCLOIIOOOMB(InitSettings_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *in_x3;
  
  if ((DAT_04566bda & 1) == 0) {
    FUN_01bab630(&StringLiteral_11871/*"ServiceZoneId"*/);
    DAT_04566bda = 1;
  }
  piVar1 = &(__this->fields).GLNNPKDAIPI;
  if (*piVar1 == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).GLNNPKDAIPI = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
  InitSettings__MLDEHFFGJDP(__this,StringLiteral_11871/*"ServiceZoneId"*/,CJNHFNHJHPE_00,in_x3);
  return;
}


// ===== public string LIKMBMAGHPG()  [RVA 0x31BAD24]
// InitSettings$$LIKMBMAGHPG @ RVA 0x31BAD24

System_String_o * InitSettings__LIKMBMAGHPG(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).GIENMHHFCNE;
}


// ===== public void JMMMFEJOKFA(long CJNHFNHJHPE)  [RVA 0x31BAD2C]
// InitSettings$$JMMMFEJOKFA @ RVA 0x31BAD2C

void InitSettings__JMMMFEJOKFA(InitSettings_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  int64_t *__this_00;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *in_x3;
  
  if ((DAT_04566bdb & 1) == 0) {
    FUN_01bab630(&StringLiteral_11168/*"RegistrationDate"*/);
    DAT_04566bdb = 1;
  }
  __this_00 = &(__this->fields).ELFHKFNFIPL;
  if (*__this_00 == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).ELFHKFNFIPL = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = System_Int64__ToString((int64_t)__this_00,(MethodInfo *)0x0);
  InitSettings__MLDEHFFGJDP(__this,StringLiteral_11168/*"RegistrationDate"*/,CJNHFNHJHPE_00,in_x3);
  return;
}


// ===== public void .ctor()  [RVA 0x31BADA4]
// InitSettings$$.ctor @ RVA 0x31BADA4

void InitSettings___ctor(InitSettings_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  System_String_o **ppSVar1;
  
  if ((DAT_04566bdc & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_7525/*"InitSettings::InitSettings"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566bdc = 1;
  }
  (__this->fields).MIGGLEOLMPE = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).KFACILDAOFB = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).FONAMAFAAGN = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).MDJHHDCLEJA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  ppSVar1 = &(__this->fields).GIENMHHFCNE;
  *ppSVar1 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar1);
  (__this->fields).NFLCPBJPAML = -1;
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CIOBNDOOGIM___ctor((CIOBNDOOGIM_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_7525/*"InitSettings::InitSettings"*/,(MethodInfo *)0x0);
  InitSettings__ALNBOKFNFFK(__this,method_00);
  return;
}


// ===== public long HBDBHCLFCKK()  [RVA 0x31BB1A0]
// InitSettings$$HBDBHCLFCKK @ RVA 0x31BB1A0

int64_t InitSettings__HBDBHCLFCKK(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).ELFHKFNFIPL;
}


// ===== public string FOMHHMLDEDB()  [RVA 0x31BB1A8]
// InitSettings$$FOMHHMLDEDB @ RVA 0x31BB1A8

System_String_o * InitSettings__FOMHHMLDEDB(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).MIGGLEOLMPE;
}


// ===== private void ALNBOKFNFFK()  [RVA 0x31BAEE4]
// InitSettings$$ALNBOKFNFFK @ RVA 0x31BAEE4

void InitSettings__ALNBOKFNFFK(InitSettings_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  System_Xml_XmlDocument_o *__this_00;
  System_Xml_XmlNode_o *pSVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  int64_t iVar6;
  MethodInfo *extraout_x1;
  System_Xml_XmlNode_o **ppSVar7;
  System_String_o **ppSVar8;
  
  if ((DAT_04566bdd & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&LocalizationManager_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_11934/*"Settings"*/);
    FUN_01bab630(&StringLiteral_9079/*"Mirrors"*/);
    FUN_01bab630(&StringLiteral_11168/*"RegistrationDate"*/);
    FUN_01bab630(&StringLiteral_8335/*"LastLanguageName"*/);
    FUN_01bab630(&StringLiteral_11871/*"ServiceZoneId"*/);
    DAT_04566bdd = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  SF2Paths__GIENGNEGHPJ((MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NLPJLHOEAOE__EEPEGMMLEMA((MethodInfo *)0x0);
  __this_00 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar2,2,true,true,false,(MethodInfo *)0x0);
  if (__this_00 == (System_Xml_XmlDocument_o *)0x0) {
    __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
    System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (System_Xml_XmlDocument_o *)0x0) goto LAB_032bb19c;
  }
  pSVar3 = (System_Xml_XmlNode_o *)
           (*(__this_00->klass->vtable)._51_get_Item.methodPtr)
                     (__this_00,StringLiteral_11934/*"Settings"*/,(__this_00->klass->vtable)._51_get_Item.method);
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = EIABCPKDEBD__KPODFFHOHGK(__this_00,StringLiteral_11934/*"Settings"*/,(MethodInfo *)0x0);
  }
  if (__this != (InitSettings_o *)0x0) {
    ppSVar7 = &(__this->fields).DMLGJFCNNJF;
    *ppSVar7 = pSVar3;
    thunk_FUN_01c20e04(ppSVar7);
    pSVar3 = *ppSVar7;
    if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_8335/*"LastLanguageName"*/,(MethodInfo *)0x0);
        if ((LocalizationManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(LocalizationManager_TypeInfo);
        }
        pSVar2 = LocalizationManager__MDLAKLCAEPK((MethodInfo *)0x0);
        pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,pSVar2,(MethodInfo *)0x0);
        ppSVar8 = &(__this->fields).MIGGLEOLMPE;
        *ppSVar8 = pSVar2;
        thunk_FUN_01c20e04(ppSVar8,pSVar2);
        pSVar3 = (__this->fields).DMLGJFCNNJF;
        if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_9079/*"Mirrors"*/,(MethodInfo *)0x0);
            pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
            ppSVar8 = &(__this->fields).MEMLDPNJDBK;
            *ppSVar8 = pSVar2;
            thunk_FUN_01c20e04(ppSVar8,pSVar2);
            pSVar3 = (__this->fields).DMLGJFCNNJF;
            if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
              if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar4,StringLiteral_11871/*"ServiceZoneId"*/,(MethodInfo *)0x0);
                iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,-1,(MethodInfo *)0x0);
                pSVar3 = (__this->fields).DMLGJFCNNJF;
                (__this->fields).GLNNPKDAIPI = iVar1;
                if ((pSVar3 != (System_Xml_XmlNode_o *)0x0) &&
                   (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                             (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                                       (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method),
                   pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar4,StringLiteral_11168/*"RegistrationDate"*/,(MethodInfo *)0x0);
                  iVar6 = EIABCPKDEBD__HNIGPBMJJOL(pSVar5,-1,(MethodInfo *)0x0);
                  (__this->fields).ELFHKFNFIPL = iVar6;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_032bb19c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GDAEOIJNJMO(string KGLJICLJHEL)  [RVA 0x31BB1B0]
// InitSettings$$GDAEOIJNJMO @ RVA 0x31BB1B0

void InitSettings__GDAEOIJNJMO(InitSettings_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  EIABCPKDEBD__GDAEOIJNJMO((__this->fields).DMLGJFCNNJF,KGLJICLJHEL,(MethodInfo *)0x0);
  CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
  return;
}


// ===== public string HDNNOLNDPEM()  [RVA 0x31BB1D8]
// InitSettings$$HDNNOLNDPEM @ RVA 0x31BB1D8

System_String_o * InitSettings__HDNNOLNDPEM(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).KFACILDAOFB;
}


// ===== public Nullable<OMOGNOHGLGJ> GHEMOEOFDKJ()  [RVA 0x31BB1E0]
// InitSettings$$GHEMOEOFDKJ @ RVA 0x31BB1E0

System_Nullable_OMOGNOHGLGJ__o InitSettings__GHEMOEOFDKJ(InitSettings_o *__this,MethodInfo *method)

{
  return (System_Nullable_OMOGNOHGLGJ__o)(__this->fields).KIBLKFIDJIK.fields;
}


// ===== public bool FGKJJDGDDGL()  [RVA 0x31BB1E8]
// InitSettings$$FGKJJDGDDGL @ RVA 0x31BB1E8

bool InitSettings__FGKJJDGDDGL(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).APFBMPHNOIA;
}


// ===== public void PKLLLKDDACP(int CJNHFNHJHPE)  [RVA 0x31BB1F0]
// InitSettings$$PKLLLKDDACP @ RVA 0x31BB1F0

void InitSettings__PKLLLKDDACP(InitSettings_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields).NFLCPBJPAML != CJNHFNHJHPE) {
    (__this->fields).NFLCPBJPAML = CJNHFNHJHPE;
  }
  return;
}


// ===== public void HHKNNDIJMOD(Nullable<OMOGNOHGLGJ> CJNHFNHJHPE)  [RVA 0x31BB204]
// InitSettings$$HHKNNDIJMOD @ RVA 0x31BB204

void InitSettings__HHKNNDIJMOD
               (InitSettings_o *__this,System_Nullable_OMOGNOHGLGJ__o CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04566bde & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<OMOGNOHGLGJ>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<OMOGNOHGLGJ>_get_HasValue__);
    DAT_04566bde = 1;
  }
  if (((__this->fields).KIBLKFIDJIK.fields.value != CJNHFNHJHPE.fields.value) ||
     ((((ulong)CJNHFNHJHPE.fields & 0xff) != 0) ==
      ((*(uint *)&(__this->fields).KIBLKFIDJIK.fields & 0xff) == 0))) {
    (__this->fields).KIBLKFIDJIK.fields = CJNHFNHJHPE.fields;
  }
  return;
}


// ===== public IKDJCPOJFNM NGFMKMBOAAA()  [RVA 0x31BB278]
// InitSettings$$NGFMKMBOAAA @ RVA 0x31BB278

int32_t InitSettings__NGFMKMBOAAA(InitSettings_o *__this,MethodInfo *method)

{
  return (__this->fields).ABPFGPIHPEA;
}


// ===== public void FAEONAGGJCO(IKDJCPOJFNM CJNHFNHJHPE)  [RVA 0x31BB280]
// InitSettings$$FAEONAGGJCO @ RVA 0x31BB280

void InitSettings__FAEONAGGJCO(InitSettings_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields).ABPFGPIHPEA != CJNHFNHJHPE) {
    (__this->fields).ABPFGPIHPEA = CJNHFNHJHPE;
  }
  return;
}


// ===== public void CJKFOCGEDBN(bool CJNHFNHJHPE)  [RVA 0x31BB294]
// InitSettings$$CJKFOCGEDBN @ RVA 0x31BB294

void InitSettings__CJKFOCGEDBN(InitSettings_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields).APFBMPHNOIA != CJNHFNHJHPE) {
    (__this->fields).APFBMPHNOIA = CJNHFNHJHPE;
  }
  return;
}


// ===== public void PHILGGFGGBJ(bool CJNHFNHJHPE)  [RVA 0x31BB2AC]
// InitSettings$$PHILGGFGGBJ @ RVA 0x31BB2AC

void InitSettings__PHILGGFGGBJ(InitSettings_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields).HOPPHJGFHEB != CJNHFNHJHPE) {
    (__this->fields).HOPPHJGFHEB = CJNHFNHJHPE;
  }
  return;
}


// ===== public void FHDNKIFDNPD(string CJNHFNHJHPE)  [RVA 0x31BB2C4]
// InitSettings$$FHDNKIFDNPD @ RVA 0x31BB2C4

void InitSettings__FHDNKIFDNPD(InitSettings_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x3;
  System_String_o **ppSVar2;
  
  if ((DAT_04566bdf & 1) == 0) {
    FUN_01bab630(&StringLiteral_9079/*"Mirrors"*/);
    DAT_04566bdf = 1;
  }
  ppSVar2 = &(__this->fields).MEMLDPNJDBK;
  bVar1 = System_String__op_Equality(*ppSVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  (__this->fields).MEMLDPNJDBK = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar2,CJNHFNHJHPE);
  InitSettings__MLDEHFFGJDP(__this,StringLiteral_9079/*"Mirrors"*/,(__this->fields).MEMLDPNJDBK,in_x3);
  return;
}


// ===== public void DLLHOLJPNNJ(string CJNHFNHJHPE)  [RVA 0x31BB354]
// InitSettings$$DLLHOLJPNNJ @ RVA 0x31BB354

void InitSettings__DLLHOLJPNNJ(InitSettings_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x3;
  System_String_o **ppSVar2;
  
  if ((DAT_04566be0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8335/*"LastLanguageName"*/);
    DAT_04566be0 = 1;
  }
  ppSVar2 = &(__this->fields).MIGGLEOLMPE;
  bVar1 = System_String__op_Equality(*ppSVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  (__this->fields).MIGGLEOLMPE = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar2,CJNHFNHJHPE);
  InitSettings__MLDEHFFGJDP(__this,StringLiteral_8335/*"LastLanguageName"*/,(__this->fields).MIGGLEOLMPE,in_x3);
  return;
}

