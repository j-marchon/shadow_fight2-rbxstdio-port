// ACHLOMELAJE$$OJOGIDJOKMK @ RVA 0x3060940

void ACHLOMELAJE__OJOGIDJOKMK
               (ACHLOMELAJE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_String_o *LLJBBFNJMFB;
  System_String_o *FHIBEDMHPHL;
  bool_conflict bVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  float fVar7;
  
  if ((DAT_04565ec3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_9277);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_9259);
    FUN_01bab630(&StringLiteral_12226);
    FUN_01bab630(&StringLiteral_12228);
    DAT_04565ec3 = 1;
  }
  LLJBBFNJMFB = (__this->fields).KEOIHILGCAA;
  FHIBEDMHPHL = (__this->fields).CFMPEFHINDH;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__PMDMCNDHNKF(FHIBEDMHPHL,LLJBBFNJMFB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_12228,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar3 == (long *)0x0) {
      return;
    }
    plVar4 = (long *)(**(code **)(*plVar3 + 0x468))
                               (plVar3,StringLiteral_12226,*(undefined8 *)(*plVar3 + 0x470));
    if ((plVar4 != (long *)0x0) &&
       (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
       pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_14694,(MethodInfo *)0x0);
      fVar7 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,1.0,(MethodInfo *)0x0);
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNLFHHJGDLI__IMFBLHDOHFL(fVar7,(MethodInfo *)0x0);
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_9277,(MethodInfo *)0x0);
        bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
        PNLFHHJGDLI__NEKJIEEEPFO(bVar2,(MethodInfo *)0x0);
        plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                   (plVar3,StringLiteral_9259,*(undefined8 *)(*plVar3 + 0x470));
        if ((plVar3 != (long *)0x0) &&
           (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240)),
           pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_14694,(MethodInfo *)0x0);
          fVar7 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,1.0,(MethodInfo *)0x0);
          PNLFHHJGDLI__GJBPODCHLNP(fVar7,(MethodInfo *)0x0);
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_9277,(MethodInfo *)0x0);
            bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
            PNLFHHJGDLI__FDOGCCOEHPL(bVar2,(MethodInfo *)0x0);
            if (DAT_04565f32 == '\0') {
              FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
              DAT_04565f32 = '\x01';
            }
            if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
            }
            NLPJLHOEAOE_TypeInfo->static_fields->OFCMOHAEENG = bVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

