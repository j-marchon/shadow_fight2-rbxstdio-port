// OLKKAIFGGAK$$HNHPFKEPBPH @ RVA 0x34EA308

void OLKKAIFGGAK__HNHPFKEPBPH(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_OIGAJAKPPEO__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04568784 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_Clear__);
    DAT_04568784 = 1;
  }
  pSVar1 = (__this->fields).MPLCPGJEHPG;
  if (pSVar1 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

