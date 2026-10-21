// OLKKAIFGGAK$$MANLGCCEMGC @ RVA 0x34EE530

bool OLKKAIFGGAK__MANLGCCEMGC(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_045687a3 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    DAT_045687a3 = 1;
  }
  pSVar1 = (__this->fields).BGODEHNIMGC;
  if (pSVar1 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    return 0 < (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

