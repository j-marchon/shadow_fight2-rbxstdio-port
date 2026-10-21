// FCAPJDHLLAP$$.ctor @ RVA 0x32233BC

void FCAPJDHLLAP___ctor(FCAPJDHLLAP_o *__this,
                       System_Collections_Generic_List_BDMABHJEEGD__o *IHBNELGLLEB,
                       MethodInfo *method)

{
  System_Collections_Generic_List_BDMABHJEEGD__o *__this_00;
  System_Collections_Generic_List_BDMABHJEEGD__o **ppSVar1;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o **ppNVar2;
  
  if ((DAT_04566f57 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BDMABHJEEGD>_TypeInfo);
    DAT_04566f57 = 1;
  }
  OHPOFOPJIMB___ctor((OHPOFOPJIMB_o *)__this,0,0,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_List_BDMABHJEEGD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BDMABHJEEGD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)IHBNELGLLEB,
             Method_System_Collections_Generic_List<BDMABHJEEGD>__ctor__);
  ppSVar1 = &(__this->fields).LEJLGCMCPLG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  ppNVar2 = &(__this->fields).OFIMCENNNDJ;
  *ppNVar2 = (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  return;
}

