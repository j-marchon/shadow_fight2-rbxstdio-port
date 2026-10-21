// NFGLEDADCGL$$JHJPKAJCJHF @ RVA 0x316C340

void NFGLEDADCGL__JHJPKAJCJHF(NFGLEDADCGL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlNode_o *pSVar2;
  long lVar3;
  ACHLOMELAJE_o *__this_00;
  EPFMFHDGMCE_o *__this_01;
  System_Collections_Generic_List_HNFFPPPDKDK__o *pSVar4;
  KJBGNIGNECD_o *pKVar5;
  System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *pSVar6;
  PJKHAJKEHEL_o *pPVar7;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar8;
  FOKJBDHLIMG_o *pFVar9;
  
  if ((DAT_045668fd & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJBGNIGNECD_AHICALNEICM>_Clear__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10223);
    FUN_01bab630(&StringLiteral_9951);
    FUN_01bab630(&StringLiteral_10239);
    DAT_045668fd = 1;
  }
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    lVar3 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                      (pSVar2,StringLiteral_10239,(pSVar2->klass->vtable)._51_get_Item.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326c304 with catch @ 0326c3f0
                        */
    if (lVar3 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326c2f0 with catch @ 0326c3f4
                        */
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_0326c620;
                    /* try { // try from 0326c40c to 0336c40f has its CatchHandler @ 0326c430 */
      (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                (pSVar2,lVar3,(pSVar2->klass->vtable)._25_RemoveChild.method);
    }
                    /* try { // try from 0326c410 to 0336c437 has its CatchHandler @ 0326bf98 */
    pSVar2 = (__this->fields).HJKLIDCAEOE;
    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 0326c40c with catch @ 0326c430 */
      lVar3 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar2,StringLiteral_10223,(pSVar2->klass->vtable)._51_get_Item.method);
      if (lVar3 != 0) {
                    /* try { // try from 0326c438 to 0336c43f has its CatchHandler @ 0326c454 */
        pSVar2 = (__this->fields).HJKLIDCAEOE;
                    /* try { // try from 0326c440 to 0336c44b has its CatchHandler @ 0326bf98 */
        if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_0326c620;
                    /* try { // try from 0326c44c to 0336c453 has its CatchHandler @ 0326c454 */
        (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                  (pSVar2,lVar3,(pSVar2->klass->vtable)._25_RemoveChild.method);
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326c438 with catch @ 0326c454
                       catch(type#2 @ 00000000) { ... } // from try @ 0326c44c with catch @ 0326c454
                        */
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        lVar3 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                          (pSVar2,StringLiteral_9951,(pSVar2->klass->vtable)._51_get_Item.method);
        if (lVar3 != 0) {
          pSVar2 = (__this->fields).HJKLIDCAEOE;
          if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_0326c620;
          (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                    (pSVar2,lVar3,(pSVar2->klass->vtable)._25_RemoveChild.method);
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
        __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_00 != (ACHLOMELAJE_o *)0x0) {
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
          pSVar4 = (__this->fields).PEJIOCBFEEE;
          if (pSVar4 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
            iVar1 = (pSVar4->fields)._size;
            (pSVar4->fields)._size = 0;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (0 < iVar1) {
              System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar1,
                                  (MethodInfo *)0x0);
            }
            pKVar5 = (__this->fields).GMHDPMNODMF;
            if ((pKVar5 != (KJBGNIGNECD_o *)0x0) &&
               (pSVar6 = (pKVar5->fields).GJBLBEALOBO,
               pSVar6 != (System_Collections_Generic_List_KJBGNIGNECD_AHICALNEICM__o *)0x0)) {
              iVar1 = (pSVar6->fields)._size;
              (pSVar6->fields)._size = 0;
              (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
              if (0 < iVar1) {
                System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
              }
              __this_01 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0);
              if (__this_01 != (EPFMFHDGMCE_o *)0x0) {
                EPFMFHDGMCE__IIAACPBHHOA(__this_01,(MethodInfo *)0x0);
                pPVar7 = (__this->fields).MFLNIMCFPDK;
                if ((pPVar7 != (PJKHAJKEHEL_o *)0x0) &&
                   (pSVar8 = (pPVar7->fields).EHDILMGPDDN,
                   pSVar8 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
                  iVar1 = (pSVar8->fields)._size;
                  (pSVar8->fields)._size = 0;
                  (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                  if (0 < iVar1) {
                    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar1,
                                        (MethodInfo *)0x0);
                  }
                  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pFVar9 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
                  if ((pFVar9 != (FOKJBDHLIMG_o *)0x0) &&
                     (pSVar8 = (pFVar9->fields).ODLBEHFGJJE,
                     pSVar8 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
                    iVar1 = (pSVar8->fields)._size;
                    (pSVar8->fields)._size = 0;
                    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
                    if (0 < iVar1) {
                      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar1,
                                          (MethodInfo *)0x0);
                    }
                    if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    ANFOHCGLHID__LJMKLOBKBNH((MethodInfo *)0x0);
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
LAB_0326c620:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

