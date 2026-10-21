// TypeDefIndex 3157
// Namespace: Nekki.SF2.GUI.Dialogs
// public sealed class DialogCanvasController : MonoBehaviour
// Fields:
//   private ResolutionImage _background; // 0x20
//   private RectTransform _inputBlocker; // 0x28
//   private RectTransform _chatHidedMount; // 0x30
//   private RectTransform _dialogsMount; // 0x38
//   private RectTransform _chatShownMount; // 0x40
//   private List<DialogCanvasController.DialogData> _dialogs; // 0x48
//   private static DialogCanvasController CBDMFFMCJBK; // 0x0

// ===== public void .ctor()  [RVA 0x34DA7D8]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$.ctor @ RVA 0x34DA7D8

void Nekki_SF2_GUI_Dialogs_DialogCanvasController___ctor
               (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public BaseDialog Create(HKMLPEALIII ACCIHBHMFPN)  [RVA 0x34DA7E0]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$Create @ RVA 0x34DA7E0

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
Nekki_SF2_GUI_Dialogs_DialogCanvasController__Create
          (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,int32_t ACCIHBHMFPN,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar2;
  UnityEngine_Component_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  System_Object_array *args;
  System_String_o *pSVar4;
  long lVar5;
  undefined8 uVar6;
  UnityEngine_RectTransform_o *parent;
  System_Collections_Generic_List_DialogCanvasController_DialogData__o *__this_01;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if ((DAT_04568706 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<BaseDialog>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HKMLPEALIII_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_DialogCanvasController_JHFDCOFEGJM_GNFLOPCHGNF__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_DialogCanvasController_JHFDCOFEGJM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DialogCanvasController_DialogData>_Find__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<BaseDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Predicate<DialogCanvasController_DialogData>_TypeInfo);
    FUN_01bab630(&StringLiteral_5353/*"Dialog prefab for type [{0}] not found"*/);
    DAT_04568706 = 1;
  }
  pIVar1 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_DialogCanvasController_JHFDCOFEGJM_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    *(int32_t *)&pIVar1[1].klass = ACCIHBHMFPN;
    __this_01 = (__this->fields)._dialogs;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<DialogCanvasController_DialogData>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_DialogCanvasController_DialogData__o *)0x0) {
      pIVar2 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<DialogCanvasController_DialogData>_Find__
                         );
      if (pIVar2 == (Il2CppObject *)0x0) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        local_48.klass = (System_Enum_c *)HKMLPEALIII_TypeInfo;
        local_48.monitor = (void *)0xffffffffffffffff;
        local_38 = *(undefined4 *)&pIVar1[1].klass;
        pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
        if (args != (System_Object_array *)0x0) {
          if ((pSVar4 != (System_String_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0
             )) {
            uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar6,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = (Il2CppObject *)pSVar4;
            thunk_FUN_01c20e04(args->m_Items,pSVar4);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_5353/*"Dialog prefab for type [{0}] not found"*/,args,(MethodInfo *)0x0);
            return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
      else {
        pIVar1 = pIVar2[1].monitor;
        parent = (__this->fields)._dialogsMount;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        __this_00 = (UnityEngine_Component_o *)
                    UnityEngine_Object__Instantiate<object>
                              (pIVar1,(UnityEngine_Transform_o *)parent,false,
                               Method_UnityEngine_Object_Instantiate<BaseDialog>__);
        if (__this_00 != (UnityEngine_Component_o *)0x0) {
          pNVar3 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)
                   UnityEngine_Component__GetComponent<object>
                             (__this_00,Method_UnityEngine_Component_GetComponent<BaseDialog>__);
          return pNVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RectTransform GetChatHidedMount()  [RVA 0x34DAA44]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$GetChatHidedMount @ RVA 0x34DAA44

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Dialogs_DialogCanvasController__GetChatHidedMount
          (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,MethodInfo *method)

{
  return (__this->fields)._chatHidedMount;
}


// ===== public RectTransform GetChatShownMount()  [RVA 0x34DAA4C]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$GetChatShownMount @ RVA 0x34DAA4C

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Dialogs_DialogCanvasController__GetChatShownMount
          (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,MethodInfo *method)

{
  return (__this->fields)._chatShownMount;
}


// ===== private void GIENGNEGHPJ()  [RVA 0x34DAA54]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$GIENGNEGHPJ @ RVA 0x34DAA54

void Nekki_SF2_GUI_Dialogs_DialogCanvasController__GIENGNEGHPJ
               (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_DialogCanvasController__EnableBackground(__this,false,in_x2);
  Nekki_SF2_GUI_Dialogs_DialogCanvasController__BlockNotDialogTouches(__this,false,in_x2);
  return;
}


// ===== private void OnDestroy()  [RVA 0x34DAAD4]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$OnDestroy @ RVA 0x34DAAD4

void Nekki_SF2_GUI_Dialogs_DialogCanvasController__OnDestroy
               (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,MethodInfo *method)

{
  if ((DAT_04568707 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo);
    DAT_04568707 = 1;
  }
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields->CBDMFFMCJBK =
       (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields,0);
  return;
}


// ===== public void Show()  [RVA 0x34DAB28]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$Show @ RVA 0x34DAB28

void Nekki_SF2_GUI_Dialogs_DialogCanvasController__Show
               (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BlockNotDialogTouches(bool CJNHFNHJHPE)  [RVA 0x34DAAA4]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$BlockNotDialogTouches @ RVA 0x34DAAA4

void Nekki_SF2_GUI_Dialogs_DialogCanvasController__BlockNotDialogTouches
               (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._inputBlocker;
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EnableBackground(bool CJNHFNHJHPE)  [RVA 0x34DAA74]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$EnableBackground @ RVA 0x34DAA74

void Nekki_SF2_GUI_Dialogs_DialogCanvasController__EnableBackground
               (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._background;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Hide()  [RVA 0x34DAB4C]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$Hide @ RVA 0x34DAB4C

void Nekki_SF2_GUI_Dialogs_DialogCanvasController__Hide
               (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static DialogCanvasController get_Instance()  [RVA 0x34DAB70]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$get_Instance @ RVA 0x34DAB70

Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *
Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance(MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *original;
  UnityEngine_Object_o *__this;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *pNVar2;
  
  if ((DAT_04568708 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<DialogCanvasController>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035dabc8 to 036dac97 has its CatchHandler @ 035dabc8
                       catch() { ... } // from try @ 035dabc8 with catch @ 035dabc8
                       catch() { ... } // from try @ 035dacf4 with catch @ 035dabc8
                       catch() { ... } // from try @ 035dad18 with catch @ 035dabc8
                       catch() { ... } // from try @ 035dad3c with catch @ 035dabc8
                       catch() { ... } // from try @ 035dad70 with catch @ 035dabc8 */
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_15458/*"[DialogCanvas]"*/);
    FUN_01bab630(&StringLiteral_10400/*"Prefabs/Dialogs/DialogCanvas"*/);
    DAT_04568708 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    original = UnityEngine_Resources__Load<object>
                         (StringLiteral_10400/*"Prefabs/Dialogs/DialogCanvas"*/,Method_UnityEngine_Resources_Load<GameObject>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       (original,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this != (UnityEngine_Object_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_Object__set_name(__this,StringLiteral_15458/*"[DialogCanvas]"*/,(MethodInfo *)0x0);
                    /* try { // try from 035dac98 to 036dac9f has its CatchHandler @ 035dad20 */
      pNVar2 = (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)
               UnityEngine_GameObject__GetComponent<object>
                         ((UnityEngine_GameObject_o *)__this,
                          Method_UnityEngine_GameObject_GetComponent<DialogCanvasController>__);
      Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields->CBDMFFMCJBK = pNVar2;
      thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields,pNVar2
                        );
      pNVar2 = Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields->CBDMFFMCJBK;
      if (pNVar2 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_DialogCanvasController__EnableBackground(pNVar2,false,method_00);
        Nekki_SF2_GUI_Dialogs_DialogCanvasController__BlockNotDialogTouches(pNVar2,false,method_00);
        UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
        goto LAB_035dacec;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035dacec:
                    /* try { // try from 035dacec to 036dacf3 has its CatchHandler @ 035dad1c */
                    /* try { // try from 035dacf4 to 036dad13 has its CatchHandler @ 035dabc8 */
  return Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields->CBDMFFMCJBK;
}

