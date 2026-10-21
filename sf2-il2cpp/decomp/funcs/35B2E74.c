// FDJKKAFIEFB$$INCIEIKPDFI @ RVA 0x35B2E74

void FDJKKAFIEFB__INCIEIKPDFI(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar2;
  long *plVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Xml_XmlNode_o *BKLLAGBLCDB;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Xml_XmlNode_o *AHDGNOJPPIB_01;
  System_Xml_XmlNode_o *AHDGNOJPPIB_02;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  JBEHJGDKPHL_o *pJVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_char__o *IIJNDCLFEFC;
  float fVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_04568eae & 1) == 0) {
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    FUN_01bab630(&JBEHJGDKPHL_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_2808);
    FUN_01bab630(&StringLiteral_8588);
    FUN_01bab630(&StringLiteral_2807);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_1526);
    FUN_01bab630(&StringLiteral_2822);
    FUN_01bab630(&StringLiteral_8552);
    FUN_01bab630(&StringLiteral_5252);
    FUN_01bab630(&StringLiteral_12265);
    FUN_01bab630(&StringLiteral_8321);
    FUN_01bab630(&StringLiteral_2809);
    DAT_04568eae = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar2 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_1526,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar2 != (System_Xml_XmlDocument_o *)0x0) {
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_8588,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 == (long *)0x0) {
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_8552,(MethodInfo *)0x0);
      return;
    }
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                  (**(code **)(*plVar3 + 0x468))
                            (plVar3,StringLiteral_5252,*(undefined8 *)(*plVar3 + 0x470));
    BKLLAGBLCDB = (System_Xml_XmlNode_o *)
                  (**(code **)(*plVar3 + 0x468))
                            (plVar3,StringLiteral_8321,*(undefined8 *)(*plVar3 + 0x470));
    AHDGNOJPPIB_00 =
         (System_Xml_XmlNode_o *)
         (**(code **)(*plVar3 + 0x468))(plVar3,StringLiteral_2809,*(undefined8 *)(*plVar3 + 0x470));
    AHDGNOJPPIB_01 =
         (System_Xml_XmlNode_o *)
         (**(code **)(*plVar3 + 0x468))(plVar3,StringLiteral_2807,*(undefined8 *)(*plVar3 + 0x470));
    AHDGNOJPPIB_02 =
         (System_Xml_XmlNode_o *)
         (**(code **)(*plVar3 + 0x468))(plVar3,StringLiteral_2808,*(undefined8 *)(*plVar3 + 0x470));
    plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                               (plVar3,StringLiteral_12265,*(undefined8 *)(*plVar3 + 0x470));
    if (plVar4 != (long *)0x0) {
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_14694,(MethodInfo *)0x0);
        fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,1.0,(MethodInfo *)0x0);
        (__this->fields).DEKBMBADCIE = fVar8;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                   (plVar3,StringLiteral_2822,*(undefined8 *)(*plVar3 + 0x470));
        if (plVar3 != (long *)0x0) {
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_14694,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
            (__this->fields)._MNOHILOGKBM_k__BackingField = bVar1;
            pJVar7 = (JBEHJGDKPHL_o *)thunk_FUN_01bda818(JBEHJGDKPHL_TypeInfo);
            JBEHJGDKPHL___ctor(pJVar7,(MethodInfo *)0x0);
            if (pJVar7 != (JBEHJGDKPHL_o *)0x0) {
              auVar9 = NEON_fmov(0x3f800000,4);
              method_00 = (MethodInfo *)0x0;
              (pJVar7->fields).PPNIGDOLECH = (float)(int)auVar9._8_8_;
              (pJVar7->fields).PFHPMEPMFIB = (float)(int)((ulong)auVar9._8_8_ >> 0x20);
              (pJVar7->fields).DHMKKNFGGHN = (float)(int)auVar9._0_8_;
              (pJVar7->fields).LPOMGFMFKND = (float)(int)((ulong)auVar9._0_8_ >> 0x20);
              pJVar7 = KCNFAADLADJ__FLFEFLPPBLL(AHDGNOJPPIB,pJVar7,(MethodInfo *)0x0);
              (__this->fields).DEPJPOIKLFL = pJVar7;
              thunk_FUN_01c20e04();
              FDJKKAFIEFB__NLEKIDMGLIF(__this,BKLLAGBLCDB,method_00);
              IIJNDCLFEFC = (__this->fields)._MMDFLMEALLK_k__BackingField;
              if ((FDJKKAFIEFB_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              FDJKKAFIEFB__GIJOGIIDEGO(IIJNDCLFEFC,AHDGNOJPPIB_00,method_00);
              FDJKKAFIEFB__GIJOGIIDEGO
                        ((__this->fields)._IECIBAIEONL_k__BackingField,AHDGNOJPPIB_01,method_00);
              FDJKKAFIEFB__GIJOGIIDEGO
                        ((__this->fields)._HDMPOOPGLIC_k__BackingField,AHDGNOJPPIB_02,method_00);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

