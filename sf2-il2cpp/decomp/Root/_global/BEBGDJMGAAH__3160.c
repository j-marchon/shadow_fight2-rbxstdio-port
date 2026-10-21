// TypeDefIndex 3160
// Namespace: 
// public sealed class BEBGDJMGAAH : BOFEMGGNODC
// Fields:
//   private string DEKCPPOJFEH; // 0x68
//   private string EDCNEIOHPDJ; // 0x70
//   private bool KCJIAIICHBN; // 0x78

// ===== public void .ctor()  [RVA 0x34DB4D4]
// BEBGDJMGAAH$$.ctor @ RVA 0x34DB4D4

void BEBGDJMGAAH___ctor(BEBGDJMGAAH_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x34DB4DC]
// BEBGDJMGAAH$$HNIHOIAMDPC @ RVA 0x34DB4DC

void BEBGDJMGAAH__HNIHOIAMDPC
               (BEBGDJMGAAH_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  
  if ((DAT_04568714 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3630);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3631);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3632);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3633);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3634);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3635);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568714 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3630,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3631,(MethodInfo *)0x0)
    ;
    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar2,pSVar5,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).DEKCPPOJFEH = pSVar5;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3632,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3633,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar2,pSVar5,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).EDCNEIOHPDJ = pSVar5;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3634,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3635,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar2,pSVar5,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,true,(MethodInfo *)0x0);
          (__this->fields).KCJIAIICHBN = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x34DB788]
// BEBGDJMGAAH$$MAHFCKJGBPP @ RVA 0x34DB788

void BEBGDJMGAAH__MAHFCKJGBPP(BEBGDJMGAAH_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  System_String_o *KGLJICLJHEL;
  System_String_o *DGMHNKGDAIL;
  bool AAHDALLELJN;
  DPIEIFJBFHE_o *__this_00;
  ACHLOMELAJE_o *pAVar1;
  DPIEIFJBFHE_o *pDVar2;
  
  if ((DAT_04568715 & 1) == 0) {
    FUN_01bab630(&DPIEIFJBFHE_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568715 = 1;
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
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
    KGLJICLJHEL = (__this->fields).DEKCPPOJFEH;
    DGMHNKGDAIL = (__this->fields).EDCNEIOHPDJ;
    AAHDALLELJN = (__this->fields).KCJIAIICHBN;
    __this_00 = (DPIEIFJBFHE_o *)thunk_FUN_01bda818(DPIEIFJBFHE_TypeInfo);
    DPIEIFJBFHE___ctor(__this_00,KGLJICLJHEL,DGMHNKGDAIL,AAHDALLELJN,(MethodInfo *)0x0);
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
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 == (ACHLOMELAJE_o *)0x0) {
LAB_035db934:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pDVar2 = ACHLOMELAJE__BAHIKBMCNPD(pAVar1,(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if (pDVar2 == (DPIEIFJBFHE_o *)0x0) {
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
      pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar1 == (ACHLOMELAJE_o *)0x0) goto LAB_035db934;
      ACHLOMELAJE__AJPFKHFKCLK(pAVar1,__this_00,(MethodInfo *)0x0);
    }
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

