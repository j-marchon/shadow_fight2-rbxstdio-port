// FEPPOONJCGI$$BMANEGMLOAA @ RVA 0x30B1CE8

void FEPPOONJCGI__BMANEGMLOAA
               (FEPPOONJCGI_o *__this,EKGDLIKHEMA_o *EIDPFIENOPH,KMJDCOABCCG_o *LFOOJOJHDFM,
               MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  long lVar3;
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this_00;
  System_Collections_Generic_List_EKGDLIKHEMA__o *__this_01;
  EKGDLIKHEMA_array *pEVar4;
  
                    /* try { // try from 031b1cf8 to 032b1d03 has its CatchHandler @ 031b27ec */
  if ((DAT_045661e6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_Add__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045661e6 = 1;
  }
  if (LFOOJOJHDFM == (KMJDCOABCCG_o *)0x0) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if ((EIDPFIENOPH == (EKGDLIKHEMA_o *)0x0) ||
       (__this_00 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ,
       __this_00 == (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0)) goto LAB_031b1e24;
                    /* try { // try from 031b1d74 to 032b1d7f has its CatchHandler @ 031b27d8 */
    LFOOJOJHDFM = MGNPHCAAEIO_FGHBAEIKNBF__MDAFMGBHOGB
                            (__this_00,(EIDPFIENOPH->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if (LFOOJOJHDFM != (KMJDCOABCCG_o *)0x0) {
      (LFOOJOJHDFM->fields).DKHMDPIMHIJ = true;
      goto LAB_031b1d88;
    }
  }
  else {
    (LFOOJOJHDFM->fields).DKHMDPIMHIJ = true;
    if (EIDPFIENOPH == (EKGDLIKHEMA_o *)0x0) goto LAB_031b1e24;
LAB_031b1d88:
    bVar1 = (EIDPFIENOPH->fields).LDBJGDMBCKM;
    (LFOOJOJHDFM->fields).AHKHDBIDDIH = bVar1;
                    /* try { // try from 031b1da0 to 032b1dab has its CatchHandler @ 031b27d4 */
    KMJDCOABCCG__GEBIJFANLGH(LFOOJOJHDFM,bVar1 == false,(MethodInfo *)0x0);
  }
  lVar3 = Method_System_Collections_Generic_List<EKGDLIKHEMA>_Add__;
  __this_01 = (__this->fields).EBDCADCBPNM;
  if (__this_01 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0) {
    pEVar4 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pEVar4 != (EKGDLIKHEMA_array *)0x0) {
      uVar2 = (__this_01->fields)._size;
      if ((uint)pEVar4->max_length <= uVar2) {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,
                   (Il2CppObject *)EIDPFIENOPH,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        return;
      }
      (__this_01->fields)._size = uVar2 + 1;
      pEVar4->m_Items[(int)uVar2] = EIDPFIENOPH;
                    /* try { // try from 031b1dec to 032b1e13 has its CatchHandler @ 031b2810 */
      thunk_FUN_01c20e04(pEVar4->m_Items + (int)uVar2,EIDPFIENOPH);
      return;
    }
  }
LAB_031b1e24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

