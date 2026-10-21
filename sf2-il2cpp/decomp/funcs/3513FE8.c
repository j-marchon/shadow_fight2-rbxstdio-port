// FEKEAPCCOOB$$IDLJKBJEEHF @ RVA 0x3513FE8

TabView_o * FEKEAPCCOOB__IDLJKBJEEHF(FEKEAPCCOOB_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o *__this_00;
  System_Collections_Generic_KeyValuePair_object__object__o SVar1;
  
  if ((DAT_0456890e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<Button,_TabView>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Item__);
    DAT_0456890e = 1;
  }
  if (-1 < DPJIDNBJIBG) {
    __this_00 = (__this->fields).IJLEELMHJNN;
    if (__this_00 == (System_Collections_Generic_List_KeyValuePair_Button__TabView___o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (DPJIDNBJIBG < (__this_00->fields)._size) {
      SVar1 = System_Collections_Generic_List<KeyValuePair<object,_object>>__get_Item
                        ((System_Collections_Generic_List_T__o *)__this_00,DPJIDNBJIBG,
                         Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Item__
                        );
      return (TabView_o *)SVar1.fields.value;
    }
  }
  return (TabView_o *)0x0;
}

