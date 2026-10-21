// Nekki.SF2.GUI.Dialogs.StoryDialog$$IAKHIFOFLGO @ RVA 0x32C0610

void Nekki_SF2_GUI_Dialogs_StoryDialog__IAKHIFOFLGO
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *__this_00;
  Il2CppClass *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  System_Action_LBMOOFGGPEB__o **ppSVar3;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_LBMOOFGGPEB__o *__this_04;
  System_Action_LBMOOFGGPEB__o *action;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o value;
  System_Collections_Generic_List_Enumerator_T__o SStack_b8;
  System_Collections_Generic_List_Enumerator_T__o SStack_a0;
  
  if ((DAT_045674bf & 1) == 0) {
    FUN_01bab630(&System_Action<LBMOOFGGPEB>_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<Bounds>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_get_Current__
                );
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_ForEach__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_LKDOJNIJLBE__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo);
    DAT_045674bf = 1;
  }
  SStack_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_a0.fields._index = 0;
  SStack_a0.fields._version = 0;
  SStack_a0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PKCGAKMEKFG;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&SStack_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_GetEnumerator__
              );
    SStack_a0.fields._list =
         (System_Collections_Generic_List_T__o *)
         CONCAT44(SStack_b8.fields._list._4_4_,(int32_t)SStack_b8.fields._list);
    SStack_a0.fields._index = SStack_b8.fields._index;
    SStack_a0.fields._version = SStack_b8.fields._version;
    SStack_a0.fields._current = SStack_b8.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&SStack_a0,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_MoveNext__
                        );
      pIVar1 = SStack_a0.fields._current;
      if (!bVar2) break;
      if (SStack_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (SStack_a0.fields._current[1].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = DJNBJHPDKDP__OBECCOPBADO<Bounds>
                        (*(System_Collections_Generic_List_T__o **)
                          ((long)SStack_a0.fields._current[1].monitor + 0x150),
                         Method_DJNBJHPDKDP_OBECCOPBADO<Bounds>__);
      if (!bVar2) {
        if (pIVar1[1].monitor == (Nekki_SF2_GUI_TextPic_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar6 = Nekki_SF2_GUI_TextPic__LocalAlignedTextMeshLastLineBounds_Anchored
                          (pIVar1[1].monitor,8,(MethodInfo *)0x0);
        __this_01 = pIVar1[1].klass;
        if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        fVar5 = *(float *)&(__this_01->_2).nested_type_count;
        __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0);
        if (pIVar1[1].monitor == (UnityEngine_UI_Graphic_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_03 = UnityEngine_UI_Graphic__get_rectTransform(pIVar1[1].monitor,(MethodInfo *)0x0);
        if (__this_03 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UVar7 = UnityEngine_Transform__get_localPosition
                          ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        value.fields.z = UVar6.fields.z + UVar7.fields.z;
        value.fields.y = UVar6.fields.y + (fVar5 + fVar5) * 0.5 + UVar7.fields.y;
        value.fields.x = UVar6.fields.x + 20.0 + UVar7.fields.x;
        UnityEngine_Transform__set_localPosition
                  ((UnityEngine_Transform_o *)__this_02,value,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&SStack_a0,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Dispose__
              );
    __this_04 = (__this->fields).super.DIKHJEINHID;
    if (__this_04 != (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) {
      method_00 = extraout_x1;
      if (0 < (__this_04->fields)._size) {
        if ((Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->static_fields->__9__79_0;
        if (action == (System_Action_LBMOOFGGPEB__o *)0x0) {
          if ((Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          action = (System_Action_LBMOOFGGPEB__o *)
                   thunk_FUN_01bda818(System_Action<LBMOOFGGPEB>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar3 = &Nekki_SF2_GUI_Dialogs_StoryDialog_<>c_TypeInfo->static_fields->__9__79_0;
          *ppSVar3 = action;
          thunk_FUN_01c20e04(ppSVar3,action);
        }
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_04,
                   (System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<LBMOOFGGPEB>_ForEach__);
        (*(__this->klass->vtable)._41_FCHNOIGHEEO.methodPtr)
                  (__this,(__this->klass->vtable)._41_FCHNOIGHEEO.method);
        method_00 = extraout_x1_00;
      }
      if ((__this->fields).JJDLGLNKNBB != false) {
        if ((__this->fields).MBLMCOMELHB < 1) {
          SStack_b8.fields._list._0_4_ = (__this->fields).LBEMKAMMEFG;
          uVar4 = thunk_FUN_01bda448(int_TypeInfo,&SStack_b8);
          (*(__this->klass->vtable)._13_OnClose.methodPtr)
                    (__this,uVar4,(__this->klass->vtable)._13_OnClose.method);
          method_00 = extraout_x1_01;
        }
        Nekki_SF2_GUI_Dialogs_StoryDialog__GDIKHBMNJPH(__this,method_00);
        (*(__this->klass->vtable)._34_DCGKJKKNCEP.methodPtr)
                  (__this,(__this->klass->vtable)._34_DCGKJKKNCEP.method);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

