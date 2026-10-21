// OLKKAIFGGAK$$NDNPGAKJLHM @ RVA 0x34F245C

void OLKKAIFGGAK__NDNPGAKJLHM(OLKKAIFGGAK_o *__this,bool NOLAHDNIIFM,MethodInfo *method)

{
  int32_t iVar1;
  IPCACEBFONO_o *__this_00;
  OPNFCOGALLI_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  System_Collections_Generic_List_OIGAJAKPPEO__o *pSVar3;
  OLKKAIFGGAK_EAOIGPODIAI_o **ppOVar4;
  
                    /* try { // try from 035f245c to 036f2463 has its CatchHandler @ 035f281c */
  method_00 = (MethodInfo *)(ulong)NOLAHDNIIFM;
                    /* try { // try from 035f2464 to 036f261f has its CatchHandler @ 035f209c */
  if ((DAT_045687b7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_RemoveAllEventListener__);
    DAT_045687b7 = 1;
    method_00 = extraout_x1;
  }
  OLKKAIFGGAK__JEPCCDPBAJM(__this,method_00);
  if ((__this->fields).NKOKFFDMNJF != (MCIBPLJEFLJ_o *)0x0) {
    __this_00 = (__this->fields).IAKDMKJIBBG;
    if (__this_00 == (IPCACEBFONO_o *)0x0) goto LAB_035f25e4;
    OMLLDCIMLBB<object>__RemoveAllEventListener
              ((OMLLDCIMLBB_object__o *)__this_00,
               Method_OMLLDCIMLBB<object>_RemoveAllEventListener__);
  }
  __this_01 = (__this->fields).OAKOFJJIOFF;
  if (__this_01 != (OPNFCOGALLI_o *)0x0) {
    OMLLDCIMLBB<object>__RemoveAllEventListener
              ((OMLLDCIMLBB_object__o *)__this_01,
               Method_OMLLDCIMLBB<object>_RemoveAllEventListener__);
  }
  (__this->fields).GJLEPEPAOKD = (MMDPNDAECII_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).GJLEPEPAOKD,0);
  (__this->fields).ELJAIMIIIOB = (CPGONFFGAHM_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).ELJAIMIIIOB,0);
  (__this->fields).OAKOFJJIOFF = (OPNFCOGALLI_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).OAKOFJJIOFF,0);
  (__this->fields).NKOKFFDMNJF = (MCIBPLJEFLJ_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).NKOKFFDMNJF,0);
  (__this->fields).ADGFKAPOIFN = (NGKBNOEJLPH_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).ADGFKAPOIFN,0);
  ppOVar4 = &(__this->fields).PDCHNCOIHHA;
  if (*ppOVar4 != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
    OLKKAIFGGAK_EAOIGPODIAI__NDNPGAKJLHM(*ppOVar4,(MethodInfo *)0x0);
    *ppOVar4 = (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0;
    thunk_FUN_01c20e04(ppOVar4,0);
  }
  pSVar2 = (__this->fields).BGODEHNIMGC;
  if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).MPLCPGJEHPG;
    if (pSVar3 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      if (NOLAHDNIIFM) {
        (__this->fields).HMIAFJALFCJ = (GBJGJEGPHKD_o *)0x0;
        thunk_FUN_01c20e04(&(__this->fields).HMIAFJALFCJ,0);
        return;
      }
      return;
    }
  }
LAB_035f25e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

