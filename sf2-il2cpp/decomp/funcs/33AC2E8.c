// OLKPEJMEBPJ$$.ctor @ RVA 0x33AC2E8

void OLKPEJMEBPJ___ctor(OLKPEJMEBPJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  DNELIPCHKLK_o *pDVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *CJNHFNHJHPE;
  int64_t iVar7;
  DNELIPCHKLK_o **ppDVar8;
  OLKPEJMEBPJ_Fields *pOVar9;
  OOMHDDBCBJP_o **ppOVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar11;
  
                    /* try { // try from 034ac304 to 035ac30b has its CatchHandler @ 034acbac */
  if ((DAT_04567d14 & 1) == 0) {
                    /* try { // try from 034ac31c to 035ac323 has its CatchHandler @ 034acc0c */
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
                    /* try { // try from 034ac328 to 035ac33f has its CatchHandler @ 034acc70 */
    FUN_01bab630(&StringLiteral_8602);
    FUN_01bab630(&StringLiteral_11010);
    FUN_01bab630(&StringLiteral_6310);
                    /* try { // try from 034ac34c to 035ac353 has its CatchHandler @ 034acc10 */
    FUN_01bab630(&StringLiteral_5750);
    FUN_01bab630(&StringLiteral_9327);
                    /* try { // try from 034ac364 to 035ac36b has its CatchHandler @ 034acbd0 */
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 034ac36c to 035ac377 has its CatchHandler @ 034acbb4 */
    FUN_01bab630(&StringLiteral_11237);
    FUN_01bab630(&StringLiteral_7076);
                    /* try { // try from 034ac388 to 035ac38f has its CatchHandler @ 034acc18 */
    FUN_01bab630(&StringLiteral_11006);
    FUN_01bab630(&StringLiteral_1567);
                    /* try { // try from 034ac3a0 to 035ac3a7 has its CatchHandler @ 034acbfc */
    DAT_04567d14 = 1;
  }
                    /* try { // try from 034ac3a8 to 035ac3b3 has its CatchHandler @ 034acbc0 */
  pDVar3 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  DNELIPCHKLK___ctor(pDVar3,(MethodInfo *)0x0);
  ppDVar8 = &(__this->fields).BBELCDHPJIP;
  *ppDVar8 = pDVar3;
  thunk_FUN_01c20e04(ppDVar8,pDVar3);
                    /* try { // try from 034ac3cc to 035ac3d3 has its CatchHandler @ 034acb98 */
  (__this->fields).DAJFCLOOMDM = -1;
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).EBIIDPEAEPH.fields = CVar11;
                    /* try { // try from 034ac3ec to 035ac3ef has its CatchHandler @ 034acb84 */
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
                    /* try { // try from 034ac3f0 to 035ac417 has its CatchHandler @ 034acb9c */
  (__this->fields).ANOLCJDAGPJ.fields = CVar11;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pOVar9 = &__this->fields;
  pOVar9->HJKLIDCAEOE = AHDGNOJPPIB;
  thunk_FUN_01c20e04(pOVar9,AHDGNOJPPIB);
  ppOVar10 = &(__this->fields).MIFNFJDIPBL;
                    /* try { // try from 034ac418 to 035ac41f has its CatchHandler @ 034acb90 */
  *ppOVar10 = (OOMHDDBCBJP_o *)0x0;
  thunk_FUN_01c20e04(ppOVar10,0);
  (__this->fields).IAMLNMJMPIJ = false;
  (__this->fields).MEMNIKBPEJL = false;
  (__this->fields).DAJFCLOOMDM = -1;
                    /* try { // try from 034ac43c to 035ac443 has its CatchHandler @ 034acbbc */
  (__this->fields).KOANEAEMOOP = 0;
  (__this->fields).IKGEDJDFCBA = 0;
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).EBIIDPEAEPH.fields = CVar11;
  (__this->fields).CHMOBJPGDBN = false;
  (__this->fields).LJNPEJNOIPB = false;
                    /* try { // try from 034ac454 to 035ac45b has its CatchHandler @ 034acc20 */
  (__this->fields).LCIGBGGCCAH = false;
  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(1,(MethodInfo *)0x0);
                    /* try { // try from 034ac45c to 035ac467 has its CatchHandler @ 034acc08 */
  (__this->fields).ANOLCJDAGPJ.fields = CVar11;
  pSVar4 = pOVar9->HJKLIDCAEOE;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac480 to 035ac487 has its CatchHandler @ 034acb94 */
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_9327,(MethodInfo *)0x0);
                    /* try { // try from 034ac4a0 to 035ac4a3 has its CatchHandler @ 034acb88 */
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 034ac4a4 to 035ac4cb has its CatchHandler @ 034acba0 */
      if (bVar1) {
        pSVar6 = EIABCPKDEBD__HBGAGFJBGKD(pOVar9->HJKLIDCAEOE,StringLiteral_9327,(MethodInfo *)0x0);
        if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_034ac848;
        (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar6,StringLiteral_1,(pSVar6->klass->vtable)._10_set_Value.method);
      }
                    /* try { // try from 034ac4cc to 035ac4d3 has its CatchHandler @ 034acb8c */
      pSVar4 = pOVar9->HJKLIDCAEOE;
      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac4f0 to 035ac4f7 has its CatchHandler @ 034acc04 */
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_8602,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 034ac504 to 035ac507 has its CatchHandler @ 034acbc8 */
          if (bVar1) {
            pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                               (pOVar9->HJKLIDCAEOE,StringLiteral_8602,(MethodInfo *)0x0);
            if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_034ac848;
            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar6,StringLiteral_1567,(pSVar6->klass->vtable)._10_set_Value.method);
          }
          pSVar4 = pOVar9->HJKLIDCAEOE;
          if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034ac540 to 035ac567 has its CatchHandler @ 034ac9b0 */
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_8602,(MethodInfo *)0x0);
              bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
              pSVar4 = (__this->fields).HJKLIDCAEOE;
              (__this->fields).PABIMIFJJKF = bVar1;
              if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                 (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method),
                 pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 034ac59c to 035ac5c7 has its CatchHandler @ 034ac9ac */
                pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar5,StringLiteral_7076,(MethodInfo *)0x0);
                bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
                (__this->fields).BFPMONAEFGM = bVar1;
                pDVar3 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
                DNELIPCHKLK___ctor(pDVar3,(MethodInfo *)0x0);
                (__this->fields).BBELCDHPJIP = pDVar3;
                thunk_FUN_01c20e04(ppDVar8,pDVar3);
                pSVar4 = (__this->fields).HJKLIDCAEOE;
                if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                  pDVar3 = (__this->fields).BBELCDHPJIP;
                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac5fc to 035ac607 has its CatchHandler @ 034ac9a0 */
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_9327,(MethodInfo *)0x0);
                    /* try { // try from 034ac610 to 035ac61f has its CatchHandler @ 034ac9a4 */
                    CJNHFNHJHPE = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1,(MethodInfo *)0x0)
                    ;
                    if ((pDVar3 != (DNELIPCHKLK_o *)0x0) &&
                       (DNELIPCHKLK__LGOFNFEIKFB(pDVar3,CJNHFNHJHPE,(MethodInfo *)0x0),
                       AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
                    /* try { // try from 034ac630 to 035ac637 has its CatchHandler @ 034ac950 */
                      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac648 to 035ac64f has its CatchHandler @ 034ac944 */
                    /* try { // try from 034ac650 to 035ac65b has its CatchHandler @ 034ac948 */
                        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar5,StringLiteral_11006,(MethodInfo *)0x0);
                        bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                        (__this->fields).LJNPEJNOIPB = (bool_conflict)(~bVar1 & 1);
                    /* try { // try from 034ac670 to 035ac677 has its CatchHandler @ 034ac974 */
                        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac688 to 035ac68f has its CatchHandler @ 034ac990 */
                    /* try { // try from 034ac690 to 035ac69b has its CatchHandler @ 034ac988 */
                          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar5,StringLiteral_11010,(MethodInfo *)0x0);
                          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 034ac6ac to 035ac6b3 has its CatchHandler @ 034ac98c */
                          (__this->fields).CHMOBJPGDBN = (bool_conflict)(~bVar1 & 1);
                          if ((__this->fields).LJNPEJNOIPB != false) {
                    /* try { // try from 034ac6bc to 035ac6c3 has its CatchHandler @ 034ac954 */
                    /* try { // try from 034ac6c4 to 035ac6df has its CatchHandler @ 034ac998 */
                            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                               (AHDGNOJPPIB,
                                                (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                method);
                            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0)
                            goto LAB_034ac848;
                            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar5,StringLiteral_11006,(MethodInfo *)0x0);
                            iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
                            (__this->fields).IKGEDJDFCBA = (long)iVar2;
                          }
                    /* try { // try from 034ac6ec to 035ac6f3 has its CatchHandler @ 034ac980 */
                    /* try { // try from 034ac6fc to 035ac703 has its CatchHandler @ 034ac968 */
                          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                             (AHDGNOJPPIB,
                                              (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                             );
                          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac704 to 035ac71f has its CatchHandler @ 034ac994 */
                            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar5,StringLiteral_5750,(MethodInfo *)0x0);
                            iVar7 = EIABCPKDEBD__HNIGPBMJJOL(pSVar6,-1,(MethodInfo *)0x0);
                            (__this->fields).DAJFCLOOMDM = iVar7;
                    /* try { // try from 034ac72c to 035ac733 has its CatchHandler @ 034ac94c */
                            if ((__this->fields).CHMOBJPGDBN != false) {
                    /* try { // try from 034ac73c to 035ac743 has its CatchHandler @ 034ac95c */
                              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                                 (AHDGNOJPPIB,
                                                  (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                  method);
                    /* try { // try from 034ac744 to 035ac74f has its CatchHandler @ 034ac958 */
                              if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0)
                              goto LAB_034ac848;
                              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar5,StringLiteral_11010,(MethodInfo *)0x0);
                              iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
                              (__this->fields).KOANEAEMOOP = (long)iVar2;
                            }
                            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                               (AHDGNOJPPIB,
                                                (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                method);
                            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar5,StringLiteral_11237,(MethodInfo *)0x0);
                    /* try { // try from 034ac798 to 035ac7bb has its CatchHandler @ 034ac940 */
                              iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
                              CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                                       CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                 (iVar2,(MethodInfo *)0x0);
                              (__this->fields).EBIIDPEAEPH.fields = CVar11;
                              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                                 (AHDGNOJPPIB,
                                                  (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                  method);
                              if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ac7d4 to 035ac843 has its CatchHandler @ 034acc9c */
                                pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                   (pSVar5,StringLiteral_6310,(MethodInfo *)0x0);
                                bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                                (__this->fields).LCIGBGGCCAH = (bool_conflict)(~bVar1 & 1);
                                if (!bVar1) {
                                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                             methodPtr)(AHDGNOJPPIB,
                                                        (AHDGNOJPPIB->klass->vtable).
                                                        _16_get_Attributes.method);
                                  if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0)
                                  goto LAB_034ac848;
                                  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                     (pSVar5,StringLiteral_6310,(MethodInfo *)0x0);
                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
                                  CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                                           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                                     (iVar2,(MethodInfo *)0x0);
                                  (__this->fields).ANOLCJDAGPJ.fields = CVar11;
                                }
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
    }
  }
LAB_034ac848:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

