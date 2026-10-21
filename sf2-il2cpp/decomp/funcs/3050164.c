// MCIBPLJEFLJ$$BDHAMOEKNNK @ RVA 0x3050164

bool MCIBPLJEFLJ__BDHAMOEKNNK
               (MCIBPLJEFLJ_o *__this,GBJGJEGPHKD_o *JALKELIHLPC,
               System_Collections_Generic_List_GEBHIBIEAJE__o *APHLCBPKMEP,Il2CppObject *JOOCKFFLOPJ
               ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GEBHIBIEAJE__o *OIMEJPNHBPN;
  GEBHIBIEAJE_o *FCKLNDFALPL;
  MethodInfo *method_00;
  Il2CppObject **ppIVar2;
  int index;
  
  method_00 = (MethodInfo *)JOOCKFFLOPJ;
  if ((DAT_04565e44 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__);
    DAT_04565e44 = 1;
  }
  if (((__this->fields)._FMOKINIOKBE_k__BackingField == false) ||
     ((__this->fields).MKPKPODAGPH != JOOCKFFLOPJ)) {
    if ((JALKELIHLPC == (GBJGJEGPHKD_o *)0x0) ||
       (OIMEJPNHBPN = GBJGJEGPHKD__EKHACIPBPAP(JALKELIHLPC,(MethodInfo *)0x0),
       APHLCBPKMEP == (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (APHLCBPKMEP->fields)._size) {
      index = 0;
      do {
        FCKLNDFALPL = (GEBHIBIEAJE_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)APHLCBPKMEP,index,
                                 Method_System_Collections_Generic_List<GEBHIBIEAJE>_get_Item__);
        bVar1 = MCIBPLJEFLJ__BLDENPCGPNH(__this,OIMEJPNHBPN,FCKLNDFALPL,method_00);
        if (bVar1) {
          ppIVar2 = &(__this->fields).MKPKPODAGPH;
          *ppIVar2 = JOOCKFFLOPJ;
          thunk_FUN_01c20e04(ppIVar2,JOOCKFFLOPJ);
          return true;
        }
        index = index + 1;
      } while (index < (APHLCBPKMEP->fields)._size);
    }
  }
  return false;
}

