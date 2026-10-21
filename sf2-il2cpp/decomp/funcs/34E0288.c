// ANFOHCGLHID$$.cctor @ RVA 0x34E0288

void ANFOHCGLHID___cctor(MethodInfo *method)

{
  ANFOHCGLHID_HLMLMHPDHOG_o *__this;
  System_Collections_Generic_List_DBGBHDDCAJC__o *__this_00;
  System_Collections_Generic_List_DBGBHDDCAJC__o **ppSVar1;
  
  if ((DAT_04568726 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&ANFOHCGLHID_HLMLMHPDHOG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBGBHDDCAJC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DBGBHDDCAJC>_TypeInfo);
    DAT_04568726 = 1;
  }
  __this = (ANFOHCGLHID_HLMLMHPDHOG_o *)thunk_FUN_01bda818(ANFOHCGLHID_HLMLMHPDHOG_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BGGCAGBJCLA = false;
  (__this->fields).DMFPEAIGCBF = false;
  ANFOHCGLHID_TypeInfo->static_fields->LLPDICNBKEI = __this;
  thunk_FUN_01c20e04(ANFOHCGLHID_TypeInfo->static_fields,__this);
  ANFOHCGLHID_TypeInfo->static_fields->AEFEDMKJKJE = false;
  __this_00 = (System_Collections_Generic_List_DBGBHDDCAJC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DBGBHDDCAJC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<DBGBHDDCAJC>__ctor__);
  ppSVar1 = &ANFOHCGLHID_TypeInfo->static_fields->GGBLEBGGDFH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}

