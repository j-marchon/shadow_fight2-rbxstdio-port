// NHPEALHAHOA$$AIIGLFJODCI @ RVA 0x32FDCBC

int32_t NHPEALHAHOA__AIIGLFJODCI
                  (System_Collections_Generic_List_NHPEALHAHOA__o *NNBJFEPLHED,
                  System_Collections_Generic_List_NHPEALHAHOA__o *HJCLPBKNLDP,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int32_t iVar4;
  int32_t iVar5;
  Il2CppObject *pIVar6;
  NHPEALHAHOA_o *item;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  NHPEALHAHOA_array *pNVar7;
  int index;
  
  method_00 = (MethodInfo *)HJCLPBKNLDP;
  if ((DAT_04567704 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
    DAT_04567704 = 1;
    method_00 = extraout_x1;
  }
  if (HJCLPBKNLDP != (System_Collections_Generic_List_NHPEALHAHOA__o *)0x0) {
    iVar1 = (HJCLPBKNLDP->fields)._size;
    iVar4 = NHPEALHAHOA__JKIMOHDDGKI(NNBJFEPLHED,method_00);
    if (NNBJFEPLHED != (System_Collections_Generic_List_NHPEALHAHOA__o *)0x0) {
      if (0 < (NNBJFEPLHED->fields)._size) {
        index = 0;
        do {
          pIVar6 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)NNBJFEPLHED,index,
                              Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
          if (pIVar6 == (Il2CppObject *)0x0) goto LAB_033fde04;
          iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                              &pIVar6[3].monitor,(MethodInfo *)0x0);
          if (iVar5 == iVar4) {
            item = (NHPEALHAHOA_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)NNBJFEPLHED,index,
                              Method_System_Collections_Generic_List<NHPEALHAHOA>_get_Item__);
            lVar3 = Method_System_Collections_Generic_List<NHPEALHAHOA>_Add__;
            pNVar7 = (HJCLPBKNLDP->fields)._items;
            (HJCLPBKNLDP->fields)._version = (HJCLPBKNLDP->fields)._version + 1;
                    /* try { // try from 033fdd94 to 034fde47 has its CatchHandler @ 033fdd94
                       catch() { ... } // from try @ 033fdd94 with catch @ 033fdd94
                       catch() { ... } // from try @ 033fe134 with catch @ 033fdd94
                       catch() { ... } // from try @ 033fe1a0 with catch @ 033fdd94
                       catch() { ... } // from try @ 033fe284 with catch @ 033fdd94 */
            if (pNVar7 == (NHPEALHAHOA_array *)0x0) goto LAB_033fde04;
            uVar2 = (HJCLPBKNLDP->fields)._size;
            if (uVar2 < (uint)pNVar7->max_length) {
              (HJCLPBKNLDP->fields)._size = uVar2 + 1;
              pNVar7->m_Items[(int)uVar2] = item;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)HJCLPBKNLDP,
                         (Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          index = index + 1;
        } while (index < (NNBJFEPLHED->fields)._size);
      }
      return (HJCLPBKNLDP->fields)._size - iVar1;
    }
  }
LAB_033fde04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

