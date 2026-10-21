// FEKEAPCCOOB$$KPEEOJBFOCH @ RVA 0x35141D8

void FEKEAPCCOOB__KPEEOJBFOCH
               (FEKEAPCCOOB_o *__this,int32_t DPJIDNBJIBG,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  
  if ((DAT_0456890d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
    DAT_0456890d = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).DPOMIJALCDD;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                      (pSVar2,DPJIDNBJIBG,
                       Method_System_Collections_Generic_Dictionary<int,_string>_ContainsKey__);
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).DPOMIJALCDD;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      if (bVar1) {
        System_Collections_Generic_Dictionary<int,_object>__set_Item
                  (pSVar2,DPJIDNBJIBG,(Il2CppObject *)EHNFGMGKCHO,
                   Method_System_Collections_Generic_Dictionary<int,_string>_set_Item__);
        return;
      }
      System_Collections_Generic_Dictionary<int,_object>__Add
                (pSVar2,DPJIDNBJIBG,(Il2CppObject *)EHNFGMGKCHO,
                 Method_System_Collections_Generic_Dictionary<int,_string>_Add__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

