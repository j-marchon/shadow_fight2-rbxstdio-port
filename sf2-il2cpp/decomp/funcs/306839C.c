// ACHLOMELAJE$$DHPIHCCDOGH @ RVA 0x306839C

void ACHLOMELAJE__DHPIHCCDOGH(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  Nekki_Utils_GlobalTimer_o *pNVar1;
  int64_t iVar2;
  DPIEIFJBFHE_o *GPDMCLBBPAD;
  LAMJOHEKJNJ_o *__this_00;
  LPEBBHNDFCG_o *pLVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_DPIEIFJBFHE__o *pSVar4;
  int index;
  
  if ((DAT_04565f09 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPIEIFJBFHE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DPIEIFJBFHE>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565f09 = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).CHDBCFCFNAJ;
  if (pSVar4 != (System_Collections_Generic_List_DPIEIFJBFHE__o *)0x0) {
    if ((pSVar4->fields)._size < 1) {
      return;
    }
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
    }
    pNVar1 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_Utils_GlobalTimer_o *)0x0) {
      if ((pNVar1->fields).GAPAJLLHGHO == false) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)0x0);
        iVar2 = iVar2 * 1000;
      }
      else {
        if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar1 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
        if (pNVar1 == (Nekki_Utils_GlobalTimer_o *)0x0) goto LAB_03168500;
        iVar2 = Nekki_Utils_GlobalTimer__GetTime(pNVar1,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields).CHDBCFCFNAJ;
      if (pSVar4 != (System_Collections_Generic_List_DPIEIFJBFHE__o *)0x0) {
        index = 0;
        do {
          while( true ) {
            if ((pSVar4->fields)._size <= index) {
              return;
            }
            GPDMCLBBPAD = (DPIEIFJBFHE_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar4,index,
                                     Method_System_Collections_Generic_List<DPIEIFJBFHE>_get_Item__)
            ;
            if ((GPDMCLBBPAD == (DPIEIFJBFHE_o *)0x0) ||
               (__this_00 = (__this->fields)._DDGPMHMNKNA_k__BackingField,
               __this_00 == (LAMJOHEKJNJ_o *)0x0)) goto LAB_03168500;
            method_00 = (MethodInfo *)0x0;
            pLVar3 = LAMJOHEKJNJ__FENHANFAIND
                               (__this_00,(GPDMCLBBPAD->fields).INLGJADOPFA,(MethodInfo *)0x0);
            if ((pLVar3 != (LPEBBHNDFCG_o *)0x0) &&
               (iVar2 <= (pLVar3->fields)._PGKPHJLHJCO_k__BackingField)) break;
            ACHLOMELAJE__JNAIBLDHJFC(__this,GPDMCLBBPAD,method_00);
            pSVar4 = (__this->fields).CHDBCFCFNAJ;
            if (pSVar4 == (System_Collections_Generic_List_DPIEIFJBFHE__o *)0x0) goto LAB_03168500;
          }
          pSVar4 = (__this->fields).CHDBCFCFNAJ;
          index = index + 1;
        } while (pSVar4 != (System_Collections_Generic_List_DPIEIFJBFHE__o *)0x0);
      }
    }
  }
LAB_03168500:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

