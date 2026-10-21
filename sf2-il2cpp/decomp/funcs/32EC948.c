// DKEOKAONIIB$$KBBHCAAFDCO @ RVA 0x32EC948

void DKEOKAONIIB__KBBHCAAFDCO
               (bool KHJKDPNDGJJ,OLKKAIFGGAK_OGCKCABMHLC_o *HPACPFLKHPK,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  Il2CppObject *arg1;
  System_String_o *pSVar3;
  Il2CppObject *arg2;
  System_String_o *pSVar4;
  System_Collections_Generic_List_string__o *__this;
  DKEOKAONIIB_StaticFields *pDVar5;
  ECENNHNBAME_o *pEVar6;
  System_String_array *pSVar7;
  Il2CppObject *arg0;
  float local_24;
  
  if ((DAT_04567645 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_22020);
    DAT_04567645 = 1;
  }
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar5 = DKEOKAONIIB_TypeInfo->static_fields;
  if (pDVar5->LDBHFHDLBND != false) {
    if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pDVar5 = DKEOKAONIIB_TypeInfo->static_fields;
    }
    pSVar4 = StringLiteral_22020;
    if (pDVar5->GIGIAMDJECC != false) {
      if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pDVar5 = DKEOKAONIIB_TypeInfo->static_fields;
      }
      lVar1 = 8;
      if (!KHJKDPNDGJJ) {
        lVar1 = 0x10;
      }
      if (HPACPFLKHPK != (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) {
        arg0 = *(Il2CppObject **)(&pDVar5->LDBHFHDLBND + lVar1);
        local_24 = (HPACPFLKHPK->fields).CEMEJDHDPLL * 100.0;
        arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_24);
        pEVar6 = (HPACPFLKHPK->fields).OKMFPICFIAD;
        if ((pEVar6 != (ECENNHNBAME_o *)0x0) &&
           (pSVar3 = (pEVar6->fields).JIJLBFGKNJK, pSVar3 != (System_String_o *)0x0)) {
          arg2 = (Il2CppObject *)
                 (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
          pSVar4 = System_String__Format(pSVar4,arg0,arg1,arg2,(MethodInfo *)0x0);
          if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo);
          }
          lVar1 = Method_System_Collections_Generic_List<string>_Add__;
          __this = DKEOKAONIIB_TypeInfo->static_fields->OBLIJEFDJGN;
          if (__this != (System_Collections_Generic_List_string__o *)0x0) {
            pSVar7 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pSVar7 != (System_String_array *)0x0) {
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar7->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar7->m_Items[(int)uVar2] = pSVar4;
                thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar2,pSVar4);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

