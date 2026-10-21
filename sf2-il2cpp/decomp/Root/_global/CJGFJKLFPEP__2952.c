// TypeDefIndex 2952
// Namespace: 
// public class CJGFJKLFPEP : BOFEMGGNODC
// Fields:
//   private string INLGJADOPFA; // 0x68
//   private string BBBKDDNHBMM; // 0x70
//   private bool OKKPMGHPNOH; // 0x78

// ===== public void .ctor()  [RVA 0x3492C30]
// CJGFJKLFPEP$$.ctor @ RVA 0x3492C30

void CJGFJKLFPEP___ctor(CJGFJKLFPEP_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3492C38]
// CJGFJKLFPEP$$MAHFCKJGBPP @ RVA 0x3492C38

void CJGFJKLFPEP__MAHFCKJGBPP(CJGFJKLFPEP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  long lVar1;
  LAMJOHEKJNJ_o *__this_00;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_01;
  LEGDPJHPEOB_o *__this_02;
  PKHMIGFEJCL_o **ppPVar2;
  ACHLOMELAJE_o *pAVar3;
  System_String_o *pSVar4;
  double dVar5;
  
  if ((DAT_04568433 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_486/*" not activated. time = "*/);
    DAT_04568433 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).INLGJADOPFA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar4,(MethodInfo *)0x0);
  if ((__this->fields).OKKPMGHPNOH == false) {
    __this_01 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_01,(MethodInfo *)0x0);
    __this_02 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
    LEGDPJHPEOB___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 == (LEGDPJHPEOB_o *)0x0) {
LAB_03592f14:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppPVar2 = &(__this_02->fields).AAJBIMFNMBB;
    *ppPVar2 = AAJBIMFNMBB;
    thunk_FUN_01c20e04(ppPVar2,AAJBIMFNMBB);
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_02,(__this->fields).BBBKDDNHBMM,__this_01,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if (__this_01 == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) goto LAB_03592f14;
    dVar5 = (__this_01->fields).HNFHNNLOLGK;
    lVar1 = -0x8000000000000000;
    if (dVar5 != INFINITY) {
      lVar1 = (long)dVar5;
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
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 == (ACHLOMELAJE_o *)0x0) goto LAB_03592f14;
    __this_00 = (pAVar3->fields)._DDGPMHMNKNA_k__BackingField;
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_00 == (LAMJOHEKJNJ_o *)0x0) goto LAB_03592f14;
    lVar1 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM + lVar1;
  }
  else {
    lVar1 = PCOEHCPGBBG__NEDKJCKICNF((__this->fields).BBBKDDNHBMM,0,(MethodInfo *)0x0);
    if (lVar1 == 0) {
      pSVar4 = System_String__Concat
                         (pSVar4,StringLiteral_486/*" not activated. time = "*/,(__this->fields).BBBKDDNHBMM,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
      goto LAB_03592ef8;
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
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
       (__this_00 = (pAVar3->fields)._DDGPMHMNKNA_k__BackingField, __this_00 == (LAMJOHEKJNJ_o *)0x0
       )) goto LAB_03592f14;
  }
  LAMJOHEKJNJ__NCBMPCGHHFK(__this_00,pSVar4,lVar1,(MethodInfo *)0x0);
LAB_03592ef8:
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3492F18]
// CJGFJKLFPEP$$HNIHOIAMDPC @ RVA 0x3492F18

void CJGFJKLFPEP__HNIHOIAMDPC
               (CJGFJKLFPEP_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568434 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_2687/*"Absolute"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568434 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).INLGJADOPFA = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).BBBKDDNHBMM = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_2687/*"Absolute"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          (__this->fields).OKKPMGHPNOH = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

