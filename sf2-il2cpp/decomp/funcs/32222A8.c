// DCAEKAABCEM$$MDDFPBJBKPM @ RVA 0x32222A8

void DCAEKAABCEM__MDDFPBJBKPM
               (DCAEKAABCEM_o *__this,System_Action_o *PKKMGBOIDJD,int32_t NCPANDOCILC,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  DCAEKAABCEM_CMGDCNNPGII_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  DCAEKAABCEM_CMGDCNNPGII_array *pDVar3;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_01;
  
  if ((DAT_04566f47 & 1) == 0) {
    FUN_01bab630(&DCAEKAABCEM_CMGDCNNPGII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Add__);
    DAT_04566f47 = 1;
  }
  __this_01 = (__this->fields).DFKCIDJHEEE;
  __this_00 = (DCAEKAABCEM_CMGDCNNPGII_o *)thunk_FUN_01bda818(DCAEKAABCEM_CMGDCNNPGII_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).EDOEMIDBEGO = PKKMGBOIDJD;
  thunk_FUN_01c20e04(&__this_00->fields,PKKMGBOIDJD);
  (__this_00->fields).EAFPDFHFBOM = NCPANDOCILC;
  lVar2 = Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Add__;
  if (__this_01 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
    pDVar3 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pDVar3 != (DCAEKAABCEM_CMGDCNNPGII_array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pDVar3->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pDVar3->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pDVar3->m_Items + (int)uVar1,__this_00);
        method_00 = extraout_x1;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        method_00 = extraout_x1_00;
      }
      DCAEKAABCEM__OBMDEPEMOHF(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

