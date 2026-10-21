// DebugSimpleScroll$$CKPKMBBIMOP @ RVA 0x35950A8

Nekki_SF2_GUI_SimpleScroll_o *
DebugSimpleScroll__CKPKMBBIMOP(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *__this_00;
  Il2CppObject *pIVar1;
  
  if ((DAT_04568d9a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_get_Item__);
    DAT_04568d9a = 1;
  }
  __this_00 = (__this->fields).ScrollItems;
  if ((__this_00 != (System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *)0x0) &&
     (pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (__this->fields).ALCCHKDCBEN,
                          Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_get_Item__
                         ), pIVar1 != (Il2CppObject *)0x0)) {
    return pIVar1[1].monitor;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

