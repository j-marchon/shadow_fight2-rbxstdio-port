// LJLLAKHOFFF$$HGHDGHHEFEP @ RVA 0x32EAB70

bool LJLLAKHOFFF__HGHDGHHEFEP(UnityEngine_UI_Graphic_o *DAHDMONMPFJ,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_EventSystems_PointerEventData_o *__this;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_List_RaycastResult__o *__this_01;
  UnityEngine_Object_o *y;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_EventSystems_RaycastResult_o local_80;
  
  if ((DAT_04567638 & 1) == 0) {
    FUN_01bab630(&UnityEngine_EventSystems_EventSystem_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaycastResult>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaycastResult>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaycastResult>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<RaycastResult>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_EventSystems_PointerEventData_TypeInfo);
    DAT_04567638 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_EventSystems_EventSystem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_EventSystems_EventSystem_TypeInfo,method);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  __this = (UnityEngine_EventSystems_PointerEventData_o *)
           thunk_FUN_01bda818(UnityEngine_EventSystems_PointerEventData_TypeInfo);
  UnityEngine_EventSystems_PointerEventData___ctor(__this,pUVar2,(MethodInfo *)0x0);
  if ((DAHDMONMPFJ != (UnityEngine_UI_Graphic_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)DAHDMONMPFJ,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar3 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    if (__this != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      (__this->fields)._position_k__BackingField.fields.x = UVar3.fields.x;
      (__this->fields)._position_k__BackingField.fields.y = UVar3.fields.y;
      __this_01 = (System_Collections_Generic_List_RaycastResult__o *)
                  thunk_FUN_01bda818(UVar3.fields.x,UVar3.fields.y,UVar3.fields.z,
                                     System_Collections_Generic_List<RaycastResult>_TypeInfo);
      System_Collections_Generic_List<RaycastResult>___ctor
                (__this_01,Method_System_Collections_Generic_List<RaycastResult>__ctor__);
      pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if ((pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) &&
         (UnityEngine_EventSystems_EventSystem__RaycastAll
                    (pUVar2,__this,__this_01,(MethodInfo *)0x0),
         __this_01 != (System_Collections_Generic_List_RaycastResult__o *)0x0)) {
        if ((__this_01->fields)._size == 0) {
          bVar1 = true;
        }
        else {
          System_Collections_Generic_List<RaycastResult>__get_Item
                    (&local_80,__this_01,0,
                     Method_System_Collections_Generic_List<RaycastResult>_get_Item__);
          y = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)DAHDMONMPFJ,(MethodInfo *)0x0);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)local_80.fields.m_GameObject,y,
                             (MethodInfo *)0x0);
        }
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

