// TypeDefIndex 929
// Namespace: 
// public class HDKIINEJFCF : BOFEMGGNODC
// Fields:
//   private readonly LCKCDEKNLOA KFJLNJDDGDO; // 0x68
//   private readonly LCKCDEKNLOA MJMJIDBBMON; // 0x70
//   private string JDNKKGPNHPB; // 0x78
//   private string DEKCPPOJFEH; // 0x80
//   private string PCNEDMAJMOJ; // 0x88
//   private string FPGPCNBKBDB; // 0x90

// ===== public override void PKIFMKGDJJN()  [RVA 0x30A1EB8]
// HDKIINEJFCF$$PKIFMKGDJJN @ RVA 0x30A1EB8

void HDKIINEJFCF__PKIFMKGDJJN(HDKIINEJFCF_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  
  pLVar1 = (__this->fields).KFJLNJDDGDO;
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).MJMJIDBBMON;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x30A1EE8]
// HDKIINEJFCF$$HNIHOIAMDPC @ RVA 0x30A1EE8

void HDKIINEJFCF__HNIHOIAMDPC
               (HDKIINEJFCF_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_Xml_XmlNode_o *NPLGCIFGFOK_00;
  System_Xml_XmlNode_o *NPLGCIFGFOK_01;
  System_Action_o *pSVar4;
  LCKCDEKNLOA_o *pLVar5;
  
  if ((DAT_0456614a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_HDKIINEJFCF_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_12524/*"Success"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_12226/*"Sound"*/);
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456614a = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).JDNKKGPNHPB = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).DEKCPPOJFEH = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          (__this->fields).PCNEDMAJMOJ = pSVar3;
          thunk_FUN_01c20e04();
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_12226/*"Sound"*/,(MethodInfo *)0x0);
            pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            (__this->fields).FPGPCNBKBDB = pSVar3;
            thunk_FUN_01c20e04();
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
            pLVar5 = (__this->fields).KFJLNJDDGDO;
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            BOFEMGGNODC__KIBBEDPGMBB
                      ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_00,pLVar5,pSVar4,(MethodInfo *)0x0);
            pLVar5 = (__this->fields).MJMJIDBBMON;
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            BOFEMGGNODC__KIBBEDPGMBB
                      ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_01,pLVar5,pSVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x30A219C]
// HDKIINEJFCF$$KCHJCGEMCGE @ RVA 0x30A219C

System_String_o * HDKIINEJFCF__KCHJCGEMCGE(HDKIINEJFCF_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_String_o *pSVar1;
  PKHMIGFEJCL_o *HLAGOHADLKH;
  
  if ((DAT_0456614b & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_0456614b = 1;
    method = extraout_x1;
  }
  HLAGOHADLKH = (__this->fields).super.IJOKKFKPBEP;
  pSVar1 = (__this->fields).DEKCPPOJFEH;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo,method);
  }
  pSVar1 = MFBNFJGBPBB__HAKLDDOPIAF(HLAGOHADLKH,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public long CNKOOLDMAGC()  [RVA 0x30A2200]
// HDKIINEJFCF$$CNKOOLDMAGC @ RVA 0x30A2200

int64_t HDKIINEJFCF__CNKOOLDMAGC(HDKIINEJFCF_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  MethodInfo *extraout_x1;
  System_String_o *OOGPLJBADCD;
  PKHMIGFEJCL_o *HLAGOHADLKH;
  
  if ((DAT_0456614c & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_0456614c = 1;
    method = extraout_x1;
  }
  HLAGOHADLKH = (__this->fields).super.IJOKKFKPBEP;
  OOGPLJBADCD = (__this->fields).PCNEDMAJMOJ;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo,method);
  }
  iVar1 = MFBNFJGBPBB__GFJPJGCLMLP(HLAGOHADLKH,OOGPLJBADCD,(MethodInfo *)0x0);
  return iVar1;
}


// ===== private static void BIFBNDJMDJA(string ACCIHBHMFPN, string KGLJICLJHEL, long IDPMJOKDHNP)  [RVA 0x30A2264]
// HDKIINEJFCF$$BIFBNDJMDJA @ RVA 0x30A2264

void HDKIINEJFCF__BIFBNDJMDJA
               (System_String_o *ACCIHBHMFPN,System_String_o *KGLJICLJHEL,int64_t IDPMJOKDHNP,
               MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  ACHLOMELAJE_o *__this;
  
  if ((DAT_0456614d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_3535/*"Bonus"*/);
    FUN_01bab630(&StringLiteral_4921/*"Currency"*/);
    FUN_01bab630(&StringLiteral_6868/*"Gold"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456614d = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6868/*"Gold"*/,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this != (ACHLOMELAJE_o *)0x0) {
      iVar2 = ACHLOMELAJE__IMLCNMCBEEN(__this,(MethodInfo *)0x0);
      ACHLOMELAJE__CEICBEHCCDA(__this,iVar2 - IDPMJOKDHNP,false,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3535/*"Bonus"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this != (ACHLOMELAJE_o *)0x0) {
        iVar2 = ACHLOMELAJE__HEHFNBKGJLP(__this,(MethodInfo *)0x0);
        ACHLOMELAJE__OGPHHGFFKHD(__this,iVar2 - IDPMJOKDHNP,6,false,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_4921/*"Currency"*/,(MethodInfo *)0x0);
      if ((!bVar1) &&
         (bVar1 = System_String__op_Inequality(ACCIHBHMFPN,StringLiteral_1/*""*/,(MethodInfo *)0x0),
         KGLJICLJHEL = ACCIHBHMFPN, !bVar1)) {
        return;
      }
      if (__this != (ACHLOMELAJE_o *)0x0) {
        ACHLOMELAJE__GHLNGBDFENI(__this,KGLJICLJHEL,-(int)IDPMJOKDHNP,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDJAJHFFPKP()  [RVA 0x30A2440]
// HDKIINEJFCF$$NDJAJHFFPKP @ RVA 0x30A2440

void HDKIINEJFCF__NDJAJHFFPKP(HDKIINEJFCF_o *__this,MethodInfo *method)

{
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x30A2448]
// HDKIINEJFCF$$MAHFCKJGBPP @ RVA 0x30A2448

void HDKIINEJFCF__MAHFCKJGBPP(HDKIINEJFCF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *KGLJICLJHEL;
  MethodInfo *IDPMJOKDHNP;
  ACHLOMELAJE_o *__this_00;
  LCKCDEKNLOA_o *pLVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  if ((DAT_0456614e & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456614e = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar2 = HDKIINEJFCF__NHGGBEACKBD(__this,method_00);
  KGLJICLJHEL = HDKIINEJFCF__KCHJCGEMCGE(__this,method_01);
  IDPMJOKDHNP = (MethodInfo *)HDKIINEJFCF__CNKOOLDMAGC(__this,method_02);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    method_03 = IDPMJOKDHNP;
    bVar1 = ACHLOMELAJE__KJEEHIIMALL
                      (__this_00,pSVar2,KGLJICLJHEL,(int64_t)IDPMJOKDHNP,(MethodInfo *)0x0);
    if (bVar1) {
      HDKIINEJFCF__BIFBNDJMDJA(pSVar2,KGLJICLJHEL,(int64_t)IDPMJOKDHNP,method_03);
      pLVar3 = (__this->fields).KFJLNJDDGDO;
      if (pLVar3 != (LCKCDEKNLOA_o *)0x0) {
        LCKCDEKNLOA__MAHFCKJGBPP(pLVar3,AAJBIMFNMBB,(MethodInfo *)0x0);
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).FPGPCNBKBDB,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
        pSVar2 = (__this->fields).FPGPCNBKBDB;
        if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        PNLFHHJGDLI__CJKCKACIIHK(pSVar2,1.0,1.0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pLVar3 = (__this->fields).MJMJIDBBMON;
      if (pLVar3 != (LCKCDEKNLOA_o *)0x0) {
        LCKCDEKNLOA__MAHFCKJGBPP(pLVar3,AAJBIMFNMBB,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string NHGGBEACKBD()  [RVA 0x30A25F4]
// HDKIINEJFCF$$NHGGBEACKBD @ RVA 0x30A25F4

System_String_o * HDKIINEJFCF__NHGGBEACKBD(HDKIINEJFCF_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_String_o *pSVar1;
  PKHMIGFEJCL_o *HLAGOHADLKH;
  
  if ((DAT_0456614f & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_0456614f = 1;
    method = extraout_x1;
  }
  HLAGOHADLKH = (__this->fields).super.IJOKKFKPBEP;
  pSVar1 = (__this->fields).JDNKKGPNHPB;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo,method);
  }
  pSVar1 = MFBNFJGBPBB__HAKLDDOPIAF(HLAGOHADLKH,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x30A2658]
// HDKIINEJFCF$$.ctor @ RVA 0x30A2658

void HDKIINEJFCF___ctor(HDKIINEJFCF_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566150 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566150 = 1;
    method = extraout_x1;
  }
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).KFJLNJDDGDO;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).MJMJIDBBMON;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  (__this->fields).JDNKKGPNHPB = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).DEKCPPOJFEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).PCNEDMAJMOJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).FPGPCNBKBDB = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

