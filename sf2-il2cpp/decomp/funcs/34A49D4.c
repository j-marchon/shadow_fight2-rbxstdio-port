// MFFKCPDBFPG$$.ctor @ RVA 0x34A49D4

void MFFKCPDBFPG___ctor(MFFKCPDBFPG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_DILGLGMKOFG__o *__this_00;
  System_Collections_Generic_List_DILGLGMKOFG__o **ppSVar1;
  
  if ((DAT_045684e2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DILGLGMKOFG>_TypeInfo);
    DAT_045684e2 = 1;
  }
  DOCABGGCCIL___ctor((DOCABGGCCIL_o *)__this,(MethodInfo *)0x0);
  (__this->fields).BGHFADDGPAD = 1;
  __this_00 = (System_Collections_Generic_List_DILGLGMKOFG__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DILGLGMKOFG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<DILGLGMKOFG>__ctor__);
  ppSVar1 = &(__this->fields).EEIGOFDOLKN;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}

