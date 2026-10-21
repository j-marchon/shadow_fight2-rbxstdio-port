// BEPJMNAHCAD$$OCJCMHLABBF @ RVA 0x318A56C

int32_t BEPJMNAHCAD__OCJCMHLABBF
                  (BEPJMNAHCAD_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,bool FOFCAILEKJD,
                  bool PMIAIAOKFND,bool HOACFPMHAFP,MethodInfo *method)

{
  long lVar1;
  IEFEBEDLHNN_o **ppIVar2;
  uint uVar3;
  int32_t iVar4;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MNLIBPAOCLG_o *pMVar5;
  IEFEBEDLHNN_o *pIVar6;
  OLKKAIFGGAK_array *pOVar7;
  MGNPHCAAEIO_CEMCIPLHMKD_o *pMVar8;
  NHBBOEHHEKG_o *pNVar9;
  GBJGJEGPHKD_o *__this_01;
  
  if ((DAT_04566a06 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566a06 = 1;
  }
  lVar1 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__;
  __this_00 = (__this->fields).EHJHKEEDKBE;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    pOVar7 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pOVar7 != (OLKKAIFGGAK_array *)0x0) {
      uVar3 = (__this_00->fields)._size;
      if (uVar3 < (uint)pOVar7->max_length) {
        (__this_00->fields)._size = uVar3 + 1;
        pOVar7->m_Items[(int)uVar3] = BCKBBGCOMJD;
        thunk_FUN_01c20e04(pOVar7->m_Items + (int)uVar3,BCKBBGCOMJD);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)BCKBBGCOMJD,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
      }
      pMVar5 = (__this->fields).LIICCFBEOLC;
      if (pMVar5 != (MNLIBPAOCLG_o *)0x0) {
        MNLIBPAOCLG__DFLHLNGDGEP(pMVar5,BCKBBGCOMJD,(MethodInfo *)0x0);
        if (HOACFPMHAFP) {
          if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_0328a730;
          __this_01 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04566ab3 == '\0') {
            FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
            DAT_04566ab3 = '\x01';
          }
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar8 = MGNPHCAAEIO_TypeInfo->static_fields->EBNPOGPNMGH;
          if ((pMVar8 == (MGNPHCAAEIO_CEMCIPLHMKD_o *)0x0) || (__this_01 == (GBJGJEGPHKD_o *)0x0))
          goto LAB_0328a730;
          pIVar6 = GBJGJEGPHKD__OCJAHBKIFNO
                             (__this_01,(pMVar8->fields).IDMFMJHDAFI,(MethodInfo *)0x0);
          lVar1 = 0x58;
          ppIVar2 = &(__this->fields).AGPJBDPFKDI;
          if (!FOFCAILEKJD) {
            lVar1 = 0x60;
            ppIVar2 = &(__this->fields).KKLAPLADFIG;
          }
          *(IEFEBEDLHNN_o **)((long)&__this->klass + lVar1) = pIVar6;
          thunk_FUN_01c20e04(ppIVar2);
        }
        pMVar5 = (__this->fields).LIICCFBEOLC;
        if (pMVar5 == (MNLIBPAOCLG_o *)0x0) {
          return -1;
        }
        if ((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
           (pNVar9 = (__this->fields).CNHHLPPHNCO, pNVar9 != (NHBBOEHHEKG_o *)0x0)) {
          iVar4 = MNLIBPAOCLG__FBFNFBPFHEI
                            (pMVar5,(BCKBBGCOMJD->fields).HMIAFJALFCJ,
                             (UnityEngine_Color_o)(pNVar9->fields).GLECOLINCIH.fields,PMIAIAOKFND,
                             (MethodInfo *)0x0);
          return iVar4;
        }
      }
    }
  }
LAB_0328a730:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

