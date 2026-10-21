// TypeDefIndex 3378
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class InputDialog : BaseDialog
// Fields:
//   private Color _textColor; // 0xC8
//   protected LabelAlias _message; // 0xD8
//   protected LabelAlias _error; // 0xE0
//   protected EditBox _editBox; // 0xE8
//   public Action<string> OnClosedOkAction; // 0xF0
//   public Action OnClosedCancelAction; // 0xF8
//   protected NCJBDBGIPNF GIAMLPMHEDN; // 0x100
//   private InputDialog.LJMCBAKPGHG LNIKACBHFOE; // 0x108

// ===== private void DFEBCLGNDBG()  [RVA 0x353F6FC]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$DFEBCLGNDBG @ RVA 0x353F6FC

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__DFEBCLGNDBG
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  float value;
  
  __this_00 = (__this->fields).super._content;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    transform = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    value = 340.0;
    if ((__this->fields).LNIKACBHFOE != 0) {
      value = 0.0;
    }
    UnityEngine_TransformExtensions__SetLocalPositionY(transform,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DDGMNDCLCAA(InputDialog.LJMCBAKPGHG HJEBKCDDBAB)  [RVA 0x353F73C]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$DDGMNDCLCAA @ RVA 0x353F73C

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__DDGMNDCLCAA
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,int32_t HJEBKCDDBAB,
               MethodInfo *method)

{
  (__this->fields).LNIKACBHFOE = HJEBKCDDBAB;
  return;
}


// ===== protected virtual bool OCJBGCEPJPJ()  [RVA 0x353F744]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$OCJBGCEPJPJ @ RVA 0x353F744

bool Nekki_SF2_GUI_Dialogs_Raids_InputDialog__OCJBGCEPJPJ
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_x2;
  NCJBDBGIPNF_o *pNVar2;
  
  pNVar2 = (__this->fields).GIAMLPMHEDN;
  if (pNVar2 != (NCJBDBGIPNF_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog__IAOGDACAFKH
                      (__this,(pNVar2->fields).GCDPLFELIBF,in_x2);
    if (!bVar1) {
      return false;
    }
    pNVar2 = (__this->fields).GIAMLPMHEDN;
    if (pNVar2 != (NCJBDBGIPNF_o *)0x0) {
      bVar1 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog__IAOGDACAFKH
                        (__this,(pNVar2->fields).MLPDIICEKIO,in_x2);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x353F9B8]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$EJHAPHAHMHG @ RVA 0x353F9B8

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  return;
}


// ===== private void GONKPCHJKMM(object IMMNELPBGIF)  [RVA 0x353F9BC]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$GONKPCHJKMM @ RVA 0x353F9BC

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__GONKPCHJKMM
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  (__this->fields).LNIKACBHFOE = 1;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog__DFEBCLGNDBG(__this,(MethodInfo *)IMMNELPBGIF);
  return;
}


// ===== private void FIOGPFLBLIF()  [RVA 0x353F9C8]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$FIOGPFLBLIF @ RVA 0x353F9C8

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__FIOGPFLBLIF
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_00;
  System_Action_EditBox__o *CJNHFNHJHPE;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar1;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_01;
  
  if ((DAT_04568aea & 1) == 0) {
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_GONKPCHJKMM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HHHKCKLPENH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<string>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<string>_RemoveListener__);
    DAT_04568aea = 1;
  }
  pNVar1 = (__this->fields)._editBox;
  if ((pNVar1 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) &&
     (__this_00 = (pNVar1->fields).super.m_OnValueChanged,
     __this_00 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._editBox;
    CJNHFNHJHPE = (System_Action_EditBox__o *)thunk_FUN_01bda818(System_Action<EditBox>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
      Nekki_SF2_GUI_Scripts_EditBox__remove_OnShowKeyboard(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._editBox;
      if (pNVar1 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
        __this_01 = (pNVar1->fields).super.m_OnDidEndEdit;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_01 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__RemoveListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call,
                     Method_UnityEngine_Events_UnityEvent<string>_RemoveListener__);
          (__this->fields).LNIKACBHFOE = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool IAOGDACAFKH(Dictionary<Func<string, bool>, string> IOEBMGEBMOM)  [RVA 0x353F788]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$IAOGDACAFKH @ RVA 0x353F788

bool Nekki_SF2_GUI_Dialogs_Raids_InputDialog__IAOGDACAFKH
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,
               System_Collections_Generic_Dictionary_Func_string__bool___string__o *IOEBMGEBMOM,
               MethodInfo *method)

{
  Il2CppObject *CJNHFNHJHPE;
  bool bVar1;
  ulong uVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar4;
  int iVar5;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_04568aeb & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<Func<string,_bool>,_string>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<Func<string,_bool>,_string>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<Func<string,_bool>,_string>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<Func<string,_bool>,_string>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<Func<string,_bool>,_string>_get_Value__
                );
    DAT_04568aeb = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  if (IOEBMGEBMOM == (System_Collections_Generic_Dictionary_Func_string__bool___string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
            (&local_88,(System_Collections_Generic_Dictionary_object__object__o *)IOEBMGEBMOM,
             Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_GetEnumerator__
            );
  local_60.fields._version = local_88.fields._version;
  local_60.fields._index = local_88.fields._index;
  local_60.fields._dictionary = local_88.fields._dictionary;
  local_60.fields._current.fields.value = local_88.fields._current.fields.value;
  local_60.fields._current.fields.key = local_88.fields._current.fields.key;
  local_60.fields._getEnumeratorRetType = local_88.fields._getEnumeratorRetType;
  local_60.fields._36_4_ = local_88.fields._36_4_;
  do {
    bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_Dictionary_Enumerator<Func<string,_bool>,_string>_MoveNext__
                      );
    CJNHFNHJHPE = local_60.fields._current.fields.value;
    if (!bVar1) {
      iVar5 = 5;
      goto LAB_0363f8ec;
    }
    pNVar4 = (__this->fields)._editBox;
    if (pNVar4 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_60.fields._current.fields.key == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (*local_60.fields._current.fields.key[1].monitor)
                      (local_60.fields._current.fields.key[4].klass,(pNVar4->fields).super.m_Text,
                       local_60.fields._current.fields.key[2].monitor);
  } while ((uVar2 & 1) != 0);
  pNVar3 = (__this->fields)._error;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,(System_String_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._error;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
            (0x3f800000,0,0,0x3f800000,pNVar3,(pNVar3->klass->vtable)._23_set_color.method);
  pNVar3 = (__this->fields)._error;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  iVar5 = 4;
LAB_0363f8ec:
  System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
            (&local_60,
             Method_System_Collections_Generic_Dictionary_Enumerator<Func<string,_bool>,_string>_Dispose__
            );
  return iVar5 != 4;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x353FAF4]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$GKPJMHOFIOO @ RVA 0x353FAF4

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *pUVar1;
  System_Action_EditBox__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar2;
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_00;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_01;
  
  if ((DAT_04568aec & 1) == 0) {
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_GONKPCHJKMM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HHHKCKLPENH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<string>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    DAT_04568aec = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._editBox;
  if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    __this_00 = (pNVar2->fields).super.m_OnValueChanged;
    pUVar1 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo,method);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (__this_00 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar1,
                 Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
      pNVar2 = (__this->fields)._editBox;
      CJNHFNHJHPE = (System_Action_EditBox__o *)thunk_FUN_01bda818(System_Action<EditBox>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
        Nekki_SF2_GUI_Scripts_EditBox__add_OnShowKeyboard(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._editBox;
        if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
          __this_01 = (pNVar2->fields).super.m_OnDidEndEdit;
          pUVar1 = (UnityEngine_Events_UnityAction_T0__o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
          UnityEngine_Events_UnityAction<object>___ctor();
          if (__this_01 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent<object>__AddListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar1,
                       Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
            pNVar2 = (__this->fields)._editBox;
            if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
              Nekki_SF2_GUI_Scripts_EditBox__set_BGColor
                        (pNVar2,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                         (MethodInfo *)0x0);
              pNVar2 = (__this->fields)._editBox;
              if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                Nekki_SF2_GUI_Scripts_EditBox__set_FontColor
                          (pNVar2,(UnityEngine_Color_o)(__this->fields)._textColor.fields,
                           (MethodInfo *)0x0);
                pNVar2 = (__this->fields)._editBox;
                if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                  UnityEngine_UI_InputField__set_caretColor
                            ((UnityEngine_UI_InputField_o *)pNVar2,
                             (UnityEngine_Color_o)(__this->fields)._textColor.fields,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnClose(object IMMNELPBGIF)  [RVA 0x353FC94]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$OnClose @ RVA 0x353FC94

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_Object_array *args;
  System_Type_o *pSVar4;
  long lVar5;
  System_Action_InputDialog_HJDIKOKAGJF__o **ppSVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  NCJBDBGIPNF_o *pNVar8;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar9;
  System_Action_o *pSVar10;
  System_Action_string__o *pSVar11;
  System_Action_InputDialog_HJDIKOKAGJF__o *pSVar12;
  undefined1 auVar13 [16];
  int local_34;
  
  if ((DAT_04568aed & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HJDIKOKAGJF_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15641/*"[{0}] Wrong input : [{1}]"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568aed = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class !=
        (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    auVar13 = thunk_FUN_01bda96c();
    method_00 = auVar13._8_8_;
    iVar1 = *auVar13._0_8_;
    if (iVar1 == 1) {
      auVar13 = (*(__this->klass->vtable)._34_OCJBGCEPJPJ.methodPtr)
                          (__this,(__this->klass->vtable)._34_OCJBGCEPJPJ.method);
      method_00 = auVar13._8_8_;
      if ((auVar13._0_8_ & 1) == 0) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        pSVar4 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
        if ((pSVar4 != (System_Type_o *)0x0) &&
           (pIVar2 = (Il2CppObject *)
                     (*(pSVar4->klass->vtable)._26_unknown.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._26_unknown.method),
           args != (System_Object_array *)0x0)) {
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar5 == 0
             )) {
LAB_0363ff9c:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = pIVar2;
            thunk_FUN_01c20e04(args->m_Items,pIVar2);
            pNVar9 = (__this->fields)._editBox;
            if (pNVar9 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_0363ff90;
            pSVar3 = (pNVar9->fields).super.m_Text;
            if ((pSVar3 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_0363ff9c;
            if (1 < (uint)args->max_length) {
              args->m_Items[1] = (Il2CppObject *)pSVar3;
              thunk_FUN_01c20e04(args->m_Items + 1,pSVar3);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_15641/*"[{0}] Wrong input : [{1}]"*/,args,(MethodInfo *)0x0);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        goto LAB_0363ff90;
      }
    }
    Nekki_SF2_GUI_Dialogs_Raids_InputDialog__FIOGPFLBLIF(__this,method_00);
    pNVar8 = (__this->fields).GIAMLPMHEDN;
    if (pNVar8 != (NCJBDBGIPNF_o *)0x0) {
      pSVar12 = (pNVar8->fields).MIMKJIKCPGP;
      if (pSVar12 != (System_Action_InputDialog_HJDIKOKAGJF__o *)0x0) {
        pIVar2 = (Il2CppObject *)
                 thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HJDIKOKAGJF_TypeInfo);
        *(undefined1 *)&pIVar2[1].klass = 1;
        System_Object___ctor(pIVar2,(MethodInfo *)0x0);
        *(bool *)&pIVar2[1].klass = iVar1 == 0;
        pSVar3 = StringLiteral_1/*""*/;
        if (iVar1 != 0) {
          pNVar9 = (__this->fields)._editBox;
          if (pNVar9 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_0363ff90;
          pSVar3 = PCOEHCPGBBG__OCJBAFGNLIE((pNVar9->fields).super.m_Text,(MethodInfo *)0x0);
        }
        pIVar2[1].monitor = pSVar3;
        thunk_FUN_01c20e04();
        pNVar8 = (__this->fields).GIAMLPMHEDN;
        if (pNVar8 == (NCJBDBGIPNF_o *)0x0) goto LAB_0363ff90;
        pIVar2[2].klass = (Il2CppClass *)(pNVar8->fields).KOANCCDDBDA;
        thunk_FUN_01c20e04();
        (*(code *)(pSVar12->fields).super.super.invoke_impl)
                  ((pSVar12->fields).super.super.method_code,pIVar2,
                   (pSVar12->fields).super.super.method);
        pNVar8 = (__this->fields).GIAMLPMHEDN;
        if (pNVar8 == (NCJBDBGIPNF_o *)0x0) goto LAB_0363ff90;
        ppSVar6 = &(pNVar8->fields).MIMKJIKCPGP;
        *ppSVar6 = (System_Action_InputDialog_HJDIKOKAGJF__o *)0x0;
        thunk_FUN_01c20e04(ppSVar6,0);
      }
      if (iVar1 == 1) {
        pNVar9 = (__this->fields)._editBox;
        if (pNVar9 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
          pSVar11 = (__this->fields).OnClosedOkAction;
          pSVar3 = PCOEHCPGBBG__OCJBAFGNLIE((pNVar9->fields).super.m_Text,(MethodInfo *)0x0);
          if (pSVar11 != (System_Action_string__o *)0x0) {
            (*(code *)(pSVar11->fields).super.super.invoke_impl)
                      ((pSVar11->fields).super.super.method_code,pSVar3,
                       (pSVar11->fields).super.super.method);
            goto LAB_0363ff5c;
          }
        }
      }
      else {
        pSVar10 = (__this->fields).OnClosedCancelAction;
        if (pSVar10 != (System_Action_o *)0x0) {
          (*(code *)(pSVar10->fields).super.super.invoke_impl)
                    ((pSVar10->fields).super.super.method_code,(pSVar10->fields).super.super.method)
          ;
LAB_0363ff5c:
          local_34 = iVar1;
          pIVar2 = (Il2CppObject *)
                   thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,
                                      &local_34);
          Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
                    ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,pIVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0363ff90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HHHKCKLPENH(object IMMNELPBGIF)  [RVA 0x353FFB8]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$HHHKCKLPENH @ RVA 0x353FFB8

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__HHHKCKLPENH
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  (__this->fields).LNIKACBHFOE = 0;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog__DFEBCLGNDBG(__this,(MethodInfo *)IMMNELPBGIF);
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x353FFC0]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$IGDDKJJMDLP @ RVA 0x353FFC0

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected virtual void OOFAPAPJHJF(string IMMNELPBGIF)  [RVA 0x353FFC4]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$OOFAPAPJHJF @ RVA 0x353FFC4

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__OOFAPAPJHJF
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,System_String_o *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *value;
  System_String_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar4;
  NCJBDBGIPNF_o *pNVar5;
  
  pNVar2 = __this;
  if ((DAT_04568aee & 1) == 0) {
    pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)FUN_01bab630(&StringLiteral_20424/*"raid_warningtext_latin"*/);
    DAT_04568aee = 1;
  }
  pNVar4 = (__this->fields)._editBox;
  if (pNVar4 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    value = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)
            PCOEHCPGBBG__OCJBAFGNLIE((pNVar4->fields).super.m_Text,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._editBox;
    pNVar2 = value;
    if ((pNVar4 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) &&
       (__this_00 = (pNVar4->fields).super.m_Text,
       pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0,
       __this_00 != (System_String_o *)0x0)) {
      bVar1 = System_String__Equals(__this_00,(System_String_o *)value,(MethodInfo *)0x0);
      pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)(ulong)bVar1;
      pNVar4 = (__this->fields)._editBox;
      if (pNVar4 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
        UnityEngine_UI_InputField__set_text
                  ((UnityEngine_UI_InputField_o *)pNVar4,(System_String_o *)value,(MethodInfo *)0x0)
        ;
        pNVar3 = (__this->fields)._error;
        pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,StringLiteral_20424/*"raid_warningtext_latin"*/,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          pNVar3 = (__this->fields)._error;
          pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
          if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)
                     (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                               (0,0,0,0x3f800000,pNVar3,(pNVar3->klass->vtable)._23_set_color.method
                               );
            pNVar5 = (__this->fields).GIAMLPMHEDN;
            if (pNVar5 != (NCJBDBGIPNF_o *)0x0) {
              bVar1 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog__IAOGDACAFKH
                                (__this,(pNVar5->fields).GCDPLFELIBF,method_00);
              pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)(ulong)bVar1;
              pNVar5 = (__this->fields).GIAMLPMHEDN;
              if (pNVar5 != (NCJBDBGIPNF_o *)0x0) {
                Nekki_SF2_GUI_Dialogs_Raids_InputDialog__IAOGDACAFKH
                          (__this,(pNVar5->fields).MLPDIICEKIO,method_00);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(pNVar2);
}


// ===== public override void Close()  [RVA 0x35400C8]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$Close @ RVA 0x35400C8

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__Close
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_04568aef & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04568aef = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x3540138]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$Init @ RVA 0x3540138

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  NCJBDBGIPNF_c *pNVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  NCJBDBGIPNF_o *pNVar4;
  NCJBDBGIPNF_o **ppNVar5;
  
  if ((DAT_04568af0 & 1) == 0) {
    FUN_01bab630(&NCJBDBGIPNF_TypeInfo);
    FUN_01bab630(&StringLiteral_20424/*"raid_warningtext_latin"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568af0 = 1;
  }
  pNVar2 = NCJBDBGIPNF_TypeInfo;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    (__this->fields).GIAMLPMHEDN = (NCJBDBGIPNF_o *)0x0;
LAB_036401ec:
    ppNVar5 = &(__this->fields).GIAMLPMHEDN;
    thunk_FUN_01c20e04(ppNVar5,IMMNELPBGIF);
    pNVar3 = (__this->fields)._error;
    (__this->fields).LNIKACBHFOE = 1;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,StringLiteral_20424/*"raid_warningtext_latin"*/,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).GIAMLPMHEDN;
      if ((pNVar4 != (NCJBDBGIPNF_o *)0x0) &&
         (pNVar3 = (__this->fields)._message, pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,(pNVar4->fields).FDLJAOACNIP,(pNVar3->klass->vtable)._75_set_text.method);
        pNVar4 = *ppNVar5;
        if (pNVar4 != (NCJBDBGIPNF_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
                    ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1/*""*/,
                     (pNVar4->fields).EEABODJFJMN,(pNVar4->fields).PJKGDJHIDFA,3,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = (NCJBDBGIPNF_TypeInfo->_2).naturalAligment;
  if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)NCJBDBGIPNF_TypeInfo)) {
    (__this->fields).GIAMLPMHEDN = (NCJBDBGIPNF_o *)IMMNELPBGIF;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pNVar2))
    goto LAB_036401ec;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(IMMNELPBGIF);
}


// ===== public void .ctor()  [RVA 0x354027C]
// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$.ctor @ RVA 0x354027C

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  System_Action_string__o **ppSVar1;
  System_Action_o **ppSVar2;
  System_Action_string__o *pSVar3;
  System_Action_o *pSVar4;
  UnityEngine_Color_o UVar5;
  
  if ((DAT_04568af1 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_CNMLPFGBFED__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_EAHKMGLBGHL__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo);
    DAT_04568af1 = 1;
  }
  UVar5 = CFBGPBCDAGA__NFFPCFGDOKG(0xff,0xd9,0xa0,0xff,(MethodInfo *)0x0);
  (__this->fields)._textColor.fields.r = UVar5.fields.r;
  (__this->fields)._textColor.fields.g = UVar5.fields.g;
  (__this->fields)._textColor.fields.b = UVar5.fields.b;
  (__this->fields)._textColor.fields.a = UVar5.fields.a;
  if ((Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->static_fields->__9__24_0;
  if (pSVar3 == (System_Action_string__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->static_fields->__9__24_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  ppSVar1 = &(__this->fields).OnClosedOkAction;
  *ppSVar1 = pSVar3;
  thunk_FUN_01c20e04(ppSVar1,pSVar3);
  if ((Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->static_fields->__9__24_1;
  if (pSVar4 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Dialogs_Raids_InputDialog_<>c_TypeInfo->static_fields->__9__24_1;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
  }
  ppSVar2 = &(__this->fields).OnClosedCancelAction;
  *ppSVar2 = pSVar4;
  thunk_FUN_01c20e04(ppSVar2,pSVar4);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

