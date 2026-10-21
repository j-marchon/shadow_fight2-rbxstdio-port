// ECENNHNBAME.DNGAEDAAIJE$$HELJFLMEKII @ RVA 0x301A9A0

bool ECENNHNBAME_DNGAEDAAIJE__HELJFLMEKII
               (ECENNHNBAME_DNGAEDAAIJE_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  ECENNHNBAME_o *pEVar2;
  int index;
  
  if ((DAT_04565bff & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
    DAT_04565bff = 1;
  }
  __this_00 = (__this->fields).PCGACGNHJHF;
  if (__this_00 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if ((iVar1 <= index) ||
         (pEVar2 = (ECENNHNBAME_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__),
         pEVar2 == NLEBDPHNIDI)) {
        return iVar1 <= index;
      }
      __this_00 = (__this->fields).PCGACGNHJHF;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

