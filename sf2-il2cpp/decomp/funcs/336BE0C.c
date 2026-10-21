// IEHDDOIHPNI$$.cctor @ RVA 0x336BE0C

void IEHDDOIHPNI___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *__this;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar2;
  HOOAAGABMBL_o **ppHVar3;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar4;
  IEHDDOIHPNI_StaticFields *pIVar5;
  
  if ((DAT_04567af2 & 1) == 0) {
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567af2 = 1;
  }
  pIVar5 = IEHDDOIHPNI_TypeInfo->static_fields;
  pIVar5->NMFCCFJDDNN = false;
  pIVar5->DDLIGIKDNAA = false;
  __this = (System_Collections_Generic_List_HOOAAGABMBL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  ppSVar1 = &IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &IEHDDOIHPNI_TypeInfo->static_fields->ICLDBBGODHJ;
  *ppSVar2 = __this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  ppHVar3 = &IEHDDOIHPNI_TypeInfo->static_fields->JLLLPGEABHK;
  *ppHVar3 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar3,0);
  ppNVar4 = &IEHDDOIHPNI_TypeInfo->static_fields->KLAFPJHHOHD;
  *ppNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
  thunk_FUN_01c20e04(ppNVar4,0);
  return;
}

