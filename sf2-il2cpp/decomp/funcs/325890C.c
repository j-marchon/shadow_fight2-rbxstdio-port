// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$OnDestroy @ RVA 0x325890C

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  System_Collections_Generic_List_ScrollDialogElement__o *pSVar3;
  UnityEngine_UI_Slider_o *pUVar4;
  UnityEngine_Events_UnityEvent_float__o *__this_00;
  UnityEngine_UI_ScrollRect_o *pUVar5;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  
                    /* try { // try from 0335890c to 03458923 has its CatchHandler @ 03358bf0 */
                    /* try { // try from 03358924 to 03458a8f has its CatchHandler @ 0335849c */
  if ((DAT_0456717a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ScrollDialogElement>_Clear__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_CNAFCHHHKGD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_KOHLIOECEFA__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_RemoveListener__);
    DAT_0456717a = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).AALHBGHLAGO;
  if (pSVar3 == (System_Collections_Generic_List_ScrollDialogElement__o *)0x0) goto LAB_03358ae4;
  length = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._slider;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar4 = (__this->fields)._slider;
    if (pUVar4 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_03358ae4;
    __this_00 = (UnityEngine_Events_UnityEvent_float__o *)(pUVar4->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<float>_TypeInfo);
    UnityEngine_Events_UnityAction<float>___ctor();
    if (__this_00 == (UnityEngine_Events_UnityEvent_float__o *)0x0) goto LAB_03358ae4;
    UnityEngine_Events_UnityEvent<float>__RemoveListener
              (__this_00,pUVar2,Method_UnityEngine_Events_UnityEvent<float>_RemoveListener__);
  }
  pUVar5 = (__this->fields)._scroll;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar5 = (__this->fields)._scroll;
                    /* catch() { ... } // from try @ 033585cc with catch @ 03358a78
                       catch() { ... } // from try @ 03358894 with catch @ 03358a78 */
  if (pUVar5 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar5->fields).m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
                    /* try { // try from 03358a90 to 03458aa7 has its CatchHandler @ 03358be0 */
                    /* try { // try from 03358aa8 to 03458ba7 has its CatchHandler @ 0335849c */
    UnityEngine_Events_UnityAction<Vector2>___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
      UnityEngine_Events_UnityEvent<Vector2>__RemoveListener
                (__this_01,pUVar2,Method_UnityEngine_Events_UnityEvent<Vector2>_RemoveListener__);
      return;
    }
  }
LAB_03358ae4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

