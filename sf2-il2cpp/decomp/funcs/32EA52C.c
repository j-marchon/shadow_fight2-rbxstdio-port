// KOGMOACEOAM$$.ctor @ RVA 0x32EA52C

void KOGMOACEOAM___ctor(KOGMOACEOAM_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  MethodInfo *extraout_x1;
  ECENNHNBAME_o **ppEVar2;
  
  if ((DAT_04567632 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float[]>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<float[]>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567632 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).KBPGCNCNJAG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  if ((System_Collections_Generic_List<float[]>_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<float[]>__ctor__);
  ppEVar2 = &(__this->fields).OAKOFJJIOFF;
  *ppEVar2 = (ECENNHNBAME_o *)0x0;
  thunk_FUN_01c20e04(ppEVar2,0);
  return;
}

