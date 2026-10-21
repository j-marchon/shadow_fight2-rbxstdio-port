// Original name: Network.core.events.EventType  (obfuscated OGGBALCBCLL)
// TypeDefIndex 1446
// Namespace: 
// public class EventType
// Fields:
//   private Type <PAFHGGCMLEG>k__BackingField; // 0x10
//   private Type <DIHHONNHABO>k__BackingField; // 0x18
//   private List<string> <JGHJEDPFGCJ>k__BackingField; // 0x20
//   private List<string> <BILAHNNHICB>k__BackingField; // 0x28

// ===== private void EEKKHGNFFIA(Type CJNHFNHJHPE)  [RVA 0x318AB60]
// EventType$$EEKKHGNFFIA @ RVA 0x318AB60

void EventType__EEKKHGNFFIA(EventType_o *__this,System_Type_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PAFHGGCMLEG_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public Type MMIKEEJMKOA()  [RVA 0x318AB68]
// EventType$$MMIKEEJMKOA @ RVA 0x318AB68

System_Type_o * EventType__MMIKEEJMKOA(EventType_o *__this,MethodInfo *method)

{
  return (__this->fields)._DIHHONNHABO_k__BackingField;
}


// ===== public void .ctor(Type LOPHPODNCKO)  [RVA 0x318AB70]
// EventType$$.ctor @ RVA 0x318AB70

void EventType___ctor(EventType_o *__this,System_Type_o *LOPHPODNCKO,MethodInfo *method)

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
  EventType__PPBANLLIGDK(__this,method_00);
  return;
}


// ===== public List<string> OKEEMFODFCD()  [RVA 0x318ADB4]
// EventType$$OKEEMFODFCD @ RVA 0x318ADB4

System_Collections_Generic_List_string__o *
EventType__OKEEMFODFCD(EventType_o *__this,MethodInfo *method)

{
  return (__this->fields)._JGHJEDPFGCJ_k__BackingField;
}


// ===== public bool GKAJEILCKLG()  [RVA 0x318ADBC]
// EventType$$GKAJEILCKLG @ RVA 0x318ADBC

bool EventType__GKAJEILCKLG(EventType_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566a0c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&StringLiteral_16724/*"blocking"*/);
    DAT_04566a0c = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._BILAHNNHICB_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,StringLiteral_16724/*"blocking"*/,
                       Method_System_Collections_Generic_List<string>_Contains__);
    if (bVar1) {
      return true;
    }
    bVar1 = EventType__MBKBBJCFPGL(__this,method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void MPBFCDJCFEI(List<string> CJNHFNHJHPE)  [RVA 0x318AEA8]
// EventType$$MPBFCDJCFEI @ RVA 0x318AEA8

void EventType__MPBFCDJCFEI
               (EventType_o *__this,System_Collections_Generic_List_string__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._BILAHNNHICB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<string> GPFPEDADHPD()  [RVA 0x318AEB0]
// EventType$$GPFPEDADHPD @ RVA 0x318AEB0

System_Collections_Generic_List_string__o *
EventType__GPFPEDADHPD(EventType_o *__this,MethodInfo *method)

{
  return (__this->fields)._BILAHNNHICB_k__BackingField;
}


// ===== public bool MBKBBJCFPGL()  [RVA 0x318AE40]
// EventType$$MBKBBJCFPGL @ RVA 0x318AE40

bool EventType__MBKBBJCFPGL(EventType_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a0d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&StringLiteral_21224/*"state_change"*/);
    DAT_04566a0d = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._BILAHNNHICB_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,StringLiteral_21224/*"state_change"*/,
                       Method_System_Collections_Generic_List<string>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void PPBANLLIGDK()  [RVA 0x318AC98]
// EventType$$PPBANLLIGDK @ RVA 0x318AC98

void EventType__PPBANLLIGDK(EventType_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  System_Type_o *pSVar2;
  
  if ((DAT_04566a0e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_5994/*"EventType::Check: some of members are NULL!"*/);
    DAT_04566a0e = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  bVar1 = UnityEngine_Application__get_isEditor((MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pSVar2 = (__this->fields)._PAFHGGCMLEG_k__BackingField;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = System_Type__op_Equality(pSVar2,(System_Type_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar2 = (__this->fields)._DIHHONNHABO_k__BackingField;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = System_Type__op_Equality(pSVar2,(System_Type_o *)0x0,(MethodInfo *)0x0);
    if (((!bVar1) &&
        ((__this->fields)._BILAHNNHICB_k__BackingField !=
         (System_Collections_Generic_List_string__o *)0x0)) &&
       ((__this->fields)._JGHJEDPFGCJ_k__BackingField !=
        (System_Collections_Generic_List_string__o *)0x0)) {
      return;
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_5994/*"EventType::Check: some of members are NULL!"*/,(MethodInfo *)0x0);
  return;
}


// ===== private void KANNDFEGIBK(List<string> CJNHFNHJHPE)  [RVA 0x318AEB8]
// EventType$$KANNDFEGIBK @ RVA 0x318AEB8

void EventType__KANNDFEGIBK
               (EventType_o *__this,System_Collections_Generic_List_string__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._JGHJEDPFGCJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void ANNOIDALJIC(Type CJNHFNHJHPE)  [RVA 0x318AEC0]
// EventType$$ANNOIDALJIC @ RVA 0x318AEC0

void EventType__ANNOIDALJIC(EventType_o *__this,System_Type_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DIHHONNHABO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public bool JILLNCBMKNL()  [RVA 0x318AEC8]
// EventType$$JILLNCBMKNL @ RVA 0x318AEC8

bool EventType__JILLNCBMKNL(EventType_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a0f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&StringLiteral_19962/*"offline"*/);
    DAT_04566a0f = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._BILAHNNHICB_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,StringLiteral_19962/*"offline"*/,
                       Method_System_Collections_Generic_List<string>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void .ctor(Type BNPDFDEDFHM, Type LOPHPODNCKO, List<string> PPJBLEEDCOK, List<string> GAEAOABLFEG)  [RVA 0x318AF30]
// EventType$$.ctor @ RVA 0x318AF30

void EventType___ctor(EventType_o *__this,System_Type_o *BNPDFDEDFHM,System_Type_o *LOPHPODNCKO,
                       System_Collections_Generic_List_string__o *PPJBLEEDCOK,
                       System_Collections_Generic_List_string__o *GAEAOABLFEG,MethodInfo *method)

{
  System_Type_o **ppSVar1;
  System_Collections_Generic_List_string__o **ppSVar2;
  MethodInfo *method_00;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._PAFHGGCMLEG_k__BackingField = BNPDFDEDFHM;
  thunk_FUN_01c20e04(&__this->fields,BNPDFDEDFHM);
  ppSVar1 = &(__this->fields)._DIHHONNHABO_k__BackingField;
  *ppSVar1 = LOPHPODNCKO;
  thunk_FUN_01c20e04(ppSVar1,LOPHPODNCKO);
  ppSVar2 = &(__this->fields)._BILAHNNHICB_k__BackingField;
  *ppSVar2 = PPJBLEEDCOK;
  thunk_FUN_01c20e04(ppSVar2,PPJBLEEDCOK);
  ppSVar2 = &(__this->fields)._JGHJEDPFGCJ_k__BackingField;
  *ppSVar2 = GAEAOABLFEG;
  thunk_FUN_01c20e04(ppSVar2,GAEAOABLFEG);
  EventType__PPBANLLIGDK(__this,method_00);
  return;
}


// ===== public Type HPALGOJDLAG()  [RVA 0x318AFAC]
// EventType$$HPALGOJDLAG @ RVA 0x318AFAC

System_Type_o * EventType__HPALGOJDLAG(EventType_o *__this,MethodInfo *method)

{
  return (__this->fields)._PAFHGGCMLEG_k__BackingField;
}

