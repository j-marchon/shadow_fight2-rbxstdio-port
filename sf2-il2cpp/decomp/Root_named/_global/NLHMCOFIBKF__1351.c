// TypeDefIndex 1351
// Namespace: 
// public class NLHMCOFIBKF : QuestAction
// Fields:
//   private string IFAEOOBNDDH; // 0x68
//   private string CNBNMBNHICL; // 0x70
//   private string NELHKLHDOIJ; // 0x78
//   private string NCACECOAKAA; // 0x80
//   private string GCDAAJGEOIB; // 0x88

// ===== private string GKHFOGJEDPN(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x316491C]
// NLHMCOFIBKF$$GKHFOGJEDPN @ RVA 0x316491C

System_String_o *
NLHMCOFIBKF__GKHFOGJEDPN(NLHMCOFIBKF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_045668aa & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_045668aa = 1;
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).IFAEOOBNDDH,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = (System_String_o *)0x0;
  }
  else {
    pSVar3 = (__this->fields).IFAEOOBNDDH;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar3,(MethodInfo *)0x0);
    iVar2 = PCOEHCPGBBG__DGMBALOKJDJ(pSVar3,0x2e,(MethodInfo *)0x0);
    if (iVar2 != 3) {
      pSVar3 = (System_String_o *)0x0;
    }
  }
  return pSVar3;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31649B4]
// NLHMCOFIBKF$$MAHFCKJGBPP @ RVA 0x31649B4

void NLHMCOFIBKF__MAHFCKJGBPP(NLHMCOFIBKF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  CFGLKHFFEKA_o *__this_00;
  NLPJLHOEAOE_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_045668ab & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668ab = 1;
  }
  method_00 = (MethodInfo *)0x0;
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  value = NLHMCOFIBKF__GKHFOGJEDPN(__this,AAJBIMFNMBB,method_00);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    value = NLHMCOFIBKF__HIAILHACKBH(__this,AAJBIMFNMBB,method_00);
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
  if (__this_00 != (CFGLKHFFEKA_o *)0x0) {
    CFGLKHFFEKA__JAGMOPPIMKB(__this_00,value,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
      NLPJLHOEAOE__OIHMMDEELDP(__this_01,value,(MethodInfo *)0x0);
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string HIAILHACKBH(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3164AAC]
// NLHMCOFIBKF$$HIAILHACKBH @ RVA 0x3164AAC

System_String_o *
NLHMCOFIBKF__HIAILHACKBH(NLHMCOFIBKF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  
  if ((DAT_045668ac & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1377/*"."*/);
    DAT_045668ac = 1;
  }
  pSVar4 = (__this->fields).CNBNMBNHICL;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar4,(MethodInfo *)0x0);
  pSVar1 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,(__this->fields).NELHKLHDOIJ,(MethodInfo *)0x0);
  pSVar2 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,(__this->fields).NCACECOAKAA,(MethodInfo *)0x0);
  pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,(__this->fields).GCDAAJGEOIB,(MethodInfo *)0x0);
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar4;
      thunk_FUN_01c20e04(values->m_Items,pSVar4);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = StringLiteral_1377/*"."*/;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar1;
          thunk_FUN_01c20e04(values->m_Items + 2,pSVar1);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = StringLiteral_1377/*"."*/;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar2;
              thunk_FUN_01c20e04(values->m_Items + 4,pSVar2);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = StringLiteral_1377/*"."*/;
                thunk_FUN_01c20e04(values->m_Items + 5);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = pSVar3;
                  thunk_FUN_01c20e04(values->m_Items + 6,pSVar3);
                  pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                  return pSVar4;
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


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3164C8C]
// NLHMCOFIBKF$$HNIHOIAMDPC @ RVA 0x3164C8C

void NLHMCOFIBKF__HNIHOIAMDPC
               (NLHMCOFIBKF_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_045668ad & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_6614/*"Full"*/);
    FUN_01bab630(&StringLiteral_8803/*"Major"*/);
    FUN_01bab630(&StringLiteral_9075/*"Minor"*/);
    FUN_01bab630(&StringLiteral_10488/*"Production"*/);
    FUN_01bab630(&StringLiteral_5196/*"DataVersion"*/);
    DAT_045668ad = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_6614/*"Full"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      (__this->fields).IFAEOOBNDDH = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_10488/*"Production"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        (__this->fields).CNBNMBNHICL = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_8803/*"Major"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                             (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
          (__this->fields).NELHKLHDOIJ = pSVar3;
          thunk_FUN_01c20e04();
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_9075/*"Minor"*/,(MethodInfo *)0x0);
            pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            (__this->fields).NCACECOAKAA = pSVar3;
            thunk_FUN_01c20e04();
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                               (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_5196/*"DataVersion"*/,(MethodInfo *)0x0);
              pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                                 (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
              ppSVar4 = &(__this->fields).GCDAAJGEOIB;
              *ppSVar4 = pSVar3;
              thunk_FUN_01c20e04(ppSVar4,pSVar3);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3164EB0]
// NLHMCOFIBKF$$.ctor @ RVA 0x3164EB0

void NLHMCOFIBKF___ctor(NLHMCOFIBKF_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

