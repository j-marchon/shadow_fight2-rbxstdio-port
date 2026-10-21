// OLKKAIFGGAK$$GGAOJKDEHIN @ RVA 0x34EE600

void OLKKAIFGGAK__GGAOJKDEHIN(OLKKAIFGGAK_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  System_Collections_Generic_List_OIGAJAKPPEO__o *__this_00;
  OLKKAIFGGAK_o *__this_01;
  MethodInfo *method_00;
  int index;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar1;
  
  if ((DAT_045687fb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
    DAT_045687fb = 1;
  }
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0)
  ;
  __this_00 = (__this->fields).MPLCPGJEHPG;
  (__this->fields).LDJLHMHDJLC.fields = CVar1;
  if (__this_00 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      method_00 = Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__;
      __this_01 = (OLKKAIFGGAK_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             (MethodInfo_26E4ADC *)
                             Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
      if (__this_01 == (OLKKAIFGGAK_o *)0x0) break;
      OLKKAIFGGAK__GGAOJKDEHIN(__this_01,CJNHFNHJHPE,method_00);
      __this_00 = (__this->fields).MPLCPGJEHPG;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

