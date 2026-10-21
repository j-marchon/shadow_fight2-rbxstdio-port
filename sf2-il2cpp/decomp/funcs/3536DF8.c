// EPFMFHDGMCE.JGKNDMCIPBN$$BKHAHFOIGAC @ RVA 0x3536DF8

System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *
EPFMFHDGMCE_JGKNDMCIPBN__BKHAHFOIGAC
          (EPFMFHDGMCE_JGKNDMCIPBN_o *__this,int32_t NJFJAKIHMEO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *__this_00;
  System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *__this_01;
  EPFMFHDGMCE_HOEHCNPOOFD_o *__this_02;
  MethodInfo *method_00;
  EPFMFHDGMCE_HOEHCNPOOFD_array *pEVar4;
  int index;
  
                    /* try { // try from 03636e00 to 03736e03 has its CatchHandler @ 03636e2c */
                    /* try { // try from 03636e04 to 03736e0b has its CatchHandler @ 03636e24 */
                    /* try { // try from 03636e0c to 03736e0f has its CatchHandler @ 03636e14 */
                    /* try { // try from 03636e10 to 03736e47 has its CatchHandler @ 03636b64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03636e0c with catch @ 03636e14
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03636d64 with catch @ 03636e18
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03636db0 with catch @ 03636e1c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03636d50 with catch @ 03636e20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03636e04 with catch @ 03636e24
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03636d40 with catch @ 03636e28
                        */
  if ((DAT_04568aaa & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03636e00 with catch @ 03636e2c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03636d24 with catch @ 03636e30
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>__ctor__);
                    /* try { // try from 03636e48 to 03736e4b has its CatchHandler @ 03636e6c */
                    /* try { // try from 03636e4c to 03736e73 has its CatchHandler @ 03636b64 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_TypeInfo);
                    /* catch() { ... } // from try @ 03636e48 with catch @ 03636e6c */
    DAT_04568aaa = 1;
  }
                    /* try { // try from 03636e74 to 03736e7b has its CatchHandler @ 03636e90 */
  __this_00 = (System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_TypeInfo);
                    /* try { // try from 03636e7c to 03736e87 has its CatchHandler @ 03636b64 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>__ctor__);
  __this_01 = (__this->fields).GFBNJPMOEKD;
                    /* try { // try from 03636e88 to 03736e8f has its CatchHandler @ 03636e90 */
  if (__this_01 != (System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03636e74 with catch @ 03636e90
                       catch(type#2 @ 00000000) { ... } // from try @ 03636e88 with catch @ 03636e90
                        */
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return __this_00;
      }
      __this_02 = (EPFMFHDGMCE_HOEHCNPOOFD_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Item__
                            );
      if (__this_02 == (EPFMFHDGMCE_HOEHCNPOOFD_o *)0x0) break;
      bVar3 = EPFMFHDGMCE_HOEHCNPOOFD__OPLOPKCLGPC(__this_02,method_00);
      lVar2 = Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_Add__;
      if (bVar3) {
        if (__this_00 == (System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *)0x0) break;
        pEVar4 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pEVar4 == (EPFMFHDGMCE_HOEHCNPOOFD_array *)0x0) break;
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pEVar4->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pEVar4->m_Items[(int)uVar1] = __this_02;
          thunk_FUN_01c20e04(pEVar4->m_Items + (int)uVar1,__this_02);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (Il2CppObject *)__this_02,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      else if (__this_00 == (System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *)0x0)
      break;
      if (NJFJAKIHMEO <= (__this_00->fields)._size) {
        return __this_00;
      }
      __this_01 = (__this->fields).GFBNJPMOEKD;
      index = index + 1;
    } while (__this_01 != (System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

