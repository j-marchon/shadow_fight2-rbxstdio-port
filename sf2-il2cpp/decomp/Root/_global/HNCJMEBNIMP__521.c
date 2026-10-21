// TypeDefIndex 521
// Namespace: 
// public class HNCJMEBNIMP : BOFEMGGNODC
// Fields:
//   private string JDNKKGPNHPB; // 0x68
//   private string PCNEDMAJMOJ; // 0x70
//   private string FPGPCNBKBDB; // 0x78

// ===== private void DLICHIJMCLK(ref string ACCIHBHMFPN, ref long CJNHFNHJHPE)  [RVA 0x3594230]
// HNCJMEBNIMP$$DLICHIJMCLK @ RVA 0x3594230

void HNCJMEBNIMP__DLICHIJMCLK
               (HNCJMEBNIMP_o *__this,System_String_o **ACCIHBHMFPN,int64_t *CJNHFNHJHPE,
               MethodInfo *method)

{
  int64_t iVar1;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  System_String_o *pSVar2;
  double dVar3;
  
  if ((DAT_04568d91 & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    DAT_04568d91 = 1;
  }
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    (__this_01->fields).AAJBIMFNMBB = (__this->fields).super.IJOKKFKPBEP;
    thunk_FUN_01c20e04();
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).JDNKKGPNHPB,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if (__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      pSVar2 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      *ACCIHBHMFPN = pSVar2;
      thunk_FUN_01c20e04(ACCIHBHMFPN,pSVar2);
                    /* try { // try from 0369430c to 0379481f has its CatchHandler @ 0369430c
                       catch() { ... } // from try @ 0369430c with catch @ 0369430c
                       catch() { ... } // from try @ 03694840 with catch @ 0369430c
                       catch() { ... } // from try @ 03695048 with catch @ 0369430c
                       catch() { ... } // from try @ 03695074 with catch @ 0369430c
                       catch() { ... } // from try @ 036952a4 with catch @ 0369430c
                       catch() { ... } // from try @ 036952e4 with catch @ 0369430c
                       catch() { ... } // from try @ 03695330 with catch @ 0369430c
                       catch() { ... } // from try @ 03695354 with catch @ 0369430c
                       catch() { ... } // from try @ 03695394 with catch @ 0369430c */
      EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(__this_00,(MethodInfo *)0x0);
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_01,(__this->fields).PCNEDMAJMOJ,__this_00,false,
                 (System_String_o *)0x0,(MethodInfo *)0x0);
      dVar3 = (__this_00->fields).HNFHNNLOLGK;
      iVar1 = -0x8000000000000000;
      if (dVar3 != INFINITY) {
        iVar1 = (long)dVar3;
      }
      *CJNHFNHJHPE = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3594364]
// HNCJMEBNIMP$$MAHFCKJGBPP @ RVA 0x3594364

void HNCJMEBNIMP__MAHFCKJGBPP(HNCJMEBNIMP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  MethodInfo *in_x3;
  ACHLOMELAJE_o *__this_00;
  System_String_o *EELDDPEAGGA;
  int64_t local_40;
  System_String_o *local_38;
  
  if ((DAT_04568d92 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_3535/*"Bonus"*/);
    FUN_01bab630(&StringLiteral_6868/*"Gold"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d92 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
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
  local_38 = StringLiteral_1/*""*/;
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  local_40 = 0;
  HNCJMEBNIMP__DLICHIJMCLK(__this,&local_38,&local_40,in_x3);
  bVar1 = System_String__op_Equality(local_38,StringLiteral_6868/*"Gold"*/,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
LAB_03694570:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = ACHLOMELAJE__IMLCNMCBEEN(__this_00,(MethodInfo *)0x0);
    ACHLOMELAJE__CEICBEHCCDA(__this_00,local_40 + iVar2,false,(MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(local_38,StringLiteral_3535/*"Bonus"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_03694570;
      iVar2 = ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
      ACHLOMELAJE__OGPHHGFFKHD(__this_00,local_40 + iVar2,6,false,(MethodInfo *)0x0);
    }
    else {
      bVar1 = System_String__op_Inequality(local_38,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (bVar1) {
        if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_03694570;
        ACHLOMELAJE__GHLNGBDFENI(__this_00,local_38,(int32_t)local_40,(MethodInfo *)0x0);
      }
    }
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).FPGPCNBKBDB,(MethodInfo *)0x0);
  if (!bVar1) {
    EELDDPEAGGA = (__this->fields).FPGPCNBKBDB;
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI__CJKCKACIIHK(EELDDPEAGGA,1.0,1.0,(MethodInfo *)0x0);
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3594574]
// HNCJMEBNIMP$$HNIHOIAMDPC @ RVA 0x3594574

void HNCJMEBNIMP__HNIHOIAMDPC
               (HNCJMEBNIMP_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04568d93 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_12226/*"Sound"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568d93 = 1;
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
          ppSVar4 = &(__this->fields).FPGPCNBKBDB;
          *ppSVar4 = pSVar3;
          thunk_FUN_01c20e04(ppSVar4,pSVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35946C8]
// HNCJMEBNIMP$$.ctor @ RVA 0x35946C8

void HNCJMEBNIMP___ctor(HNCJMEBNIMP_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

