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
    FUN_01bab630(&StringLiteral_5353);
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
            UnityEngine_Debug__LogErrorFormat(StringLiteral_5353,args,(MethodInfo *)0x0);
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

