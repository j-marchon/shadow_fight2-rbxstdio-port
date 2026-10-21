// IPPEHAJADOO$$NLKNPPBOFAI @ RVA 0x31430B4

void IPPEHAJADOO__NLKNPPBOFAI
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_ECAIEGNAOAL__o *NOJIENFCGCK,MethodInfo *method)

{
  int index;
  Il2CppObject *pIVar1;
  
  if ((DAT_04566760 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Count__);
    __this = (IPPEHAJADOO_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Item__);
    DAT_04566760 = 1;
  }
  if (NOJIENFCGCK != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
    index = (NOJIENFCGCK->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)NOJIENFCGCK,index,
                          Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Item__);
      __this = (IPPEHAJADOO_o *)0x0;
      if (pIVar1 == (Il2CppObject *)0x0) break;
      if (pIVar1[1].klass == (Il2CppClass *)BCKBBGCOMJD) {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)NOJIENFCGCK,index,
                   Method_System_Collections_Generic_List<ECAIEGNAOAL>_RemoveAt__);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

