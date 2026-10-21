// Nekki.SF2.GUI.Fight.RaidWaitResultContent$$.ctor @ RVA 0x35BBEA4

void Nekki_SF2_GUI_Fight_RaidWaitResultContent___ctor
               (Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  
  if ((DAT_04568ede & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_10847);
    DAT_04568ede = 1;
  }
  (__this->fields)._Alias = StringLiteral_10847;
  thunk_FUN_01c20e04();
  (__this->fields).CFKIJMGDLLK = 0.3;
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).NDJIAKPCEJB;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_Fight_RaidEndFightBaseContent___ctor
            ((Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}

