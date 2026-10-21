// OAFGMIGFHAD$$.ctor @ RVA 0x3154818

void OAFGMIGFHAD___ctor(OAFGMIGFHAD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *__this_00;
  System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o **ppSVar1;
  LCKCDEKNLOA_o *__this_01;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566828 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_TypeInfo);
    DAT_04566828 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>__ctor__);
  ppSVar1 = &(__this->fields).OBHHHJLOHOE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(__this_01,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).IPOMGFKGCFL;
  *ppLVar2 = __this_01;
  thunk_FUN_01c20e04(ppLVar2,__this_01);
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

