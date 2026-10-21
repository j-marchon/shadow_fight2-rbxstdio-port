// Nekki.SF2.GUI.Map.MapScene$$IsZoneOpen @ RVA 0x3588E94

bool Nekki_SF2_GUI_Map_MapScene__IsZoneOpen(MEJIKMPNBNL_o *BHHBEIACGPB,MethodInfo *method)

{
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this;
  System_Collections_Generic_List_OOMHDDBCBJP__o *pSVar1;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_04568d16 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
    DAT_04568d16 = 1;
  }
  if (BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) {
    __this = MEJIKMPNBNL__LJOCPCHJNIJ(BHHBEIACGPB,2,false,(MethodInfo *)0x0);
    pSVar1 = MEJIKMPNBNL__LJOCPCHJNIJ(BHHBEIACGPB,0x15,false,(MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this,
                 (System_Collections_Generic_IEnumerable_T__o *)pSVar1,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_AddRange__);
      pSVar1 = MEJIKMPNBNL__LJOCPCHJNIJ(BHHBEIACGPB,8,false,(MethodInfo *)0x0);
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this,
                 (System_Collections_Generic_IEnumerable_T__o *)pSVar1,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_AddRange__);
      if ((__this->fields)._size < 1) {
        return false;
      }
      index = 0;
      while (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index,
                                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__),
            pIVar2 != (Il2CppObject *)0x0) {
        if ((*(char *)&pIVar2[0xb].klass != '\0') ||
           (index = index + 1, (__this->fields)._size <= index)) {
          return *(char *)&pIVar2[0xb].klass != '\0';
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

