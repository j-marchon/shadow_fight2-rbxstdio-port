// MGNPHCAAEIO.ACENADIGHII$$GOBKBHNCANP @ RVA 0x340F8B4

void MGNPHCAAEIO_ACENADIGHII__GOBKBHNCANP
               (MGNPHCAAEIO_ACENADIGHII_o *__this,System_String_o *KGLJICLJHEL,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  
  if ((DAT_0456806e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    DAT_0456806e = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).MCLOMGCHMIG;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_int>__set_Item
              (__this_00,(Il2CppObject *)KGLJICLJHEL,DPJIDNBJIBG,
               Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

