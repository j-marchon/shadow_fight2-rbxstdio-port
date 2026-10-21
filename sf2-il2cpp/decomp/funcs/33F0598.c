// FCJBEKHDLAF$$GMLKPOHJCHH @ RVA 0x33F0598

void FCJBEKHDLAF__GMLKPOHJCHH(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_04567f19 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04567f19 = 1;
  }
  __this_00 = (__this->fields).IILLHHPGGKA;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      method_00 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__;
      BCKBBGCOMJD = (OLKKAIFGGAK_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
      FCJBEKHDLAF__JIIMNEEGEMG(__this,BCKBBGCOMJD,method_00);
      __this_00 = (__this->fields).IILLHHPGGKA;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

