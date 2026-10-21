// JIALPJBDBEE$$BBCAMJDDOII @ RVA 0x31B2BEC

void JIALPJBDBEE__BBCAMJDDOII
               (JIALPJBDBEE_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *PGPLLGEIFPI,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  FCJBEKHDLAF_o *pFVar4;
  
  if ((DAT_04566b8a & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04566b8a = 1;
    PGPLLGEIFPI = (OLKKAIFGGAK_EAOIGPODIAI_o *)extraout_x1;
  }
  if ((__this->fields).PKIHKALFJJI != false) {
    iVar1 = *(int *)&(__this->fields).super.field_0x54;
    iVar2 = (__this->fields).JHBOEEJBJLA;
    (__this->fields).PKIHKALFJJI = false;
    iVar1 = iVar1 + 1;
    *(int *)&(__this->fields).super.field_0x54 = iVar1;
    if (iVar2 <= iVar1) {
      JIALPJBDBEE__POBKBBAGBJE(__this,(MethodInfo *)PGPLLGEIFPI);
    }
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar4 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (((pFVar4 != (FCJBEKHDLAF_o *)0x0) &&
      (__this_00 = (pFVar4->fields).IILLHHPGGKA,
      __this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0)) &&
     (pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__),
     pIVar3 != (Il2CppObject *)0x0)) {
    if (*(int *)&pIVar3[0x22].monitor == 2) {
      (__this->fields).PKIHKALFJJI = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

