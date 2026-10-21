// AJMOIOIBPGP$$Dispose @ RVA 0x327660C

void AJMOIOIBPGP__Dispose(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UniRx_CompositeDisposable_o *__this_00;
  OPGMEHFEJJJ_o **ppOVar2;
  DOPEEDABNEK_o **ppDVar3;
  ACHLOMELAJE_o **ppAVar4;
  NCNJEIBHGBH_o **ppNVar5;
  System_Collections_Generic_List_OPNMPAJKDMI__o *pSVar6;
  DGGBFKNKEAH_o **ppDVar7;
  
  if ((DAT_04567247 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_Clear__);
    DAT_04567247 = 1;
  }
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    pSVar6 = (__this->fields).FHPIEPONJFG;
    if (pSVar6 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
      iVar1 = (pSVar6->fields)._size;
      (pSVar6->fields)._size = 0;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar6 = (__this->fields).KMBLPHNJINH;
      if (pSVar6 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
        iVar1 = (pSVar6->fields)._size;
        (pSVar6->fields)._size = 0;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        pSVar6 = (__this->fields).KALGMNLLLNO;
        if (pSVar6 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
          iVar1 = (pSVar6->fields)._size;
          (pSVar6->fields)._size = 0;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          ppOVar2 = &(__this->fields).PJAKDICKNKA;
          *ppOVar2 = (OPGMEHFEJJJ_o *)0x0;
          thunk_FUN_01c20e04(ppOVar2,0);
          ppDVar3 = &(__this->fields).DPOPJKJLDEE;
          *ppDVar3 = (DOPEEDABNEK_o *)0x0;
          thunk_FUN_01c20e04(ppDVar3,0);
          ppAVar4 = &(__this->fields).OKNKKHGBECG;
          *ppAVar4 = (ACHLOMELAJE_o *)0x0;
          thunk_FUN_01c20e04(ppAVar4,0);
          ppNVar5 = &(__this->fields).KMGFNKKPGIH;
          *ppNVar5 = (NCNJEIBHGBH_o *)0x0;
          thunk_FUN_01c20e04(ppNVar5,0);
          ppDVar7 = &(__this->fields).FHCHDOILFGE;
          *ppDVar7 = (DGGBFKNKEAH_o *)0x0;
          thunk_FUN_01c20e04(ppDVar7,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

