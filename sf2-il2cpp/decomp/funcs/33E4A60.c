// FCJBEKHDLAF$$OHPFCNPHKAD @ RVA 0x33E4A60

void FCJBEKHDLAF__OHPFCNPHKAD(FCJBEKHDLAF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  BEPJMNAHCAD_o *__this_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_01;
  MMDDDDFHOLG_o *__this_02;
  MethodInfo *method_00;
  OLKKAIFGGAK_array *pOVar4;
  
  if ((DAT_04567ef6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__);
    DAT_04567ef6 = 1;
  }
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).FAJCMHDLBEJ;
  if (__this_00 != (BEPJMNAHCAD_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    iVar3 = BEPJMNAHCAD__OCJCMHLABBF(__this_00,BCKBBGCOMJD,false,false,false,(MethodInfo *)0x0);
    (BCKBBGCOMJD->fields).HLFBMBHOPMI = iVar3;
    lVar2 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__;
    __this_01 = (__this->fields).AGOBPAPPBEM;
    if (__this_01 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      pOVar4 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pOVar4 != (OLKKAIFGGAK_array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pOVar4->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pOVar4->m_Items[(int)uVar1] = BCKBBGCOMJD;
          thunk_FUN_01c20e04(pOVar4->m_Items + (int)uVar1,BCKBBGCOMJD);
        }
        else {
          method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)BCKBBGCOMJD,(MethodInfo_26E4DAC *)method_00);
        }
        FCJBEKHDLAF__LPACIEFGEOB(__this,BCKBBGCOMJD,method_00);
        __this_02 = (__this->fields).POEGCOJFMDB;
        if (__this_02 != (MMDDDDFHOLG_o *)0x0) {
          MMDDDDFHOLG__OCJCMHLABBF(__this_02,BCKBBGCOMJD,(MethodInfo *)0x0);
          (BCKBBGCOMJD->fields).ONDNEJFKABA = false;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

