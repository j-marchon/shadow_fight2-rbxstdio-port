// Nekki.SF2.GUI.Dialogs.MultiLineScrollDialog$$HMMKHMODHGF @ RVA 0x3257A5C

void Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog__HMMKHMODHGF
               (Nekki_SF2_GUI_Dialogs_MultiLineScrollDialog_o *__this,NBLEEDEAPHB_o *NOLAOGFOPJG,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_ScrollDialogElement__o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_Dialogs_ScrollDialogElement_array *pNVar4;
  Nekki_SF2_GUI_Dialogs_ScrollDialogLine_o *pNVar5;
  
  if ((DAT_04567177 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ScrollDialogElement>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ScrollDialogLine>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567177 = 1;
  }
  pNVar5 = (__this->fields)._ScrollDialogLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pNVar5 = (__this->fields)._ScrollDialogLinePrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar5 = (Nekki_SF2_GUI_Dialogs_ScrollDialogLine_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pNVar5,
                      Method_UnityEngine_Object_Instantiate<ScrollDialogLine>__);
  if (pNVar5 != (Nekki_SF2_GUI_Dialogs_ScrollDialogLine_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_ScrollDialogLine__Init(pNVar5,NOLAOGFOPJG,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._scrollContent;
    if ((__this_02 != (UnityEngine_RectTransform_o *)0x0) &&
       (parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<ScrollDialogElement>_Add__;
      __this_01 = (__this->fields).AALHBGHLAGO;
      if (__this_01 != (System_Collections_Generic_List_ScrollDialogElement__o *)0x0) {
        pNVar4 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pNVar4 != (Nekki_SF2_GUI_Dialogs_ScrollDialogElement_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pNVar4->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pNVar4->m_Items[(int)uVar1] = (Nekki_SF2_GUI_Dialogs_ScrollDialogElement_o *)pNVar5;
            thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,pNVar5);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pNVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

