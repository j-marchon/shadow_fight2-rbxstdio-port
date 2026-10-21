// NGKBNOEJLPH$$OMIBPAGGMKJ @ RVA 0x349CA7C

bool NGKBNOEJLPH__OMIBPAGGMKJ(NGKBNOEJLPH_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  NGKBNOEJLPH_o *__this_00;
  MethodInfo *in_x4;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar2;
  System_Collections_Generic_List_string__o *FPEHEJBLCAO;
  
  if ((DAT_04568463 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04568463 = 1;
  }
  pSVar2 = (__this->fields).FENGBMAPOMK;
  if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045684ce == '\0') {
      FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
      DAT_045684ce = '\x01';
    }
    if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (__this->fields).FENGBMAPOMK;
    FPEHEJBLCAO = OCMLPCKBHPN_TypeInfo->static_fields->MOBOOACLABJ;
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LDHBHPILNMA__OMJCGAIOEHB(FPEHEJBLCAO,pSVar2,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).FENGBMAPOMK;
    if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      if (0 < iVar1) {
        if ((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
           (__this_00 = (BCKBBGCOMJD->fields).ADGFKAPOIFN, __this_00 == (NGKBNOEJLPH_o *)0x0))
        goto LAB_0359cbc4;
        iVar1 = NGKBNOEJLPH__PKNDAFAACIK
                          (__this_00,pSVar2,(System_Collections_Generic_List_int__o *)0x0,false,
                           in_x4);
      }
      return 0 < iVar1;
    }
  }
LAB_0359cbc4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

