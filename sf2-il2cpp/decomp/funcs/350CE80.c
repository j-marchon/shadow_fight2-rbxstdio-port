// Nekki.SF2.GUI.Dialogs.NewsDialog$$.ctor @ RVA 0x350CE80

void Nekki_SF2_GUI_Dialogs_NewsDialog___ctor
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BCGLDKLKKDA__o *__this_00;
  System_Collections_Generic_List_BCGLDKLKKDA__o **ppSVar1;
  AHOEIGAOKEL_o *__this_01;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_02;
  
  if ((DAT_045688d5 & 1) == 0) {
    FUN_01bab630(&AHOEIGAOKEL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_045688d5 = 1;
  }
  (__this->fields).BPOCMBDOBOC = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_BCGLDKLKKDA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
  ppSVar1 = &(__this->fields).HAGOPBBNBGE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).CloseOnBuy = true;
  __this_01 = (AHOEIGAOKEL_o *)thunk_FUN_01bda818(AHOEIGAOKEL_TypeInfo);
  AHOEIGAOKEL___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).LLBENMDKHBK = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).LLBENMDKHBK,__this_01);
  __this_02 = (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>__ctor__);
  (__this->fields).MIALFHDFIKJ = __this_02;
  thunk_FUN_01c20e04(&(__this->fields).MIALFHDFIKJ,__this_02);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

