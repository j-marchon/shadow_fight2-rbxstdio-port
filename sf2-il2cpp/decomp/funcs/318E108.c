// CGOBMFJEDCI$$DLKKPFHKIPB @ RVA 0x318E108

System_Collections_Generic_IEnumerable_string__o *
CGOBMFJEDCI__DLKKPFHKIPB(CGOBMFJEDCI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566a27 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_17066);
    DAT_04566a27 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0328e164 to 0338e20b has its CatchHandler @ 0328e164
                       catch() { ... } // from try @ 0328e164 with catch @ 0328e164
                       catch() { ... } // from try @ 0328e27c with catch @ 0328e164
                       catch() { ... } // from try @ 0328e2a4 with catch @ 0328e164
                       catch() { ... } // from try @ 0328e2cc with catch @ 0328e164
                       catch() { ... } // from try @ 0328e2fc with catch @ 0328e164 */
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  item = StringLiteral_17066;
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

