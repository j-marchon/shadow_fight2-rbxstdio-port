// FEKEAPCCOOB$$GDCPIEANEJF @ RVA 0x351384C

int32_t FEKEAPCCOOB__GDCPIEANEJF
                  (FEKEAPCCOOB_o *__this,UnityEngine_UI_Button_o *DJIMJLMCAPI,TabView_o *FNCBJFJMIPB
                  ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  long lVar3;
  bool bVar4;
  int32_t iVar5;
  Il2CppObject *__this_00;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Image_o *DAHDMONMPFJ;
  MethodInfo *method_00;
  MethodInfo_2639E28 *in_x4;
  System_Collections_Generic_KeyValuePair_Button__TabView__array *pSVar6;
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o *__this_03;
  UnityEngine_Events_UnityEvent_o *__this_04;
  Nekki_SF2_GUI_ResolutionButton_o *__this_05;
  System_Collections_Generic_KeyValuePair_object__object__o __this_06;
  Il2CppObject local_50;
  
  if ((DAT_0456890a & 1) == 0) {
    FUN_01bab630(&Method_FEKEAPCCOOB_JAHABDODOFO_CCFAJFLNMAJ__);
    FUN_01bab630(&FEKEAPCCOOB_JAHABDODOFO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<Button,_TabView>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionButton_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456890a = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FEKEAPCCOOB_JAHABDODOFO_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_03613b3c;
  __this_00[1].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 1,__this);
  iVar5 = FEKEAPCCOOB__KPOBFGCNFAG(__this,method_00);
  *(int32_t *)&__this_00[1].monitor = iVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)DJIMJLMCAPI,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar4) {
    if ((DJIMJLMCAPI == (UnityEngine_UI_Button_o *)0x0) ||
       (__this_01 = (DJIMJLMCAPI->fields).m_OnClick,
       __this_01 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_03613b3c;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
    __this_04 = (UnityEngine_Events_UnityEvent_o *)(DJIMJLMCAPI->fields).m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_04 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_03613b3c;
    UnityEngine_Events_UnityEvent__AddListener(__this_04,call,(MethodInfo *)0x0);
    __this_02 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)DJIMJLMCAPI,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_03613b3c;
    UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)FNCBJFJMIPB,(MethodInfo *)0x0);
    if (!bVar4) {
      DAHDMONMPFJ = UnityEngine_UI_Selectable__get_image
                              ((UnityEngine_UI_Selectable_o *)DJIMJLMCAPI,(MethodInfo *)0x0);
      LJLLAKHOFFF__IFBBIDIEBEL((UnityEngine_UI_Graphic_o *)DAHDMONMPFJ,0.3137255,(MethodInfo *)0x0);
      bVar1 = (Nekki_SF2_GUI_ResolutionButton_TypeInfo->_2).naturalAligment;
      __this_05 = (Nekki_SF2_GUI_ResolutionButton_o *)0x0;
      if ((bVar1 <= (DJIMJLMCAPI->klass->_2).naturalAligment) &&
         (__this_05 = (Nekki_SF2_GUI_ResolutionButton_o *)DJIMJLMCAPI,
         (DJIMJLMCAPI->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
         (Il2CppClass *)Nekki_SF2_GUI_ResolutionButton_TypeInfo)) {
        __this_05 = (Nekki_SF2_GUI_ResolutionButton_o *)0x0;
      }
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_05,(MethodInfo *)0x0);
      if (bVar4) {
        if (__this_05 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_03613b3c;
        Nekki_SF2_GUI_ResolutionButton__SetAllSpritesAsNormal(__this_05,(MethodInfo *)0x0);
      }
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)FNCBJFJMIPB,(MethodInfo *)0x0);
  if (bVar4) {
    if (FNCBJFJMIPB == (TabView_o *)0x0) goto LAB_03613b3c;
    (*(FNCBJFJMIPB->klass->vtable)._18_Hide.methodPtr)
              (FNCBJFJMIPB,(FNCBJFJMIPB->klass->vtable)._18_Hide.method);
  }
  __this_03 = (__this->fields).IJLEELMHJNN;
  local_50.klass = (Il2CppClass *)0x0;
  local_50.monitor = (TabView_o *)0x0;
  __this_06.fields.value = (Il2CppObject *)DJIMJLMCAPI;
  __this_06.fields.key = &local_50;
  System_Collections_Generic_KeyValuePair<object,_object>___ctor
            (__this_06,(Il2CppObject *)FNCBJFJMIPB,
             Method_System_Collections_Generic_KeyValuePair<Button,_TabView>__ctor__,in_x4);
  lVar3 = Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_Add__;
  if (__this_03 != (System_Collections_Generic_List_KeyValuePair_Button__TabView___o *)0x0) {
    item.fields.value = local_50.monitor;
    item.fields.key = (Il2CppObject *)local_50.klass;
    pSVar6 = (__this_03->fields)._items;
    (__this_03->fields)._version = (__this_03->fields)._version + 1;
    if (pSVar6 != (System_Collections_Generic_KeyValuePair_Button__TabView__array *)0x0) {
      uVar2 = (__this_03->fields)._size;
      if (uVar2 < (uint)pSVar6->max_length) {
        (__this_03->fields)._size = uVar2 + 1;
        pSVar6->m_Items[(int)uVar2].fields.key = (UnityEngine_UI_Button_o *)local_50.klass;
        pSVar6->m_Items[(int)uVar2].fields.value = local_50.monitor;
        thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar2,0);
      }
      else {
        System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                  ((System_Collections_Generic_List_T__o *)__this_03,item,
                   *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      return *(int32_t *)&__this_00[1].monitor;
    }
  }
LAB_03613b3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

