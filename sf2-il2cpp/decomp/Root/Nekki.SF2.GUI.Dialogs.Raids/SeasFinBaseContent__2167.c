// TypeDefIndex 2167
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class SeasFinBaseContent : MonoBehaviour
// Fields:
//   private LabelButton _btnOk; // 0x20
//   private LabelButton _btnCancel; // 0x28
//   private Action DKPPMJCLNAB; // 0x30
//   protected List<Sequence> HHEDCPBLJHD; // 0x38

// ===== protected virtual void OnDestroy()  [RVA 0x32DC354]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$OnDestroy @ RVA 0x32DC354

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_Sequence__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045675c4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Sequence>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Sequence>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Sequence>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>_GetEnumerator__);
    DAT_045675c4 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).HHEDCPBLJHD;
  if (pSVar2 != (System_Collections_Generic_List_Sequence__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<Sequence>_GetEnumerator__);
                    /* try { // try from 033dc3ec to 034dc3ef has its CatchHandler @ 033dc414 */
                    /* try { // try from 033dc3f0 to 034dc3f7 has its CatchHandler @ 033dc420 */
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<Sequence>_MoveNext__
                             ), bVar1) {
                    /* try { // try from 033dc3f8 to 034dc3fb has its CatchHandler @ 033dc0b4 */
                    /* try { // try from 033dc3fc to 034dc3ff has its CatchHandler @ 033dc408 */
                    /* try { // try from 033dc400 to 034dc42f has its CatchHandler @ 033dc0b4 */
      DG_Tweening_TweenExtensions__Kill
                ((DG_Tweening_Tween_o *)local_38.fields._current,false,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc3fc with catch @ 033dc408
                        */
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc2d8 with catch @ 033dc40c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc31c with catch @ 033dc410
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc3ec with catch @ 033dc414
                        */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<Sequence>_Dispose__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc27c with catch @ 033dc418
                        */
    pSVar2 = (__this->fields).HHEDCPBLJHD;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc220 with catch @ 033dc41c
                        */
    if (pSVar2 != (System_Collections_Generic_List_Sequence__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc3f0 with catch @ 033dc420
                        */
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                    /* try { // try from 033dc430 to 034dc433 has its CatchHandler @ 033dc444 */
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
                    /* catch() { ... } // from try @ 033dc430 with catch @ 033dc444 */
                    /* try { // try from 033dc44c to 034dc4b3 has its CatchHandler @ 033dc4c8 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnClose(Action CJNHFNHJHPE)  [RVA 0x32DC4D0]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$remove_OnClose @ RVA 0x32DC4D0

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__remove_OnClose
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,
               System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045675c5 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045675c5 = 1;
  }
  ppSVar4 = &(__this->fields).DKPPMJCLNAB;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== protected void GIENGNEGHPJ(bool COPEPIPJEPE = True, LabelButton.MANJLBPDELA ACLFJCOLFMD = 1, string DOEJEADIJEJ = "OK", bool MDEOLMMEEDM = False, LabelButton.MANJLBPDELA LGJADIDEGHK = 1, string BECCMDCHEOP = "CANCEL")  [RVA 0x32DC56C]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$GIENGNEGHPJ @ RVA 0x32DC56C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,bool COPEPIPJEPE,
               int32_t ACLFJCOLFMD,System_String_o *DOEJEADIJEJ,bool MDEOLMMEEDM,int32_t LGJADIDEGHK
               ,System_String_o *BECCMDCHEOP,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  LabelButton_o *pLVar5;
  
  if ((DAT_045675c6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045675c6 = 1;
  }
  if (COPEPIPJEPE) {
    pLVar5 = (__this->fields)._btnOk;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pLVar5 = (__this->fields)._btnOk;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      LabelButton__set_Alias(pLVar5,DOEJEADIJEJ,(MethodInfo *)0x0);
      pLVar5 = (__this->fields)._btnOk;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      LabelButton__set_ButtonColor(pLVar5,ACLFJCOLFMD,(MethodInfo *)0x0);
      pLVar5 = (__this->fields)._btnOk;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar5->fields).super.super.super.m_OnClick;
      pUVar2 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar4 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_033dc7e4;
      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
    }
  }
  if (MDEOLMMEEDM) {
    pLVar5 = (__this->fields)._btnCancel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pLVar5 = (__this->fields)._btnCancel;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      LabelButton__set_Alias(pLVar5,BECCMDCHEOP,(MethodInfo *)0x0);
      pLVar5 = (__this->fields)._btnCancel;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      LabelButton__set_ButtonColor(pLVar5,LGJADIDEGHK,(MethodInfo *)0x0);
      pLVar5 = (__this->fields)._btnCancel;
      if (pLVar5 == (LabelButton_o *)0x0) goto LAB_033dc7e4;
      pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar5->fields).super.super.super.m_OnClick;
      pUVar2 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar4 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_033dc7e4;
      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
      pLVar5 = (__this->fields)._btnCancel;
      if ((pLVar5 == (LabelButton_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar5,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033dc7e4;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    }
  }
  pLVar5 = (__this->fields)._btnOk;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar5 = (__this->fields)._btnOk;
    if ((pLVar5 == (LabelButton_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar5,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033dc7e4;
    UnityEngine_GameObject__SetActive(pUVar3,COPEPIPJEPE,(MethodInfo *)0x0);
  }
  pLVar5 = (__this->fields)._btnCancel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pLVar5 = (__this->fields)._btnCancel;
  if ((pLVar5 != (LabelButton_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pLVar5,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar3,MDEOLMMEEDM,(MethodInfo *)0x0);
    return;
  }
LAB_033dc7e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnClose(Action CJNHFNHJHPE)  [RVA 0x32DC7E8]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$add_OnClose @ RVA 0x32DC7E8

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__add_OnClose
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,
               System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_045675c7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045675c7 = 1;
  }
  ppSVar4 = &(__this->fields).DKPPMJCLNAB;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void .ctor()  [RVA 0x32DC884]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$.ctor @ RVA 0x32DC884

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Collections_Generic_List_Sequence__o *__this_00;
  System_Collections_Generic_List_Sequence__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar3;
  
  if ((DAT_045675c8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Sequence>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_KOPCKFBLPBD__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo);
    DAT_045675c8 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo->static_fields->__9__10_0;
  if (pSVar3 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_<>c_TypeInfo->static_fields->__9__10_0
    ;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)0x0) {
    ppSVar1 = &(__this->fields).DKPPMJCLNAB;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    __this_00 = (System_Collections_Generic_List_Sequence__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<Sequence>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,8,
               Method_System_Collections_Generic_List<Sequence>__ctor__);
    ppSVar2 = &(__this->fields).HHEDCPBLJHD;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void OJGLIBHMOIE()  [RVA 0x32DC9CC]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$OJGLIBHMOIE @ RVA 0x32DC9CC

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OJGLIBHMOIE
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).DKPPMJCLNAB;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033dc9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void KNJNEEKAFAL()  [RVA 0x32DC9F0]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$KNJNEEKAFAL @ RVA 0x32DC9F0

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__KNJNEEKAFAL
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).DKPPMJCLNAB;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033dca0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

