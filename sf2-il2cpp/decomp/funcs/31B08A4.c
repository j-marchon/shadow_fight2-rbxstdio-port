// IGPDCHBJAPD.JMPAGIGEFME$$PFECNBCIBAA @ RVA 0x31B08A4

/* WARNING: Type propagation algorithm not settling */

void IGPDCHBJAPD_JMPAGIGEFME__PFECNBCIBAA
               (IGPDCHBJAPD_JMPAGIGEFME_o *__this,OCOEAJMJEOP_o *AKOOAFJLOFD,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int32_t iVar4;
  int iVar5;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar6;
  DOPEEDABNEK_o *__this_01;
  HOOAAGABMBL_o *__this_02;
  HOOAAGABMBL_o *pHVar7;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_03;
  PONNKDFAMFM_o *JGANIDFNOAF;
  HOOAAGABMBL_o *__this_04;
  IGPDCHBJAPD_LDCCMPFIKHF_o *__this_05;
  System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *__this_06;
  ACHLOMELAJE_o *pAVar8;
  IGPDCHBJAPD_LDCCMPFIKHF_array *pIVar9;
  OCOEAJMJEOP_o **ppOVar10;
  
  if ((DAT_04566b75 & 1) == 0) {
    FUN_01bab630(&IGPDCHBJAPD_LDCCMPFIKHF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_12492);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566b75 = 1;
  }
  if (AKOOAFJLOFD == (OCOEAJMJEOP_o *)0x0) {
    return;
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
  pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar8 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar8->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    pIVar6 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,(AKOOAFJLOFD->fields).JIJLBFGKNJK,(MethodInfo *)0x0)
    ;
    if (pIVar6 != (IGFGDDANEPE_o *)0x0) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (__this_01 != (DOPEEDABNEK_o *)0x0) {
      __this_02 = DOPEEDABNEK__CKKIPBAIEMN
                            (__this_01,(AKOOAFJLOFD->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
      if (__this_02 == (HOOAAGABMBL_o *)0x0) {
        return;
      }
      iVar4 = OCOEAJMJEOP__EGKAPNMCLDI(AKOOAFJLOFD,(MethodInfo *)0x0);
      if (iVar4 < 1) {
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
        pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar8 == (ACHLOMELAJE_o *)0x0) goto LAB_032b0c18;
        iVar5 = ACHLOMELAJE__EOEAKGGDBFH(pAVar8,(MethodInfo *)0x0);
      }
      else {
        iVar5 = OCOEAJMJEOP__EGKAPNMCLDI(AKOOAFJLOFD,(MethodInfo *)0x0);
      }
      __this_04 = __this_02;
      if (((__this_02->fields)._JDEHPJEIOCI_k__BackingField != iVar5) &&
         (pHVar7 = HOOAAGABMBL__CIBHICEHBJE(__this_02,iVar5,false,(MethodInfo *)0x0),
         pHVar7 != (HOOAAGABMBL_o *)0x0)) {
        __this_04 = pHVar7;
      }
      if ((AKOOAFJLOFD->fields).GBDPLCLDMIG != 0) {
        __this_03 = HOOAAGABMBL__DBONHFEAOEG
                              (__this_04,true,(__this_04->fields)._JDEHPJEIOCI_k__BackingField,
                               (MethodInfo *)0x0);
        if (__this_03 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) goto LAB_032b0c18;
        iVar5 = (__this_03->fields)._size;
        if (iVar5 != 0) {
          uVar1 = (AKOOAFJLOFD->fields).GBDPLCLDMIG;
          uVar2 = iVar5 - 1;
          if (uVar1 <= uVar2) {
            uVar2 = uVar1;
          }
          JGANIDFNOAF = (PONNKDFAMFM_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_03,uVar2,
                                   Method_System_Collections_Generic_List<PONNKDFAMFM>_get_Item__);
          __this_04 = HOOAAGABMBL__KGJLMGPGJEI(__this_02,JGANIDFNOAF,(MethodInfo *)0x0);
        }
        if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_12492,StringLiteral_1,(MethodInfo *)0x0);
      }
      __this_05 = (IGPDCHBJAPD_LDCCMPFIKHF_o *)thunk_FUN_01bda818(IGPDCHBJAPD_LDCCMPFIKHF_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
      if (__this_05 != (IGPDCHBJAPD_LDCCMPFIKHF_o *)0x0) {
        (__this_05->fields).CJLNOJMBNPN = __this_04;
        thunk_FUN_01c20e04(&__this_05->fields,__this_04);
        ppOVar10 = &(__this_05->fields).OPGOPLBKMBM;
        *ppOVar10 = AKOOAFJLOFD;
        thunk_FUN_01c20e04(ppOVar10,AKOOAFJLOFD);
        (__this_05->fields).EDCFFINCGFA = (AKOOAFJLOFD->fields).super.EDCFFINCGFA;
        lVar3 = Method_System_Collections_Generic_List<IGPDCHBJAPD_LDCCMPFIKHF>_Add__;
        __this_06 = (__this->fields).GHAAKPDHIJJ;
        if (__this_06 != (System_Collections_Generic_List_IGPDCHBJAPD_LDCCMPFIKHF__o *)0x0) {
          pIVar9 = (__this_06->fields)._items;
          (__this_06->fields)._version = (__this_06->fields)._version + 1;
          if (pIVar9 != (IGPDCHBJAPD_LDCCMPFIKHF_array *)0x0) {
            uVar2 = (__this_06->fields)._size;
            if (uVar2 < (uint)pIVar9->max_length) {
              (__this_06->fields)._size = uVar2 + 1;
              pIVar9->m_Items[(int)uVar2] = __this_05;
              thunk_FUN_01c20e04(pIVar9->m_Items + (int)uVar2,__this_05);
              return;
            }
                    /* try { // try from 032b0c04 to 033b0d0b has its CatchHandler @ 032b0c04
                       catch() { ... } // from try @ 032b0c04 with catch @ 032b0c04
                       catch() { ... } // from try @ 032b0e54 with catch @ 032b0c04
                       catch() { ... } // from try @ 032b0f00 with catch @ 032b0c04
                       catch() { ... } // from try @ 032b0f08 with catch @ 032b0c04
                       catch() { ... } // from try @ 032b0f18 with catch @ 032b0c04
                       catch() { ... } // from try @ 032b0fe4 with catch @ 032b0c04 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_06,
                       (Il2CppObject *)__this_05,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
LAB_032b0c18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

