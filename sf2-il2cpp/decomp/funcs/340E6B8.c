// MGNPHCAAEIO$$AHAHJGBMGNL @ RVA 0x340E6B8

AFFHKININGD_o * MGNPHCAAEIO__AHAHJGBMGNL(OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_object__o *__this;
  AFFHKININGD_o *pAVar2;
  
  if ((DAT_04568062 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
    DAT_04568062 = 1;
  }
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    __this = (System_Collections_Generic_List_object__o *)
             (*(BANHBMINMMP->klass->vtable)._10_DHBIECBOKMB.methodPtr)
                       (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._10_DHBIECBOKMB.method);
    if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (__this->fields)._size;
    if (0 < iVar1) {
      pAVar2 = (AFFHKININGD_o *)
               System_Collections_Generic_List<object>__get_Item
                         (__this,iVar1 + -1,
                          Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
      return pAVar2;
    }
  }
  return (AFFHKININGD_o *)0x0;
}

