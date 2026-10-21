// OGGBALCBCLL$$.ctor @ RVA 0x318AB70

void OGGBALCBCLL___ctor(OGGBALCBCLL_o *__this,System_Type_o *LOPHPODNCKO,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *pSVar1;
  System_Type_o **ppSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_List_string__o **ppSVar4;
  MethodInfo *method_00;
  
  if ((DAT_04566a0b & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_var);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04566a0b = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  handle = Google_Protobuf_WellKnownTypes_Empty_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  (__this->fields)._PAFHGGCMLEG_k__BackingField = pSVar1;
  thunk_FUN_01c20e04();
  ppSVar2 = &(__this->fields)._DIHHONNHABO_k__BackingField;
  *ppSVar2 = LOPHPODNCKO;
  thunk_FUN_01c20e04(ppSVar2,LOPHPODNCKO);
  pSVar3 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar4 = &(__this->fields)._BILAHNNHICB_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar4 = &(__this->fields)._JGHJEDPFGCJ_k__BackingField;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  OGGBALCBCLL__PPBANLLIGDK(__this,method_00);
  return;
}

