// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$.ctor @ RVA 0x30B4CE4

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC___ctor
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_00;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o **ppSVar1;
  System_Collections_Generic_List_IHIFNKAMALG__o *__this_01;
  System_Collections_Generic_List_IHIFNKAMALG__o **ppSVar2;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *__this_02;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o **ppSVar3;
  
  if ((DAT_04566224 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IHIFNKAMALG>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566224 = 1;
  }
  (__this->fields)._OICGFKLBNPE_k__BackingField = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>__ctor__);
  ppSVar1 = &(__this->fields)._FEKFGIIMCOE_k__BackingField;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_IHIFNKAMALG__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IHIFNKAMALG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IHIFNKAMALG>__ctor__);
  ppSVar2 = &(__this->fields)._CODCAPKKACN_k__BackingField;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>__ctor__);
  ppSVar3 = &(__this->fields)._NNFPEOCIPFE_k__BackingField;
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

