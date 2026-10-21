// Nekki.SF2.GUI.Fight.ActivePerkModel$$.ctor @ RVA 0x31C4A64

void Nekki_SF2_GUI_Fight_ActivePerkModel___ctor
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ActivePerkItem__o *__this_00;
  System_Collections_Generic_List_ActivePerkItem__o **ppSVar1;
  System_Collections_Generic_List_ActivePerkItemContainer__o *__this_01;
  System_Collections_Generic_List_ActivePerkItemContainer__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566c2a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ActivePerkItemContainer>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ActivePerkItem>_TypeInfo);
    DAT_04566c2a = 1;
    method = extraout_x1;
  }
  (__this->fields).MKKLGLAFMCB.fields.z = 0.0;
  (__this->fields).MKKLGLAFMCB.fields.w = 0.0;
  (__this->fields).KPGBDEPEHJD.fields = (UnityEngine_Vector2_Fields)0x0;
  (__this->fields).MKKLGLAFMCB.fields.x = 0.0;
  (__this->fields).MKKLGLAFMCB.fields.y = 180.0;
  __this_00 = (System_Collections_Generic_List_ActivePerkItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ActivePerkItem>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ActivePerkItem>__ctor__);
  ppSVar1 = &(__this->fields).DOKOOFIPJGJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_ActivePerkItemContainer__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ActivePerkItemContainer>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ActivePerkItemContainer>__ctor__);
  ppSVar2 = &(__this->fields).MHHBMNPJOOF;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

