// FCJBEKHDLAF$$PGOBKICCDAG @ RVA 0x33F1184

void FCJBEKHDLAF__PGOBKICCDAG(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  OLKKAIFGGAK_o *pOVar2;
  MethodInfo *extraout_x1;
  int index;
  int iVar3;
  
  if ((DAT_04567f21 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04567f21 = 1;
    method = extraout_x1;
  }
  FCJBEKHDLAF__BNLNHIPHKDG(__this,method);
  __this_00 = (__this->fields).IILLHHPGGKA;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    iVar3 = (__this_00->fields)._size;
    if (((__this->fields).PKDBOMAHGHC & 1) == 0) {
      if (iVar3 < 1) {
        return;
      }
      index = 0;
      bVar1 = false;
      do {
        pOVar2 = (OLKKAIFGGAK_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
        if (pOVar2 == (OLKKAIFGGAK_o *)0x0) break;
        bVar1 = OLKKAIFGGAK__DMCLJEHHEFE(pOVar2,bVar1,(MethodInfo *)0x0);
        index = index + 1;
        if (iVar3 == index) {
          return;
        }
        __this_00 = (__this->fields).IILLHHPGGKA;
      } while (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0);
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return;
      }
      bVar1 = false;
      do {
        pOVar2 = (OLKKAIFGGAK_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar3,
                            Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
        if (pOVar2 == (OLKKAIFGGAK_o *)0x0) break;
        bVar1 = OLKKAIFGGAK__DMCLJEHHEFE(pOVar2,bVar1,(MethodInfo *)0x0);
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          return;
        }
        __this_00 = (__this->fields).IILLHHPGGKA;
      } while (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

