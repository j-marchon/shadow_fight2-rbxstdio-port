// TypeDefIndex 1067
// Namespace: 
// public class LMICCGAMENM : BOFEMGGNODC
// Fields:
//   private string KGLJICLJHEL; // 0x68
//   private string BHDLLGCLMBD; // 0x70
//   private string CJNHFNHJHPE; // 0x78

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x30DBCFC]
// LMICCGAMENM$$MAHFCKJGBPP @ RVA 0x30DBCFC

void LMICCGAMENM__MAHFCKJGBPP(LMICCGAMENM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  LMICCGAMENM_LMHCLNAKOBO_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  PKHMIGFEJCL_o **ppPVar1;
  LMICCGAMENM_o *__this_02;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04566359 & 1) == 0) {
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&LMICCGAMENM_LMHCLNAKOBO_TypeInfo);
    DAT_04566359 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  auVar2 = thunk_FUN_01bda818(LMICCGAMENM_LMHCLNAKOBO_TypeInfo);
  __this_00 = auVar2._0_8_;
  LMICCGAMENM_LMHCLNAKOBO___ctor(__this_00,auVar2._8_8_);
  __this_01 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  LEGDPJHPEOB___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (LEGDPJHPEOB_o *)0x0) {
    ppPVar1 = &(__this_01->fields).AAJBIMFNMBB;
    *ppPVar1 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar1,AAJBIMFNMBB);
    if (__this_00 != (LMICCGAMENM_LMHCLNAKOBO_o *)0x0) {
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_01,(__this->fields).KGLJICLJHEL,
                 (__this_00->fields).DJELHJIIPLG,false,(System_String_o *)0x0,(MethodInfo *)0x0);
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_01,(__this->fields).BHDLLGCLMBD,
                 (__this_00->fields).LIDMBHDEIFP,false,(System_String_o *)0x0,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)(__this_00->fields).EOLKPCIKAFA;
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_01,(__this->fields).CJNHFNHJHPE,
                 (EILGGBOIMGE_FMFDKGKCBBG_o *)method_00,false,(System_String_o *)0x0,
                 (MethodInfo *)0x0);
      LMICCGAMENM__GNGNDDJJMFC(__this_02,__this_00,method_00);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x30DC008]
// LMICCGAMENM$$HNIHOIAMDPC @ RVA 0x30DC008

void LMICCGAMENM__HNIHOIAMDPC
               (LMICCGAMENM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_0456635a & 1) == 0) {
    FUN_01bab630(&StringLiteral_10117/*"Parameter"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456635a = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).KGLJICLJHEL = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_10117/*"Parameter"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).BHDLLGCLMBD = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          ppSVar4 = &(__this->fields).CJNHFNHJHPE;
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


// ===== private void GNGNDDJJMFC(LMICCGAMENM.LMHCLNAKOBO HPACPFLKHPK)  [RVA 0x30DBEC4]
// LMICCGAMENM$$GNGNDDJJMFC @ RVA 0x30DBEC4

void LMICCGAMENM__GNGNDDJJMFC
               (LMICCGAMENM_o *__this,LMICCGAMENM_LMHCLNAKOBO_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  System_String_o *__this_02;
  EILGGBOIMGE_FMFDKGKCBBG_o *pEVar3;
  ACHLOMELAJE_o *__this_03;
  double dVar4;
  
  if ((DAT_0456635b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14589/*"UpgradeLevel"*/);
    DAT_0456635b = 1;
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
  __this_03 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((((__this_03 != (ACHLOMELAJE_o *)0x0) && (HPACPFLKHPK != (LMICCGAMENM_LMHCLNAKOBO_o *)0x0)) &&
      (pEVar3 = (HPACPFLKHPK->fields).DJELHJIIPLG, pEVar3 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0)) &&
     (__this_00 = (__this_03->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(pEVar3->fields).DFJBJLBLBGB,(MethodInfo *)0x0);
    if (__this_01 == (IGFGDDANEPE_o *)0x0) {
      return;
    }
    pEVar3 = (HPACPFLKHPK->fields).LIDMBHDEIFP;
    if ((pEVar3 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) &&
       (__this_02 = (pEVar3->fields).DFJBJLBLBGB, __this_02 != (System_String_o *)0x0)) {
      bVar1 = System_String__Equals(__this_02,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pEVar3 = (HPACPFLKHPK->fields).EOLKPCIKAFA;
      if (pEVar3 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
        dVar4 = (pEVar3->fields).HNFHNNLOLGK;
        iVar2 = -0x80000000;
        if (dVar4 != INFINITY) {
          iVar2 = (int)dVar4;
        }
        IGFGDDANEPE__DJJHOOKLHHL(__this_01,iVar2,(MethodInfo *)0x0);
        iVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_03,(MethodInfo *)0x0);
        IGFGDDANEPE__GIIJHCLHFDK(__this_01,iVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30DC15C]
// LMICCGAMENM$$.ctor @ RVA 0x30DC15C

void LMICCGAMENM___ctor(LMICCGAMENM_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

