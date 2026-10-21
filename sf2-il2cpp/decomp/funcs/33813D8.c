// IDDIABHBDEE$$HICDCDKILOC @ RVA 0x33813D8

bool IDDIABHBDEE__HICDCDKILOC(IDDIABHBDEE_o *__this,System_String_o *EABKCMJBMCN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  
  if ((DAT_04567ba0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    DAT_04567ba0 = 1;
  }
  __this_00 = (__this->fields).BAFGDPDFPLK;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    if (((__this_00->fields)._size < 1) ||
       (bVar1 = System_Collections_Generic_List<object>__Contains
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (Il2CppObject *)EABKCMJBMCN,
                           Method_System_Collections_Generic_List<string>_Contains__), !bVar1)) {
      bVar1 = (__this->fields).HOKAADLNKJF != false;
    }
    else {
      bVar1 = (__this->fields).HOKAADLNKJF == false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

