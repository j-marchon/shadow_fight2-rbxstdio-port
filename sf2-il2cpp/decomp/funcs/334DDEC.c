// PFOMHOLCODE$$HELIKPINEIM @ RVA 0x334DDEC

System_Collections_Generic_List_BOFEMGGNODC__o *
PFOMHOLCODE__HELIKPINEIM(PFOMHOLCODE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BOFEMGGNODC__o *__this_00;
  MethodInfo *extraout_x1;
  PFOMHOLCODE_JBJOKPCAJEP_o *pPVar1;
  LCKCDEKNLOA_o *pLVar2;
  PFOMHOLCODE_AJMCKEHMEOD_o *pPVar3;
  
  if ((DAT_04567a15 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BOFEMGGNODC>_TypeInfo);
    DAT_04567a15 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_BOFEMGGNODC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BOFEMGGNODC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BOFEMGGNODC>__ctor__);
  pPVar1 = (__this->fields).DKMMLPDKILK;
  if (pPVar1 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar2 = (pPVar1->fields).NEIJJHEFLHP;
    if ((pLVar2 == (LCKCDEKNLOA_o *)0x0) ||
       (__this_00 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) goto LAB_0344df48;
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(pLVar2->fields).NEIJJHEFLHP,
               Method_System_Collections_Generic_List<BOFEMGGNODC>_AddRange__);
  }
  pPVar1 = (__this->fields).AKKPBPEJNNE;
  if (pPVar1 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar2 = (pPVar1->fields).NEIJJHEFLHP;
    if ((pLVar2 == (LCKCDEKNLOA_o *)0x0) ||
       (__this_00 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) goto LAB_0344df48;
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(pLVar2->fields).NEIJJHEFLHP,
               Method_System_Collections_Generic_List<BOFEMGGNODC>_AddRange__);
  }
  pPVar1 = (__this->fields).JMGEHHNGBMI;
  if (pPVar1 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar2 = (pPVar1->fields).NEIJJHEFLHP;
    if ((pLVar2 == (LCKCDEKNLOA_o *)0x0) ||
       (__this_00 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) goto LAB_0344df48;
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(pLVar2->fields).NEIJJHEFLHP,
               Method_System_Collections_Generic_List<BOFEMGGNODC>_AddRange__);
  }
  pPVar1 = (__this->fields).FMNILCPNHHJ;
  if (pPVar1 != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
    pLVar2 = (pPVar1->fields).NEIJJHEFLHP;
    if ((pLVar2 == (LCKCDEKNLOA_o *)0x0) ||
       (__this_00 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) goto LAB_0344df48;
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(pLVar2->fields).NEIJJHEFLHP,
               Method_System_Collections_Generic_List<BOFEMGGNODC>_AddRange__);
  }
  pPVar3 = (__this->fields).KDCIFIDLLKH;
  if (pPVar3 != (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
    pLVar2 = (pPVar3->fields).GBLCPIFNBJJ;
    if ((pLVar2 == (LCKCDEKNLOA_o *)0x0) ||
       (__this_00 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) {
LAB_0344df48:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(pLVar2->fields).NEIJJHEFLHP,
               Method_System_Collections_Generic_List<BOFEMGGNODC>_AddRange__);
    pPVar3 = (__this->fields).KDCIFIDLLKH;
    if (pPVar3 != (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
      pLVar2 = (pPVar3->fields).HHMNHKJGJPG;
      if (pLVar2 == (LCKCDEKNLOA_o *)0x0) goto LAB_0344df48;
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(pLVar2->fields).NEIJJHEFLHP,
                 Method_System_Collections_Generic_List<BOFEMGGNODC>_AddRange__);
    }
  }
  return __this_00;
}

