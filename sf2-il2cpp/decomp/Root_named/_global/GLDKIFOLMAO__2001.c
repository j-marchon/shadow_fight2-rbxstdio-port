// TypeDefIndex 2001
// Namespace: 
// public class GLDKIFOLMAO
// Fields:
//   private string <CIEBCKIBJHL>k__BackingField; // 0x10
//   private string <DGKHEMIDIFL>k__BackingField; // 0x18
//   private string <OFGNPIPABAC>k__BackingField; // 0x20
//   private string <BDBKOEDNLAO>k__BackingField; // 0x28

// ===== public void BHFGGAKKJKP(XmlNode JHMENEKPIBO)  [RVA 0x3294168]
// GLDKIFOLMAO$$BHFGGAKKJKP @ RVA 0x3294168

void GLDKIFOLMAO__BHFGGAKKJKP
               (GLDKIFOLMAO_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlElement_o *pSVar1;
  
  if ((DAT_04567350 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10454/*"Price"*/);
    FUN_01bab630(&StringLiteral_10485/*"Product"*/);
    FUN_01bab630(&StringLiteral_4924/*"CurrencyCode"*/);
    FUN_01bab630(&StringLiteral_7293/*"Id"*/);
    FUN_01bab630(&StringLiteral_10462/*"PriceString"*/);
    DAT_04567350 = 1;
  }
  pSVar1 = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO,StringLiteral_10485/*"Product"*/,(MethodInfo *)0x0);
  if (pSVar1 != (System_Xml_XmlElement_o *)0x0) {
    (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
              (pSVar1,StringLiteral_7293/*"Id"*/,(__this->fields)._CIEBCKIBJHL_k__BackingField,
               (pSVar1->klass->vtable)._66_SetAttribute.method);
    (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
              (pSVar1,StringLiteral_10454/*"Price"*/,(__this->fields)._DGKHEMIDIFL_k__BackingField,
               (pSVar1->klass->vtable)._66_SetAttribute.method);
    (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
              (pSVar1,StringLiteral_10462/*"PriceString"*/,(__this->fields)._OFGNPIPABAC_k__BackingField,
               (pSVar1->klass->vtable)._66_SetAttribute.method);
                    /* WARNING: Could not recover jumptable at 0x03394280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar1->klass->vtable)._66_SetAttribute.methodPtr)
              (pSVar1,StringLiteral_4924/*"CurrencyCode"*/,(__this->fields)._BDBKOEDNLAO_k__BackingField,
               (pSVar1->klass->vtable)._66_SetAttribute.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LAGEDHPCOCL(string CJNHFNHJHPE)  [RVA 0x3294288]
// GLDKIFOLMAO$$LAGEDHPCOCL @ RVA 0x3294288

void GLDKIFOLMAO__LAGEDHPCOCL(GLDKIFOLMAO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BDBKOEDNLAO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KAHOIABFDOG()  [RVA 0x3294290]
// GLDKIFOLMAO$$KAHOIABFDOG @ RVA 0x3294290

System_String_o * GLDKIFOLMAO__KAHOIABFDOG(GLDKIFOLMAO_o *__this,MethodInfo *method)

{
  return (__this->fields)._OFGNPIPABAC_k__BackingField;
}


// ===== public void .ctor(string PIGAGEDBOPC, string GMCFOKPADCA, string DKIIJGOLNGG, string GHNAOGLCDFJ)  [RVA 0x3294298]
// GLDKIFOLMAO$$.ctor @ RVA 0x3294298

void GLDKIFOLMAO___ctor(GLDKIFOLMAO_o *__this,System_String_o *PIGAGEDBOPC,
                       System_String_o *GMCFOKPADCA,System_String_o *DKIIJGOLNGG,
                       System_String_o *GHNAOGLCDFJ,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._CIEBCKIBJHL_k__BackingField = PIGAGEDBOPC;
  thunk_FUN_01c20e04(&__this->fields,PIGAGEDBOPC);
  ppSVar1 = &(__this->fields)._DGKHEMIDIFL_k__BackingField;
  *ppSVar1 = GMCFOKPADCA;
  thunk_FUN_01c20e04(ppSVar1,GMCFOKPADCA);
  ppSVar1 = &(__this->fields)._OFGNPIPABAC_k__BackingField;
  *ppSVar1 = DKIIJGOLNGG;
  thunk_FUN_01c20e04(ppSVar1,DKIIJGOLNGG);
  ppSVar1 = &(__this->fields)._BDBKOEDNLAO_k__BackingField;
  *ppSVar1 = GHNAOGLCDFJ;
  thunk_FUN_01c20e04(ppSVar1,GHNAOGLCDFJ);
  return;
}


// ===== public override string ToString()  [RVA 0x329430C]
// GLDKIFOLMAO$$ToString @ RVA 0x329430C

System_String_o * GLDKIFOLMAO__ToString(GLDKIFOLMAO_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_04567351 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_865/*"', CurrencyCode='"*/);
    FUN_01bab630(&StringLiteral_902/*"']"*/);
    FUN_01bab630(&StringLiteral_15560/*"[PaymentMetadata: ProductId='"*/);
    FUN_01bab630(&StringLiteral_877/*"', PriceString='"*/);
    FUN_01bab630(&StringLiteral_876/*"', Price='"*/);
    DAT_04567351 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,9);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_15560/*"[PaymentMetadata: ProductId='"*/;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (__this->fields)._CIEBCKIBJHL_k__BackingField;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_876/*"', Price='"*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (__this->fields)._DGKHEMIDIFL_k__BackingField;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_877/*"', PriceString='"*/;
              thunk_FUN_01c20e04(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = (__this->fields)._OFGNPIPABAC_k__BackingField;
                thunk_FUN_01c20e04(values->m_Items + 5);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = StringLiteral_865/*"', CurrencyCode='"*/;
                  thunk_FUN_01c20e04(values->m_Items + 6);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = (__this->fields)._BDBKOEDNLAO_k__BackingField;
                    thunk_FUN_01c20e04(values->m_Items + 7);
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = StringLiteral_902/*"']"*/;
                      thunk_FUN_01c20e04();
                      pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                      return pSVar1;
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
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string LKFFCCKAELC()  [RVA 0x32944EC]
// GLDKIFOLMAO$$LKFFCCKAELC @ RVA 0x32944EC

System_String_o * GLDKIFOLMAO__LKFFCCKAELC(GLDKIFOLMAO_o *__this,MethodInfo *method)

{
  return (__this->fields)._BDBKOEDNLAO_k__BackingField;
}


// ===== public string DHKPNIGECON()  [RVA 0x32944F4]
// GLDKIFOLMAO$$DHKPNIGECON @ RVA 0x32944F4

System_String_o * GLDKIFOLMAO__DHKPNIGECON(GLDKIFOLMAO_o *__this,MethodInfo *method)

{
  return (__this->fields)._CIEBCKIBJHL_k__BackingField;
}


// ===== private void AAPNGMDCCND(string CJNHFNHJHPE)  [RVA 0x32944FC]
// GLDKIFOLMAO$$AAPNGMDCCND @ RVA 0x32944FC

void GLDKIFOLMAO__AAPNGMDCCND(GLDKIFOLMAO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DGKHEMIDIFL_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void LLCONNGHGKD(Product IPIHMPBGACB)  [RVA 0x3294504]
// GLDKIFOLMAO$$LLCONNGHGKD @ RVA 0x3294504

void GLDKIFOLMAO__LLCONNGHGKD
               (GLDKIFOLMAO_o *__this,UnityEngine_Purchasing_Product_o *IPIHMPBGACB,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  UnityEngine_Purchasing_ProductMetadata_o *pUVar3;
  System_String_o *pSVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_04567352 & 1) == 0) {
    FUN_01bab630(&System_Decimal_TypeInfo);
    DAT_04567352 = 1;
  }
  if ((IPIHMPBGACB != (UnityEngine_Purchasing_Product_o *)0x0) &&
     (pUVar3 = (IPIHMPBGACB->fields)._metadata_k__BackingField,
     pUVar3 != (UnityEngine_Purchasing_ProductMetadata_o *)0x0)) {
    uStack_28._0_4_ = (pUVar3->fields)._localizedPrice_k__BackingField.fields.lo;
    uStack_28._4_4_ = (pUVar3->fields)._localizedPrice_k__BackingField.fields.mid;
    local_30._0_4_ = (pUVar3->fields)._localizedPrice_k__BackingField.fields.flags;
    local_30._4_4_ = (pUVar3->fields)._localizedPrice_k__BackingField.fields.hi;
    pSVar4 = (pUVar3->fields)._localizedPriceString_k__BackingField;
    if ((System_Decimal_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = System_Decimal__ToString
                       ((System_Decimal_o *)&stack0xffffffffffffffd0,(MethodInfo *)0x0);
    (__this->fields)._DGKHEMIDIFL_k__BackingField = pSVar1;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields)._OFGNPIPABAC_k__BackingField;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
    pUVar3 = (IPIHMPBGACB->fields)._metadata_k__BackingField;
    if (pUVar3 != (UnityEngine_Purchasing_ProductMetadata_o *)0x0) {
      ppSVar2 = &(__this->fields)._BDBKOEDNLAO_k__BackingField;
      *ppSVar2 = (pUVar3->fields)._isoCurrencyCode_k__BackingField;
      thunk_FUN_01c20e04(ppSVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FGDLLKOICBK(string CJNHFNHJHPE)  [RVA 0x32945C0]
// GLDKIFOLMAO$$FGDLLKOICBK @ RVA 0x32945C0

void GLDKIFOLMAO__FGDLLKOICBK(GLDKIFOLMAO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OFGNPIPABAC_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string DPEKAKHBPPO()  [RVA 0x32945C8]
// GLDKIFOLMAO$$DPEKAKHBPPO @ RVA 0x32945C8

System_String_o * GLDKIFOLMAO__DPEKAKHBPPO(GLDKIFOLMAO_o *__this,MethodInfo *method)

{
  return (__this->fields)._DGKHEMIDIFL_k__BackingField;
}


// ===== public void .ctor(XmlNode JHMENEKPIBO)  [RVA 0x32945D0]
// GLDKIFOLMAO$$.ctor @ RVA 0x32945D0

void GLDKIFOLMAO___ctor(GLDKIFOLMAO_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *PIGAGEDBOPC;
  System_String_o *GMCFOKPADCA;
  System_String_o *DKIIJGOLNGG;
  System_String_o *GHNAOGLCDFJ;
  MethodInfo *in_x5;
  
  if ((DAT_04567353 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_10454/*"Price"*/);
    FUN_01bab630(&StringLiteral_4924/*"CurrencyCode"*/);
    FUN_01bab630(&StringLiteral_7293/*"Id"*/);
    FUN_01bab630(&StringLiteral_10462/*"PriceString"*/);
    DAT_04567353 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_7293/*"Id"*/,(MethodInfo *)0x0);
      PIGAGEDBOPC = EIABCPKDEBD__JPKEHIBGOEM
                              (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_10454/*"Price"*/,(MethodInfo *)0x0);
        GMCFOKPADCA = EIABCPKDEBD__JPKEHIBGOEM
                                (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_10462/*"PriceString"*/,(MethodInfo *)0x0);
          DKIIJGOLNGG = EIABCPKDEBD__JPKEHIBGOEM
                                  (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_4924/*"CurrencyCode"*/,(MethodInfo *)0x0);
            GHNAOGLCDFJ = EIABCPKDEBD__JPKEHIBGOEM
                                    (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0)
            ;
            GLDKIFOLMAO___ctor(__this,PIGAGEDBOPC,GMCFOKPADCA,DKIIJGOLNGG,GHNAOGLCDFJ,in_x5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HIDAJKBONAL(string CJNHFNHJHPE)  [RVA 0x329477C]
// GLDKIFOLMAO$$HIDAJKBONAL @ RVA 0x329477C

void GLDKIFOLMAO__HIDAJKBONAL(GLDKIFOLMAO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CIEBCKIBJHL_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(Product IPIHMPBGACB)  [RVA 0x3294784]
// GLDKIFOLMAO$$.ctor @ RVA 0x3294784

void GLDKIFOLMAO___ctor(GLDKIFOLMAO_o *__this,UnityEngine_Purchasing_Product_o *IPIHMPBGACB,
                       MethodInfo *method)

{
  UnityEngine_Purchasing_ProductDefinition_o *pUVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((IPIHMPBGACB != (UnityEngine_Purchasing_Product_o *)0x0) &&
     (pUVar1 = (IPIHMPBGACB->fields)._definition_k__BackingField,
     pUVar1 != (UnityEngine_Purchasing_ProductDefinition_o *)0x0)) {
    (__this->fields)._CIEBCKIBJHL_k__BackingField = (pUVar1->fields)._id_k__BackingField;
    thunk_FUN_01c20e04();
    GLDKIFOLMAO__LLCONNGHGKD(__this,IPIHMPBGACB,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

