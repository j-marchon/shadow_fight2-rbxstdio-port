// FGKGKDEJCOG$$BPKJKIHLABM @ RVA 0x3334B58

void FGKGKDEJCOG__BPKJKIHLABM
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *BAKIMFMMFMP,MethodInfo *method)

{
  undefined8 *puVar1;
  long lVar2;
  System_Xml_XmlElement_o *pSVar3;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  float local_54;
  
  if ((DAT_04567945 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_9277);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_9259);
    FUN_01bab630(&StringLiteral_12226);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_12228);
    __this = (FGKGKDEJCOG_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_04567945 = 1;
  }
  local_54 = 0.0;
  if (BAKIMFMMFMP != (System_Xml_XmlNode_o *)0x0) {
    lVar2 = (*(BAKIMFMMFMP->klass->vtable)._51_get_Item.methodPtr)
                      (BAKIMFMMFMP,StringLiteral_12228,
                       (BAKIMFMMFMP->klass->vtable)._51_get_Item.method);
    if (lVar2 == 0) {
      pSVar3 = EIABCPKDEBD__BHPIHHJHELJ(BAKIMFMMFMP,StringLiteral_12228,(MethodInfo *)0x0);
      JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                              ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_12226,(MethodInfo *)0x0)
      ;
      EIABCPKDEBD__HBGAGFJBGKD
                ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_14694,(MethodInfo *)0x0);
      EIABCPKDEBD__HBGAGFJBGKD
                ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_9277,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__BHPIHHJHELJ
                         ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_9259,(MethodInfo *)0x0);
      EIABCPKDEBD__HBGAGFJBGKD((System_Xml_XmlNode_o *)pSVar3,StringLiteral_14694,(MethodInfo *)0x0)
      ;
      EIABCPKDEBD__HBGAGFJBGKD((System_Xml_XmlNode_o *)pSVar3,StringLiteral_9277,(MethodInfo *)0x0);
    }
    plVar4 = (long *)(*(BAKIMFMMFMP->klass->vtable)._51_get_Item.methodPtr)
                               (BAKIMFMMFMP,StringLiteral_12228,
                                (BAKIMFMMFMP->klass->vtable)._51_get_Item.method);
    __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                 (plVar4,StringLiteral_12226,*(undefined8 *)(*plVar4 + 0x470));
      __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
      if (plVar4 != (long *)0x0) {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
        __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_14694,(MethodInfo *)0x0);
          if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
          }
          if (DAT_045677be == '\0') {
            FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
            DAT_045677be = '\x01';
          }
          if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          local_54 = PNLFHHJGDLI_TypeInfo->static_fields->EHPFFCGFFOO;
          __this = (FGKGKDEJCOG_o *)System_Single__ToString(local_54,(MethodInfo *)&local_54);
          if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar6,__this,(pSVar6->klass->vtable)._10_set_Value.method);
                    /* try { // try from 03434d88 to 03534ea7 has its CatchHandler @ 03434d88
                       catch() { ... } // from try @ 03434d88 with catch @ 03434d88
                       catch() { ... } // from try @ 03434eec with catch @ 03434d88
                       catch() { ... } // from try @ 03434f20 with catch @ 03434d88
                       catch() { ... } // from try @ 03434f54 with catch @ 03434d88
                       catch() { ... } // from try @ 03434f84 with catch @ 03434d88 */
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
            __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_9277,(MethodInfo *)0x0);
              if (DAT_045677bd == '\0') {
                FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                DAT_045677bd = '\x01';
              }
              if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this = (FGKGKDEJCOG_o *)PNLFHHJGDLI_TypeInfo;
              if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
                puVar1 = &StringLiteral_1567;
                if (PNLFHHJGDLI_TypeInfo->static_fields->GBBBAEHFPLH != false) {
                  puVar1 = &StringLiteral_1606;
                }
                (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                          (pSVar6,*puVar1,(pSVar6->klass->vtable)._10_set_Value.method);
                plVar4 = (long *)(*(BAKIMFMMFMP->klass->vtable)._51_get_Item.methodPtr)
                                           (BAKIMFMMFMP,StringLiteral_12228,
                                            (BAKIMFMMFMP->klass->vtable)._51_get_Item.method);
                __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
                if (plVar4 != (long *)0x0) {
                  plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                             (plVar4,StringLiteral_9259,
                                              *(undefined8 *)(*plVar4 + 0x470));
                  __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
                  if (plVar4 != (long *)0x0) {
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240))
                    ;
                    __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
                    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar5,StringLiteral_14694,(MethodInfo *)0x0);
                      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
                      }
                      if (DAT_045677bf == '\0') {
                        FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                        DAT_045677bf = '\x01';
                      }
                    /* try { // try from 03434ea8 to 03534eaf has its CatchHandler @ 03434f38 */
                      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                    /* try { // try from 03434ebc to 03534ec7 has its CatchHandler @ 03434f34 */
                      local_54 = PNLFHHJGDLI_TypeInfo->static_fields->AGBNCFPOLOE;
                      __this = (FGKGKDEJCOG_o *)
                               System_Single__ToString(local_54,(MethodInfo *)&local_54);
                      if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03434ee4 to 03534eeb has its CatchHandler @ 03434f30 */
                        (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                  (pSVar6,__this,(pSVar6->klass->vtable)._10_set_Value.method);
                    /* try { // try from 03434eec to 03534f13 has its CatchHandler @ 03434d88 */
                        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                 (**(code **)(*plVar4 + 0x238))
                                           (plVar4,*(undefined8 *)(*plVar4 + 0x240));
                        __this = (FGKGKDEJCOG_o *)(PNLFHHJGDLI_c *)0x0;
                        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar5,StringLiteral_9277,(MethodInfo *)0x0);
                    /* try { // try from 03434f14 to 03534f17 has its CatchHandler @ 03434f2c */
                    /* try { // try from 03434f18 to 03534f1b has its CatchHandler @ 03434f28 */
                          if (DAT_04565f32 == '\0') {
                    /* try { // try from 03434f1c to 03534f1f has its CatchHandler @ 03434f24 */
                    /* try { // try from 03434f20 to 03534f4f has its CatchHandler @ 03434d88 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434f1c with catch @ 03434f24
                        */
                            FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434f18 with catch @ 03434f28
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434f14 with catch @ 03434f2c
                        */
                            DAT_04565f32 = '\x01';
                          }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434ee4 with catch @ 03434f30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434ebc with catch @ 03434f34
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03434ea8 with catch @ 03434f38
                        */
                          if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          __this = (FGKGKDEJCOG_o *)PNLFHHJGDLI_TypeInfo;
                          if (pSVar6 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03434f50 to 03534f53 has its CatchHandler @ 03434f74 */
                    /* try { // try from 03434f54 to 03534f7b has its CatchHandler @ 03434d88 */
                            puVar1 = &StringLiteral_1567;
                            if (PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK != false) {
                              puVar1 = &StringLiteral_1606;
                            }
                            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                      (pSVar6,*puVar1,(pSVar6->klass->vtable)._10_set_Value.method);
                    /* catch() { ... } // from try @ 03434f50 with catch @ 03434f74 */
                    /* try { // try from 03434f7c to 03534f83 has its CatchHandler @ 03434f98 */
                    /* try { // try from 03434f84 to 03534f8f has its CatchHandler @ 03434d88 */
                            return;
                          }
                        }
                      }
                    }
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
  FUN_01bab8c8(__this);
}

