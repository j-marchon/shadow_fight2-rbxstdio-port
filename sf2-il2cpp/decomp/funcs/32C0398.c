// Nekki.SF2.GUI.Dialogs.StoryDialog$$IFHIOMOEIPE @ RVA 0x32C0398

void Nekki_SF2_GUI_Dialogs_StoryDialog__IFHIOMOEIPE
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_NBLEEDEAPHB__o *__this_01;
  Il2CppObject *pIVar3;
  BHEDGAKGKPO_StaticFields *pBVar4;
  
  if ((DAT_045674c5 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    DAT_045674c5 = 1;
  }
  pNVar1 = (__this->fields)._timeLabel;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._timeLabel;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar4 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                ((pBVar4->KPJHDEIJPAN).fields.r,(pBVar4->KPJHDEIJPAN).fields.g,
                 (pBVar4->KPJHDEIJPAN).fields.b,(pBVar4->KPJHDEIJPAN).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._timeLabel;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,0x67,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._timeLabel;
        if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._timeLabel;
          if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            __this_00 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).super._content;
            if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
               (parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._timeLabel;
              if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                UnityEngine_UI_Text__set_alignment
                          ((UnityEngine_UI_Text_o *)pNVar1,3,(MethodInfo *)0x0);
                __this_01 = (__this->fields).NMBDHGCKNII;
                if (__this_01 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
                  if (0 < (__this_01->fields)._size) {
                    pIVar3 = System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)__this_01,0,
                                        Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__
                                       );
                    /* WARNING: Could not recover jumptable at 0x033c04fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(__this->klass->vtable)._43_CJEEDJHKDBE.methodPtr)
                              (__this,pIVar3,(__this->klass->vtable)._43_CJEEDJHKDBE.method);
                    return;
                  }
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

